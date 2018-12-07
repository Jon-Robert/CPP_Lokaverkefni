#include "stdafx.h"
#include <iostream>
#include <string>
#include "PlaneBooking.h"
using namespace std;

void PlaneBooking::setDestination(string destination) {
	_destination = destination;
}

void PlaneBooking::setSeat(string seat) {
	_seat = seat;
}

/*void PlaneBooking::planeprintOrder(PlaneBooking pb){
pb.printOrder();
cout << "Destination: " << _destination << endl;
cout << "Seat: " << _seat << endl;
}*/

string PlaneBooking::getDest() {
	return _destination;
}
string PlaneBooking::getSeat() {
	return _seat;
}
