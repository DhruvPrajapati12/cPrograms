/*Problem Statement 1.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fun(){
	srand(time(0));
	int randNumber = 1 + rand()%100;
	printf("%d\n", randNumber);
	int isLoop = 1, n;
	printf("Enter the number: ");
	scanf("%d", &n);

	if(randNumber == n){
		printf("Congo, You Guess a right number: \n");
	}
	
	while(1){
		if(randNumber > n){
			printf("Enter higher number \n");
			scanf("%d", &n);
		}	
		if(randNumber < n){
			printf("Enter lower number \n");
			scanf("%d", &n);
		}
		if(randNumber == n){
			printf("Congo, You Guess a right number \n");
			break;
		}
	}

}

void main(){
	fun();
	
}
