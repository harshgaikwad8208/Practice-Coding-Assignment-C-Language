#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

const int MAX_PLAYERS = 100;

struct Player {
    int jn;
    string name;
    int matches_played;
    int runs;
    int wickets_taken;

    Player() : jn(0), name("Not Given"), matches_played(0), runs(0), wickets_taken(0) {}

    Player(int jn, const string& name, int matches_played, int runs, int wickets_taken)
        : jn(jn), name(name), matches_played(matches_played), runs(runs), wickets_taken(wickets_taken) {}

    void display() const {
        cout << "| " << setw(13) << jn << " | " << setw(13) << name << " | " << setw(12) << matches_played
             << " | " << setw(10) << runs << " | " << setw(10) << wickets_taken << " |\n";
    }
};

void addPlayer(Player players[], int& size) {
    if (size < MAX_PLAYERS) {
        Player newPlayer;
        cout << "Enter Jersey Number: ";
        cin >> newPlayer.jn;
        cout << "Enter Player Name: ";
        cin.ignore();
        getline(cin, newPlayer.name);
        cout << "Enter Runs: ";
        cin >> newPlayer.runs;
        cout << "Enter Wickets: ";
        cin >> newPlayer.wickets_taken;
        cout << "Enter Matches Played: ";
        cin >> newPlayer.matches_played;

        players[size++] = newPlayer;
        cout << "Player added successfully!\n";
    } else {
        cout << "Maximum player limit reached!\n";
    }
}

void removePlayer(Player players[], int& size) {
    string name;
    cout << "Enter the Name of the player you want to remove: ";
    cin.ignore();
    getline(cin, name);

    for (int i = 0; i < size; ++i) {
        if (name == players[i].name) {
            for (int j = i; j < size - 1; ++j) {
                players[j] = players[j + 1];
            }
            --size;
            cout << "Player '" << name << "' has been removed successfully.\n";
            return;
        }
    }

    cout << "Player '" << name << "' not found. No player removed.\n";
}

void searchPlayer(const Player players[], int size, int jn) {
    int choice;
    cout << "Choices 1: Name\n2: Jersey Number\n";
    cout << "Enter your Choice: ";
    cin >> choice;

    if (choice == 1) {
        string name;
        cout << "Enter the name of player that you want to search his record: ";
        cin.ignore();
        getline(cin, name);
        int flag = 0;

        for (int i = 0; i < size; ++i) {
            if (name == players[i].name) {
                players[i].display();
                flag = 1;
                break;
            }
        }

        if (!flag) {
            cout << "There is no record for this " << name << " name\n";
        }
    } else if (choice == 2) {
        int jerseyNumber;
        cout << "Enter the jersey number of the player you want to search for: ";
        cin >> jerseyNumber;
        int flag = 0;

        for (int i = 0; i < size; ++i) {
            if (jerseyNumber == players[i].jn) {
                players[i].display();
                flag = 1;
                break;
            }
        }

        if (!flag) {
            cout << "The Record is Not Found\n";
        }
    }
}

void update(Player players[], int size) {
    string name;
    cout << "Enter the name of the player you want to update: ";
    cin.ignore();
    getline(cin, name);

    for (int i = 0; i < size; ++i) {
        if (name == players[i].name) {
            cout << "Enter the updated runs: ";
            cin >> players[i].runs;

            cout << "Enter the updated wickets: ";
            cin >> players[i].wickets_taken;

            cout << "Enter updated Total Matches Played by Player: ";
            cin >> players[i].matches_played;

            cout << "Player record updated successfully.\n";
            return;
        }
    }

    cout << "Player with the name " << name << " was not found.\n";
}

// void displayTopPlayers(const Player players[], int size) {
//     cout << "1) Runs\n2) Wickets\n\n";
//     int choice;
//     cout << "Enter Your Choice You Want to see those players made maximum run or maximum wickets: ";
//     cin >> choice;

//     Player sortedPlayers[MAX_PLAYERS];

//     if (choice == 1) 
//     {
//         copy(players, players + size, sortedPlayers);
//         sort(sortedPlayers, sortedPlayers + size, [](const Player& a, const Player& b) )
//         {
//             return a.runs > b.runs;
//         };

