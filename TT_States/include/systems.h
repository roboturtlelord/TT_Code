////PORT DEFINITIONS AND GLOBALS
#ifndef GLOBAL_H
//BASE SYSTEM
#define frontLeft_Port 12
#define frontRight_Port 19
#define backRight_Port 20
#define backLeft_Port 11

extern pros::Motor frontLeft;
extern pros::Motor frontRight;
extern pros::Motor backRight;
extern pros::Motor backLeft;

extern MotorGroup left;
extern MotorGroup right;

// extern std::shared_ptr<ChassisController> chassis;
// extern std::shared_ptr<ChassisModel> chassisModel;

extern pros::ADIEncoder leftEncoder;
extern pros::ADIEncoder rightEncoder;
extern pros::ADIEncoder backEncoder;

//LIFT SYSTEM
#define lift_Port 9
extern pros::Motor lift;
extern pros::ADIPotentiometer liftPot;

//INTAKE SYSTEM
#define intakeLeft_Port 2
#define intakeRight_Port 8
extern pros::Motor intakeLeft;
extern pros::Motor intakeRight;

//TILTER SYSTEM
#define tilt_Port 3
extern pros::Motor tilt;
extern pros::ADIPotentiometer trayPot;

//Extern Ports
extern pros::Controller master;

#endif
