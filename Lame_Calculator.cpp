#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>

using namespace std;

int		cursor		=	0;
string 	pr;
string 	sol;
bool	ShowResult	=	false;
char	c			=	219	;

void Heading(string);
void Continue();
void Display();
int	CharToInt(char);
int ch(char);
char ASCII(int);
//void Mode_Menu();
void logo();
void line();
void Calculations();
void Func_Menu();

//Functions
void DMAS(char);
void Rem();
void Fac();
void Trig(string, string);
void InvTrig(string a, string dom);
void POV();
void SQRT();
void LOG();
void NLOG();

int sel;
int Result;

int main()
{	
	Calculations();
}
//void Mode_Menu()
//{
//	logo();
//	cout << "\n\tWhat Would You Like To Do?\n\n"	;
//	cout << "\n\tPress 1 	::		CALCULATION\n"	;
//	cout << "\n\tPress 2 	::		CONVERSIONS\n"	;
//	cout << "\n\tPress 0		::		CLOSE\n"		;
//	line();
//	Again:
//	if(kbhit)
//	{
//		switch(getch())
//		{
//			case '1':	Calculations()		;	break	;
//			case '2':						;	break	;
//			case '0':	break;				;	break	;
//			default:	goto Again			;	break	;
//		}
//	}
//}

void Calculations()
{
	Again:
	while(true)
	{
		logo();
		Func_Menu();
		cout << "\tEnter Selection :: ";
		line();
		if(kbhit)
		{
			sel = 0;
			int a = ch(getch());
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {27,34});
			cout << a;
			sel += a;
			sel *= 10;
			int b = ch(getch());
			sel += b;
		}
		logo();
		switch(sel)
		{
//			case 0:		Mode_Menu();									break;
			case 1:		Heading("\tADDITION");			DMAS('+');		break;
			case 2:		Heading("\tSUBTRACTION");		DMAS('-');		break;
			case 3:		Heading("\tMULTIPLICATION");	DMAS('*');		break;
			case 4:		Heading("\tDIVISION");			DMAS('/');		break;
			
			case 5:		Heading("\tREMAINDER");			Rem();			break;
			case 6:		Heading("\tFACTORIAL");			Fac();			break;
			
			case 7:		Heading("\tSINE OF X");			Trig("sin", "[-Pi/2, Pi/2]");	break;
			case 8:		Heading("\tCOSINE OF X");		Trig("cos", "[-Pi/2, Pi/2]");	break;
			case 9:		Heading("\tTANGENT OF X");		Trig("tan", "(-Pi/2, Pi/2)");	break;
			case 10:	Heading("\tCOSINE OF X");		Trig("csc", "[-1, 1]");			break;
			case 11:	Heading("\tSECANT OF X");		Trig("sec", "[-1, 1]");			break;
			case 12:	Heading("\tCOTANGENT OF X");	Trig("cot", "[-1, 1]");			break;
			
			case 13:	Heading("\tPOWER");				POV();			break;
			case 14:	Heading("\tSQUARE ROOT");		SQRT();			break;
			case 15:	Heading("\tLOG");				LOG();			break;
			case 16:	Heading("\tNATURAL LOG");		NLOG();			break;
			
			case 17:	Heading("\tSINE INVERSE OF X");			InvTrig("sin", "[-1, 1]");	break;
			case 18:	Heading("\tCOSINE INVERSE OF X");		InvTrig("cos", "[-1, 1]");	break;
			case 19:	Heading("\tTANGENT INVERSE OF X");		InvTrig("tan", "[-1, 1]");	break;
			
			default: 	goto Again;										break;
		}
		line();
		Continue();
		getch();
	}
}

void Func_Menu()
{
	cout << "\n\tPress 01 :: + \t\t (Add)"			;
	cout << "\n\tPress 02 :: - \t\t (Subtract)"		;
	cout << "\n\tPress 03 :: * \t\t (Multiply)"		;
	cout << "\n\tPress 04 :: / \t\t (Divide)"		;
	cout << endl;
	cout << "\n\tPress 05 :: % \t\t (Remainder)"	;
	cout << "\n\tPress 06 :: ! \t\t (Factorial)"	;
	cout << endl;
	cout << "\n\tPress 07 :: sin"	;
	cout << "\n\tPress 08 :: cos"	;
	cout << "\n\tPress 09 :: tan"	;
	cout << "\n\tPress 10 :: csc"	;
	cout << "\n\tPress 11 :: sec"	;
	cout << "\n\tPress 12 :: cot"	;
	cout << endl;
	cout << "\n\tPress 13 :: Power"	;
	cout << "\n\tPress 14 :: Sqrt"	;
	cout << "\n\tPress 15 :: Log"	;
	cout << "\n\tPress 16 :: Natural Log"	;
	cout << endl;
	cout << "\n\tPress 17 :: sin inverse"	;
	cout << "\n\tPress 18 :: cos inverse"	;
	cout << "\n\tPress 19 :: tan inverse"	;
	cout << endl;
//	cout << "\n\tPress 00 :: Back"	;
	line();
	
}

