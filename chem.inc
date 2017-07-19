
#declare MeshGold = texture {
  pigment { color rgbt<0.96, 0.82, 0.65, 0.5> }
  finish { ambient 0.4 diffuse 0.4 specular 0.9}
}
#declare MeshRed = texture {
  pigment { color rgbt<0.8, 0.2, 0.2, 0.5> }
  finish { ambient 0.2 diffuse 0.6 specular 0.9}
}
#declare MeshBlue = texture {
  pigment { color rgbt<0.2, 0.2, 0.8, 0.5> }
  finish { ambient 0.2 diffuse 0.6 specular 0.9}
}
#declare T_Cylinder = texture {
  pigment { color rgb< 0.3000 0.3000 0.3000 > }
}
#declare BSAMBI = 0.2;
#declare BSDIFF = 0.8;
#declare BSSPEC = 0.8;
#declare RADIUS = array[100]
{0.000,
  0.430,0.741,0.880,0.550,1.030,0.900,0.880,0.880,0.840,0.815,
  1.170,1.300,1.550,1.400,1.250,1.220,1.190,0.995,1.530,1.190,
  1.640,1.670,1.530,1.550,1.550,1.540,1.530,1.700,1.720,1.650,
  1.420,1.370,1.410,1.420,1.410,1.069,1.670,1.320,1.980,1.760,
  1.680,1.670,1.550,1.600,1.650,1.700,1.790,1.890,1.830,1.660,
  1.660,1.670,1.600,1.750,1.870,1.540,2.070,2.030,2.020,2.010,
  2.000,2.000,2.190,1.990,1.960,1.950,1.940,1.930,1.920,2.140,
  1.920,1.770,1.630,1.570,1.550,1.570,1.520,1.700,1.700,1.900,
  1.750,1.740,1.740,1.880,0.200,0.200,0.200,2.100,2.080,1.990,
  1.810,1.780,1.750,0.200,1.710,0.200,0.200,1.730,0.100}
#declare Atom_Period = array[100]
{0,
 1,                                1,
 2,2,                    2,2,2,2,2,2,
 3,3,                    3,3,3,3,3,3,
 4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
 5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
 6,6,
     8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
       6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
 7,7,
     9,9,9,9,9,9,9,9,9,9,9}
#declare Atom_Group = array[100]
{0,
 1,                                        18,
 1,2,                       13,14,15,16,17,18,
 1,2,                       13,14,15,16,17,18,
 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,
 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,
 1,2,
     3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,
       4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,
 1,2,
     3,4,5,6,7,8,9,10,11,12,13}

#declare Atom_Color = array[100]
{
  <  1.0000  1.0000  1.0000 >,<  0.0000  1.0000  1.0000 >,
  <  1.0000  0.6235  0.0353 >,<  0.0000  1.0000  0.0000 >,  
  <  0.3059  1.0000  0.7333 >,<  0.5000  1.0000  1.0000 >,  
  <  0.3000  0.3000  0.3000 >,<  0.3000  0.3000  1.0000 >,  
  <  1.0000  0.3000  0.3000 >,<  0.6000  1.0000  0.6000 >,//10  
  <  1.0000  0.6235  0.0353 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  1.0000  1.0000  0.0000 >,  
  <  0.6000  0.6000  0.2000 >,<  1.0000  1.0000  0.4000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,//20  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,//30  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.6000  0.3000  0.3000 >,  
  <  0.3000  0.1500  0.1500 >,<  0.4000  0.2000  0.0000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,//40  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,//50  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,//60  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,//70  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,//80  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,//90  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >,  
  <  0.1000  0.1000  0.1000 >,<  0.1000  0.1000  0.1000 >
}

#declare F_atoms = finish {ambient BSAMBI diffuse BSDIFF specular BSSPEC} 
#include "metals.inc"
#include "glass.inc"
#macro Color(num)
  #switch(num)
   #case (2)
   T_Vicksbottle_Glass
   #break
   #case (3)
        T_Silver_1A
   #break
   #case (4)
        T_Silver_1B
   #break
   #case (10)
        T_Dark_Green_Glass
   #break
   #case (11)
        T_Silver_2A
   #break
   #case (12)
        T_Silver_2B
   #break
   #case (13)
        T_Silver_2C
   #break
   #case (14)
        T_Chrome_1B
   #break
   #case (18)
        T_Green_Glass
   #break
   #case (19)
        T_Silver_3A
   #break
   #case (20)
        T_Silver_3B
   #break
   #case (21)
        T_Chrome_3A
   #break
   #case (22)
        T_Chrome_3B
   #break
   #case (23)
        T_Chrome_3C
   #break
   #case (24)
        T_Chrome_3D
   #break
   #case (25)
        T_Chrome_3E
   #break
   #case (26)
        T_Chrome_4A
   #break
   #case (27)
        T_Chrome_4B
   #break
   #case (28)
        T_Chrome_4C
   #break
   #case (29)
        T_Copper_4B
   #break
   #case (30)
        T_Chrome_4D
   #break
   #case (31)
        T_Chrome_4E
   #break
   #case (32)
        T_Chrome_5A
   #break
   #case (36)
        T_Old_Glass
   #break
   #else 
          pigment { rgb Atom_Color[num] } finish {F_atoms}
  #end
#end

#macro Transition_Dipole(mu_x, mu_y, mu_z, Scale)
  #declare Arrow_Scale = sqrt( mu_x * mu_x + mu_y * mu_y + mu_z * mu_z);
  #if (Arrow_Scale != 0.0)
    #declare CosTheta = mu_z / Arrow_Scale;
    #if (CosTheta = 1.0)
      #declare SinTheta = 0;
      #declare CosPhi = 1;
      #declare SinPhi = 0;
    #else
      #if (CosTheta = -1.0)
        #declare SinTheta = 0;
        #declare CosPhi = 1;
        #declare SinPhi = 0;
      #else
        #declare SinTheta = sqrt(1-CosTheta * CosTheta); 
        #declare CosPhi = mu_x / Arrow_Scale / SinTheta;
      #declare SinPhi = mu_y / Arrow_Scale / SinTheta;
      #end
    #end
    #declare Arrow_Length = 1;
    #declare Arrow_Cylinder_Radius = 0.1;
    #declare Arrow_Head_Length = 0.4;
    #declare Arrow_Head_MaxRadius = 0.3;
    lathe{
      linear_spline
      5,
      <0,Arrow_Length>,
      <Arrow_Head_MaxRadius, Arrow_Length - Arrow_Head_Length>,
      <Arrow_Cylinder_Radius, Arrow_Length - Arrow_Head_Length>,
      <Arrow_Cylinder_Radius, 0>, 
      <0,0>
      pigment{color Green}
      scale <0, Arrow_Scale,0> *Scale
      translate <0, -Arrow_Scale * 0.5 * Scale, 0>
      rotate x * 90
      matrix<CosTheta*CosPhi,CosTheta*SinPhi,SinTheta,
             -SinPhi,CosPhi,0,
             -SinTheta * CosPhi, -SinTheta * SinPhi ,CosTheta,
      0,0,0>
      }
      
  #end  
#end