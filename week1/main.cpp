#include <iostream>
#include <string>
#include "driver.h"
#include "car.h"

using namespace std;
int main(){
  Driver *d = new Driver("Ms. Pop Diva");
  {
  cout << "Our driver is, " << d->getName()
       << "!" << endl;
  {
    Car car(d);
    cout << car.whosDriving() << "!!" << endl;
  }
  // Has our driver survived the crash!!?
  cout << "Lone survivor: " << d->getName() << endl;
  delete d;
}
}