#pragma once
#include <kipr/wombat.hpp>

class SmallRobot
{
private:
    const int wheelRadius = 1;
    int leftWheelPin;
    int rightWheelPin;
    float posPerOneCm;

public:
    SmallRobot(int leftWheelPin, int rightWheelPin);

    void moveForwardDistanceAndCorrect(int distance, int percentPower, bool condition=true); // Moves for some distance, blocking
    void moveForwardDistance(int distance, int percentPower, bool condition=true); // Same as moveForwardDistanceAndCorrect, but does not correct


    void moveForward();      // Moves continously forward
    void moveBackward();         // Moves contiously backwards
    void stopMove();

    void rotate(int degrees); // Rotates a certain amount of degrees clockwise. Accepts values from -360 to 360. Blocking.
    void turnLeft();          // Turns left continously
    void turnRight();         // Turns right continously
    void stopTurn();

    // TODO: ADD SMALL ROBOT SPECIFIC FUNCTIONS LATER
};