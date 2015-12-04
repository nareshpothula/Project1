
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
	{
	 int rollno;
	 char name[10];
	 float marks;
	 struct st *next;// holds the next node starting adderess
	};

