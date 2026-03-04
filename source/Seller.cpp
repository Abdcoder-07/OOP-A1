#include "Seller.h"
#include <iostream>

Seller::Seller(int id, std::string u, std::string e, std::string dName) 
    : User(u, e, ""), sellerRating(5), totalSold(0), dealershipName(dName), isVerified(false), sellerID(id) {}

void Seller::verifySeller() { 
	isVerified = true;
 }
 
void Seller::incrementSold() { 
	totalSold++; 
	}
	
void Seller::updateRating(int newRating) { 
	sellerRating = (sellerRating + newRating) / 2;
	 }
	 
void Seller::printSellerStats() const { 
	std::cout << dealershipName << " has sold " << totalSold << " cars.\n"; 
}
