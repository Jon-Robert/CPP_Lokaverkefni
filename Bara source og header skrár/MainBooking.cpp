#include "stdafx.h"
#include "MainBooking.h"
#include <iostream>
#include <string>

MainBooking::MainBooking()
{
	//ctor
}

void MainBooking::booking() {
	string name;
	string id;
	string email;
	string adress;
	string zipCode;
	string country;
	string cardNumber;
	cout << "Welcome to Travelz 4000" << endl;
	cout << endl;
	cout << "Enter name: ";
	cin.ignore();
	getline(cin, name);
	setName(name);
	cout << endl;
	cout << "Enter ID: ";;
	getline(cin, id);
	setId(id);
	cout << endl;
	cout << "Enter email: ";
	getline(cin, email);
	setEmail(email);
	cout << endl;
	cout << "Enter adress: ";
	getline(cin, adress);
	cout << endl;
	setAdress(adress);
	cout << "Enter Zip code: ";
	getline(cin, zipCode);
	cout << endl;
	setZipCode(zipCode);
	cout << "Enter country: ";
	getline(cin, country);
	setCountry(country);
	cout << endl;
	cout << "Enter card number: ";
	getline(cin, cardNumber);
	setCardNumber(cardNumber);
	cout << endl;
}

void MainBooking::setName(string name) {
	_name = name;
}

void MainBooking::setId(string id) {
	_id = id;
}

void MainBooking::setEmail(string email) {
	_email = email;
}

void MainBooking::setAdress(string adress) {
	_adress = adress;
}

void MainBooking::setZipCode(string zipCode) {
	_zipCode = zipCode;
}

void MainBooking::setCountry(string country) {
	_country = country;
}

void MainBooking::setCardNumber(string cardNumber) {
	_cardNumber = cardNumber;
}

void MainBooking::printOrder() {
	cout << "-----------------------------------------" << endl;
	cout << "Name: " << _name << endl;
	cout << "ID: " << _id << endl;
	cout << "Email: " << _email << endl;
	cout << "Adress: " << _adress << endl;
	cout << "Zipcode " << _zipCode << endl;
	cout << "Country: " << _cardNumber << endl;
	cout << "Card Number: " << _cardNumber << endl;
	cout << "-----------------------------------------" << endl;
	cout << "-----------------------------------------" << endl;
	cout << endl;
	cout << endl;
}
