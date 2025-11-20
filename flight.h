#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>
#include <vector>
using namespace std;

struct Flight {
    string flightID;
    string departure;
    string destination;
    string date;
    int availableSeats;
};

void addFlight(vector<Flight> &flights);
void showFlights(const vector<Flight> &flights);
void searchFlight(const vector<Flight> &flight, const string &departutre, const string &destination);

# endif

