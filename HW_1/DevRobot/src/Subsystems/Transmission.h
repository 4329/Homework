// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef TRANSMISSION_H
#define TRANSMISSION_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Transmission: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<DoubleSolenoid> shift;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	frc::DoubleSolenoid::Value high;
	frc::DoubleSolenoid::Value low;

public:
	Transmission();
	void InitDefaultCommand();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

	void Set_HighGear();
	void Set_LowGear();
	void Shift();
	bool Is_HighGear();
};

#endif
