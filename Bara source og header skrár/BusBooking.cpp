#include "stdafx.h"
#include "BusBooking.h"
#include <iostream>
#include <string>
using namespace std;

void BusBooking::setDestination(string destination) {
	_destination = destination;
}

void BusBooking::setSeat(string seat) {
	_seat = seat;
}
string BusBooking::getDest() {
	return _destination;
}
string BusBooking::getSeat() {
	return _seat;
}
