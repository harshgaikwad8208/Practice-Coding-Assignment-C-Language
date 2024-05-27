#include <stdio.h>

typedef Player 
{
    char name[50];
    int matchesPlayed;
    int runsScored;
    int wicketsTaken;
};
Player store(Player* this);
Player store(Player* this );
int main() 
{
    Player  s1,s2; 
    store(&s1);
    store(&s2);

    printf("\nPlayer Information:\n");
    for (int i = 0; i < 2; i++) 
    {
        printf("Player %d:\n", i + 1);
        printf("Name: %s\n", s1.name);
        printf("Matches Played: %d\n", s1.matchesPlayed);
        printf("\n");

        printf("Player %d:\n", i + 1);
        printf("Name: %s\n", s2.name);
        printf("Matches Played: %d\n", s2.matchesPlayed);
        printf("\n");
    }
    
}
Player store(Player* this)
{
    
    for (int i = 0; i < 2; i++) 
    {
        printf("Enter the details for Player %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", &this->name);

        printf("Number of matches played: ");
        scanf("%d", &this->matchesPlayed);  
    }

}