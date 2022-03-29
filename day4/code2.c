#include <stdio.h>

void main(){
	int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	int a[n], even=0, odd=0;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);	
	}
	
	for(int i = 0 ;i < n; i++){
		if(a[i] % 2 == 0){
			even++;
		}else{
			odd++;			
		}	
	}
	printf("Total Number of even elements: %d\n", even);
	printf("Total Number of odd elements: %d\n", odd);
	
	
}
