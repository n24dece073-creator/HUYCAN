#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>
#include <vector>
using namespace std;

struct Passenger {
    string id;
    string name;
    string phone;
};

void addPassenger(vector<Passenger> &passengers);
void showPassengers(const vector<Passenger> &passengers);

#endif