#include "car.h"

std::string car::whosDriving(){
    return dere->getName()
      .append(" is driving a ")
      .append( car_type );
  }