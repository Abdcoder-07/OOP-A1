#pragma once
#include <string>

class Message {
private:
    std::string sender;
    std::string receiver;
    std::string content;
    bool isRead;
	std::string timestamp;

public:
    Message();
    Message(std::string s, std::string r, std::string c, std::string t);

    void markAsRead();
    void editMessage(std::string newContent);
    void deleteContent();
    void displayMessage() const;
};
