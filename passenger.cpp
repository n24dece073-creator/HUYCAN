#include "passenger.h"
#include <iostream>
using namespace std;

void addPassenger(vector<Passenger> &passenger) {
    Passenger p;
    cout << "Nhap ma hanh khach: ";
    cin >> p.id;
    cout << "Nhap ten hanh khach: ";
    cin.ignore();
    getline(cin, p.name);
    cout << "Nhap so dien thoai: ";
    cin >> p.phone;

    passenger.push_back(p);
    cout << " Da them hanh khach thanh cong!\n";
}

void showPassengers(const vector<Passenger> &passengers) {
    cout << "\n--- DANH SACH HANH KHACH ---\n";
    for (auto &p : passengers){
        cout << p.id << " | " << p.name << " | " << p.phone << endl;
       }
}