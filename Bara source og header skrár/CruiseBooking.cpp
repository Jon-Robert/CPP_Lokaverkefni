#include "stdafx.h"
#include "CruiseBooking.h"
#include <iostream>
#include <string>
using namespace std;

void CruiseBooking::setDestination(string destination) {
	_destination = destination;
}

void CruiseBooking::setCabinNumber(string cabinNumber) {
	_cabinNumber = cabinNumber;
}

string CruiseBooking::getDest() {
	return _destination;
}
string CruiseBooking::getCabinNumber() {
	return _cabinNumber;
}

