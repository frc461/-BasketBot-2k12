#include "WPILib.h"
#include "Robot.h"

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

	void Robot::RobotInit()
	{
		lw = LiveWindow::GetInstance();
	}

	void Robot::AutonomousInit()
	{

	}

	void Robot::AutonomousPeriodic()
	{

	}

	void Robot::TeleopInit()
	{

	}

	void Robot::TeleopPeriodic()
	{

	}

	void Robot::TestPeriodic()
	{
		lw->Run();
	}

START_ROBOT_CLASS(Robot);
