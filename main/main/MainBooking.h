#ifndef MAINBOOKING_H
#define MAINBOOKING_H

#include <iostream>
#include <string>

using namespace std;

class MainBooking {
public:
	MainBooking();
	void booking();
	//void startUI();
	void setName(string name);
	void setId(string id);
	void setEmail(string email);
	void setAdress(string adress);
	void setZipCode(string zipCode);
	void setCountry(string country);
	void setCardNumber(string cardNumber);
	void printOrder();


protected:
	string _name;
	string _id;
	string _email;
	string _adress;
	string _zipCode;
	string _country;
	string _cardNumber;

};

#endif // MAINUI_H
