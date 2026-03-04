#pragma once
#include <string>

class Engine {
private:
    std::string engineNumber;
    int cc;
    int horsepower;
    std::string fuelType;
    bool isRunning;

public:
    Engine();
    Engine(std::string num, int capacity, int hp, std::string fuel);

    void setHorsepower(int hp);
    int getHorsepower() const;

    void startEngine();
    void stopEngine();
    void tuneUp();
    bool checkStatus() const;
};
