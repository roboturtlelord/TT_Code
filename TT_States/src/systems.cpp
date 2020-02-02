#include "main.h"
//CHASSIS SYSTEM
pros::Motor frontLeft (frontLeft_Port, MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor frontRight (frontRight_Port, MOTOR_GEARSET_18,false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor backRight (backRight_Port, MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor backLeft (backLeft_Port, MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);

MotorGroup left = MotorGroup({frontLeft_Port, backLeft_Port});
MotorGroup right = MotorGroup({frontRight_Port, backRight_Port});

pros::ADIEncoder leftEncoder(3,4);
pros::ADIEncoder rightEncoder(5,6);
pros::ADIEncoder backEncoder(7,8);

// std::shared_ptr<ChassisController> chassis = ChassisControllerBuilder()
//   .withMotors(left, right)
//   .build();
//
// std::shared_ptr<ChassisModel>  chassisModel = std::dynamic_pointer_cast<SkidSteerModel>(chassis->getModel());

//LIFT SYSTEM
pros::Motor lift (lift_Port, MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);
pros::ADIPotentiometer liftPot(1);

//INTAKE SYSTEM
pros::Motor intakeLeft (intakeLeft_Port, MOTOR_GEARSET_18, false);
pros::Motor intakeRight (intakeRight_Port, MOTOR_GEARSET_18,true);

//TILTER SYSTEM
pros::Motor tilt (tilt_Port, MOTOR_GEARSET_18,true,pros::E_MOTOR_ENCODER_DEGREES);
pros::ADIPotentiometer trayPot(2);

pros::Controller master (CONTROLLER_MASTER);
