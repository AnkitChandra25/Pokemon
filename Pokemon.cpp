#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variables to store player name and chosen Pokemon
    string chosen_door;

    cout << "Welcome, brave adventurer!\n";
    cout << "You find yourself standing in front of a massive, ancient castle.\n";
    cout << "The walls are cracked with age,\n";
    cout << "and the doors creak as they slowly open in front of you.\n";
    cout << "Inside, there are many rooms, each more mysterious than the last.\n";
    cout << "Some may hold treasures beyond imagination,\n";
    cout << "while others may hide dangers lurking in the shadows.\n";



    // Presenting Pokemon choices
    cout << "Your goal is simple, yet perilous—choose a room!\n";
    cout << "Once inside, who knows what you may find?\n";
    cout << "Will it be riches, knowledge, or something… more sinister?\n";
    cout << "It’s all up to the room you pick.\n";
    cout << "You are in the castle, choose your room by entering a number (1, 2, or 3).\n";
    cout << "1. Brown Door\n";
    cout << "2. Black Door\n";
    cout << "3. Golden Door\n";
    cout << "4. Blue Door\n";

    int choice;
    cout << "So, which one will you open? Enter the number of "
        "your choice: ";
    cin >> choice;


    switch (choice) {
    case 1:
        chosen_door = "Brown Door";
        cout << "A room full of gold coins! You can retire now, you lucky soul!\n";
        break;

    case 2:
        chosen_door = "Black Door";
        cout << "A library of ancient books! You gain immense knowledge, but beware… some knowledge comes with a price.\n";
        break;

    case 3:
        chosen_door = "Golden Door";
        cout << "A sleeping dragon! You barely escape with your life. Perhaps next time, choose more wisely...\n";
        break;

    case 4:
        chosen_door = "Blue Door";
        cout << "5 Knights are facing town the door at you. Run!\n";
        break;

    default:
        cout << "Hmm, that doesn't seem right. Let me choose "
            "for you...\n";
        chosen_door = "Secret Passage"; // Default if no valid choice is made
        cout << "A secret passage to the dungeon! Beware, danger lies ahead in the dark corridors.\n";
        break;
    }

    cout << "Open " << chosen_door << "\n";
    cout << "The fate of your adventure lies in the room you choose, Will you find riches or danger? Only time will tell... Choose wisely, adventurer, for once you step inside there’s no turning back.\n";

    return 0;
}