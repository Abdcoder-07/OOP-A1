#include "Message.h"
#include <iostream>

Message::Message() : sender(""), receiver(""), content(""), isRead(false), timestamp("00:00") {}

Message::Message(std::string s, std::string r, std::string c, std::string t) 
    : sender(s), receiver(r), content(c), isRead(false), timestamp(t) {}

void Message::markAsRead() {
 isRead = true; 
}


void Message::editMessage(std::string newContent) { 
	content = newContent; 
}

void Message::deleteContent() { 
	content = "[Deleted]";
 }
 
void Message::displayMessage() const { 
std::cout << "From " << sender << ": " << content << "\n";
 }
