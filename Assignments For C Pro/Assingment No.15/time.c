#include<stdio.h>
struct Time
{
	int hour,minute,second;
};
void store(struct Time ,struct Time ,struct Time );
int main()
{
	struct Time t1,t2,t3;
    store(t1,t2,t3);
	
}
void store(struct Time t1,struct Time t2,struct Time t3)
{
    printf("Enter the Time 1 (Hour,minute and Second)");
	scanf("%d%d%d",&t1.hour,&t1.minute,&t1.second);
	printf("Enter the Time 2 (Hour,minute and Second)");
	scanf("%d%d%d",&t2.hour,&t2.minute,&t2.second);
	t3.hour=t1.hour+t2.hour+(t1.minute+t2.minute+(t1.second+t2.second)/60)/60;
	t3.minute=(t1.minute+t2.minute+(t1.second+t2.second)/60)%60;
	t3.second=(t1.second+t2.second)%60;
	printf("\n Time 1 %d : %d : %d",t1.hour,t1.minute,t1.second);
	printf("\n Time 2 %d : %d : %d",t2.hour,t2.minute,t2.second);
	printf("\n Time 3 %d : %d : %d",t3.hour,t3.minute,t3.second);
	
}