#include <iostream>
#include <string>
#include <limits>

using namespace std;

// Function to ask if the player wants to start again
bool playAgain() {
    string choice;
    cout << "Do you want to play again? (yes/no): ";
    cin >> choice;

    if (choice == "yes" || choice == "y") {
        return true;
    } else {
        cout << "Thanks for playing! Goodbye!" << endl;
        return false;
    }
}

// Function to handle choice input with validation
int getChoice(int minChoice, int maxChoice) {
    int choice;
    while (true) {
        cin >> choice;
        if (cin.fail() || choice < minChoice || choice > maxChoice) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the invalid input
            cout << "Invalid choice. Please select a number between " << minChoice << " and " << maxChoice << ": ";
        } else {
            break;
        }
    }
    return choice;
}

int main() {
    bool gameRunning = true;

    while (gameRunning) {
        string direction;
        int choice;

        cout << "Welcome to 'Escape the Dungeon'!" << endl;
        cout << "You find yourself trapped in a dark dungeon. Your mission is to find a way out." << endl;
        cout << "You see two paths ahead." << endl;

        // First decision using switch statement
        cout << "Do you want to go left or right? (left/right): ";
        cin >> direction;

        switch (direction[0]) {
            case 'l':
                cout << "You encounter a massive spider web blocking your way!" << endl;
                cout << "What will you do?" << endl;
                cout << "1. Push through the webs\n";
                cout << "2. Turn back around\n";
                choice = getChoice(1, 2);

                if (choice == 1) {
                    cout << "You push through the webs and encounter a locked door!" << endl;
                    cout << "What will you do?" << endl;
                    cout << "1. Try to pick the lock\n";
                    cout << "2. Look for another way\n";
                    cout << "3. Force the door open\n";
                    choice = getChoice(1, 3);

                    if (choice == 1) {
                        cout << "Your lockpick breaks! Choose a different option." << endl;
                        cout << "What will you do now?" << endl;
                        cout << "1. Look for another way\n";
                        cout << "2. Force the door open\n";
                        choice = getChoice(1, 2);

                        if (choice == 1) {
                            cout << "You look around and encounter a massive spider!" << endl;
                            cout << "What will you do?" << endl;
                            cout << "1. Sneak away\n";
                            cout << "2. Try to go around the spider\n";
                            choice = getChoice(1, 2);

                            if (choice == 1) {
                                cout << "You sneak away from the spider and return to the locked door." << endl;
                                cout << "Your only option now is to force the door open." << endl;
                                cout << "The door opens and you escape the cave!" << endl;
                                gameRunning = playAgain();
                            } else if (choice == 2) {
                                cout << "You try to go around the spider, but it captures you!" << endl;
                                gameRunning = playAgain();
                            }
                        } else if (choice == 2) {
                            cout << "You force the door open and escape the dungeon!" << endl;
                            gameRunning = playAgain();
                        }
                    } else if (choice == 2) {  // Look for another way
                        cout << "You look around and encounter a massive spider!" << endl;
                        cout << "What will you do?" << endl;
                        cout << "1. Sneak away\n";
                        cout << "2. Try to go around the spider\n";
                        choice = getChoice(1, 2);

                        if (choice == 1) {
                            cout << "You sneak away from the spider and return to the locked door." << endl;
                            cout << "Your only option now is to force the door open." << endl;
                            cout << "The door opens and you escape the cave!" << endl;
                            gameRunning = playAgain();
                        } else if (choice == 2) {
                            cout << "You try to go around the spider, but it captures you!" << endl;
                            gameRunning = playAgain();
                        }
                    } else if (choice == 3) {  // Force the door open
                        cout << "You force the door open and escape the dungeon!" << endl;
                        gameRunning = playAgain();
                    }
                } else if (choice == 2) {
                    cout << "You turn around and head back to the previous area." << endl;
                    cout << "What will you do?" << endl;
                    cout << "1. Go left\n";
                    cout << "2. Go right\n";
                    choice = getChoice(1, 2);

                    if (choice == 1) {
                        cout << "You go left and encounter the spider and locked door again." << endl;
                    } else if (choice == 2) {
                        cout << "You go right and hear suspicious growls coming from the darkness!" << endl;
                        cout << "What will you do?" << endl;
                        cout << "1. Investigate the growls\n";
                        cout << "2. Run away\n";
                        choice = getChoice(1, 2);

                        if (choice == 1) {
                            cout << "A huge bear appears and eats you!" << endl;
                            gameRunning = playAgain();
                        } else if (choice == 2) {
                            cout << "You run away and slide down a tunnel." << endl;
                            cout << "You end up at a locked door." << endl;
                            cout << "What will you do?" << endl;
                            cout << "1. Try to pick the lock\n";
                            cout << "2. Look for another way\n";
                            cout << "3. Force the door open\n";
                            choice = getChoice(1, 3);

                            if (choice == 1) {
                                cout << "Your lockpick breaks! Choose a different option." << endl;
                                cout << "What will you do now?" << endl;
                                cout << "1. Look for another way\n";
                                cout << "2. Force the door open\n";
                                choice = getChoice(1, 2);

                                if (choice == 1) {
                                    cout << "You look around and encounter a massive spider!" << endl;
                                    cout << "What will you do?" << endl;
                                    cout << "1. Sneak away\n";
                                    cout << "2. Try to go around the spider\n";
                                    choice = getChoice(1, 2);

                                    if (choice == 1) {
                                        cout << "You sneak away from the spider and return to the locked door." << endl;
                                        cout << "Your only option now is to force the door open." << endl;
                                        cout << "The door opens and you escape the cave!" << endl;
                                        gameRunning = playAgain();
                                    } else if (choice == 2) {
                                        cout << "You try to go around the spider, but it captures you!" << endl;
                                        gameRunning = playAgain();
                                    }
                                } else if (choice == 2) {
                                    cout << "You force the door open and escape the dungeon!" << endl;
                                    gameRunning = playAgain();
                                }
                            } else if (choice == 2) {
                                cout << "You look around and encounter a massive spider!" << endl;
                                cout << "What will you do?" << endl;
                                cout << "1. Sneak away\n";
                                cout << "2. Try to go around the spider\n";
                                choice = getChoice(1, 2);

                                if (choice == 1) {
                                    cout << "You sneak away from the spider and return to the locked door." << endl;
                                    cout << "Your only option now is to force the door open." << endl;
                                    cout << "The door opens and you escape the cave!" << endl;
                                    gameRunning = playAgain();
                                } else if (choice == 2) {
                                    cout << "You try to go around the spider, but it captures you!" << endl;
                                    gameRunning = playAgain();
                                }
                            }
                        }
                    }
                }
                break;
            case 'r':
                cout << "You hear suspicious growls coming from the darkness!" << endl;
                cout << "What will you do?" << endl;
                cout << "1. Go towards the growls\n";
                cout << "2. Run away\n";
                choice = getChoice(1, 2);

                if (choice == 1) {
                    cout << "A huge bear appears and eats you!" << endl;
                    gameRunning = playAgain();
                } else if (choice == 2) { // Run away
                    cout << "You run away and slide down a tunnel." << endl;
                    cout << "You end up at a locked door." << endl;
                    cout << "What will you do?" << endl;
                    cout << "1. Try to pick the lock\n";
                    cout << "2. Look for another way\n";
                    cout << "3. Force the door open\n";
                    choice = getChoice(1, 3);
                
                    if (choice == 1) {
                        cout << "Your lockpick breaks! Choose a different option." << endl;
                        cout << "What will you do now?" << endl;
                        cout << "1. Look for another way\n";
                        cout << "2. Force the door open\n";
                        choice = getChoice(1, 2);
                
                        if (choice == 1) {
                            cout << "You look around and encounter a massive spider!" << endl;
                            cout << "What will you do?" << endl;
                            cout << "1. Sneak away\n";
                            cout << "2. Try to go around the spider\n";
                            choice = getChoice(1, 2);
                
                            if (choice == 1) {
                                cout << "You sneak away from the spider and return to the locked door." << endl;
                                cout << "Your only option now is to force the door open." << endl;
                                cout << "The door opens and you escape the cave!" << endl;
                                gameRunning = playAgain();
                            } else if (choice == 2) {
                                cout << "You try to go around the spider, but it captures you!" << endl;
                                gameRunning = playAgain();
                            }
                        } else if (choice == 2) {
                            cout << "You force the door open and escape the dungeon!" << endl;  // Victory message
                            gameRunning = playAgain(); // Ask to play again after escaping
                        }
                    } else if (choice == 2) {  // Look for another way
                        cout << "You look around and encounter a massive spider!" << endl;
                        cout << "What will you do?" << endl;
                        cout << "1. Sneak away\n";
                        cout << "2. Try to go around the spider\n";
                        choice = getChoice(1, 2);
                
                        if (choice == 1) {
                            cout << "You sneak away from the spider and return to the locked door." << endl;
                            cout << "Your only option now is to force the door open." << endl;
                            cout << "The door opens and you escape the cave!" << endl;
                            gameRunning = playAgain();  // Victory message and play again
                        } else if (choice == 2) {
                            cout << "You try to go around the spider, but it captures you!" << endl;
                            gameRunning = playAgain();
                        }
                    } else if (choice == 3) {  // Force the door open
                        cout << "You force the door open and escape the dungeon!" << endl;  // Victory message
                        gameRunning = playAgain();  // Ask to play again after escaping
                    }
                }
                break;

            default:
                cout << "Invalid response, please try again." << endl;
                break;
        }
    }

    return 0;
}
