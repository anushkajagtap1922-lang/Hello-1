#include<stdio.h>
void main()
{
  int length,breadth,area;
clrscr();

printf("Enter length and breadth:");
scanf("%d%d",&length,&breadth);

area=length*breadth;

printf("Area = %d",area);

getch();
}
