#include <stdio.h>

int track = 1;
int prime(int n){
    for(int i = 2 ; i<=n; i++){
	if(n % i == 0){
	    track = 1;
	    return track;
        }
        track = 0;	
	return track;
    }
}

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num == 2){
        printf("Number is prime\n");
        return 0;
    }
    
    if(prime(num) == 0){
        printf("Number is prime\n");
    }else{
        printf("Number is not prime\n");
    }
    
}
