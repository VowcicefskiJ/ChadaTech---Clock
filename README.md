Overview:

This program defines a Clock class that simulates a digital clock. The clock can display time in both 24-hour and 12-hour formats. The user can interactively add hours, minutes, or seconds to the current time using a menu-driven interface.

Features:

24-hour and 12-hour Time Formats: The clock can display time in both formats. Add Time: Users can add an hour, a minute, or a second to the current time. Interactive Menu: The program provides an interactive menu for users to manipulate the clock.

Class Details:

Private Member Variables hour: Stores the hour component of the time. minute: Stores the minute component of the time. second: Stores the second component of the time. Public Methods Clock(int h, int m, int s): Constructor that initializes the clock with a given time. addHour(): Adds an hour to the current time. addMinute(): Adds a minute to the current time. addSecond(): Adds a second to the current time. displayTime(): Displays the current time in both 24-hour and 12-hour formats. How to Use Compile the program.

Run the program. You will be prompted to enter the initial time in the format HH MM SS. The program will display the current time and provide a menu with the following options:

Add Hour
Add Minute
Add Second
Exit
Enter your choice to manipulate the clock or exit the program. Example sql Copy code Enter initial time (HH MM SS): 23 59 58 24-hour format: 23:59:58 12-hour format: 11:59:58 PM

Menu:

Add Hour
Add Minute
Add Second
Exit Enter your choice: 3
24-hour format: 23:59:59 12-hour format: 11:59:59 PM

Menu:

Add Hour
Add Minute
Add Second
Exit Enter your choice: 3
24-hour format: 00:00:00 12-hour format: 12:00:00 AM

Notes:

The program uses the and headers. The Clock class uses the modulo operation to wrap around time values when they exceed their limits (e.g., 60 seconds or 24 hours). The main function contains an infinite loop that continuously displays the menu until the user chooses to exit.
