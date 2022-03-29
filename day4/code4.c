#include <stdio.h>

void main(){
	int m, n, posi = 0, negi = 0, zero = 0;
	printf("Enter the number of rows: ");
	scanf("%d", &m);
	printf("Enter the number of columns: ");
	scanf("%d", &n);
	int a[m][n];
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Matrix is: \n");
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			if(a[i][j] == 0){
				zero++;	
			}else if(a[i][j] > 0){
				posi++;
			}else if(a[i][j] < 0){
				negi++;
			}
		}
		printf("\n");
	}
	printf("Number of zero: %d\n", zero); 
	printf("Number of positive numbers : %d\n", posi); 
	printf("Number of negative numbers: %d\n", negi); 
}
