#include <stdio.h>
#include <string.h>

struct Player
 {
    char jerseyNumber[10];
    char name[50];
    int runs;
    int wickets;
    int matchesPlayed;
};

struct Player players[100]; // Assuming a maximum of 100 players

int playerCount = 0;
 
// Function to add a new player
void addPlayer() {
    if (playerCount < 100) 
	{
        struct Player newPlayer;
        printf("Enter Jersey Number: ");
        scanf("%s", newPlayer.jerseyNumber);
        printf("Enter Player Name: ");
        scanf("%s", newPlayer.name);
        printf("Enter Runs: ");
        scanf("%d", &newPlayer.runs);
        printf("Enter Wickets: ");
        scanf("%d", &newPlayer.wickets);
        printf("Enter Matches Played: ");
        scanf("%d", &newPlayer.matchesPlayed);

        players[playerCount] = newPlayer;
        playerCount++;

        printf("Player added successfully!\n");
    } else 
	{
        printf("Maximum player limit reached!\n");
    }
}

// Function to remove a player by Jersey Number
void removePlayer() 
{
    char jerseyNumber[10];
    printf("Enter Jersey Number of the player to remove: ");
    scanf("%s", jerseyNumber);

    int found = 0;
    for (int i = 0; i < playerCount; i++) {
        if (strcmp(players[i].jerseyNumber, jerseyNumber) == 0) {
            found = 1;
            for (int j = i; j < playerCount - 1; j++) {
                players[j] = players[j + 1];
            }
            playerCount--;
            printf("Player removed successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Player not found.\n");
    }
}

// Function to search for a player by Jersey Number or Player Name
void searchPlayer() {
    char searchQuery[50];
    printf("Enter Jersey Number or Player Name to search: ");
    scanf("%s", searchQuery);

    int found = 0;
    for (int i = 0; i < playerCount; i++) 
	{
        if (strcmp(players[i].jerseyNumber, searchQuery) == 0 || strcmp(players[i].name, searchQuery) == 0) {
            printf("Player found:\n");
            printf("Jersey Number: %s\n", players[i].jerseyNumber);
            printf("Name: %s\n", players[i].name);
            printf("Runs: %d\n", players[i].runs);
            printf("Wickets: %d\n", players[i].wickets);
            printf("Matches Played: %d\n", players[i].matchesPlayed);
            found = 1;
        }
    }

    if (!found) 
	{
        printf("Player not found.\n");
    }
}

// Function to update player data by Jersey Number
void updatePlayerData() {
    char jerseyNumber[10];
    printf("Enter Jersey Number of the player to update: ");
    scanf("%s", jerseyNumber);

    int found = 0;
    for (int i = 0; i < playerCount; i++) {
        if (strcmp(players[i].jerseyNumber, jerseyNumber) == 0) {
            found = 1;
            printf("Enter new Runs: ");
            scanf("%d", &players[i].runs);
            printf("Enter new Wickets: ");
            scanf("%d", &players[i].wickets);
            printf("Enter new Matches Played: ");
            scanf("%d", &players[i].matchesPlayed);
            printf("Player data updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Player not found.\n");
    }
}

// Function to display the top 3 players based on runs and wickets
void displayTopPlayers() 
{
    // Create a copy of the players array to avoid modifying the original order
    struct Player sortedPlayers[100];
    for (int i = 0; i < playerCount; i++) 
	{
        sortedPlayers[i] = players[i];
    }

    // Sort players by runs (descending order)
    for (int i = 0; i < playerCount - 1; i++) 
	{
        for (int j = i + 1; j < playerCount; j++) 
		{
            if (sortedPlayers[i].runs < sortedPlayers[j].runs) 
			{
                struct Player temp = sortedPlayers[i];
                sortedPlayers[i] = sortedPlayers[j];
                sortedPlayers[j] = temp;
            }
        }
    }

    printf("Top 3 Players by Runs:\n");
    for (int i = 0; i < playerCount && i < 3; i++) 
	{
        printf("Jersey Number: %s\n", sortedPlayers[i].jerseyNumber);
        printf("Name: %s\n", sortedPlayers[i].name);
        printf("Runs: %d\n", sortedPlayers[i].runs);
        printf("Wickets: %d\n", sortedPlayers[i].wickets);
        printf("Matches Played: %d\n", sortedPlayers[i].matchesPlayed);
    }

    // Sort players by wickets (descending order)
    for (int i = 0; i < playerCount - 1; i++) {
        for (int j = i + 1; j < playerCount; j++) {
            if (sortedPlayers[i].wickets < sortedPlayers[j].wickets) 
			{
                struct Player temp = sortedPlayers[i];
                sortedPlayers[i] = sortedPlayers[j];
                sortedPlayers[j] = temp;
            }
        }
    }

    printf("Top 3 Players by Wickets:\n");
    for (int i = 0; i < playerCount && i < 3; i++)
	 {
        printf("Jersey Number: %s\n", sortedPlayers[i].jerseyNumber);
        printf("Name: %s\n", sortedPlayers[i].name);
        printf("Runs: %d\n", sortedPlayers[i].runs);
        printf("Wickets: %d\n", sortedPlayers[i].wickets);
        printf("Matches Played: %d\n", sortedPlayers[i].matchesPlayed);
    }
}

// Function to display details of all players
void displayAllPlayers() {
    if (playerCount == 0) {
        printf("No players in the database.\n");
    } else {
        printf("List of all players:\n");
        for (int i = 0; i < playerCount; i++) 
		{
            printf("Player %d:\n", i + 1);
            printf("Jersey Number: %s\n", players[i].jerseyNumber);
            printf("Name: %s\n", players[i].name);
            printf("Runs: %d\n", players[i].runs);
            printf("Wickets: %d\n", players[i].wickets);
            printf("Matches Played: %d\n", players[i].matchesPlayed);
        }
    }
}

int main() 
{
    int choice;

    while (1) 
    {
        printf("\nPlayer Management System\n");
        printf("1. Add Player\n");
        printf("2. Remove Player\n");
        printf("3. Search Player\n");
        printf("4. Update Player Data\n");
        printf("5. Display Top 3 Players\n");
        printf("6. Display All Players\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                addPlayer();
                break;
            case 2:
                removePlayer();
                break;
            case 3:
                searchPlayer();
                break;
            case 4:
                updatePlayerData();
                break;
            case 5:
                displayTopPlayers();
                break;
            case 6:
                displayAllPlayers();
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}