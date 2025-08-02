#include<stdio.h>
int main()
{
	int x=1324,y,z=10000,choice,amount;
	printf("\n Enter your Pin:");
	scanf("%d",&y);
	if(y!=x)
	{
	printf("\n Wrong Pin!!!");
	return 0;
    }
 do
 {
	printf("\n 1.Check Balance \n 2.Deposit \n 3.Withdraw \n 4.Exit \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n Balance=%d",z);
			break;
		case 2:
			printf("\n Enter amount:");
			scanf("%d",&amount);
			z+=amount;
			break;
		case 3:
			printf("\n Enter amount:");
			scanf("%d",&amount);
			if(amount<=z)
			z-=amount;
			else
			printf("\n Insufficient Balance");
			break;
		case 4:
			printf("\n Thankyou!!");
			break;
		default:
			printf("\n Invalid option");
	}
  }while(choice!=4);
  return 0;
}
