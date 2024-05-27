#include <stdio.h>
#include <string.h>

struct project
{
    int run, j_no, wickets, t_matches;
    char name[20];
};

void store(struct project* p, int n);
void display(struct project* p, int n);
void search(struct project* p, int n);

int main()
{
    int ch;
    struct project p[2];

    store(p, 2);
    printf("Enter your choice : ");
    scanf("%d", &ch);
    if (ch == 1)
    {
        display(p, 2);
    }
    else if (ch == 2)
    {
        // add(p, 2); // You can implement the add function separately if needed.
    }
    else if (ch == 3)
    {
        search(p, 2);
    }

    return 0;
}

void store(struct project* p, int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Jersey Number of Player : ");
        scanf("%d", &p[i].j_no);

        printf("Enter the Name of Player : ");
        fflush(stdin);
        gets(p[i].name);

        printf("Enter Total Matches Played by Player: ");
        scanf("%d", &p[i].t_matches);

        printf("Enter the Total Runs of Player: ");
        scanf("%d", &p[i].run);

        printf("Enter the Total Wickets Taken By Player: ");
        scanf("%d", &p[i].wickets);

        printf("\n\n");
    }
    printf("\n\n");
}

void display(struct project* p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n--------Player's Information------------\n");
        printf("\n\n");
        printf("The Name Of Player is : %s\nThe Jersey Number of Player is : %d\nTotal Matches Played by Player: %d\nThe Total Run of Player: %d\nThe Total Number of Wickets taken by Player: %d", p[i].name, p[i].j_no, p[i].t_matches, p[i].run, p[i].wickets);
    }
}

void search(struct project* p, int n)
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
        for (int i = 0; i < n; i++)
        {
            if (strcmp(name, p[i].name) == 0)
            {
                printf("The Name Of Player is : %s\nThe Jersey Number of Player is : %d\nTotal Matches Played by Player: %d\nThe Total Run of Player: %d\nThe Total Number of Wickets taken by Player: %d", p[i].name, p[i].j_no, p[i].t_matches, p[i].run, p[i].wickets);
                break;
            }
            else
            {
                printf("The Player is Not Found in Record");
            }
        }
    }
   else if (choice == 2)
{
    int jersyno;
    printf("Enter the jersey number of the player you want to search for: ");
    scanf("%d", &jersyno);
    int flag = 0;


    for (int i = 0; i < n; i++)
    {
        if (jersyno == p[i].j_no)
        {
            
            printf("The Name Of Player is : %s\nThe Jersey Number of Player is : %d\nTotal Matches Played by Player: %d\nThe Total Run of Player: %d\nThe Total Number of Wickets taken by Player: %d", p[i].name, p[i].j_no, p[i].t_matches, p[i].run, p[i].wickets);
            break;
            flag = 1;
        }
       
    }
    if(!flag)
    {
        printf("The Record is Not Found");
    }
}

}