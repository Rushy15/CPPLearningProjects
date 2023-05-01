#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;

    int small_rooms = {0};
    cout << "\nHow many small rooms would you like cleaned? ";
    cin >> small_rooms;

    int large_rooms = {0};
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_rooms;

    const int price_small_room = {25};
    const int price_large_room = {35};
    const double sale_tax = {0.06};
    const int expiry_date = {30};

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout <<"Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $"<< price_small_room << endl;
    cout << "Price per large room: $"<< price_large_room <<endl;

    int total_price = (small_rooms * price_small_room) + (large_rooms * price_large_room);
    double final_tax = total_price * sale_tax;
    
    cout << "Cost: $" << total_price << endl;
    cout << "Tax: $" << final_tax << endl;
    cout << "===============================================" << endl;

    double total_estimate = (total_price + final_tax);

    cout << "Total Estimate: $" << total_estimate;
    cout << "\nThis estimate is valid for " << expiry_date << " days" << endl;
    
    return 0;
}