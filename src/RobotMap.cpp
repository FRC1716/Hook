// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<SpeedController> RobotMap::subsystem1SpeedController1;
std::shared_ptr<SpeedController> RobotMap::subsystem1SpeedController2;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    subsystem1SpeedController1.reset(new VictorSP(0));
    lw->AddActuator("Subsystem1", "Speed Controller 1", std::static_pointer_cast<VictorSP>(subsystem1SpeedController1));
    
    subsystem1SpeedController2.reset(new VictorSP(1));
    lw->AddActuator("Subsystem1", "Speed Controller 2", std::static_pointer_cast<VictorSP>(subsystem1SpeedController2));
    

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