void DMAS(char a)
{
	float n1 = 0, n2 = 0;
	cout << "\n\tEnter 1st Number :: ";
	cin >> n1;
	cout << "\n\tEnter 2nd Number :: ";
	cin >> n2;
	line();
	switch(a)
	{
		case '+': cout << "\t" << n1 << " + " << n2 << " = " << n1 + n2;	break;
		case '-': cout << "\t" << n1 << " - " << n2 << " = " << n1 - n2;	break;
		case '*': cout << "\t" << n1 << " x " << n2 << " = " << n1 * n2;	break;
		case '/': cout << "\t" << n1 << " / " << n2 << " = " << n1 / n2;	break;
		default: cout << "\tInValid Selection";								break;
	}
}

void Rem()
{
	int n1 = 0, n2 = 0;
	cout << "\n\tEnter Divident :: ";
	cin >> n1;
	cout << "\n\tEnter Divisor :: ";
	cin >> n2;
	line();
	cout << "\tRemainder = " << n1 % n2;
}
void Fac()
{
	int n1 = 0;
	cout << "\n\tEnter Number :: ";
	cin >> n1;
	for(int i=n1-1; i>0; i--)
	{
		n1 *= i;
	}
	line();
	cout << "\tFactorial = " << n1;
}

void Trig(string a, string dom )
{
	float pi = 3.14159265;
	float n1 = 0;
	cout << "\n\tEnter Number :: \tDomain = " << dom << endl ;
	Again:
	line();
	if 		(a == "sin") cout << "\t" << a << "(" << n1 << ") = " << sin(n1*(pi/180));
	else if (a == "cos") cout << "\t" << a << "(" << n1 << ") = " << cos(n1*(pi/180));
	else if (a == "tan") cout << "\t" << a << "(" << n1 << ") = " << tan(n1*(pi/180));
	else if (a == "csc") cout << "\t" << a << "(" << n1 << ") = " << 1/sin(n1*(pi/180));
	else if (a == "sec") cout << "\t" << a << "(" << n1 << ") = " << 1/cos(n1*(pi/180));
	else if (a == "cot") cout << "\t" << a << "(" << n1 << ") = " << 1/tan(n1*(pi/180));
	
	if(n1 ==0)
	{
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {24,11});
		cin >> n1;
//		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0,13});
		goto Again;
	}
}

void InvTrig(string a, string dom)
{
	float n1 = 0;
	float pi = 3.14159265;
	cout << "\n\tEnter Number :: \tDomain = " << dom << endl ;
	Again:
	line();
	if 		(a == "sin") cout << "\t" << a << "-" << ASCII(251) << "(" << n1 << ") = " << asin(n1)*(180/pi);
	else if (a == "cos") cout << "\t" << a << "-" << ASCII(251) << "(" << n1 << ") = " << acos(n1)*(180/pi);
	else if (a == "tan") cout << "\t" << a << "-" << ASCII(251) << "(" << n1 << ") = " << atan(n1)*(180/pi);
	
	if(n1 ==0)
	{
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {24,11});
		cin >> n1;
//		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0,13});
		goto Again;
	}
}
void POV()
{
	int n1 = 0, n2 = 0;
	cout << "\n\tEnter Base :: ";
	cin >> n1;
	cout << "\n\tEnter Power :: ";
	cin >> n2;
	line();
	int R = 1;
	for(int i = n2; i > 0; i--)
	{
		R *= n1;
	}
	cout << "\t" << n1 << "^" << n2 << " = " << R;
}
void SQRT()
{
	int n1 = 0;
	cout << "\n\tEnter Value :: ";
	cin >> n1;
	line();
	int R1 = 0.01;
	int R2 = 0.01;
	for(int i = 0.01; i < n1*5; i+=0.01)
	{
		R2 = R1;
		R1 = i;
		if(i*i == n1)
		{
			break;
		}
		if(n1-(i*i) > n1-(R2*R2))
		{
			R1 = R2;
			break;
		}
	}
	cout << "\t" << "SQRT :: " << n1 << " = " << R1;
}

void LOG()
{
	int n1 = 0;
	cout << "\n\tEnter Value :: ";
	cin >> n1;
	line();
	cout << "\t" << "log(" << n1 << ") = " << log10(n1);
}

void NLOG()
{
	int n1 = 0;
	cout << "\n\tEnter Value :: ";
	cin >> n1;
	line();
	cout << "\t" << "ln(" << n1 << ") = " << log(n1);
}
void logo()
{
	system("cls");
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0,0});
	int border = 1;
	int board = 60;
	for(int i = 0; i < 3; i++)
	{
		if(i == 0 || i == 2)
		{
			for(int j = 0; j < board; j++)
			{
				cout	<<	c	;
			}
		}
		else Heading("SWIFT SCIENTIFIC CALCULATOR");
	}
	cout  <<  "\n\n";
}
void line()
{
	cout << endl << endl;
	for(int j = 0; j < 60; j++)
	{
		cout	<<	c	;
	}
	cout << endl << endl;
}
void Heading(string a)
{
	cout << "\n\n\t\t" << a << "\n\n";
}
void Continue()
{
	cout << "\n\tPress Any Key To Continue!\n\n";
}

char ASCII(int a)
{
	return a;
}
int ch(char a)
{
	switch(a)
	{
		case 48: return 0;
		case 49: return 1;
		case 50: return 2;
		case 51: return 3;
		case 52: return 4;
		case 53: return 5;
		case 54: return 6;
		case 55: return 7;
		case 56: return 8;
		case 57: return 9;
	}
}

