//#include <stdio.h>

/*
void main(){
int id[3], quant[3], idd;
float price, sum = 0;
for(int i = 0; i<3; i++){
scanf("%d %d", &id[i], &quant[i]);
}



for(int i = 1; i<=5; i++){
for(int j = 0 ; j < 1; j++){
switch(i){
    case 1: 
    price = 29.5;
    sum += price * quant[j];
    break;
    case 2: 
    price = 45.0;
    sum += price * quant[j];
    break;
    case 3: 
    price = 49.0;
    sum += price * quant[j];
    break;
    case 4: 
    price = 95.5;
    sum += price * quant[j];
    break;
    case 5: 
    price = 68.5;
    sum += price * quant[j];
    break;
}
}
}
printf("%f", sum);
}
*/

// find total bill

#include<stdio.h>


int main()

{

	int qt[3][2],i,j;

	float sum,a[2][5]={1,2,3,4,5,29.5,45,49,95.5,68.5};

	sum=0;

	printf("Enter values and quantities");

	for(i=0;i<3;i++)

		{

			for(j=0;j<2;j++)

				{

					scanf("%d",&qt[i][j]);

				}

		}

	for(i=0;i<3;i++)

		{

			int k=qt[i][0]-1;

			switch(qt[i][0])

			{

				case 1:

				sum+=qt[i][1]*a[1][k];

				break;


				case 2:

				sum+=qt[i][1]*a[1][k];
	
				break;

				case 3:

				sum+=qt[i][1]*a[1][k];

				break;


				case 4:

				sum+=qt[i][1]*a[1][k];

				break;


				case 5:

				sum+=qt[i][1]*a[1][k];

				break;




		}

}

printf("\nTotal is: %f",sum);

}
