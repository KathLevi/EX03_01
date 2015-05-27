//////////////////////////
//Name: Kathleen Levi
//
//Project: EX03_01 (9.2)
//
//Date: May 26, 2015
//////////////////////////

#include <iostream>
using namespace std;

class Fan {
private:
    int speed;
    bool on;
    double radius;
    
public:
    Fan(){
        speed = 1;
        on = false;
        radius = 5;
    }
    
    void setSpeed(int newSpeed){
        speed = newSpeed;
    }
    int getSpeed(){
        return speed;
    }
    void setOn(bool onOff){
        on = onOff;
    }
    bool isOn(){
        return on;
    }
    void setRadius(double newRadius){
        radius = newRadius;
    }
    double getRadius(){
        return radius;
    }
    
};

int main () {
    
    cout << "Fan Numero Uno: " << endl;
    Fan fan1;
    fan1.setSpeed(3);
    fan1.setRadius(10);
    fan1.setOn(true);
    
    cout << "The fan speed is: " << fan1.getSpeed() << endl;
    cout << "The radius of the fan is: " << fan1.getRadius() << endl;
    cout << "The fan is on, true(1) or false(0): " << fan1.isOn() << endl;
    
    cout << endl;
    
    cout << "Fan Numero Dos: " << endl;
    Fan fan2;
    fan2.setSpeed(2);
    fan2.setRadius(5);
    fan2.setOn(false);
    
    cout << "The fan speed is: " << fan2.getSpeed() << endl;
    cout << "The radius of the fan is: " << fan2.getRadius() << endl;
    cout << "The fan is on, true(1) or false(0): " << fan2.isOn() << endl;
    
}