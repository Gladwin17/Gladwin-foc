#include<stdio.h>
int main() {
	int n,i;
	int sum=0;
	printf("Enter the n : ");
	scanf("%d",&n);
	sum = (n * (n + 1) * (2 * n + 1 )) / 6;
	printf("Sum of the series : ");
	for (i =1;i<=n;i++) {
		if (i != n)
		    printf("%d",i); 
		else
		    printf( "%d ",sum);
	}
	return 0;
}