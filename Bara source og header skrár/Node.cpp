#include "stdafx.h"
#include "Node.h"

Node::Node(PlaneBooking pb, int number)
{
	PB = pb;
	type = 'P';
	_number = number;
}
Node::Node(BusBooking bb, int number)
{
	BB = bb;
	type = 'B';
	_number = number;
}
Node::Node(CruiseBooking cb, int number)
{
	CB = cb;
	type = 'C';
	_number = number;
}
char Node::getType() {
	return type;
}
int Node::getNumber() {
	return _number;
}
/*
Node::~Node()
{
//dtor
}
*/
