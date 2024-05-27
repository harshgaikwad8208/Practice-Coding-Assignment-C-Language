#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 30

struct project
{
    int run, j_no, wickets, t_matches;
    char name[20];
};

void store(struct project*, int);
void display(struct project*, int);
void search(struct project*, int);
void update(struct project*, int);
void removep(struct project*, int);
void topplayer(struct project*, int);
void add(struct project*, int, int*);
int main()
{
    int ch;
    struct project p[MAX_PLAYERS];
    int n = 20;

    store(p, n);

    do
    {
        printf("Choices For You\n\n1) Update Data\n2) Add Data\n3) Search Data\n4) Display Data\n5) Remove Data\n6) Top Players\n7) Exit\n");
        printf("\n\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            update(p, n);
            display(p, n);
            break;
        case 2:
            add(p, MAX_PLAYERS, &n);
            display(p, n);
            break;
        case 3:
            search(p, n);
            break;
        case 4:
            display(p, n);
            break;
        case 5:
            removep(p, n);
            display(p, n);
            break;
        case 6:
            topplayer(p, n);
            break;
        case 7:
            printf("Do you want to continue? (1 for yes, 0 for no): ");
            scanf("%d", &ch);
            if (ch == 1) {
                break; 
            } else if (ch == 0) {
                printf("Exiting the program.\n");
                break; 
            }
            else {
                printf("Invalid choice. Exiting the program.\n");
                ch = 0;
            }
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (ch != 0);

}
void store(struct project* p, int n)
{
    p[0].j_no = 10;
    strcpy(p[0].name, "SR Tendulkar");
    p[0].t_matches = 664;
    p[0].run = 34357;
    p[0].wickets = 10;

    p[1].j_no = 14;
    strcpy(p[1].name, "RT Ponting");
    p[1].t_matches = 560;
    p[1].run = 27483;
    p[1].wickets = 25;

    p[2].j_no = 18;
    strcpy(p[2].name, "Virat Kohli");
    p[2].t_matches = 514;
    p[2].run = 26209;
    p[2].wickets = 35;

    p[3].j_no = 5;
    strcpy(p[3].name, "AB de Villiers");
    p[3].t_matches = 420;
    p[3].run = 20014;
    p[3].wickets = 2;

    p[4].j_no = 45;
    strcpy(p[4].name, "Rohit Sharma");
    p[4].t_matches = 458;
    p[4].run = 18044;
    p[4].wickets = 32;

    p[5].j_no = 17;
    strcpy(p[5].name, "Q de Kock");
    p[5].t_matches = 286;
    p[5].run = 12298;
    p[5].wickets = 27;

    p[6].j_no = 11;
    strcpy(p[6].name, "RB Richardson");
    p[6].t_matches = 310;
    p[6].run = 12197;
    p[6].wickets = 31;

    p[7].j_no = 5;
    strcpy(p[7].name, "Gautam Gambhir");
    p[7].t_matches = 242;
    p[7].run = 10324;
    p[7].wickets = 24;

    p[8].j_no = 83;
    strcpy(p[8].name, "Kapil Dev");
    p[8].t_matches = 58;
    p[8].run = 9031;
    p[8].wickets = 687;

    p[9].j_no = 22;
    strcpy(p[9].name, "Shakib Al Hasan");
    p[9].t_matches = 426;
    p[9].run = 14275;
    p[9].wickets = 686;
    p[10].j_no = 7;

    strcpy(p[10].name, "MS Dhoni");
    p[10].t_matches = 350;
    p[10].run = 10773;
    p[10].wickets = 0;

    p[11].j_no = 1;
    strcpy(p[11].name, "KL Rahul");
    p[11].t_matches = 463;
    p[11].run = 18426;
    p[11].wickets = 154;


    p[12].j_no = 13;
    strcpy(p[12].name, "Jacques Kallis");
    p[12].t_matches = 519;
    p[12].run = 24868;
    p[12].wickets = 577;

    p[13].j_no = 12;
    strcpy(p[13].name, "Brian Lara");
    p[13].t_matches = 299;
    p[13].run = 22358;
    p[13].wickets = 195;

    p[14].j_no = 27;
    strcpy(p[14].name, "Steve Waugh");
    p[14].t_matches = 260;
    p[14].run = 10927;
    p[14].wickets = 195;

    p[15].j_no = 7;
    strcpy(p[15].name, "Adam Gilchrist");
    p[15].t_matches = 287;
    p[15].run = 9600;
    p[15].wickets = 37;

    p[16].j_no = 3;
    strcpy(p[16].name, "Sadhira Samarvikrama");
    p[16].t_matches = 187;
    p[16].run = 8540;
    p[16].wickets = 118;

    p[17].j_no = 2;
    strcpy(p[17].name, "Aran Finch");
    p[17].t_matches = 375;
    p[17].run = 27483;
    p[17].wickets = 5;

    p[18].j_no = 22;
    strcpy(p[18].name, "Allan Border");
    p[18].t_matches = 156;
    p[18].run = 11174;
    p[18].wickets = 39;

    p[19].j_no = 7;
    strcpy(p[19].name, "Kumar Sangakkara");
    p[19].t_matches = 594;
    p[19].run = 28016;
    p[19].wickets = 20;
    // printf("\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the Jersey Number of Player : ");
    //     scanf("%d", &p[i].j_no);

    //     printf("Enter the Name of Player : ");
    //     fflush(stdin);
    //     gets(p[i].name);

    //     printf("Enter Total Matches Played by Player: ");
    //     scanf("%d", &p[i].t_matches);

    //     printf("Enter the Total Runs of Player: ");
    //     scanf("%d", &p[i].run);

    //     printf("Enter the Total Wickets Taken By Player: ");
    //     scanf("%d", &p[i].wickets);

    //     printf("\n\n");
    // }
    // printf("\n\n");
}
void add(struct project* p, int max_players, int *n)
{
    if (*n < max_players)
    {
        struct project player;
        printf("Enter Jersey Number: ");
        scanf("%d", &player.j_no);

        printf("Enter the Name of Player: ");
        fflush(stdin);
        gets(player.name);

        printf("Enter Total Matches Played by Player: ");
        scanf("%d", &player.t_matches);

        printf("Enter the Total Runs of Player: ");
        scanf("%d", &player.run);

        printf("Enter the Total Wickets Taken By Player: ");
        scanf("%d", &player.wickets);

        p[(*n)++] = player;
        printf("Player has been added.\n");
    }
    else
    {
        printf("Cannot add more players.see in given database there any kind of index is empty\n");
    }

}


void display(struct project* p, int n)
{
    printf("+------------------------------------------------------------------------------------------------------+\n");
    printf("|  JERSY NO.   |  PLAYER NAME                    |  Total Matches  |    Runs         |  Wickets        |\n");
    printf("+------------------------------------------------------------------------------------------------------+\n");

    for (int i = 0; i < n; i++)
    {
        printf("| \033[1;37m%8d     \033[0m|  \033[1;37m%-30s \033[0m|  \033[1;37m%10d     \033[0m|  \033[1;37m%10d     \033[0m|  \033[1;37m%10d     \033[0m|\n", p[i].j_no, p[i].name, p[i].t_matches, p[i].run, p[i].wickets);
        printf("+------------------------------------------------------------------------------------------------------+\n");
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
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (strcmp(name, p[i].name) == 0)
            {
                printf("The Name Of Player is : %s\nThe Jersey Number of Player is : %d\nTotal Matches Played by Player: %d\nThe Total Run of Player: %d\nThe Total Number of Wickets taken by Player: %d", p[i].name, p[i].j_no, p[i].t_matches, p[i].run, p[i].wickets);
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


    for (int i = 0; i < n; i++)
    {
        if (jersyno == p[i].j_no)
        {
            printf("The Name Of Player is : %s\nThe Jersey Number of Player is : %d\nTotal Matches Played by Player: %d\nThe Total Run of Player: %d\nThe Total Number of Wickets taken by Player: %d", p[i].name, p[i].j_no, p[i].t_matches, p[i].run, p[i].wickets);
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
void update(struct project* p, int n)
{
    char uname[20];
    printf("Enter the name of the player you want to update: \n");
    fflush(stdin);
    gets(uname);

    int found = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(uname, p[i].name) == 0) {
            int ch;
            printf("1)Run\n\n2)Wickets\n\n3)Total Matches\n");
            printf("Which Kind of Data you want to Update");
            scanf("%d",&ch);
            if(ch == 1)
            {
                printf("Enter the updated runs: ");
                scanf("%d", &p[i].run);
            }
             else if(ch == 2)
             {
                printf("Enter the updated wickets: ");
                scanf("%d", &p[i].wickets);   
             }
            else if(ch == 3)
            {
                    printf("Enter updated Total Matches Played by Player: ");
                    scanf("%d", &p[i].t_matches);

            }
                   
            printf("Player record updated successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Player with the name %s was not found.\n", uname);
    }
}


void topplayer(struct project* p, int n)
{
    printf("1)Runs\n\n2)Wickets");
    printf("\n\n");
    int choice;
    printf("Enter Your Choice You Want to see those player maked maximum run or maximum wickets :");
    scanf("%d",&choice);

    if(choice == 1)
    {
        for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (p[j].run < p[j + 1].run) {
                struct project temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

        printf("\nTop 3 Players with the Highest Runs:\n");
        for (int i = 0; i < 3; i++) {
        printf("%d] Name: %s\tTotal Runs: %d\n\n", i + 1, p[i].name, p[i].run);
    }
    }
    printf("\n\n");
    if(choice == 2)
    {
        for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (p[j].wickets < p[j + 1].wickets) {
                struct project flag = p[j];
                p[j] = p[j + 1];
                p[j + 1] = flag;
            }
        }
    }
        printf("Top 3 Players with the Highest wickets:\n");
        for (int i = 0; i < 3; i++) {
        printf("%d] Name: %s\tTotal wickets: %d\n\n", i + 1, p[i].name, p[i].wickets);
    }
    }

}

void removep(struct project* p, int n)
{
    int found = 0;
    char name[20];
    printf("Enter the Name of the player you want to remove: ");
    fflush(stdin);
    gets(name);
    for (int i = 0; i < n; i++) {
        if (strcmp(name, p[i].name) == 0) {
            for (int j = i; j < (n - 1); j++) {
                p[j] = p[j + 1];
            }
            n--; 
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Player '%s' has been removed successfully.\n", name);
    } else {
        printf("Player '%s' not found. No player removed.\n", name);
    }
}