#include <stdio.h>

int pin[5] = {1234,3456,5678,7890,4567};
int balance[5] = {2000, 2500, 1500, 5000, 800};

void withdraw(int, int);
void deposite(int, int);

int num, customer, op, m1, m2, chance = 4;

void main()
{		
	for(int i = 0; i < 5; i++)
		{
			printf("Enter your pin number: ");
			scanf("%d", &num);
			if(num == pin[i])
				{
					customer = i+1;
					break;
				}

				
		}

	while(op != 4)
	{
	printf("Options: \n");
	printf("Enter 1. for Check Balance: \n");
	printf("Enter 2. for Withdraw cash: \n");
	printf("Enter 3. for Deposite cash: \n");
	printf("Enter 4. for Quit: \n");

	printf("Customer is: %d\n", customer);

	scanf("%d", &op);
	if(op == 1)
	{
		printf("Your balance is %d\n", balance[customer-1]);
	}
	else if(op == 2)
	{
		printf("Your present balance is %d\n", balance[customer-1]);
		printf("How much cash do you want to withdraw: ");
		scanf("%d", &m1);
		withdraw(customer, m1);
	}
	else if(op == 3)
	{
		printf("Your present balance is %d\n", balance[customer-1]);
		printf("How much cash do you want to deposite: ");
		scanf("%d", &m2);
		deposite(customer, m2);
	}	
	}
	
	printf("Thank you for using ATM \n");

	
}

void withdraw(int id, int money)
{
	printf("Take %d\n", money);
	printf("Your available balance is: %d\n", balance[id-1] - money);
}

void deposite(int id, int money)
{
	printf("Your available balance is: %d\n", balance[id-1] + money);
}

