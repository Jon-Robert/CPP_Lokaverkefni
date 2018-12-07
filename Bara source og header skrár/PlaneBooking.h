#ifndef PLANEBOOKING_H
#define PLANEBOOKING_H
#include <iostream>
#include <string>
#include "MainBooking.h"

using namespace std;

class PlaneBooking : public MainBooking {
public:
	void setDestination(string destination);
	void setSeat(string seat);
	//void planeprintOrder();
	string getDest();
	string getSeat();

protected:
	string _destination;
	string _seat;


};

#endif // PLANEBOOKING_H
