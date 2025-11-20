#include "ticket.h"
#include <iostream>
using namespace std;

void bookTicket(vector<Ticket> &tickets, vector<Flight> &flights, const vector<Passenger> &passengers) {
   Ticket t;
   cout << "Nhap ma ve: ";
   cin >> t.ticketID;
   cout << "Nhap ma chuyen bay: ";
   cin >> t.flightID;
   cout << "Nhap ma hanh khach: ";
   cin >> t.passengerID;
   
   for (auto &f : flights) {
        if (f.flightID == f.flightID) {
            if (f.availableSeats > 0) {
                f.availableSeats--;
                tickets.push_back(t);
                cout << "Dat ve thanh cong!\n";
            } else {
                cout << "Het cho trong tren chuyen bay nay!\n";
            }
            return;
        }
   }
   cout << "Khong tim thay chuyen bay!\n";
}

void showTickets(const vector<Ticket> &tickets) {
    cout << "\n--- DANH SACH VE ---\n";
    for (auto &t : tickets) {
        cout << "Ve: " << t.ticketID << " | Chuyen bay: " << t.flightID << " | Hanh khach: " << t.passengerID << endl;
    }
}