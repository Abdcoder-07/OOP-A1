#include "Registration.h"
#include <iostream>

Registration::Registration() : city("Unregistered"), year(0), plateNumber("N/A"), isTokenPaid(false), ownerName("None") {}

Registration::Registration(std::string c, int y, std::string p, bool token, std::string owner)
    : city(c), year(y), plateNumber(p), isTokenPaid(token), ownerName(owner) {}

void Registration::setCity(std::string c) { city = c; }
std::string Registration::getCity() const { return city; }

void Registration::payTokenTax() { 
	isTokenPaid = true; std::cout << "Token tax paid.\n";
	 }
	 
	 
void Registration::transferOwnership(std::string newOwner) {
	 ownerName = newOwner;
 	 }
 	 
void Registration::printDetails() const { 
	std::cout << "Reg City: " << city << ", Plate: " << plateNumber << "\n"; 
	}
	
bool Registration::verifyRegistration() const {
 return year > 2000;
  }
