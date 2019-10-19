#include <iostream>
#include <AckermannController.hpp>

int main() {

  double requiredVel = 30;  // Velocity to be achieved
  std::vector<double> requiredD { 100, 100 };
  int requiredTheta = 50;  // Heading angle to be achieved

  std::vector<double> currentD { 5.0, 5.0 };
  std::vector<double> driveWheelVel;
  double steeringAng;

  AckermannController ackermann;
  ackermann.setL(2.4);  /// Wheel Base
  ackermann.setV(28);  //  current velocity
  ackermann.setTheta(90);  // Current Orientation
  ackermann.setD(currentD);  // Current Position

  std::cout << "Required Orientation : " << requiredTheta << std::endl;
  std::cout << "Current Orientation : " << ackermann.getTheta() << std::endl;

  steeringAng = ackermann.computeSteering(requiredD, requiredTheta);

//  driveWheelVel = ackermann.driveVelocities(requiredVel, requiredTheta);

//  std::cout << "Current steering angle : " << steeringAng << std::endl;
//  std::cout << "Required Velocity : " << requiredVel << std::endl;
//  std::cout << "Drive Wheel Velocity 1 : " << driveWheelVel[0] << std::endl;
//  std::cout << "Drive Wheel Velocity 2 : " << driveWheelVel[1] << std::endl;
  return 0;
}
