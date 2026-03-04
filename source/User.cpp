#include "User.h"
#include <iostream>

// Initialize static member
int User::totalUsers = 0;

User::User() : username("Guest"), email(""), phone(""), password(""), isActive(true) { totalUsers++; }

User::User(std::string u, std::string e, std::string p) : username(u), email(e), phone(p), password(""), isActive(true) { totalUsers++; }

User::User(const User& other) : username(other.username), email(other.email), phone(other.phone), password(other.password), isActive(other.isActive) {
 	totalUsers++; 
 }
 

std::string User::getUsername() const { 
return username; 
}

int User::getTotalUsers() { 
	return totalUsers;
 }

void User::updateEmail(std::string newEmail) { 
	email = newEmail;
	 }
	 
void User::changePassword(std::string newPass) { 	
	password = newPass;
	 }
	 
void User::deactivateAccount() { 
	isActive = false; 
	}
	
void User::displayProfile() const { 	
std::cout << "User: " << username << " | Email: " << email << "\n";
 }
