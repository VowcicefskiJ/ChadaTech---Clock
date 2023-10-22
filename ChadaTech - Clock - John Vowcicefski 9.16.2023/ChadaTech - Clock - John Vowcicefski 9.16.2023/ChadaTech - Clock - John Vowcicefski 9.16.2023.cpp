#include <iostream>
#include <iomanip>

// Define the Clock class
class Clock {
private:
    // Private member variables to store time
    int hour;
    int minute;
    int second;

public:
    // Constructor to initialize the clock with a given time
    Clock(int h, int m, int s) : hour(h), minute(m), second(s) {}

    // Method to add an hour to the current time
    void addHour() {
        hour = (hour + 1) % 24;  // Use modulo to wrap around after 23 hours
    }

    // Method to add a minute to the current time
    void addMinute() {
        minute = (minute + 1) % 60;
        if (minute == 0) {  // If minutes wrap around to 0, add an hour
            addHour();
        }
    }

    // Method to add a second to the current time
    void addSecond() {
        second = (second + 1) % 60;
        if (second == 0) {  // If seconds wrap around to 0, add a minute
            addMinute();
        }
    }

    // Method to display the current time in both 24-hour and 12-hour formats
    void displayTime() {
        // Display time in 24-hour format
        std::cout << "24-hour format: ";
        std::cout << std::setw(2) << std::setfill('0') << hour << ":";
        std::cout << std::setw(2) << std::setfill('0') << minute << ":";
        std::cout << std::setw(2) << std::setfill('0') << second << std::endl;

        // Convert and display time in 12-hour format
        std::cout << "12-hour format: ";
        int twelveHour = hour % 12;
        twelveHour = (twelveHour == 0) ? 12 : twelveHour;  // Adjust for 12:00 hour
        std::cout << std::setw(2) << std::setfill('0') << twelveHour << ":";
        std::cout << std::setw(2) << std::setfill('0') << minute << ":";
        std::cout << std::setw(2) << std::setfill('0') << second;
        std::cout << (hour < 12 ? " AM" : " PM") << std::endl;  // Determine AM or PM
    }
};

int main() {
    int h, m, s;
    // Prompt user for initial time input
    std::cout << "Enter initial time (HH MM SS): ";
    std::cin >> h >> m >> s;

    // Create a Clock object with the input time
    Clock clock(h, m, s);

    // Infinite loop to display the menu and process user choices
    while (true) {
        clock.displayTime();

        // Display the menu options
        std::cout << "\nMenu:\n";
        std::cout << "1. Add Hour\n";
        std::cout << "2. Add Minute\n";
        std::cout << "3. Add Second\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        // Process the user's choice
        switch (choice) {
        case 1:
            clock.addHour();
            break;
        case 2:
            clock.addMinute();
            break;
        case 3:
            clock.addSecond();
            break;
        case 4:
            return 0;  // Exit the program
        default:
            std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
