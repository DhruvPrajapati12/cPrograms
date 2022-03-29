#include<stdio.h>
int db[5][2]={1001,1234,1002,1235,1003,1236,1004,1237,1005,1238};
int bal,d,wd,uid,pin,flag;
bal=5000;
void authenticate()
	{
	int attempt=3,i,j;
	printf("Please enter your user id\n");
	scanf("%d",&uid);
	printf("Please enter your pin\n");
	scanf("%d",&pin);
	for(i=0;i<5;i++)
		{
			if(db[i][0]==uid)
				{
					if(pin==db[i][1])
						{
							flag=1;
						}

					else
						{
							while(attempt!=0)
								{
									printf("Wrong pin!please try again\n");
									attempt--;
									printf("Enter pin\n");
									scanf("%d",&pin);
									if(pin==db[i][1])
										{
											flag=1;
											break;
										}
								}
							if(attempt==0)
							printf("CARD BLOCKED! Please try again after 24 hours\n");							
						}
	 			break;
				}
 		}
	}

int bal_check()
{
	return bal;
}
void withdrawl()
{
	printf("\nAmount to be withdwan\n");
	scanf("%d",&wd);
	if(wd>bal)
		{
			printf("Insufficint balance\n");

		}
	else
		{
			bal=bal-wd;
			printf("Congratulations\nYou have withdwawn %d rupees\nyour current balance=%d",wd,bal);
		}

}

void deposit()
{

	printf("Amount to be deposited\n");
	scanf("%d",&d);
	bal=bal+d;
	printf("Congratulations\nYou have deposited %d rupees\nyour current balance=%d\n",d,bal);

}
void main()
{
	int ch=-1,balance;

	authenticate();
	if(flag==1)
		{	
			printf("You are authenticated\n");
			while(ch!=4 && flag==1)
			{
				printf("\n\nMENU\n");
				printf("Press 1 for balance check\npress 2 for cash withdwal\npress 3 for cash deposit\npress 4 for exit\n\n\n");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:
						{
							balance=bal_check();
							printf("Your available balance=%d\n",balance);
							break;
						}
					case 2:
						{
							withdrawl();
							break;
						}
					case 3:
						{
							deposit();
							break;
						}

				}
			}
		}

}

