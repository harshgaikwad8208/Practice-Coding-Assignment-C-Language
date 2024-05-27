#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct player
{
	int jno;
	char name[30];
	int run;
	int wicket;
	int playmatch;	
};
struct player p[10];
int playercount=0;
		//Add Player Information
void addplayer()
	{
		
	if(playercount<10)
	{
		struct player newplayer; 
		printf("Enter Jersey Number:");
		scanf("%d",&newplayer.jno);	
		printf("ENTER PLAYER NAME:");
		scanf("%s",&newplayer.name);
		printf("ENTER PLAYER RUN:");
		scanf("%d",&newplayer.run);
		printf("ENTER PLAYER WICKETS:");
		scanf("%d",&newplayer.wicket);
		printf("ENTER PLAYER MATCHES:");
		scanf("%d",&newplayer.playmatch);
		p[playercount]=newplayer;
		playercount++;
		printf("Player Add Successfull");
			}
	else
	{
		printf("Player limit reached cannot add more players");
	}
	}
void removeplayer(int jno)
		{

 		int i;
		for(i=0;i<playercount;i++)
		{
		if(p[i].jno==jno)
		{
			for(int j=i;j<playercount-1;j++)
			{
				p[j]=p[j+1];
			}
			playercount--;
			printf("Player remove successfull");
		}
	}
	printf("Player with jersey number %d not found",jno);
}
		// Search Player With Jersey number 
void searchjno(int jno)
{
	int i;
	for(i=0;i<playercount;i++)
	{
		if(p[i].jno==jno)
		{
		printf("jno:%-7d name:%-10s Run:%-7d Wicket:%-7d Playmatch:%-7d\n",p[i].jno,p[i].name,p[i].run,p[i].wicket,p[i].playmatch);	
			return;
		}
	}
	printf("Jersey Number %d not found",jno);
}
		// Search Player With name
void searchname(char pname[])
{
	int i;
	for(i=0;i<playercount;i++)
	{
		if(strcmp(p[i].name,pname)==0)
		{
		printf("jno:%-7d name:%-10s Run:%-7d Wicket:%-7d Playmatch:%-7d\n",p[i].jno,p[i].name,p[i].run,p[i].wicket,p[i].playmatch);	
				return;
		}
	}
	printf("Player Name %s Not found",pname);
}
		// Update For Player Information
void updatedata(int jno,int run,int wicket,int playmatch)
{
	int i;
	for(i=0;i<playercount;i++)
	{
		if(p[i].jno==jno)
		{
			p[i].run=run;
			p[i].wicket=wicket;
			p[i].playmatch=playmatch;
		}
		{
		printf("jno:%-7d name:%-10s Run:%-7d Wicket:%-7d Playmatch:%-7d\n",p[i].jno,p[i].name,p[i].run,p[i].wicket,p[i].playmatch);	
				return;
		}         
	}             
	printf("Player with Name %s note found",jno);
}
		//Display Top  Players Runs
void displaytopplayerbyruns()
{
	if(playercount<10)
                 
	{
		printf("Not enough players to determine top %d players.\n",p[10]);
		return ;
	}
	int i;
	for(i=0;i<playercount-1;i++)
	{
		for(int j=0;j<playercount-i-1;j++)
		{
			if(p[j].run<p[j+1].run)
			{
				struct player temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}        
		}
	}
	printf("Top Players Based On Runs:\n",p[10]);

	for(int i=0;i<10;i++)
	{             
		printf("jno:%-7d name:%-10s Run:%-7d Wicket:%-7d Playmatch:%-7d\n",p[i].jno,p[i].name,p[i].run,p[i].wicket,p[i].playmatch);	

	}
}
		//Display Top Players Wickets 
void displaytopplayerwickets()
{	
	if(playercount <10)
	{
		printf("jno:%-7d name:%-10s Run:%-7d Wicket:%-7d Playmatch:%-7d\n",p);	
			return;	
	}
	printf("Top%d Players Based On Wickets :\n",p);
	for(int i=0;i<10;i++)
	{
		printf("jno:%-7d name:%-10s Run:%-7d Wicket:%-7d Playmatch:%-7d\n",p[i].jno,p[i].name,p[i].run,p[i].wicket,p[i].playmatch);	

	}
}
		//Display All Players Information
void displayallplayers()
{
	printf("All Players :\n");
	for(int i=0;i<playercount;i++)
	{
		printf("jno:%-7d name:%-10s Run:%-7d Wicket:%-7d Playmatch:%-7d\n",p[i].jno,p[i].name,p[i].run,p[i].wicket,p[i].playmatch);	
	
	}	
}
int main()
{
	int jno;
	char pname[40];
	int updatejerseynumber,newrun,newwicket,newmatchesplayed;
	int choice;
	do
	{
		printf("\n PLAYER MANAGEMENT SYSTEM \n");
		printf("1.Add player\n");
		printf("2.Remove Player\n");
		printf("3.Search Player Jersey Number\n");
		printf("4.Search Player Name\n");
		printf("5.Update Player data\n");
		printf("6.Display Top Players By Runs \n");
		printf("7.Display All Players\n");
		printf("8 Exit");
		printf("\nEnter Your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				addplayer();
				break;
			case 2:
		
				printf("Enter Jersey Number To Remove:");
				scanf("%d",&jno);
				removeplayer(jno);
				break;
			case 3:
				printf("Enter Jersey Number To Search Player");
				scanf("%d",&jno);
				searchjno(jno);	
			case 4:
			
				printf("Enter Player Name To Search :");
				scanf("%s",&pname);
				searchname(pname);
				break;
			case 5:
			printf("Enter Jersey Number To Update:");
		 		scanf("%d",&updatejerseynumber);
		 		printf("Enter New Runs:");
		 		scanf("%d",&newrun);
		 		printf("Enter New Wickets:");
		 		scanf("%d",&newwicket);
		 		printf("Enter New Matches Played:");
		 		scanf("%d",&newmatchesplayed);
		 		updatedata(updatejerseynumber,newrun,newwicket,newmatchesplayed);
				break;		
			case 6:
				displaytopplayerbyruns();
				break;
			case 7:
				displayallplayers();
				break;
			case 8:
				printf("\nExit");
				break;
			default :
				printf("\nInvalid choice ");			
		}
	}
	while (choice !=8);
	return 0;
}