#include <stdio.h>

void main(){
	int n;
	printf("Enter the number of elements of first array: ");
	scanf("%d", &n);
	int a[n], b[n];
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &a[i]);
	}
	
	
	for(int i = 0; i < n; i++){
		b[i] = a[i];
	}
	printf("Copied array: \n");
	for(int i = 0; i<n; i++){
		printf("%d ", b[i]);
	}
	
}
