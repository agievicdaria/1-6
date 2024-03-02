#include "LorryC.h"
#include <iostream>
#include <sstream>
using namespace std;

void LorryC::Init(Car car, double payload) {
    SetCar(car);
    SetPayload(payload);
}

void LorryC::Display() const {
    cout << endl;
    cout << "car = " << endl;
    car.Display();
    cout << "payload = " << payload << endl;
}


void LorryC::Read() {
    double payload;
    LorryC::Car c;
    cout << endl;
    cout << "Car = ? " << endl;
    c.Read();
    cout << "payload = ? "; cin >> payload;
    Init(c, payload);
}

string LorryC::toString() const {
    stringstream sout;
    sout << "Car Information: " << GetCar().toString() << ", Payload: " << payload << endl;
    return sout.str();
}



void LorryC::Car::Init(const string& brand, int cylinders, double power) {
    SetBrand(brand);
    SetCylinders(cylinders);
    SetPower(power);
}

void LorryC::Car::Display() const {
    cout << endl;
    cout << "brand = " << brand << endl;
    cout << "cylinders = " << cylinders << endl;
    cout << "power = " << power << endl;
}

void LorryC::Car::Read() {
    string brand;
    int cylinders;
    double power;

    cout << endl;
    cout << "brand = ? "; cin >> brand;
    cout << "cylinders = ? "; cin >> cylinders;
    cout << "power = ? "; cin >> power;
    Init(brand, cylinders, power);
}

string LorryC::Car::toString() const {
    stringstream sout;
    sout << "Brand: " << brand << ", Cylinders: " << cylinders << ", Power: " << power << endl;
    return sout.str();
}
