#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakwatergun(char you, char com) //return 1 if you win, 0 if draw and -1 if you lose
{
	//Draw condition
	if(you==com) 
	{
		return 0;
	}
	
	//Non draw condition
	if(you=='s' && com=='w')
	{
		return 1;
	}
	else if(you=='w' && com=='s')
	{
		return -1;
	}
	if(you=='s' && com=='g')
	{
		return -1;
	}
	else if(you=='g' && com=='s')
	{
		return 1;
	}
	if(you=='w' && com=='s')
	{
		return -1;
	}
	else if(you=='s' && com=='w')
	{
		return 1;
	}
	
	if(you=='g' && com=='s')
	{
		return 1;
	}
	else if(you=='s' && com=='g')
	{
		return -1;
	}
}
int main()
{
	char you, com;
	int n;
	srand(time(0));
	n=rand()%10+1;
	if(n<3)
	{
		com= 'g';
	}
	else if(n>3 && n<6)
	{
		com= 's';
	}
	else
	{
		com= 'w';
	}
	printf("\nEnter s for snake, w for water and g for gun\n");
	scanf("%c",&you);
	int result=snakwatergun(you,com);
	printf("\nYou choose %c and computer choose %c",you, com);
	if(result==0)
	{
		printf("\nGame draw\n");
	}
	else if(result==1)
	{
		printf("\nYou win\n");
	}
	else 
	{ 
		printf("\nYou lose\n");
	}
	return 0;
}
