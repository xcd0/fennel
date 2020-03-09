


translate([0, 0, 4]) 
linear_extrude(height=1.6){
  offset(0){
    union(){
import("./pcb/gbr/fan-Edge_Cuts.dxf", $fa=1);
    }
  }
};
translate([0, 0, 0]) 
linear_extrude(height=2){
  offset(1){
    union(){
import("./pcb/gbr/fan-Edge_Cuts.dxf", $fa=1);
    }
  }
};

translate([0, 0, 5.6]) 
linear_extrude(height=2){
    
  difference(){
  offset(3){
import("./pcb/gbr/fan-Edge_Cuts.dxf", $fa=1);
}
import("./pcb/gbr/fan-Eco1_User.dxf", $fa=1);
  }
};