#!/usr/bin/perl -w
# ****************************************************
#  * file  : pov_xyz.pl
#  * author: nakai<bigswim.atom@gmail.com>
#  * create day  : Thu Sep 11 16:44:03 2003
#  * last updated: Wed Jul 19 12:25:22 2017
#  $Log:$
# ****************************************************

use strict;
use Getopt::Long;

my %optctl = ("step" => 10);
my %chem =("H" => 1, "C" => 6, "N" => 7, "O" => 8, "Si" => 14);

GetOptions( \%optctl, "help|h", "step=i", "D=s")
  or die "invalid options.  Try --help for brief usage.\n";
if ( $optctl{'help'} or $#ARGV < 0 ) { &help; exit; }

#----------------------------------------------------------------------

sub help {
  my ($name) = ($0 =~ m|([^/]+)$|);

  print STDERR <<HELP_TEXT;
Usage: $name [Option] text...

Option:
-h, --help
    print this help.

HELP_TEXT
}

#----------------------------------------------------------------------
# main
#----------------------------------------------------------------------
my $command;
my $awk = "";
my $egrep = "";
my $j = 0;
my $i = -1;
my $step = $optctl{'step'};
my %D;
if($optctl{'D'}){
  foreach(split /,/, $optctl{'D'}){
    $D{$_} = 0;
  }
}
my @geom;
foreach my $file (@ARGV){
  chomp($file);
  if($file =~ m/\.bz2/){
    $command = "bzcat $file";
  }else{
    $command = "cat $file";
  }

  open(IN, "$command |");
  foreach my $line (<IN>){
    if($line =~
       /([a-zA-Z][a-zA-Z]?)\s+([\+\-\.0-9e]+\s+[\+\-\.0-9e]+\s+[\+\-\.0-9e]+)/){
      $geom[$i][$j] = sprintf "%d %s", $chem{$1}, $2;
      $j++;
    }elsif ($line =~ /^\s*\d+\s*$/){
      $i++;
      $j = 0;
    }
  }
  close(IN);
  for(my $k = 0; $k < $i; $k+=$step){
    my $filename = sprintf ("%.4d.pov", $k/$step);
    open (OUT, "> $filename");
    printf OUT "#declare molecule = union{\n";
    for(my $l = 0; defined $geom[$k][$l]; $l++){
      my ($atom1, $x1, $y1, $z1) = split (/\s+/,$geom[$k][$l]);
      if(defined $D{$l}){
        $atom1 = $D{$l};
      }
      printf OUT "sphere {<%10.6f,%10.6f,%10.6f>, "
        . "Radi_scale * RADIUS[%3d] texture { Color(%3d) } }\n",
          $x1, $y1, $z1, $atom1, $atom1;
      for(my $m = $l + 1;  defined $geom[$k][$m]; $m++){
        my ($atom2, $x2, $y2, $z2) = split (/\s+/,$geom[$k][$m]);
        if(defined $D{$m}){
          $atom2 = $D{$m};
        }
        if ( ($x2-$x1)*($x2-$x1)
            +($y2-$y1)*($y2-$y1)
            +($z2-$z1)*($z2-$z1) < 3.0) {
          printf OUT "cylinder {<%10.6f,%10.6f,%10.6f>,<%10.6f,%10.6f,%10.6f>,",
            $x1, $y1, $z1, ($x2+$x1)/2.0, ($y2+$y1)/2.0, ($z2+$z1)/2.0;
          printf OUT " Cylinder_R texture { Color(%3d)}}\n", $atom1;
          printf OUT "cylinder {<%10.6f,%10.6f,%10.6f>,<%10.6f,%10.6f,%10.6f>,",
            ($x2+$x1)/2.0, ($y2+$y1)/2.0, ($z2+$z1)/2.0, $x2, $y2, $z2;
          printf OUT " Cylinder_R texture { Color(%3d)}}\n", $atom2;
        }
      }
    }
    printf OUT "}\n", $k;
    close (OUT);
  }
}
