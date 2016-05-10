#ifndef CAR_H
#define CAR_H
#include <string>
#include "driver.h"

class SteeringWheel{
};
class Car{
  Driver *dere;
  SteeringWheel s_wheel;
  std::string car_type;
public:
  Car(Driver *driver = NULL, std::string ct = "Mercedes" ) 
  : dere(driver), car_type(ct){}
  
//   Car(Driver *driver = NULL) 
//   : Car("Mercedes",driver) {} this part of the code had to be commented out ....i could not fix it
  
  std::string whosDriving();
};
#endif