#include <iostream>
#include <vector>
#include "flight.h"
#include "passenger.h"
#include "ticket.h"
#include "menu.h"
using namespace std;

int main() {
    vector<Flight> flights;
    vector<Passenger> passengers;
    vector<Ticket> tickets;

    int choice;
    do {
        showMainMenu();
        cin >> choice;
        switch (choice) {
            case 1: addFlight(flights); break;
            case 2: addPassenger(passengers); break;
            case 3: bookTicket(tickets, flights, passengers); break;
            case 4: showFlights(flights); break;
            case 5: showPassengers(passengers); break;
            case 6: showTickets(tickets); break;
            case 0: cout << "Thoat chuong trinh.\n"; break;
            default: cout << "Lua chon khong hop le!\n";
        }
    } while (choice != 0);

    return 0;
}