#declare molecule = union {
sphere {
  <2.623181,0.000000,0.000000>, Radi_scale * RADIUS[6]
  texture { Color(6) }
}
cylinder {
  <2.623181,0.000000,0.000000>,
  <1.311589,2.271741,0.000000>, Cylinder_R
  texture { T_Cylinder }
}
cylinder {
  <2.623181,0.000000,0.000000>,
  <1.311589,-2.271741,0.000000>, Cylinder_R
  texture { T_Cylinder }
}
cylinder {
  <2.623181,0.000000,0.000000>,
  <4.655901,0.000000,0.000000>, Cylinder_R
  texture { T_Cylinder }
}
sphere {
  <1.311589,2.271741,0.000000>, Radi_scale * RADIUS[6]
  texture { Color(6) }
}
cylinder {
  <1.311589,2.271741,0.000000>,
  <-1.311589,2.271741,0.000000>, Cylinder_R
  texture { T_Cylinder }
}
cylinder {
  <1.311589,2.271741,0.000000>,
  <2.327950,4.032129,0.000000>, Cylinder_R
  texture { T_Cylinder }
}
sphere {
  <-1.311589,2.271741,0.000000>, Radi_scale * RADIUS[6]
  texture { Color(6) }
}
cylinder {
  <-1.311589,2.271741,0.000000>,
  <-2.623181,0.000000,0.000000>, Cylinder_R
  texture { T_Cylinder }
}
cylinder {
  <-1.311589,2.271741,0.000000>,
  <-2.327950,4.032129,0.000000>, Cylinder_R
  texture { T_Cylinder }
}
sphere {
  <-2.623181,0.000000,0.000000>, Radi_scale * RADIUS[6]
  texture { Color(6) }
}
cylinder {
  <-2.623181,0.000000,0.000000>,
  <-1.311589,-2.271741,0.000000>, Cylinder_R
  texture { T_Cylinder }
}
cylinder {
  <-2.623181,0.000000,0.000000>,
  <-4.655901,0.000000,0.000000>, Cylinder_R
  texture { T_Cylinder }
}
sphere {
  <-1.311589,-2.271741,0.000000>, Radi_scale * RADIUS[6]
  texture { Color(6) }
}
cylinder {
  <-1.311589,-2.271741,0.000000>,
  <1.311589,-2.271741,0.000000>, Cylinder_R
  texture { T_Cylinder }
}
cylinder {
  <-1.311589,-2.271741,0.000000>,
  <-2.327950,-4.032129,0.000000>, Cylinder_R
  texture { T_Cylinder }
}
sphere {
  <1.311589,-2.271741,0.000000>, Radi_scale * RADIUS[6]
  texture { Color(6) }
}
cylinder {
  <1.311589,-2.271741,0.000000>,
  <2.327950,-4.032129,0.000000>, Cylinder_R
  texture { T_Cylinder }
}
sphere {
  <4.655901,0.000000,0.000000>, Radi_scale * RADIUS[1]
  texture { Color(1) }
}
sphere {
  <2.327950,4.032129,0.000000>, Radi_scale * RADIUS[1]
  texture { Color(1) }
}
sphere {
  <-2.327950,4.032129,0.000000>, Radi_scale * RADIUS[1]
  texture { Color(1) }
}
sphere {
  <-4.655901,0.000000,0.000000>, Radi_scale * RADIUS[1]
  texture { Color(1) }
}
sphere {
  <-2.327950,-4.032129,0.000000>, Radi_scale * RADIUS[1]
  texture { Color(1) }
}
sphere {
  <2.327950,-4.032129,0.000000>, Radi_scale * RADIUS[1]
  texture { Color(1) }
}
}
