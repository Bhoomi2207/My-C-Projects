#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int n,guess,nguess=1;
	srand(time(0));
	n=rand()%20+1; //Generates the number between 1 to 100
	do
	{
		printf("\nGuess a number between  1 to 20\n");
		scanf("%d",&guess);
		if(guess>n)
		{
			printf("\nThe random numner is smaller than %d\n",guess);
		}
		else if(guess<n)
		{
			printf("\nThe random number is bigger than %d\n",guess);
		}
		else
		{
			printf("\nYou guessed it in %d attempts\n",nguess);
		}
		nguess++;
	}
	while(guess!=n);
	return 0;
}
