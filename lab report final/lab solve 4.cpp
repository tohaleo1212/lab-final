#include<stdio.h>
int main()
{
	int Toha1[30],Toha2[30],i,n;
	printf("How many number want to copy : ");
	scanf("%d",&n);
	
		for(i=0 ; i<n ; i++)
	{
		scanf("%d",&Toha1[i]);
	}
	
	//printing Toha1[]
	printf("Toha1 : ");
	for(i=0 ; i<n ; i++)
	{
		
		
		printf("%d ",Toha1[i]);
	}
    
    //copying all elements
    for(i=0 ; i<n ; i++)
    {
    	
    	Toha2[i]=Toha1[i];
	}
    
    //printing copy elements
    printf("\nToha2 : ");
	for(i=0 ; i<n ; i++)
	{
		
		
		printf("%d ",Toha2[i]);
	}

	return 0;
}
