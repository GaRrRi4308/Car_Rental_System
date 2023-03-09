// Import the necessary libraries for using functions
#include <windows.h>

// Define the fullscreen function that will be called in main
void fullscreen();

// The fullscreen function simulates pressing "Alt + Enter" to switch the program to fullscreen mode
void fullscreen()
{
    keybd_event(VK_MENU, 0x38, 0, 0);
    keybd_event(VK_RETURN, 0x1c, 0, 0);
    keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
}

// Main function
int main() {
// Call the fullscreen function
    fullscreen();
// Display the message "Press any key to continue..." and wait for any key to be pressed
    system("PAUSE");
}