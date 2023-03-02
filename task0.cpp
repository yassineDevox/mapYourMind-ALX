#include <stdio.h>

int main(){
	// how much numbers do you need ?
	int N;
	printf("give me how much numbers you need : ");
	scanf("%d",&N);
	printf("\n input of numbers length : %d", N);
	
	// get N number from user 
	int i;//helper:counter
	int number,square,sum=0;
	for(i=1;i<=N;i++){
		printf("\nEnter value of num(%d) :",i);
		scanf("%d",&number);
		//calculate sum of squares of each number
		square = number*number;
		sum = sum + square;
	}
	//display the sum of squares 
	printf("\nSum : %d",sum);	
}
