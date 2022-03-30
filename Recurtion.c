#include<stdio.h>
int factorial(int n)
{
	if(n!=0){
		return n*factorial(n-1);
	}
	else{
		return 1;
	}
}
int main()
{
	int num,result;
	printf("Enetr a positive number");
	scanf("%d",&num);
	result=factorial(num);
	printf("Result = %d\n",result);
	return 0;
}