//         cout << "Top 3 Players by Runs:\n";
//         cout << "+--------------------------------------------------------------------------+\n";
//         cout << "| Jersey Number |     Name     | Matches Played |   Runs   | Wickets Taken |\n";
//         cout << "+--------------------------------------------------------------------------+\n";

//         for (int i = 0; i < min(size, 3); ++i) {
//             sortedPlayers[i].display();
//         }
//     } else if (choice == 2) {
//         copy(players, players + size, sortedPlayers);
//         sort(sortedPlayers, sortedPlayers + size, [](const Player& a, const Player& b) {
//             return a.wickets_taken > b.wickets_taken;
//         });

//         cout << "Top 3 Players by Wickets:\n";
//         cout << "+--------------------------------------------------------------------------+\n";
//         cout << "| Jersey Number |     Name     | Matches Played |   Runs   | Wickets Taken |\n";
//         cout << "+--------------------------------------------------------------------------+\n";

//         for (int i = 0; i < min(size, 3); ++i) {
//             sortedPlayers[i].display();
//         }
//     }
// }

void displayAllPlayers(const Player players[], int size) {
    cout << "List of all Player Information\n";
    cout << "+--------------------------------------------------------------------------+\n";
    cout << "| Jersey Number |     Name     | Matches Played |   Runs   | Wickets Taken |\n";
    cout << "+--------------------------------------------------------------------------+\n";

    for (int i = 0; i < size; ++i) {
        players[i].display();
    }
}

void displayMaxRunsAndWickets(const Player players[], int size) {
    int maxRuns = 0;
    int maxWickets = 0;
    const Player* maxRunsPlayer = nullptr;
    const Player* maxWicketsPlayer = nullptr;

    for (int i = 0; i < size; ++i) {
        if (players[i].runs > maxRuns) {
            maxRuns = players[i].runs;
            maxRunsPlayer = &players[i];
        }

        if (players[i].wickets_taken > maxWickets) {
            maxWickets = players[i].wickets_taken;
            maxWicketsPlayer = &players[i];
        }
    }

    cout << "Player who scored maximum runs:\n";
    if (maxRunsPlayer != nullptr) {
        cout << maxRunsPlayer->name << endl;
    } else {
        cout << "No player found.\n";
    }

    cout << "Player who took maximum wickets:\n";
    if (maxWicketsPlayer != nullptr) {
        cout << maxWicketsPlayer->name << endl;
    } else {
        cout << "No player found.\n";
    }
}

int main() {
    int size = 10;
    Player players[] = {
        Player(1, "Sachin", 999, 999, 999),
        Player(2, "Dhoni", 888, 888, 888),
        Player(3, "Virat Kohli", 514, 35, 45678),
        Player(4, "Kapil Dev", 58, 687, 6776),
        Player(5, "Gambhir", 242, 24, 45675),
        Player(6, "Pandya", 545, 854, 984),
        Player(7, "Harsh", 999, 999, 999),
        Player(8, "Maddy", 789, 987, 546),
        Player(9, "Rusha", 852, 963, 741),
        Player(10, "Rohit", 1000, 1000, 1000)
    };

    int choice;
    do {
        cout << "\nPlayer Management System\n";
        cout << "1. Display Players\n";
        cout << "2. Add Player\n";
        cout << "3. Remove Player\n";
        cout << "4. Search Player\n";
        cout << "5. Update Player Data\n";
        cout << "6. Display Top 3 Players\n";
        cout << "7. Display All Players\n";
        cout << "8. Display Player who maximun score and run\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayAllPlayers(players, size);
                break;
            case 2:
                addPlayer(players, size);
                break;
            case 3:
                removePlayer(players, size);
                break;
            case 4:
                searchPlayer(players, size, 0);  // Pass a default value for jn
                break;
            case 5:
                update(players, size);
                break;
            // case 6:
            //     displayTopPlayers(players, size);
            //     break;
            case 7:
                displayAllPlayers(players, size);
                break;
            case 8:
                displayMaxRunsAndWickets(players, size);
                break;
            case 9:
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (1);

    return 0;
}
