#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int jn;
    char name[100];
    int matches_played;
    int runs;
    int wickets_taken;
} Player;

void display_players(Player *players, int);
void addPlayer(Player *players, int, int *);
void removeplayer(Player *players, int, int *);
void searchPlayer(Player *players, int, int *);
void update(Player *players, int, int *);
void displayTopPlayers(Player *players, int);
void displayAllPlayers(Player *players, int);
void display_max_runs_and_wickets(Player *players, int);

int main()
{
    int size, jn;
    printf("Enter the number of players: ");
    scanf("%d", &size);
    Player *players = (Player *)malloc(size * sizeof(Player));
    if (players == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter player jersey number: ");
        scanf("%d", &players[i].jn);

        printf("Enter player name: ");
        scanf("%s", players[i].name);

        printf("Enter number of matches played: ");
        scanf("%d", &players[i].matches_played);

        printf("Enter number of runs scored: ");
        scanf("%d", &players[i].runs);

        printf("Enter number of wickets taken: ");
        scanf("%d", &players[i].wickets_taken);
    }

    int choice;
    do
    {
        printf("\nPlayer Management System\n");
        printf("1. Display Players\n");
        printf("2. Add Player\n");
        printf("3. Remove Player\n");
        printf("4. Search Player\n");
        printf("5. Update Player Data\n");
        printf("6. Display Top 3 Players\n");
        printf("7. Display All Players\n");
        printf("8. Display Player who maximum score and wickets\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            display_players(players, size);
            break;
        case 2:
            addPlayer(players, size, &size);
            break;
        case 3:
            removeplayer(players, size, &size);
            break;
        case 4:
            searchPlayer(players, size, &jn);
            break;
        case 5:
            update(players, size, &size);
            break;
        case 6:
            displayTopPlayers(players, size);
            break;
        case 7:
            displayAllPlayers(players, size);
            break;
        case 8:
            display_max_runs_and_wickets(players, size);
            break;
        case 9:
            free(players); // Free the allocated memory before exiting
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (1);

    free(players); // Free the allocated memory before exiting
    return 0;
}

void display_players(Player *players, int size)
{
    printf("Player Information\n");
    printf("-------------------------------------------------------------------\n");
    printf("| Jersey Number | Name | Matches Played | Runs | Wickets Taken |\n");
    printf("-------------------------------------------------------------------\n");

    for (int i = 0; i < size; i++)
    {
        printf("| %-10d | %-10s | %-10d | %-10d | %-10d |\n", players[i].jn, players[i].name, players[i].matches_played, players[i].runs, players[i].wickets_taken);
    }
}

void addPlayer(Player *players, int size, int *sizePtr)
{
    if (*sizePtr < size)
    {
        Player newPlayer;
        printf("Enter Jersey Number: ");
        scanf("%d", &newPlayer.jn);
        printf("Enter Player Name: ");
        scanf("%s", newPlayer.name);
        printf("Enter Runs: ");
        scanf("%d", &newPlayer.runs);
        printf("Enter Wickets: ");
        scanf("%d", &newPlayer.wickets_taken);
        printf("Enter Matches Played: ");
        scanf("%d", &newPlayer.matches_played);

        players[*sizePtr] = newPlayer;
        (*sizePtr)++;
        printf("Player added successfully!\n");
    }
    else
    {
        printf("Maximum player limit reached!\n");
    }
}

void removeplayer(Player *players, int size, int *sizePtr)
{
    int found = 0;
    char name[100];
    printf("Enter the Name of the player you want to remove: ");
    scanf("%s", name);

    for (int i = 0; i < *sizePtr; i++)
    {
        if (strcmp(name, players[i].name) == 0)
        {
            for (int j = i; j < (*sizePtr - 1); j++)
            {
                players[j] = players[j + 1];
            }
            (*sizePtr)--;
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Player '%s' has been removed successfully.\n", name);
    }
    else
    {
        printf("Player '%s' not found. No player removed.\n", name);
    }
}

void searchPlayer(Player *players, int size, int *jn)
{
    printf("Enter Jersey Number to search: ");
    scanf("%d", jn);

    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (players[i].jn == *jn)
        {
            printf("Player Information\n");
            printf("-------------------------------------------------------------------\n");
            printf("| Jersey Number | Name | Matches Played | Runs | Wickets Taken |\n");
            printf("-------------------------------------------------------------------\n");

            printf("| %-10d | %-10s | %-10d | %-10d | %-10d |\n", players[i].jn, players[i].name, players[i].matches_played, players[i].runs, players[i].wickets_taken);

            found = 1;
            break; // Exit the loop once the player is found
        }
    }

    if (!found)
    {
        printf("Player not found.\n");
    }
}

void update(Player *players, int size, int *sizePtr)
{
    char uname[100];
    printf("Enter the name of the player you want to update: ");
    scanf("%s", uname);

    int found = 0;

    for (int i = 0; i < *sizePtr; i++)
    {
        if (strcmp(uname, players[i].name) == 0)
        {
            printf("Enter the updated runs: ");
            scanf("%d", &players[i].runs);

            printf("Enter the updated wickets: ");
            scanf("%d", &players[i].wickets_taken);

            printf("Enter updated Total Matches Played by Player: ");
            scanf("%d", &players[i].matches_played);

            printf("Player record updated successfully.\n");
            found = 1;
            break; // Exit the loop once the player is found
        }
    }

    if (!found)
    {
        printf("Player with the name %s was not found.\n", uname);
    }
}

void displayTopPlayers(Player *players, int size)
{
    Player *sortedPlayers = (Player *)malloc(size * sizeof(Player));
    if (sortedPlayers == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    for (int i = 0; i < size; i++)
    {
        sortedPlayers[i] = players[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (sortedPlayers[i].runs < sortedPlayers[j].runs)
            {
                Player temp = sortedPlayers[i];
                sortedPlayers[i] = sortedPlayers[j];
                sortedPlayers[j] = temp;
            }
        }
    }

    printf("Top 3 Players by Runs:\n");
    printf("Player Information\n");
    printf("-------------------------------------------------------------------\n");
    printf("| Jersey Number | Name | Matches Played | Runs | Wickets Taken |\n");
    printf("-------------------------------------------------------------------\n");
    for (int i = 0; i < size && i < 3; i++)
    {
        printf("| %-10d | %-10s | %-10d | %-10d | %-10d |\n", sortedPlayers[i].jn, sortedPlayers[i].name, sortedPlayers[i].matches_played, sortedPlayers[i].runs, sortedPlayers[i].wickets_taken);
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (sortedPlayers[i].wickets_taken < sortedPlayers[j].wickets_taken)
            {
                Player temp = sortedPlayers[i];
                sortedPlayers[i] = sortedPlayers[j];
                sortedPlayers[j] = temp;
            }
        }
    }

    printf("Top 3 Players by Wickets:\n");
    printf("Player Information\n");
    printf("-------------------------------------------------------------------\n");
    printf("| Jersey Number | Name | Matches Played | Runs | Wickets Taken |\n");
    printf("-------------------------------------------------------------------\n");
    for (int i = 0; i < size && i < 3; i++)
    {
        printf("| %-10d | %-10s | %-10d | %-10d | %-10d |\n", sortedPlayers[i].jn, sortedPlayers[i].name, sortedPlayers[i].matches_played, sortedPlayers[i].runs, sortedPlayers[i].wickets_taken);
    }

    free(sortedPlayers); // Free the allocated memory
}

void displayAllPlayers(Player *players, int size)
{
    if (size == 0)
    {
        printf("No players in the database.\n");
    }
    else
    {
        printf("List of all Player Information\n");
        printf("-------------------------------------------------------------------\n");
        printf("| Jersey Number | Name | Matches Played | Runs | Wickets Taken |\n");
        printf("-------------------------------------------------------------------\n");

        for (int i = 0; i < size; i++)
        {
            printf("| %-10d | %-10s | %-10d | %-10d | %-10d |\n", players[i].jn, players[i].name, players[i].matches_played, players[i].runs, players[i].wickets_taken);
        }
    }
}

void display_max_runs_and_wickets(Player *players, int size)
{
    if (size == 0)
    {
        printf("No players in the database.\n");
        return;
    }

    int max_runs = players[0].runs;
    int max_wickets = players[0].wickets_taken;
    Player *max_runs_player = &players[0];
    Player *max_wickets_player = &players[0];

    for (int i = 1; i < size; i++)
    {
        if (players[i].runs > max_runs)
        {
            max_runs = players[i].runs;
            max_runs_player = &players[i];
        }

        if (players[i].wickets_taken > max_wickets)
        {
            max_wickets = players[i].wickets_taken;
            max_wickets_player = &players[i];
        }
    }

    printf("Player who scored maximum runs:\n");
    printf("Name: %s\n", max_runs_player->name);
    printf("Runs: %d\n", max_runs);

    printf("Player who took maximum wickets:\n");
    printf("Name: %s\n", max_wickets_player->name);
    printf("Wickets: %d\n", max_wickets);
}
