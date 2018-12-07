#ifndef CRUISEBOOKING_H
#define CRUISEBOOKING_H
#include <iostream>
#include <string>
#include "MainBooking.h"

using namespace std;


class CruiseBooking : public MainBooking {
public:
	void setDestination(string destination);
	void setCabinNumber(string cabinNumber);
	string getDest();
	string getCabinNumber();

protected:
	string _destination;
	string _cabinNumber;

private:
};

#endif // CRUISEBOOKING_H
#pragma once
