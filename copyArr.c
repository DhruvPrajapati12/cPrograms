#include <stdio.h>

void main(){
	int a[10] = {1,2,3,4,5,6,7,8,9,10}, b[10], count = 0;
	for(int i = 0; i<10; i++){
		count++;
	}
	for(int i = 0; i < count; i++){
		b[i] = a[i];
	}
	for(int i = 0; i<count; i++){
		printf("%d ", b[i]);
	}
	
}
