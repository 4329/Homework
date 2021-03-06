// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Transmission.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Transmission::Transmission() : Subsystem("Transmission") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    shift = RobotMap::transmissionShift;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

    high = frc::DoubleSolenoid::kForward;
    low  = frc::DoubleSolenoid::kReverse;
}

void Transmission::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void Transmission::Set_HighGear()
{
	shift->Set(high);
}

void Transmission::Set_LowGear()
{
	shift->Set(low);
}

void Transmission::Shift()
{
	if (shift->Get() == frc::DoubleSolenoid::kForward)
	{
		shift->Set(frc::DoubleSolenoid::kReverse);
	}
	else
	{
		shift->Set(frc::DoubleSolenoid::kForward);
	}
}

bool Transmission::Is_HighGear()
{
	return (shift->Get() == high);
}
