#include <iostream>
using namespace std;

// parent,  C++ = base class
class Car {
private:
	string color;
	int speed;
public:
	Car(const string& c, int s) : color(c), speed(s) {}
};

// child, c++ = derived class
class SportsCar : public Car { // IS A KIND OF ....
private:
	double horsePower;
public:
	SportsCar(const string& c, int s, double hp) : Car(c, s), horsePower(hp) {}
}
	
int main() {
	Car c1("red", 55);
	SportsCar s("red", 180, 280.0); // use inheritance
