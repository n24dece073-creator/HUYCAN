#ifndef TICKET_H
#define TICKET_H

#include "flight.h"
#include "passenger.h"

struct Ticket {
    string ticketID;
    string flightID;
    string passengerID;
};

void bookTicket(vector<Ticket> &tickets, vector<Flight> &flights, const vector<Passenger> &passengers);
void showTickets(const vector<Ticket> &tickets);

#endif
