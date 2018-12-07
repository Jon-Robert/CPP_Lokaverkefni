#ifndef MAINUI_H
#define MAINUI_H
#include "PlaneBooking.h"
#include "BusBooking.h"
#include "CruiseBooking.h"
#include "LinkedList.h"
#include <iostream>

using namespace std;

class MainUI {

public:
	MainUI();
	void bookingUI();
	void startUI();
	LinkedList* orderList(LinkedList* list, LinkedList* list2);
	LinkedList* list;
	//virtual ~Main();
private:



};



#endif // MAINUI_H
