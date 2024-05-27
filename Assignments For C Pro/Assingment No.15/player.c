#include <stdio.h>

struct Player 
{
    char name[50];
    int matchesPlayed;
    int runsScored;
    int wicketsTaken;
};
void store(struct Player* ,int );
int main() 
{
    struct Player players[10]; // Create an array of 10 players
    store(players,10);
    
}
void store(struct Player* players,int size)
{
    // Input information for each player
    for (int i = 0; i < 10; i++) {
        printf("Enter the details for Player %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", players[i].name);

        printf("Number of matches played: ");
        scanf("%d", &players[i].matchesPlayed);

        printf("Runs scored: ");
        scanf("%d", &players[i].runsScored);

        printf("Wickets taken: ");
        scanf("%d", &players[i].wicketsTaken);
    }

    // Display the information for each player
    printf("\nPlayer Information:\n");
    for (int i = 0; i < 10; i++) {
        printf("Player %d:\n", i + 1);
        printf("Name: %s\n", players[i].name);
        printf("Matches Played: %d\n", players[i].matchesPlayed);
        printf("Runs Scored: %d\n", players[i].runsScored);
        printf("Wickets Taken: %d\n", players[i].wicketsTaken);
        printf("\n");
    }
}