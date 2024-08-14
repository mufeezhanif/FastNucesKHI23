#include<stdio.h>
int main()
{
	int ar1,ar2,ar3,ar4,ar5;
	char as1,as2,as3,as4,as5;
	int br1,br2,br3,br4,br5;
	char bs1,bs2,bs3,bs4,bs5;
	char end;
	int a=0,b=0;
while(1)
{
	
	printf("Enter cards for Alice: \n\n");

		printf("Enter card 1 rank(1-14): ");
		scanf("%d",&ar1);
		fflush(stdin);
	    printf("Enter card 1 suit(h/d/c/s): ");
	    scanf("%c",&as1);
	    fflush(stdin);
	    printf("Enter card 2 rank(1-14): ");
		scanf("%d",&ar2);
		fflush(stdin);
	    printf("Enter card 2 suit(h/d/c/s): ");
	    scanf("%c",&as2);
	    fflush(stdin);
	    printf("Enter card 3 rank(1-14): ");
		scanf("%d",&ar3);
		fflush(stdin);
	    printf("Enter card 3 suit(h/d/c/s): ");
	    scanf("%c",&as3);
	    fflush(stdin);
	    printf("Enter card 4 rank(1-14): ");
		scanf("%d",&ar4);
		fflush(stdin);
	    printf("Enter card 4 suit(h/d/c/s): ");
	    scanf("%c",&as4);
	    fflush(stdin);
	    printf("Enter card 5 rank(1-14): ");
		scanf("%d",&ar5);
		fflush(stdin);
	    printf("Enter card 5 suit(h/d/c/s): ");
	    scanf("%c",&as5);
	    fflush(stdin);
	    if(ar1>14||ar1<1||ar2>14||ar2<1||ar3>14||ar3<1||ar4>14||ar4<1||ar5>14||ar5<1)
	    {
		    printf("\nInvalid card\n");
	        printf("Taking back to the start\n\n");
	        continue;
	    }
	
	    	printf("Enter cards for Bob: \n\n");

		printf("Enter card 1 rank(1-14): ");
		scanf("%d",&br1);
		fflush(stdin);
	    printf("Enter card 1 suit(h/d/c/s): ");
	    scanf("%c",&bs1);
	    fflush(stdin);
	    printf("Enter card 2 rank(1-14): ");
		scanf("%d",&br2);
		fflush(stdin);
	    printf("Enter card 2 suit(h/d/c/s): ");
	    scanf("%c",&bs2);
	    fflush(stdin);
	    printf("Enter card 3 rank(1-14): ");
		scanf("%d",&br3);
		fflush(stdin);
	    printf("Enter card 3 suit(h/d/c/s): ");
	    scanf("%c",&bs3);
	    fflush(stdin);
	    printf("Enter card 4 rank(1-14): ");
		scanf("%d",&br4);
		fflush(stdin);
	    printf("Enter card 4 suit(h/d/c/s): ");
	    scanf("%c",&bs4);
	    fflush(stdin);
	    printf("Enter card 5 rank(1-14): ");
		scanf("%d",&br5);
		fflush(stdin);
	    printf("Enter card 5 suit(h/d/c/s): ");
	    scanf("%c",&bs5);
	    fflush(stdin);
	    if(br1>14||br1<1||br2>14||br2<1||br3>14||br3<1||br4>14||br4<1||br5>14||br5<1)
	    {
		    printf("\nInvalid card\n");
	        printf("Taking back to the start\n\n");
	        continue;
	    }
	    
	    
	if((ar1==ar2&&ar1==ar3&&ar1==ar4)||(ar1==ar2&&ar1==ar3&&ar1==ar5)||(ar1==ar2&&ar1==ar5&&ar1==ar4)||(ar1==ar5&&ar1==ar3&&ar1==ar4))
	   {
	   	if((br1==br2&&br1==br3&&br1==br4)||(br1==br2&&br1==br3&&br1==br5)||(br1==br2&&br1==br5&&br1==br4)||(br1==br5&&br1==br3&&br1==br4))
	   	    printf("draw");
	   	else
	   	    {
			   printf("Alice wins");
	   	    a++;
	   	}
		}
	else if((br1==br2&&br1==br3&&br1==br4)||(br1==br2&&br1==br3&&br1==br5)||(br1==br2&&br1==br5&&br1==br4)||(br1==br5&&br1==br3&&br1==br4))	 
      {
      	if((ar1==ar2&&ar1==ar3&&ar1==ar4)||(ar1==ar2&&ar1==ar3&&ar1==ar5)||(ar1==ar2&&ar1==ar5&&ar1==ar4)||(ar1==ar5&&ar1==ar3&&ar1==ar4))
      		printf("draw");
	   	else
	   	    {
			   printf("Bob wins");
			   b++;
	  }}
	else if(ar1==ar2||ar1==ar3||ar1==ar2||ar1==ar4||ar1==ar5||ar2==ar3||ar2==ar4||ar2==ar5||ar3==ar4||ar3==ar5||ar4==ar5)  
	{
		if(br1==br2||br1==br3||br1==br2||br1==br4||br1==br5||br2==br3||br2==br4||br2==br5||br3==br4||br3==br5||br4==br5)
			printf("draw");
	   	else
	   	{
			       printf("Alice wins");
			       a++;
	}}
	else if(br1==br2||br1==br3||br1==br2||br1==br4||br1==br5||br2==br3||br2==br4||br2==br5||br3==br4||br3==br5||br4==br5)
	{
		if(ar1==ar2||ar1==ar3||ar1==ar2||ar1==ar4||ar1==ar5||ar2==ar3||ar2==ar4||ar2==ar5||ar3==ar4||ar3==ar5||ar4==ar5)
			printf("draw");
	   	else
	   	    {
			   printf("Bob wins");
			   b++;
	}}
	else if((ar1+ar2+ar3+ar4+ar5)>=(br1+br2+br3+br4+br5))
	{
		if((ar1+ar2+ar3+ar4+ar5)==(br1+br2+br3+br4+br5))
		printf("Draw");
		else 
		{
		printf("Alice wins");
		a++;
	}}
	else if((br1+br2+br3+br4+br5)>(ar1+ar2+ar3+ar4+ar5))
	{
		printf("Bob wins");
		b++;
	}
	else 
	printf("Draw");
	printf("\nPress any key to continue or Press e to end: ");
	scanf("%c",&end);
	printf("\n");
	fflush(stdin);
	if(end=='e')
	break;
}
printf("\nNumber of wins for Alice: %d",a);
printf("\nNumber of wins for Bob: %d",b);

}