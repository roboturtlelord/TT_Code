////PORT DEFINITIONS AND GLOBALS
#ifndef GLOBAL_H
//BASE SYSTEM
#define frontLeft_Port 19
#define frontRight_Port 11
#define backRight_Port 13
#define backLeft_Port 12

extern pros::Motor frontLeft;
extern pros::Motor frontRight;
extern pros::Motor backRight;
extern pros::Motor backLeft;

extern MotorGroup left;
extern MotorGroup right;

extern std::shared_ptr<ChassisController> chassis;
extern std::shared_ptr<ChassisModel> chassisModel;

extern pros::ADIEncoder leftEncoder;
extern pros::ADIEncoder rightEncoder;
extern pros::ADIEncoder backEncoder;

//LIFT SYSTEM
#define lift_Port 18
extern pros::Motor lift;
extern pros::ADIPotentiometer liftPot;

//INTAKE SYSTEM
#define intakeLeft_Port 17
#define intakeRight_Port 16
extern pros::Motor intakeLeft;
extern pros::Motor intakeRight;

//TILTER SYSTEM
#define tilt_Port 15
extern pros::Motor tilt;
extern pros::ADIPotentiometer trayPot;

//Extern Ports
extern pros::Controller master;

#endif
