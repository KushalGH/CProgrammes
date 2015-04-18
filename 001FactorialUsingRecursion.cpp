/* getch() is in conio.h */
/* declaration of function is important */

#include<stdio.h>
#include<conio.h>

int factorial(int);
int main(){
	int i, output;
	scanf("%d",&i);
	output = factorial(i);
	printf("The Factorial is:",output);
	return 0;

}

int factorial(int fac){
	if(fac > 1){
		fac = fac * factorial(fac -1);
	}
	return fac;
}
