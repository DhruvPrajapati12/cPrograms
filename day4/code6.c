#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fun(int n){
	srand(time(0));
	int randNumber1 = 1 + rand()%n;
	printf("%d\n", randNumber1);
	int randNumber2 = 1 + rand()%n;
	printf("%d\n", randNumber2);
	int rightAns = randNumber1 + randNumber2;
	return rightAns;
}

void main(){
	
	int addition, ans = fun(10), chance = 5;
	
	printf("What is the addition of these two numbers: ?");
	scanf("%d", &addition);
	
	if(addition == ans){
		printf("Congo, You ans is right\n");
		ans = fun(100);
		printf("What is the addition of these two numbers: ?");
		scanf("%d", &addition);
		if(addition == ans){
			printf("Congo, You ans is right\n");
			ans = fun(1000);
			printf("What is the addition of these two numbers: ?");
			scanf("%d", &addition);
			if(addition == ans){
				printf("Congo, You ans is right\n");
				ans = fun(10000);
				printf("What is the addition of these two numbers: ?");
				scanf("%d", &addition);
				if(addition == ans){
					printf("Congo, You ans is right\n");
					ans = fun(100000);
					printf("What is addition of two numbers?");
					scanf("%d", &addition);
					if(addition == ans){
						printf("Congo, your ans is right");
}
				}
			}
		}
			
	}
}
