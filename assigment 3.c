/*
 ============================================================================
 Name        : assigment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/***************first example**************************/
void prime_number(int x, int y)
{

	for(;x<=y;x++)
	{
		if(x%2 != 0)
			printf("%d,",x);

	}
}

/*************2nd example*****************/

int factorial(int x)
{
	static int f=1;
	if(x>0)
	{
		f*=x;
		x--;
		factorial(x);
	}
	return f;
}

/***************3rd example**************************/
char reverse_strin[30];
void reverse_string(int x ,char maiin_strin[])
{

	static int e=0;
	if(x>=0)
	{
		reverse_strin[e]=maiin_strin[x];
		x--;e++;
		reverse_string( x, maiin_strin);
	}


}

/***************4th example**************************/

float calcpower(float x,int y)
{
	static float calc=1;
	if(y>0)

	{
		calc=calc*x;
		y--;
		calcpower(x,y);
	}
	return calc;
}





int main(void) {
	/******************first example *******************/
	float	a,b;
	printf("enter 2 numbers:");
	fflush(stdout);
	scanf("%f%f",&a,&b);
	prime_number(a,b);


	/***************second example**************************/
	int c,fac ;
	printf("enter integer postive num:");
	fflush(stdout);
	scanf("%d",&c);
	fac=factorial(c);
	printf("factorial of %d is %d ",c,fac);
	/***************3rd example**************************/
	printf("enter the sentnce :");
	fflush(stdout);
	char sentence[30] ;
	gets(sentence);
	fflush(stdout);fflush(stdin);

	int length_strin;
	length_strin=strlen(sentence);
	reverse_string(length_strin-1,sentence);
	printf("%s",&reverse_strin);
	/***************4th example**************************/
	printf("enter base and power number : ");
	fflush(stdout);
	float base; int power;
	scanf("%f%d",&base,&power);
	printf("%.2f ^ %d power number : %.2f",base,power,calcpower(base,power));































	return EXIT_SUCCESS;

}





