# Traffic Simulation of a T-junction in UK
Use C language to program the software on FPGA.
This project is to display traffic lights for two roads.

There are 3 traffic lights for each road: red (R), yellow (Y) and green (G). Each light can be represented by one of the regions in the VGA display. Just as the traffic lights in the UK, these three lights operate as: R → RY → G → Y → R → RY → G → Y →R... (duration is set to 2 s for each light and is displayed on the 7-segment display). The traffic lights for road 1 runs through this cycle first, then those of road 2 runs, and then road 1, and so on. Every time a pedestrian button is pressed, the pedestrian light (PD Go or Stop) will be turned on for 5 seconds indicating that it is time to go across. This time is also displayed on the 7-segment display. Moreover, when the pedestrian has 2 (out of 5) more seconds to go, the pedestrian light will blink 5 times (in these remaining 2 seconds). An indicator LED on the Basys 3 board will light up once the pedestrian button is pressed. This LED will go off once the pedestrian has been allowed to cross. The pedestrian light will be turned on only when both 2 roads are RED.

**Detailed information can be found in the pdf file "user guide".**
