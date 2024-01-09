//linear search--DATA STRUCTURE//
#include<stdio.h>
int main()
{
	int n;
	printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY:\n");
	scanf("%d",&n);
	int m[n];
	printf("ENTER THE ELEMENTS OF THE ARRAY:\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	int y,a,count=0;
	printf("ENTER THE ELEMENT YOU WANNA SEARCH:\n");
	scanf("%d",&y);
	for(i=0;i<n;i++)
	{
		if(m[i]==y)
		{
		   count++;
		   a=i;
		}
	}
	if(count!=0)
	{
		printf("THE ELEMENT IS FOUND IN INDEX %d",a);
	}
	else
	{
		printf("NO ELEMENT FOUND!");
	}
	return 0;
}

