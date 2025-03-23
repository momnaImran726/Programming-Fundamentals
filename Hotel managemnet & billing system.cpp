#include <iostream>
#include <string>

using namespace std;

// Room Structure
struct Room {
    string type;
    int price;
};

// Menu Item Structure
struct MenuItem {
    string category;
    string name;
    string cuisine;
    int price;
};

// Customer Structure
struct Customer {
    string name;
    string contact;
    int roomNumber;
    int nights;
    string paymentMethod;
};

// Function Prototypes
void displayRooms(Room rooms[], int size);
void displayMenu(MenuItem menu[], int size, string day);
int calculateBill(int roomPrice, int nights, MenuItem menu[], int menuSize);

int main() {
    cout << "\n============================================\n";
    cout << "\tWelcome to Grand Vista Hotel & Restaurant!\n";
    cout << "============================================\n";

    // Room Types
    Room rooms[3] = {
        {"Basic", 3000},
        {"Comfort", 5000},
        {"Premium", 8000}
    };

    // Menu Items
    MenuItem menu[20] = {
        {"Breakfast", "Pancakes", "Western", 500},
        {"Breakfast", "Omelette", "Turkish", 400},
        {"Breakfast", "Paratha", "Indian", 300},
        {"Breakfast", "Waffles", "Western", 600},
        {"Breakfast", "Miso Soup", "Japanese", 450},

        {"Lunch", "Biryani", "Indian", 800},
        {"Lunch", "Steak", "Western", 1200},
        {"Lunch", "Pasta", "Italian", 900},
        {"Lunch", "Sushi", "Japanese", 1100},
        {"Lunch", "Tandoori Chicken", "Indian", 950},

        {"Dinner", "Grilled Fish", "Turkish", 1000},
        {"Dinner", "Lasagna", "Italian", 950},
        {"Dinner", "Butter Chicken", "Indian", 850},
        {"Dinner", "BBQ Ribs", "Western", 1300},
        {"Dinner", "Fried Rice", "Chinese", 750},

        {"Snacks", "Nachos", "Mexican", 400},
        {"Snacks", "Spring Rolls", "Chinese", 350},
        {"Snacks", "Bruschetta", "Italian", 500},
        {"Snacks", "Burger", "Western", 700},
        {"Snacks", "Pakoras", "Indian", 300}
    };

    // Get Customer Information
    Customer customer;
    cout << "\nEnter your name: ";
    cin.ignore();
    getline(cin, customer.name);
    cout << "Enter contact number: ";
    getline(cin, customer.contact);

    // Ask if the customer wants to book a room
    char bookRoom;
    int roomPrice = 0;
    cout << "\nDo you want to book a room? (y/n): ";
    cin >> bookRoom;

    if (bookRoom == 'y' || bookRoom == 'Y') {
        displayRooms(rooms, 3);
        int choice;
        cout << "Select room type (1-3): ";
        cin >> choice;
        customer.roomNumber = choice;
        roomPrice = rooms[choice - 1].price;

        // Ask for number of nights
        cout << "How many nights do you want to stay? ";
        cin >> customer.nights;
    } else {
        customer.roomNumber = 0;
        customer.nights = 0;
    }

    // Display Menu
    string day;
    cout << "\nEnter the day (Weekday/Weekend): ";
    cin >> day;
    displayMenu(menu, 20, day);

    // Calculate Bill
    int totalBill = calculateBill(roomPrice, customer.nights, menu, 20);

    // Payment Method Selection
    cout << "\nSelect Payment Method (Cash/Card/Online): ";
    cin >> customer.paymentMethod;

    // Display Final Bill
    cout << "\n============================================\n";
    cout << "\t\t*** BILL SUMMARY ***\n";
    cout << "============================================\n";
    cout << "Customer Name: " << customer.name << "\n";
    cout << "Contact: " << customer.contact << "\n";
    if (customer.roomNumber > 0) {
        cout << "Room Type: " << rooms[customer.roomNumber - 1].type << "\n";
        cout << "Number of Nights: " << customer.nights << "\n";
        cout << "Room Price: Rs." << roomPrice * customer.nights << "\n";
    } else {
        cout << "Room Booking: Not Selected\n";
    }
    cout << "Total Amount: Rs." << totalBill << "\n";
    cout << "Payment Method: " << customer.paymentMethod << "\n";
    cout << "============================================\n";
    cout << "Thank you for choosing Grand Vista Hotel!\n";
    cout << "============================================\n";

    return 0;
}

// Function to Display Room Options
void displayRooms(Room rooms[], int size) {
    cout << "\n\tRoom Options:\n";
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << rooms[i].type << " - Rs." << rooms[i].price << " per night\n";
    }
}

// Function to Display Menu Items
void displayMenu(MenuItem menu[], int size, string day) {
    cout << "\n\tMenu Options:\n";
    string lastCategory = "";
    for (int i = 0; i < size; i++) {
        if (menu[i].category != lastCategory) {
            cout << "------------------\n";
            cout << menu[i].category << "\n";
            cout << "------------------\n";
        }
        if (menu[i].category == "High Tea" && day != "Weekend") {
            cout << "Invalid Offer! High Tea is only available on Weekends.\n";
        } else {
            cout << menu[i].name << " (" << menu[i].cuisine << ") - Rs." << menu[i].price << "\n";
        }
        lastCategory = menu[i].category;
    }
}

// Function to Calculate Total Bill
int calculateBill(int roomPrice, int nights, MenuItem menu[], int menuSize) {
    int foodTotal = 0, foodChoice;
    cout << "\nHow many different food items would you like to order? ";
    cin >> foodChoice;

    for (int i = 0; i < foodChoice; i++) {
        int itemNumber, quantity;
        cout << "Enter menu item number (1-20): ";
        cin >> itemNumber;
        cout << "Enter quantity: ";
        cin >> quantity;
        foodTotal += menu[itemNumber - 1].price * quantity;
    }

    return (roomPrice * nights) + foodTotal;
}
