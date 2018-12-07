#include "stdafx.h"
#include "mainUI.h"
#include <iostream>
#include <string>

using namespace std;

MainUI::MainUI()
{
	list = new LinkedList();
}


void MainUI::bookingUI() {
	char choice;
	string dest;
	cout << "What kind of trip are you booking?" << endl;
	cout << "Press '1' for flight" << endl;
	cout << "Press '2' for bus" << endl;
	cout << "Press '3' for cruise" << endl;
	cin >> choice;
	if (choice == '1') {
		PlaneBooking PB;
		string seat;
		PB.booking();
		cout << "Please choose your destination: ";
		getline(cin, dest);
		PB.setDestination(dest);
		cout << endl;
		cout << "Please pick your seat: ";
		getline(cin, seat);
		PB.setSeat(seat);
		list->addP(PB);

	}
	else if (choice == '2') {
		BusBooking BB;
		string seat;
		BB.booking();
		cout << "Please choose your destination: ";
		getline(cin, dest);
		BB.setDestination(dest);
		cout << endl;
		cout << "Please pick your seat: ";
		getline(cin, seat);
		BB.setSeat(seat);
		list->addB(BB);
	}
	else if (choice == '3') {
		CruiseBooking CB;
		string cabinNumber;
		CB.booking();
		cout << "Please choose your destination: ";
		getline(cin, dest);
		CB.setDestination(dest);
		cout << endl;
		cout << "Please pick your cabin number: ";
		getline(cin, cabinNumber);
		CB.setCabinNumber(cabinNumber);
		list->addC(CB);
	}

}

LinkedList* MainUI::orderList(LinkedList* list, LinkedList* list2) {
	LinkedList* &list3 = list;
	LinkedList* &list4 = list;
	LinkedList* &list5 = list;

	do {
		if (list3->head->getType() == 'P') {
			list2->addP(list3->head->PB);
		}
		list3->head = list3->head->next;
	} while (list3->head);

	do {
		if (list4->head->getType() == 'C') {
			list2->addC(list4->head->CB);
		}
		list4->head = list4->head->next;
	} while (list4->head);

	/*do{
	if(list5->head->getType() == 'B'){
	list2->addB(list5->head->BB);
	}
	list5->head = list5->head->next;
	}while(list5->head->next);*/

	return 0;
}

void MainUI::startUI() {
	char answer;
	do {
		cout << "Choose action" << endl;
		cout << "Choose 1 to make a new booking" << endl;
		cout << "Choose 2 to view existing bookings" << endl;
		cout << "Choose 3 to exit" << endl;
		cin >> answer;
		if (answer == '1') {
			bookingUI();
		}
		else if (answer == '2') {
			char choice;
			do {
				cout << "Choose action" << endl;
				cout << "Choose 1 to see numbered list" << endl;
				cout << "Choose 2 to see list by booking type" << endl;
				cout << "Choose 3 to exit" << endl;
				cin >> choice;
				if (choice == '1') {
					list->print();
				}
				else if (choice == '2') {
					LinkedList* list2 = new LinkedList();
					orderList(list, list2);
					list2->print();
				}
			} while (choice != '3');
		}
	} while (answer != '3');

}


