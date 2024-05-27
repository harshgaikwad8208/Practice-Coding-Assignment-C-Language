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

void display_players(Player* players,int);
void addPlayer(Player* players,int*  );
void removeplayer(Player* players, int* );
void searchPlayer(Player* players, int,int );
void update(Player* players, int );
void displayTopPlayers(Player* players, int);
void displayAllPlayers(Player* players,int );
void display_max_runs_and_wickets(Player* players,int); 

int main() 
{
    int size = 0;    
    int jn;
    Player players[100];

    players[0].jn = 1;
    strcpy(players[0].name, "Sachin");
    players[0].matches_played = 664;
    players[0].runs = 34357;
    players[0].wickets_taken = 10;
    size++;

    players[1].jn = 2;
    strcpy(players[1].name, "Virat");
    players[1].matches_played = 504;
    players[1].runs = 357;
    players[1].wickets_taken = 9;
    size++;

    players[2].jn = 3;
    strcpy(players[2].name, "Rohit");
    players[2].matches_played = 604;
    players[2].runs = 207;
    players[2].wickets_taken = 4;
    size++;

    players[3].jn = 4;
    strcpy(players[3].name, "Dhoni");
    players[3].matches_played = 204;
    players[3].runs = 117;
    players[3].wickets_taken = 7;
    size++;

    players[4].jn = 5;
    strcpy(players[4].name, "Harsh");
    players[4].matches_played = 2044;
    players[4].runs = 1187;
    players[4].wickets_taken = 17;
    size++;

    players[5].jn = 6;
    strcpy(players[5].name, "Pandya");
    players[5].matches_played = 104;
    players[5].runs = 17;
    players[5].wickets_taken = 7;
    size++;

    players[6].jn = 7;
    strcpy(players[6].name, "Rahul");
    players[6].matches_played = 224;
    players[6].runs = 12;
    players[6].wickets_taken = 5;
    size++;

    players[7].jn = 8;
    strcpy(players[7].name, "Raj");
    players[7].matches_played = 24;
    players[7].runs = 52;
    players[7].wickets_taken = 15;
    size++;
    
    players[8].jn = 9;
    strcpy(players[8].name, "Rusha");
    players[8].matches_played = 424;
    players[8].runs = 42;
    players[8].wickets_taken = 45;
    size++;

    players[9].jn = 10;
    strcpy(players[9].name, "Shera");
    players[9].matches_played = 154;
    players[9].runs = 22;
    players[9].wickets_taken = 15;
    size++;
/* 
    printf("Enter the number of player: ");
    scanf("%d",&size);

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
*/
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
        printf("8. Display Player who maximun score and run\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                display_players(players,size);
                break;
            case 2:
                addPlayer(players,&size);
                display_players(players,size);

                break;
            case 3:
                removeplayer(players,&size);
                display_players(players,size);

                break;
            case 4:
                searchPlayer(players,size,jn);
                break;
            case 5:
                update(players,size);
                display_players(players,size);

                break;
            case 6:
                displayTopPlayers(players,size);
                break;
            case 7:
                displayAllPlayers(players,size);
                break;
            case 8:
                display_max_runs_and_wickets(players,size);  
                break;           
            case 9:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (1);
    
}

void display_players(Player* players,int size) 
{
    printf("Player Information\n");
    printf("+--------------------------------------------------------------------------+\n");
    printf("| Jersey Number |     Name     | Matches Played |   Runs   | Wickets Taken |\n");
    printf("+--------------------------------------------------------------------------+\n");

    for (int i = 0; i < size; i++) 
    {
        printf("| %-13d | %-13s | %-12d | %-10d | %-10d |\n",players[i].jn, players[i].name, players[i].matches_played, players[i].runs, players[i].wickets_taken);
    }
}

void addPlayer(Player* players, int* sizeptr) 
{
    if (*sizeptr < 100) 
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

        players[*sizeptr] = newPlayer;
        (*sizeptr)++;
        printf("Player added successfully!\n");
    } 
    else 
    {
        printf("Maximum player limit reached!\n");
    }
}

void removeplayer(Player* players, int* size)
{
    int found = 0;
    char name[20];
    printf("Enter the Name of the player you want to remove: ");
    fflush(stdin);
    gets(name);
    for (int i = 0; i < *size; i++) 
    {
        if (strcmp(name, players[i].name) == 0) 
        {
            for (int j = i; j < ((*size) - 1); j++) 
            {
                players[j] = players[j + 1];
            }
            (*size)--; 
            found = 1;
            break;
        }
    }        
    printf("Player '%s' has been removed successfully.\n", name);


    if (!found) 
    {
        printf("Player '%s' not found. No player removed.\n", name);
    }
}

