#ifndef (axis_radius)
  #declare axis_radius = 0.01;
#end
#ifndef (axis_length)
  #declare axis_length = 10;
#end
#declare axis = union{
sphere_sweep {
  linear_spline                 // linear curve
  2,                            // number of specified sphere positions
  < axis_length, 0, 0>, axis_radius                // position, radius
  <-axis_length, 0, 0>, axis_radius                 // ...
  pigment{
    gradient x
    color_map {
      [0.0 color rgb < 1.000, 0.000, 0.000 >]
      [1.0 color rgb < 0.000, 1.000, 1.000 >]
    }
    scale axis_length
  }
}
sphere_sweep {
  linear_spline                 // linear curve
  2,                            // number of specified sphere positions
  <0,  axis_length, 0>, axis_radius                // position, radius
  <0, -axis_length, 0>, axis_radius                 // ...
  pigment{
    gradient y
    color_map {
      [0.0 color rgb < 0.000, 1.000, 0.000 >]
      [1.0 color rgb < 1.000, 0.000, 1.000 >]
    }
    scale axis_length
  }
}
sphere_sweep {
  linear_spline                 // linear curve
  2,                            // number of specified sphere positions
  < 0, 0, axis_length>, axis_radius                // position, radius
  < 0, 0,-axis_length>, axis_radius                 // ...
  pigment{
    gradient z
    color_map {
      [0.0 color rgb < 0.000, 0.000, 1.000 >]
      [1.0 color rgb < 1.000, 1.000, 0.000 >]
    }
    scale axis_length
  }
}
}
