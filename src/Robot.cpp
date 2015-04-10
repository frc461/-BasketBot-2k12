#include "WPILib.h"
#include "Robot.h"

// Constructor
Robot::Robot():
	lw(NULL),
	front_left_drive(fld),
	back_left_drive(bld),
	front_right_drive(frd),
	back_right_drive(brd),

	myRobot(front_left_drive, back_left_drive, front_right_drive, back_right_drive),

	fire_wheel(fw),
	intake(i),

	joystick_0(js_0),
	joystick_1(js_1),
	control_stick_a(cs_a),
	control_stick_b(cs_b)
{

}

// Initialize the robot
void Robot::RobotInit()
{
	lw = LiveWindow::GetInstance();
}

// Autonomous methods
void Robot::AutonomousInit()
{

}

void Robot::AutonomousPeriodic()
{

}

// Teleoperate methods
void Robot::TeleopInit()
{

}

void Robot::TeleopPeriodic()
{

}

// Test methods
void Robot::TestPeriodic()
{
	lw->Run();
}

START_ROBOT_CLASS(Robot);