void searchPlayer(Player* players, int size,int jn) 
{
    int choice;
    printf("Choices 1: Name\n2: Jersey Number\n");
    printf("\nEnter your Choice: ");
    scanf("%d",&choice);

    if (choice == 1)
    {
        char name[20];
        printf("Enter the name of player that you want to search his record: ");
        fflush(stdin);
        gets(name);
        int flag = 0;
        for (int i = 0; i < size; i++)
        {
            if (strcmp(name, players[i].name) == 0)
            {
                printf("Player Information\n");
                printf("+--------------------------------------------------------------------------+\n");
                printf("| Jersey Number |     Name     | Matches Played |   Runs   | Wickets Taken |\n");
                printf("+--------------------------------------------------------------------------+\n");

                printf("| %-13d | %-13s | %-12d | %-10d | %-10d |\n",players[i].jn, players[i].name, players[i].matches_played, players[i].runs, players[i].wickets_taken);
           
                flag = 1;
                break;
            }
        }
        if(!flag)
        {
            printf("There is no record for this %s name",name);
        }
    }
    else if (choice == 2)
    {
        int jersyno;
        printf("Enter the jersey number of the player you want to search for: ");
        scanf("%d", &jersyno);
        int flag = 0;


        for (int i = 0; i < size; i++)
        {
            if (jersyno == players[i].jn)
            {   
                printf("Player Information\n");
                printf("+--------------------------------------------------------------------------+\n");
                printf("| Jersey Number |     Name     | Matches Played |   Runs   | Wickets Taken |\n");
                printf("+--------------------------------------------------------------------------+\n");

                printf("| %-13d | %-13s | %-12d | %-10d | %-10d |\n",players[i].jn, players[i].name, players[i].matches_played, players[i].runs, players[i].wickets_taken);
                flag = 1;
                break;
            }
       
        }
        if(!flag)
        {
            printf("The Record is Not Found");
        }
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

void displayTopPlayers(Player* players, int size) 
{
    printf("1)Runs\n\n2)Wickets");
    printf("\n\n");
    int choice;
    printf("Enter Your Choice You Want to see those player maked maximum run or maximum wickets :");
    scanf("%d",&choice);
    Player sortedPlayers[100];

    if(choice == 1)
    {
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
        printf("+--------------------------------------------------------------------------+\n");
        printf("| Jersey Number |     Name     | Matches Played |   Runs   | Wickets Taken |\n");
        printf("+--------------------------------------------------------------------------+\n");
        for (int i = 0; i < size && i < 3; i++) 
        {
            printf("| %-13d | %-13s | %-12d | %-10d | %-10d |\n",sortedPlayers[i].jn, sortedPlayers[i].name, sortedPlayers[i].matches_played, sortedPlayers[i].runs, sortedPlayers[i].wickets_taken);
        
        }
    }

    else if(choice == 2)
    {
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
        printf("+--------------------------------------------------------------------------+\n");
        printf("| Jersey Number |     Name     | Matches Played |   Runs   | Wickets Taken |\n");
        printf("+--------------------------------------------------------------------------+\n");
        for (int i = 0; i < size && i < 3; i++) 
        {
            printf("| %-13d | %-13s | %-12d | %-10d | %-10d |\n",sortedPlayers[i].jn, sortedPlayers[i].name, sortedPlayers[i].matches_played, sortedPlayers[i].runs, sortedPlayers[i].wickets_taken);

        }   
    }
    
}

void displayAllPlayers(Player* players,int size) 
{
    printf("%d",size);
    if (size == 0) 
    {
        printf("No players in the database.\n");
    } 
    else 
    {
        printf("List of all Player Information\n");
        printf("+--------------------------------------------------------------------------+\n");
        printf("| Jersey Number |     Name     | Matches Played |   Runs   | Wickets Taken |\n");
        printf("+--------------------------------------------------------------------------+\n");

        for (int i = 0; i < size; i++) 
		{
            printf("| %-13d | %-13s | %-12d | %-10d | %-10d |\n",players[i].jn, players[i].name, players[i].matches_played, players[i].runs, players[i].wickets_taken);
        }
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