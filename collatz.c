#include <stdio.h>
int main(void){
	int n, counter = 0;
	printf("Enter a number creater than 1: ");
	scanf("%d", &n);

	do{
		counter++;
		if(n%2==0){
			printf("%d.\t%d=%d/2\n",counter,n/2,n);
			n/=2;
		}else{
			printf("%d.\t%d=%d*3+1\n",counter,n*3+1,n);
			n=n*3+1;
		}
	}while(n!=1);
	return 0;
}
