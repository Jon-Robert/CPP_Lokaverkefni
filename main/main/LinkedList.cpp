#include "stdafx.h"
#include "LinkedList.h"

LinkedList::LinkedList()
{
	length = 0;
	head = NULL;
}
/*
Linked  List::~LinkedList()
{
//dtor
}
*/
void LinkedList::addP(PlaneBooking pb) {
	Node* node = new Node(pb, length);
	node->next = head;
	head = node;
	length++;
}
void LinkedList::addB(BusBooking bb) {
	Node* node = new Node(bb, length);
	node->next = head;
	head = node;
	length++;
}
void LinkedList::addC(CruiseBooking cb) {
	Node* node = new Node(cb, length);
	node->next = head;
	head = node;
	length++;
}
void LinkedList::print() {
	Node* head = this->head;
	while (head) {
		if (head->getType() == 'P') {
			int n = head->getNumber();
			cout << "Plane booking: " << endl;
			cout << n << "................................" << endl;
			string dest = head->PB.getDest();
			string seat = head->PB.getSeat();
			cout << "Destination: " << dest << endl;
			cout << "Seat: " << seat << endl;
			head->PB.printOrder();
		}
		else if (head->getType() == 'B') {
			int n = head->getNumber();
			cout << "Bus booking: " << endl;
			cout << n << "................................:" << endl;
			string dest = head->BB.getDest();
			string seat = head->BB.getSeat();
			cout << "Destination: " << dest << endl;
			cout << "Seat: " << seat << endl;
			head->BB.printOrder();
		}
		else if (head->getType() == 'C') {
			int n = head->getNumber();
			cout << "Cruise booking: " << endl;
			cout << n << "................................" << endl;
			string dest = head->CB.getDest();
			string cabin = head->CB.getCabinNumber();
			cout << "Destination: " << dest << endl;
			cout << "Cabin: " << cabin << endl;
			head->CB.printOrder();
		}
		head = head->next;
	}
}
