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
#include <math.h>
#include <string.h>
#define valeo main
#define pi 3.17
/***********************first example*/////////////////////////
struct sdata{
	char name[10];
	float age;
	float marks;
};

void read_data(void)
{
	struct sdata result;
	printf("enter student data in formstudent name");
	fflush(stdout);
	scanf("%s",&result.name);
	fflush(stdin);
	printf("enter student data in form(student age,marks)");
	fflush(stdout);
	scanf("(%f,%f)",&result.age,&result.marks);
	fflush(stdin);
	printf("name:%s\nage:%f\nmarks:%f\n",result.name,result.age,result.marks);

}
/**************************second example*//////////////////////
struct distance{

	float feet;
	float inch;
};
struct distance read_distance(void)
{
	struct distance result;
	printf("enter information of distance in form(feet,inch)");
	fflush(stdout);
	scanf("(%f,%f)",&result.feet,&result.inch);
	fflush(stdin);
	return result;
}
/**************************4th example*////////////////////

struct sdata{
	float marks;
	char name[10];

};
struct sdata arr[3];
void read_information(void)
{
	for(int i=1;i<=2;i++)
	{
		printf("roll %d\n",i);
		fflush(stdout);
		printf("enter name:");
		fflush(stdout);
		scanf("%s",&arr[i].name);
		fflush(stdin);
		printf("enter marks:");
		fflush(stdout);
		scanf("%f",&arr[i].marks);
		fflush(stdin);
	}
}

void write_information(void)
{
	for(int i=1;i<=2;i++)
	{
		printf("display roll %d\n",i);
		fflush(stdout);
		printf("enter name:%s\n",arr[i].name);
		fflush(stdout);
		printf("enter marks:%f\n",arr[i].marks);
		fflush(stdin);
	}
}

/******************5th example*///////////////////////








int valeo(void) {

	read_data();

	/*********************second example*///////////////////////////
		struct distance p,q;
	p=read_distance();
    q=read_distance();
printf("sum of feet:%f\nsum of inches:%f\n",p.feet+q.feet,p.inch+q.inch);
	/********************4th*///////////////////////////////
	/*read_information();
write_information();
	/********************5th*///////////////////////////////
	float radius;
	printf("enter radius");
	fflush(stdout);
	scanf("%f",&radius);
float area=(pi)*(pi)* radius;
	printf("%f",area);
	/********************6th*///////////////////////////////






	return 0;
}
