#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct 
{
    int jn;
    char name[100];
    int matches_played;
    int runs;
    int wickets_taken;
} Player;

void accept_player_info(Player* players,int);
void display_players(Player* players,int);
void display_max_runs_and_wickets(Player* players,int);
void searchPlayer(Player* players,int,int );
void displayTopPlayers(Player* players,int);
void update(Player* , int );
void removeplayer(Player* , int );
void displayAllPlayers(Player* ,int ); 
void addPlayer(Player* ,int ); 

int main() 
{
    int size,jn;
    printf("Enter the number of players: ");
    scanf("%d", &size);

    Player players[100];

    accept_player_info(players,3);                                
    display_players(players,3);
    display_max_runs_and_wickets(players,3);
    searchPlayer(players,3,jn);
    displayTopPlayers(players,3);
    update(players,3);
    removeplayer(players,3);
    displayAllPlayers(players,3);
    addPlayer(players,3);
    return 0;
}

void addPlayer(Player* players,int size) 
{
    if (size < 100) 
	{
        Player newPlayer;
        printf("Enter Jersey Number: ");
        scanf("%s", newPlayer.jn);
        printf("Enter Player Name: ");
        scanf("%s", newPlayer.name);
        printf("Enter Runs: ");
        scanf("%d", &newPlayer.runs);
        printf("Enter Wickets: ");
        scanf("%d", &newPlayer.wickets_taken);
        printf("Enter Matches Played: ");
        scanf("%d", &newPlayer.matches_played);

        players[size] = newPlayer;
        size++;

        printf("Player added successfully!\n");
    } 
    else 
	{
        printf("Maximum player limit reached!\n");
    }
}

void displayAllPlayers(Player* players,int size) 
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
            printf("| %-10d | %-10s | %-10d | %-10d | %-10d |\n",players[i].jn, players[i].name, players[i].matches_played, players[i].runs, players[i].wickets_taken);
        }
    }
}

void removeplayer(Player* players, int size)
{
    int found = 0;
    char name[20];
    printf("Enter the Name of the player you want to remove: ");
    fflush(stdin);
    gets(name);
    for (int i = 0; i < size; i++) 
    {
        if (strcmp(name, players[i].name) == 0) 
        {
            for (int j = i; j < (size - 1); j++) 
            {
                players[j] = players[j + 1];
            }
            size--; 
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


void accept_player_info(Player* players,int size) 
{

    for (int i = 0; i < size; i++) 
    {
        printf("Enter player jersey number: ");
        scanf("%d", &players[i].jn);

        printf("Enter player name: ");
        scanf("%s", &players[i].name);

        printf("Enter number of matches played: ");
        scanf("%d", &players[i].matches_played);

        printf("Enter number of runs scored: ");
        scanf("%d", &players[i].runs);

        printf("Enter number of wickets taken: ");
        scanf("%d", &players[i].wickets_taken);
    }
    
}


void display_players(Player* players,int size) 
{
    printf("Player Information\n");
    printf("-------------------------------------------------------------------\n");
    printf("| Jersey Number | Name | Matches Played | Runs | Wickets Taken |\n");
    printf("-------------------------------------------------------------------\n");

    for (int i = 0; i < size; i++) 
    {
        printf("| %-10d | %-10s | %-10d | %-10d | %-10d |\n",players[i].jn, players[i].name, players[i].matches_played, players[i].runs, players[i].wickets_taken);
    }
}

void display_max_runs_and_wickets(Player* players,int size) 
{
    int max_runs = 0;
    int max_wickets = 0;

    Player *max_runs_player = NULL;
    Player *max_wickets_player = NULL;

    for (int i = 0; i < size; i++) 
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
    printf("%s\n", max_runs_player->name);

    printf("Player who took maximum wickets:\n");
    printf("%s\n", max_wickets_player->name);
}

void searchPlayer(Player* players, int size,int jn) 
{

    printf("Enter Jersey Number to search: ");
    scanf("%d", &jn);

    int found = 0;
    for (int i = 0; i < size; i++) 
    {
        if (players[i].jn == jn) 
        {
            printf("Player Information\n");
            printf("-------------------------------------------------------------------\n");
            printf("| Jersey Number | Name | Matches Played | Runs | Wickets Taken |\n");
            printf("-------------------------------------------------------------------\n");

            printf("| %-10d | %-10s | %-10d | %-10d | %-10d |\n",players[i].jn, players[i].name, players[i].matches_played, players[i].runs, players[i].wickets_taken);
           
            found = 1;
        }
    }

    if (!found) 
    {
        printf("Player not found.\n");
    }
}

void displayTopPlayers(Player* players, int size) 
{
    
    Player sortedPlayers[100];
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
        printf("| %-10d | %-10s | %-10d | %-10d | %-10d |\n",sortedPlayers[i].jn, sortedPlayers[i].name, sortedPlayers[i].matches_played, sortedPlayers[i].runs, sortedPlayers[i].wickets_taken);
        
    }

    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = i + 1; j < size; j++) 
        {
            if (sortedPlayers[i].wickets_taken < sortedPlayers[j].wickets_taken) {
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
        printf("| %-10d | %-10s | %-10d | %-10d | %-10d |\n",sortedPlayers[i].jn, sortedPlayers[i].name, sortedPlayers[i].matches_played, sortedPlayers[i].runs, sortedPlayers[i].wickets_taken);

    }
}

void update(Player* players, int size)
{
    char uname[20];
    printf("Enter the name of the player you want to update: ");
    fflush(stdin);
    gets(uname);

    int found = 0;

    for (int i = 0; i < size; i++) 
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
            break;
        }
    }

    if (!found) 
    {
        printf("Player with the name %s was not found.\n", uname);
    }
}




