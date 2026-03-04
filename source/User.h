#pragma once
#include <string>

class User {
protected:
    std::string username;
    std::string email;
    std::string phone;
    std::string password;
    bool isActive;

    static int totalUsers; 

public:
    User();
    User(std::string u, std::string e, std::string p);
    User(const User& other); // Copy Constructor

    std::string getUsername() const;
    static int getTotalUsers();

    void updateEmail(std::string newEmail);
    void changePassword(std::string newPass);
    void deactivateAccount();
    void displayProfile() const;
};
