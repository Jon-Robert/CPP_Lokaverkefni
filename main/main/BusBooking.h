#ifndef BUSBOOKING_H
#define BUSBOOKING_H
#include <iostream>
#include <string>
#include "MainBooking.h"

using namespace std;

class BusBooking : public MainBooking {
public:
	/*BusBooking();
	virtual ~BusBooking();*/
	void setDestination(string destination);
	void setSeat(string seat);
	string getDest();
	string getSeat();

protected:
	string _destination;
	string _seat;

private:
};

#endif // BUSBOOKING_H
