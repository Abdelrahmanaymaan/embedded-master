/*
 ============================================================================
 Name        : second.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("c programming");
	printf("\n/////////////////////////////");//second example
	int a;
	printf("\nenter integer num:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&a);
	printf("\nintegeeer num :%d",a);
	printf("\n/////////////////////////////");// third example
	int  x,y;
	printf("\nenter 2 number to add ");
	fflush(stdout);
	scanf("%d%d",&x,&y);
	printf("\nsum=%d",x+y);
	printf("\n/////////////////////////////");// fourth example
	float  xx,yy;
	printf("\nenter 2 number to multiply ");		fflush(stdout);
	scanf("%f%f",&xx,&yy);		printf("\nmult=%f",xx*yy);
	printf("\n/////////////////////////////");// fifth example
	char c;
	printf("\nenter a character=\n");
	fflush(stdout);
	scanf("%c",&c);
	printf("asci value of %c =%d",c,c);
	printf("\n/////////////////////////////");// 6th example
	float r , u ;
	printf("enter first num:");
	fflush(stdout);
	scanf("%f",&r);
	printf("enter second num:");
	fflush(stdout);
	scanf("%f",&u);
	r=r-u;
	u=r+u;
	r=u-r;
	printf("\n first num:%f ",r);
	printf("\n second num:%f ",u);
	printf("\n/////////////////////////////\n");// 7th example
	int na ;
	printf("enter an integer number: " );
	fflush(stdout);
	scanf("%d",&na);
	if(na%2==0)
		printf("%d is even\n",na);
	if(na%2!=0)
		printf("%d is odd\n",na);
	printf("\n/////////////////////////////\n");// 8th example
	printf("enter alphabet:");
	fflush(stdout);
	char ee;
	scanf("%c",&ee);
	if(ee=='a'||ee=='e'||ee=='i'||ee=='o'||ee=='u')
		printf("%c is vowels",ee);
	else
	{printf("%c is constant",ee);}
	printf("\n/////////////////////////////\n");// 9th example
	float	max;
	float set_num[3];
	printf("enter 3 number to get largest");
	fflush(stdout);
	scanf("%f%f%f",&set_num[0],&set_num[1],&set_num[2]);
	for(int i =0;i<=1;++i)
	{
		if(set_num[i+1]>set_num[i])
		{
			max=set_num[i+1];
		}
	}

	printf("max isss %f\n",max );
	printf("\n/////////////////////////////\n");// 9th example
	char chara ;
	scanf("%c",&chara);
	if((chara>=65 && chara<=90)||(chara>=97 && chara<=122))
	{
		printf("character is alphapet ");

	}

	else
	{
		printf("character is number ");
	}

	printf("\n/////////////////////////////\n");// 10th example






	return EXIT_SUCCESS;
}
