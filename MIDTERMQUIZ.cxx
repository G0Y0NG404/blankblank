#include <stdio.h>
#include <conio.h>
int x, y, s;
char operations;
int main(){
	{
		for (x =3; x <= 50 ;x++)
		{
			gotoxy(x, 1);
			textcolor(GREEN);
			printf("*");
		}
		for (x = 3; x <= 50; x++)
		{
			gotoxy(x, 5);
			printf("*");

		}
		for (y = 2; y <= 35; y++)
		{
			gotoxy(3, y);
			printf("-");
		}
		for (y = 2; y <= 35; y++)
		{
			gotoxy(50, y);
			printf("-");
		}
		for (x = 3; x <= 50; x++)
		{
			gotoxy(x, 35);
			printf("*");
		}
		}

    gotoxy(16,3); textcolor(7);
    printf("\tMIDTERM QUIZ");
    
    gotoxy(5,9); textcolor(3);
    printf("Input 2 numbers\n");

    gotoxy(5,10); textcolor(3);
	printf("Enter number 1>> ");
	scanf("%d", &x);
	
	gotoxy(5,11); textcolor(3);
	printf("Enter number 2>> ");
	scanf("%d", &y);
	
	gotoxy(5,15); textcolor(5);
	printf("A - ADDITION");
	gotoxy(5,16); textcolor(5);
	printf("S - SUBTRACTION");
	gotoxy(5,17); textcolor(5);
	printf("M - MULTIPLICATION");
	gotoxy(5,18); textcolor(5);
	printf("D - DIVISION\n");
	
	gotoxy(5,13); textcolor(5);
	printf("Enter a character for the operation: ");
	scanf("%s", &operations);
	
	switch(operations)
	
{case 'A':
  s = x + y;
break;
case 'S':
  s = x - y;
break;
case 'M':
  s = x*y;
break;
case 'D':
  s = x/y;
break;
default:
printf("\ninvalid");}

    gotoxy(5,25); textcolor(10);
	printf("The answer is >> %d",s);
	
	gotoxy(1,100);
	getch();
}