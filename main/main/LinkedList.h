#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"



class LinkedList
{
public:
	LinkedList();
	//virtual ~LinkedList();
	int length;
	Node* head;
	void addP(PlaneBooking pb);
	void addB(BusBooking bb);
	void addC(CruiseBooking cb);
	void print();

protected:

private:
};

#endif // LINKEDLIST_H
#pragma once
