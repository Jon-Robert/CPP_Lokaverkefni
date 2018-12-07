#ifndef NODE_H
#define NODE_H
#include "PlaneBooking.h"
#include "BusBooking.h"
#include "CruiseBooking.h"




class Node
{
public:
	Node(PlaneBooking pb, int number);
	Node(BusBooking bb, int number);
	Node(CruiseBooking cb, int number);
	//virtual ~Node();
	Node* next;
	PlaneBooking PB;
	BusBooking BB;
	CruiseBooking CB;
	char getType();
	int getNumber();


protected:

private:
	char type;
	int _number;
};

#endif // NODE_H
