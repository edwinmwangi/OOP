#ifndef FOUNTAINPEN_H
#define	FOUNTAINPEN_H
#include "pen.h"
#include <iostream>
#include <string>

class FountainPen : public Pen{
public:
FountainPen(std::string pen_name)
	: Pen(pen_name){}
FountainPen() : Pen(std::string ("FountainPen")){}
virtual std::string drawline();
virtual std::string drawCircle();
};
#endif

