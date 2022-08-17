

//      PROJECT NEW STYLE LEARNING
//	INCLUDED HEADER FILES
#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <string.h>
#include <fstream.h>
#include <process.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
//	CLASS NAME : lines
//	DETAILS    : IT CONTROLS FUNCTIONS RELATED TO DRAW
//                   LINES, BOXES, ETC.
class lines
{
public :
		void line_hor (int, int, int, char) ;
		void line_ver (int, int, int, char) ;
		void box(int,int,int,int,char) ;
} ;
//	CLASS NAME : menu
//	DETAILS    : IT CONTROLS OVER ALL FUNCTIONING OF PROJECT
class menu
{
public :
		void main_menu(void) ;
		char *sub_menu1(void) ;
		char *sub_menu2(char filenames[13]);
		int  sub_menu3(char filenames[13]);

} ;
//	CLASS NAME : quiz
//	DETAILS    : IT CONTROLS OVER ALL THE FUNCTIONS
//                   RELATED TO QUIZ
class quiz
{
public :
		void play(char filenames[23],char filenamen[23],int) ;
		void add(char filenames[23],int) ;
		void modify(char filenames[23],int) ;
		void admin(void);
		void user(void);
private :
		void delete_record(char filenames[23], int,int) ;
		void modify_record(char filenames[23], int,int) ;
		int  record_count(char filenames[23],int) ;
		int  found_record(char filenames[23],int) ;
		void display_record(char filename[23],int) ;
		int  ques_no ;
		char ques1[150], ques2[150] ;
		char ans11[100], ans21[100] ;
		char ans12[100], ans22[100] ;
		char ans13[100], ans23[100] ;
		char sol11, sol12, sol2 ;
		char cptrno;
		char abs1[500], abs2[500] ;
} ;
//	CLASS NAME    : lines
//	FUNCTION NAME : line_hor
//	DETAILS       : IT ACCEPTS THE ROWS AND COLUMNS AND
//				 DRAW THE HORIZONTAL LINE
void lines :: line_hor(int column1, int column2, int row, char c)
{
   for ( column1; column1<=column2; column1++ )
   {
      gotoxy(column1,row) ;
      cout <<c ;
   }
}
//	CLASS NAME    : lines
//	FUNCTION NAME : line_ver
//	DETAILS       : IT ACCEPTS THE ROWS AND COLUMNS AND
//				 DRAW THE VERTICAL LINE
void lines :: line_ver(int row1, int row2, int column, char c)
{
   for ( row1; row1<=row2; row1++ )
   {
      gotoxy(column,row1) ;
      cout <<c ;
   }
}
//	CLASS NAME    : lines
//	FUNCTION NAME : box
//	DETAILS       : IT ACCEPTS THE ROWS AND COLUMNS AND
//				 DRAW THE BOX
void lines :: box(int column1, int row1, int column2, int row2, char c)
{   char ch=218 ;
   char c1, c2, c3, c4 ;
   char l1=196, l2=179 ;
   if (c == ch)
   {
	c1 = 218 ;
	c2 = 191 ;
	c3 = 192 ;
	c4 = 217 ;
	l1 = 196 ;
	l2 = 179 ;
   }
   else
   {
	c1 = c ;
	c2 = c ;
	c3 = c ;
	c4 = c ;
	l1 = c ;
	l2 = c ;
   }
   gotoxy(column1,row1) ;
   cout <<c1 ;
   gotoxy(column2,row1) ;
   cout <<c2 ;
   gotoxy(column1,row2) ;
   cout <<c3 ;
   gotoxy(column2,row2) ;
   cout <<c4 ;
   column1++ ;
   column2-- ;
   line_hor(column1,column2,row1,l1) ;
   line_hor(column1,column2,row2,l1) ;
   column1-- ;
   column2++ ;
   row1++ ;
   row2-- ;
   line_ver(row1,row2,column1,l2) ;
   line_ver(row1,row2,column2,l2) ;
}

//	CLASS NAME    : menu
//	FUNCTION NAME : main_menu
//	DETAILS       : IT CREATES THE MAIN MENU TO CONTROL
//                   ALL THE FUNCTIONS
void menu :: main_menu(void)
{   lines line ;
clrscr ;
   int valid ;
   int n = 3 ;
   int x = 14 ;
   char ch1, ch2 ;
   char  chr=175 ;
   do
   {textbackground(LIGHTCYAN);
	textcolor(BLACK) ;
	clrscr() ;
	gotoxy(8,12) ;
	cout <<"N E W  S T Y L E" ;
	gotoxy(26,12) ;
	cout <<"L E A R N I N G" ;
	line.box(4,10,45,14,219) ;
	gotoxy(5,21);
	cout<<"MADE BY :";
	gotoxy(5,22);
	cout<<"HEM & His Team";
	line.box(2,19,38,24,219);
	gotoxy(4,10);
	getch() ;
	textbackground(BLACK) ;
	textcolor(LIGHTGRAY) ;
	clrscr() ;
	line.box (1,1,70,25,219) ;
	line.line_hor(21,49,6,196) ;
	line.box (20,3,52,20,218) ;
	char c1=24, c2=25 ;
	gotoxy(3,24) ;
	cout <<c1 ;
	cout <<c2 ;
	cout <<"=Move <ENTER>=Select <ESC>=Exit" ;
	textbackground(WHITE) ;
	textcolor(BLACK) ;
	gotoxy(21,5) ;
	cprintf("NEW STYLE LEARNING") ;
	textbackground(BLACK) ;
	textcolor(LIGHTGRAY) ;
	gotoxy(33,8) ;
	cout <<"OPTIONS" ;
	gotoxy(33,9) ;
	cout <<"-------" ;
	gotoxy(28,12) ;
	cout <<"ADMINISTRATER" ;
	gotoxy(28,13) ;
	cout <<"USER'S CORNER" ;
	gotoxy(28,14) ;
	cout <<"QUIT" ;
	gotoxy(24,x) ;
	cout <<chr ;
	gotoxy(13,5) ;
	do
	{
	  do
	   {
	    do
	     {
		ch1 = getch() ;
		if ( ch1 == 27 )
			{

			 clrscr() ;
			 exit(0) ;
			 }
			} while (( ch1 != 0 ) && ( ch1 != 13 )) ;
			if ( ch1 != 13 )
			{
			 do
			  {
			   ch2 = getch() ;
			   if ( ch2 == 27 )
					{

						clrscr() ;
						exit(0) ;
					}
				} while (( ch2 != 72 ) && ( ch2 != 80 )	&& ( ch2 != 13 )) ;
			}
		} while ((( ch1 != 0 ) || (( ch2 != 72 ) && ( ch2 != 80 ))) && (( ch1 != 13 ) && ( ch2 != 13 ))) ;
		if (( ch1 == 0 ) && ( ch2 == 80 ))
		{
			gotoxy(24,x) ;
			cout <<" " ;
			if (n == 3)
			{
				n = 1 ;
				x = x - 2 ;
			}
			else
			{
				n = n + 1 ;
				x = x + 1 ;
			}
			gotoxy(24,x) ;
			cout <<chr ;
			gotoxy(13,5) ;
			sound(200) ;
			delay(30) ;
			nosound() ;
		}
		if (( ch1 == 0 ) && ( ch2 == 72 ))
		{
			gotoxy(24,x) ;
			cout <<" " ;
			if ( n == 1 )
			{
				n = 3 ;
				x = x + 2 ;
			}
			else
			{
				n = n - 1 ;
				x = x - 1 ;
			}
			gotoxy(24,x) ;
			cout <<chr ;
			gotoxy(13,5) ;
			sound(200) ;
			delay(30) ;
			nosound() ;
		}
	} while (( ch1 != 13 ) && ( ch2 != 13 )) ;
	if (n == 1)
	{     clrscr();
	       line.box (1,1,70,25,219) ;
		char pass[20];
		 gotoxy(5,5);
		   cout<<"Enter Password:";
	       gotoxy(21,5);
		int i = 0;
	       char a;
    for(i=0;;)
    {a=getch();
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))

	{
	    pass[i]=a;
	    ++i;
	    cout<<"*";
	}
	if(a=='\b'&&i>=1)

	{
	    cout<<"\b \b";
	    --i;
	}
	if(a=='\r')
	{
	    pass[i]='\0';
	    break;
	}
    }
    gotoxy(5,6);
    cout<<"\nYou entered : "<<pass;
	if(i<=5)
    {   gotoxy(5,7);
	cout<<"\nMinimum 6 digits needed.\nEnter Again";
	getch();
	return;
    }
	     if(strcmp(pass,"je13510001")==0)
	      {	quiz q;
		q.admin();
		clrscr();  }
	     else
	     {gotoxy(5,8);
	      cout<<"Password is not correct.";
	       getch();
	      return;
	     }
	}
	if (n == 2)
	{
		quiz q;
		q.user();
		clrscr();
	}
    } while ( n != 3 ) ;
    clrscr() ;
}
//     CLASS NAME   : comment
//     DETAILS      :IT ALLOWS USER TO ENTER REWVIEWS
class comment
{
 char name[20];
 char com[500];
 char Class[15];
 public:
 void input();
 void output();
};
void comment::input(void)
 { fstream file;
	  lines line;
	  line.box (1,1,39,25,219) ;
	 file.open("reviews2.dat",ios::out|ios::app|ios::binary);
	 gotoxy(10,2);
	 cout<<"Welcome user add comment";
	 gotoxy(5,8);
	 cout<<"Enter your name:"<<" ";
	 gets(name);
	 gotoxy(5,10);
	 cout<<"Enter your class:"<<" ";
	 gets(Class);
	 gotoxy(5,13);
	 cout<<"Write reviews in one line:"<<" ";
	 gets(com);
	 file.write((char*)this,sizeof(comment));
	 gotoxy(15,15);
	 cout<<"THANK YOU";
	 file.close();
 }
 void comment::output(void)
  { fstream f;
   lines line;
   line.box (1,1,39,25,219) ;
     f.open("reviews2.dat",ios::in|ios::binary);
     while(f.read((char*)this,sizeof(comment)))
     {gotoxy(4,8);
      cout<<"Name:"<<name<<'\n';
      gotoxy(4,10);
      cout<<"Class:"<<Class<<'\n';
      gotoxy(4,12);
      cout<<"Comment:"<<com<<'\n';
     }
     f.close();
 }

//	CLASS NAME    : quiz
//	FUNCTION NAME : admin
//	DETAILS       : IT CREATES THE MAIN MENU TO CONTROL
//                       ALL THE ADMIN FUNCTIONS
void quiz::admin(void)
{clrscr();
 char ch='y';
 lines line;
 int valid;
 int n=4,x=14;
 char ch1,ch2;
 char chr=175;
do
   {clrscr();
     line.box (1,1,39,25,219) ;
    line.line_hor(9,31,6,196) ;
    line.box (6,4,35,18,218) ;
    gotoxy(13,5);
    cout<<"W E L C O M E";
    gotoxy(7,11);
    cout<<"Hii Hem you are the admin...";
    gotoxy(7,16);
    cout<<"Want to see comments..";
    cin>>ch;
    if(ch=='.')
    {clrscr();
     comment c;
     c.output();
     getch();
    }
    clrscr();
    line.box (1,1,39,25,219) ;
    line.line_hor(9,31,6,196) ;
    line.box (5,4,38,22,218) ;
    gotoxy(13,5);
    cout<<"Admin's Corner";
    gotoxy(14,8) ;
    cout<<"OPTIONS" ;
    gotoxy(14,9) ;
    cout<<"-------" ;
    gotoxy(14,11);
    cout<<"Play";
    gotoxy(14,12);
    cout<<"Add";
    gotoxy(14,13);
    cout<<"Modify";
    gotoxy(14,14);
    cout<<"Main menu";
    gotoxy(10,x);
    cout<<chr;
    gotoxy(13,5) ;
	do
	{
	  do
	   {
	    do
	     {
		ch1 = getch() ;
		if ( ch1 == 27 )
			{

			 clrscr() ;
			 exit(0) ;
			 }
			} while (( ch1 != 0 ) && ( ch1 != 13 )) ;
			if ( ch1 != 13 )
			{
			 do
			  {
			   ch2 = getch() ;
			   if ( ch2 == 27 )
					{

						clrscr() ;
						exit(0) ;
					}
				} while (( ch2 != 72 ) && ( ch2 != 80 )	&& ( ch2 != 13 )) ;
			}
		} while ((( ch1 != 0 ) || (( ch2 != 72 ) && ( ch2 != 80 ))) && (( ch1 != 13 ) && ( ch2 != 13 ))) ;
		if (( ch1 == 0 ) && ( ch2 == 80 ))
		{
			gotoxy(10,x) ;
			cout <<" " ;
			if (n == 4)
			{
				n = 1 ;
				x = x - 3 ;
			}
			else
			{
				n = n + 1 ;
				x = x + 1 ;
			}
			gotoxy(10,x) ;
			cout <<chr ;
			gotoxy(13,5) ;
			sound(200) ;
			delay(30) ;
			nosound() ;
		}
		if (( ch1 == 0 ) && ( ch2 == 72 ))
		{
			gotoxy(10,x) ;
			cout <<" " ;
			if ( n == 1 )
			{
				n = 4 ;
				x = x + 3 ;
			}

			else
			{
				n = n - 1 ;
				x = x - 1 ;
			}
			gotoxy(10,x) ;
			cout <<chr ;
			gotoxy(13,5) ;
			sound(200) ;
			delay(30) ;
			nosound() ;
		}
	} while (( ch1 != 13 ) && ( ch2 != 13 )) ;
	if (n == 1)
	{       menu m;
		char filenames[23] ;
		strcpy(filenames,m.sub_menu1()) ;
		char filenamen[23];
		strcpy(filenamen,m.sub_menu2(filenames));
		int acptrno=m.sub_menu3(filenames);
		if (strcmp(filenames,"null"))
		{
			quiz q ;
			q.play(filenames,filenamen,acptrno) ;
			clrscr() ;
		}
	}
	if (n == 2)
	{       menu m;
		char filenames[23];
		strcpy(filenames,m.sub_menu1()) ;
		int acptrno = m.sub_menu3(filenames);
		if (strcmp(filenames,"null"))
		{

			clrscr() ;
			quiz q ;
			q.add(filenames,acptrno) ;

		 }
	}
	if (n == 3)
	{ menu m;
		char filenames[23],filenamen[23] ;
		strcpy(filenames,m.sub_menu1()) ;
		int acptrno = m.sub_menu3(filenames);
		if (strcmp(filenames,"null"))
		{

			clrscr() ;
			quiz q ;
			q.modify(filenames,acptrno) ;
		}
       }
   }while ( n != 4 ) ;
     clrscr() ;
 }
//	CLASS NAME    : quiz
//	FUNCTION NAME : user
//	DETAILS       : IT CREATES THE MAIN MENU TO CONTROL
//                   ALL THE USER FUNCTIONS
void quiz::user(void)
{  clrscr();
   lines line ;
   int valid ;
   int n = 3 ;
   int x = 14 ;
   char ch1, ch2 ;
   char  chr=175 ;
   do
   {   	line.box (1,1,39,25,219) ;
	line.line_hor(9,31,6,196) ;
	line.box (7,3,32,20,218) ;
	textbackground(WHITE) ;
	textcolor(BLACK) ;
	gotoxy(9,5) ;
	cprintf("U S E R'S  C O R N E R") ;
	gotoxy(14,8) ;
	cout<<"OPTIONS" ;
	gotoxy(14,9) ;
	cout <<"-------" ;
	textbackground(BLACK) ;
	textcolor(LIGHTGRAY) ;
	gotoxy(14,12) ;
	cout <<"Play" ;
	gotoxy(14,13) ;
	cout<<"Add Comment";
	gotoxy(14,14);
	cout<<"Main menu";
	gotoxy(10,x);
	cout<<chr;
	gotoxy(21,15) ;
		do
	{
		do
		{
			do
			{
				ch1 = getch() ;
				if ( ch1 == 27 )
				{
					gotoxy(1,15) ; clreol() ;
					gotoxy(1,17) ; clreol() ;
					gotoxy(1,18) ; clreol() ;
					gotoxy(1,19) ; clreol() ;
					gotoxy(1,20) ; clreol() ;
					gotoxy(19,14) ; clreol() ;
					return ;
				}
			} while (( ch1 != 0 ) && ( ch1 != 13 )) ;
			if ( ch1 != 13 )
			{
				do
				{
					ch2 = getch() ;
					if ( ch2 == 27 )
					{
						gotoxy(1,15) ; clreol() ;
						gotoxy(1,17) ; clreol() ;
						gotoxy(1,18) ; clreol() ;
						gotoxy(1,19) ; clreol() ;
						gotoxy(1,20) ; clreol() ;
						gotoxy(19,14) ; clreol() ;
						return ;
					}
				} while (( ch2 != 72 ) && ( ch2 != 80 )	&& ( ch2 != 13 )) ;
			}
		} while ((( ch1 != 0 ) || (( ch2 != 72 ) && ( ch2 != 80 ))) && (( ch1 != 13 ) && ( ch2 != 13 ))) ;
		if (( ch1 == 0 ) && ( ch2 == 80 ))
		{
			gotoxy(10,x) ;
			cout <<" " ;
			if (n == 3)
			{
				n = 1 ;
				x = x - 2 ;
			}
			else
			{
				n = n + 1 ;
				x = x + 1 ;
			}
			gotoxy(10,x) ;
			cout <<chr ;
			gotoxy(21,15) ;
			sound(200) ;
			delay(30) ;
			nosound() ;
		}
		if (( ch1 == 0 ) && ( ch2 == 72 ))
		{
			gotoxy(10,x) ;
			cout <<" " ;
			if ( n == 1 )
			{
				n = 3 ;
				x = x + 2 ;
			}
			else
			{
				n = n - 1 ;
				x = x - 1 ;
			}
			gotoxy(10,x) ;
			cout <<chr ;
			gotoxy(21,15) ;
			sound(200) ;
			delay(30) ;
			nosound() ;
		}
	} while (( ch1 != 13 ) && ( ch2 != 13 )) ;

	if (n == 1)
	{     menu m;
		char filenames[23] ;
		strcpy(filenames,m.sub_menu1()) ;
		char filenamen[23];
		strcpy(filenamen,m.sub_menu2(filenames));
		int acptrno = m.sub_menu3(filenames);
		if (strcmp(filenames,"null"))
		{
			quiz q ;
			q.play(filenames,filenamen,acptrno) ;
			clrscr() ;
		}
	}
	else
	if (n == 2)
	{ clrscr();
	line.box (1,1,39,25,219) ;
	comment c;
	c.input();
	 getch();
	 return;
	}
   } while ( n != 3 ) ;
   gotoxy(1,15) ; clreol() ;
   gotoxy(1,17) ; clreol() ;
   gotoxy(1,18) ; clreol() ;
   gotoxy(1,19) ; clreol() ;
   gotoxy(1,20) ; clreol() ;
   gotoxy(19,14) ; clreol() ;
}


//	CLASS NAME    : menu
//	FUNCTION NAME : sub_menu1
//	DETAILS       : IT CREATES THE SUB MAIN MENU AND
//                   RETURN FILE NAME
char *menu :: sub_menu1(void)
{
   lines line ;
   clrscr() ;
   int valid ;
   int choice;
   int n = 4 ;
   int x = 15 ;
   char ch1, ch2 ;
   char  chr=175 ;
   line.box(1,1,39,25,219) ;
   line.line_hor(2,38,23,196) ;
   char c1=24, c2=25 ;
   gotoxy(3,24) ;
   cout <<c1 ;
   cout <<c2 ;
   cout <<"=Move <ENTER>=Select <ESC>=Exit" ;
  do
   {textbackground(WHITE) ;
   textcolor(BLACK) ;
   gotoxy(14,6) ;
   cprintf("S U B - M E N U ") ;
   textbackground(BLACK) ;
   textcolor(LIGHTGRAY) ;
   line.box(11,5,31,7,218) ;
   gotoxy(14,10) ;
   cout <<"Choose Class";
   gotoxy(14,12) ;
   cout <<"Class 10" ;
   gotoxy(14,13) ;
   cout <<"Class XII science" ;
   gotoxy(14,14) ;
   cout <<"Class XII commerce" ;
   gotoxy(14,15) ;
   cout <<"Main Menu" ;
   gotoxy(12,x) ;
   cout <<chr ;
   gotoxy(13,6) ;
   do
   {
	do
	{
		do
		{
			ch1 = getch() ;
			if ( ch1 == 27 )
			{
				clrscr() ;
				return("null") ;
			}
		} while (( ch1 != 0 ) && ( ch1 != 13 )) ;
		if ( ch1 != 13 )
		{
			do
			{
				ch2 = getch() ;
				if ( ch2 == 27 )
				{
					clrscr() ;
					return("null") ;
				}
			} while (( ch2 != 72 ) && ( ch2 != 80 )	&& ( ch2 != 13 )) ;
		}
	} while ((( ch1 != 0 ) || (( ch2 != 72 ) && ( ch2 != 80 ))) && (( ch1 != 13 ) && ( ch2 != 13 ))) ;
	if (( ch1 == 0 ) && ( ch2 == 80 ))
	{
		gotoxy(12,x) ;
		cout <<" " ;
		if (n == 4)
		{
			n = 1 ;
			x = x - 3 ;
		}
		else
		{
			n = n + 1 ;
			x = x + 1 ;
		}
		gotoxy(12,x) ;
		cout <<chr ;
		gotoxy(13,6) ;
		sound(200) ;
		delay(30) ;
		nosound() ;
	}
	if (( ch1 == 0 ) && ( ch2 == 72 ))
	{
		gotoxy(12,x) ;
		cout <<" " ;
		if ( n == 1 )
		{
			n = 4 ;
			x = x + 3 ;
		}
		else
		{
			n = n - 1 ;
			x = x - 1 ;
		}
		gotoxy(12,x) ;
		cout <<chr ;
		gotoxy(13,6) ;
		sound(200) ;
		delay(30) ;
		nosound() ;
	}
   } while (( ch1 != 13 ) && ( ch2 != 13 )) ;
   clrscr() ;
   if (n == 1)
    { clrscr();

     int valid ;
     int t = 3 ;
     int y = 14 ;
     char ch1, ch2 ;
     char  chr=175 ;
     do
     {   	line.box (1,1,39,25,219) ;
		line.line_hor(9,31,6,196) ;
		line.box (7,3,32,20,218) ;
		textbackground(WHITE) ;
		textcolor(BLACK) ;
		gotoxy(9,5) ;
		cprintf("Class 10") ;
		gotoxy(14,9) ;
		cout<<"Choose Subject";
		textbackground(BLACK) ;
		textcolor(LIGHTGRAY) ;
		gotoxy(14,12) ;
		cout <<"Maths" ;
		gotoxy(14,13) ;
		cout<<"Science";
		gotoxy(14,14);
		cout<<"Return";
		gotoxy(10,y);
		cout<<chr;
		gotoxy(21,15) ;
	    do
	     {
		do
		{
			do
			{
				ch1 = getch() ;
				if ( ch1 == 27 )
				{
					gotoxy(1,15) ; clreol() ;
					gotoxy(1,17) ; clreol() ;
					gotoxy(1,18) ; clreol() ;
					gotoxy(1,19) ; clreol() ;
					gotoxy(1,20) ; clreol() ;
					gotoxy(19,14) ; clreol() ;
					return "null";
				}
			} while (( ch1 != 0 ) && ( ch1 != 13 )) ;
			if ( ch1 != 13 )
			{
				do
				{
					ch2 = getch() ;
					if ( ch2 == 27 )
					{
						gotoxy(1,15) ; clreol() ;
						gotoxy(1,17) ; clreol() ;
						gotoxy(1,18) ; clreol() ;
						gotoxy(1,19) ; clreol() ;
						gotoxy(1,20) ; clreol() ;
						gotoxy(19,14) ; clreol() ;
						return "null";
					}
				} while (( ch2 != 72 ) && ( ch2 != 80 )	&& ( ch2 != 13 )) ;
			}
		} while ((( ch1 != 0 ) || (( ch2 != 72 ) && ( ch2 != 80 ))) && (( ch1 != 13 ) && ( ch2 != 13 ))) ;
		if (( ch1 == 0 ) && ( ch2 == 80 ))
		{
			gotoxy(10,y) ;
			cout <<" " ;
			if (t == 3)
			{
				t = 1 ;
				y = y - 2 ;
			}
			else
			{
				t = t + 1 ;
				y = y + 1 ;
			}
			gotoxy(10,y) ;
			cout <<chr ;
			gotoxy(21,15) ;
			sound(200) ;
			delay(30) ;
			nosound() ;
		}
		if (( ch1 == 0 ) && ( ch2 == 72 ))
		{
			gotoxy(10,y) ;
			cout <<" " ;
			if ( t == 1 )
			{
				t = 3 ;
				y = y + 2 ;
			}
			else
			{
				t = t - 1 ;
				y = y - 1 ;
			}
			gotoxy(10,y) ;
			cout <<chr ;
			gotoxy(21,15) ;
			sound(200) ;
			delay(30) ;
			nosound() ;
		}
	} while (( ch1 != 13 ) && ( ch2 != 13 )) ;
	if (t == 1)
	return("math.dat");
	else
	if (t == 2)
	return("science.dat");
     } while ( t != 3 ) ;
   gotoxy(1,15) ; clreol() ;
   gotoxy(1,17) ; clreol() ;
   gotoxy(1,18) ; clreol() ;
   gotoxy(1,19) ; clreol() ;
   gotoxy(1,20) ; clreol() ;
   gotoxy(19,14) ; clreol() ;
}
  if (n == 2)
  {  clrscr();
    line.box (1,1,39,25,219) ;
    int valid;
    int t=4,y=14;
    char ch1,ch2;
    char chr=175;
    line.box (1,1,39,25,219) ;
    line.line_hor(9,31,6,196) ;
    line.box (5,4,38,22,218) ;
   do
   { gotoxy(13,5);
    cout<<"Choose Subject";
    gotoxy(14,11);
    cout<<"Physics";
    gotoxy(14,12);
    cout<<"Chemistry";
    gotoxy(14,13);
    cout<<"Biology";
    gotoxy(14,14);
    cout<<"Return";
    gotoxy(10,y);
    cout<<chr;
    gotoxy(13,5) ;
	do
	{
	  do
	   {
	    do
	     {
		ch1 = getch() ;
		if ( ch1 == 27 )
			{

			 clrscr() ;
			 exit(0) ;
			 }
			} while (( ch1 != 0 ) && ( ch1 != 13 )) ;
			if ( ch1 != 13 )
			{
			 do
			  {
			   ch2 = getch() ;
			   if ( ch2 == 27 )
					{
										clrscr() ;
						exit(0) ;
					}
				} while (( ch2 != 72 ) && ( ch2 != 80 )	&& ( ch2 != 13 )) ;
			}
		} while ((( ch1 != 0 ) || (( ch2 != 72 ) && ( ch2 != 80 ))) && (( ch1 != 13 ) && ( ch2 != 13 ))) ;
		if (( ch1 == 0 ) && ( ch2 == 80 ))
		{
			gotoxy(10,y) ;
			cout <<" " ;
			if (t == 4)
			{
				t = 1 ;
				y = y - 3 ;
			}
			else
			{
				t = t + 1 ;
				y = y + 1 ;
			}
			gotoxy(10,y) ;
			cout <<chr ;
			gotoxy(13,5) ;
			sound(200) ;
			delay(30) ;
			nosound() ;
		}
		if (( ch1 == 0 ) && ( ch2 == 72 ))
		{
			gotoxy(10,y) ;
			cout <<" " ;
			if ( t == 1 )
			{
				t = 4 ;
				y = y + 3 ;
			}

			else
			{
				t = t - 1 ;
				y = y - 1 ;
			}
			gotoxy(10,y) ;
			cout <<chr ;
			gotoxy(13,5) ;
			sound(200) ;
			delay(30) ;
			nosound() ;
		}
	} while (( ch1 != 13 ) && ( ch2 != 13 )) ;
	if (t == 1)
	return("physics.dat");
	if (t == 2)
	return("chemistry.dat");
	if (t == 3)
	return("biology.dat");

   } while ( t != 4 ) ;
   clrscr() ;
   return("null");
  }
  if (n == 3)
  {
   clrscr();
    int valid;
    int t=4,y=14;
    char ch1,ch2;
    char chr=175;
    line.box (1,1,39,25,219) ;
    line.line_hor(9,31,6,196) ;
    line.box (5,4,38,22,218) ;
    gotoxy(13,5);
   do
   { cout<<"Choose Subjects";
    gotoxy(14,11);
    cout<<"Accountancy";
    gotoxy(14,12);
    cout<<"Business";
    gotoxy(14,13);
    cout<<"Economics";
    gotoxy(14,14);
    cout<<"Main menu";
    gotoxy(10,y);
    cout<<chr;
    gotoxy(13,5) ;
	do
	{
	  do
	   {
	    do
	     {
		ch1 = getch() ;
		if ( ch1 == 27 )
			{

			 clrscr() ;
			 exit(0) ;
			 }
			} while (( ch1 != 0 ) && ( ch1 != 13 )) ;
			if ( ch1 != 13 )
			{
			 do
			  {
			   ch2 = getch() ;
			   if ( ch2 == 27 )
					{

						clrscr() ;
						exit(0) ;
					}
				} while (( ch2 != 72 ) && ( ch2 != 80 )	&& ( ch2 != 13 )) ;
			}
		} while ((( ch1 != 0 ) || (( ch2 != 72 ) && ( ch2 != 80 ))) && (( ch1 != 13 ) && ( ch2 != 13 ))) ;
		if (( ch1 == 0 ) && ( ch2 == 80 ))
		{
			gotoxy(10,y) ;
			cout <<" " ;
			if (t == 4)
			{
				t = 1 ;
				y = y - 3 ;
			}
			else
			{
				t = t + 1 ;
				y = y + 1 ;
			}
			gotoxy(10,y) ;
			cout <<chr ;
			gotoxy(13,5) ;
			sound(200) ;
			delay(30) ;
			nosound() ;
		}
		if (( ch1 == 0 ) && ( ch2 == 72 ))
		{
			gotoxy(10,y) ;
			cout <<" " ;
			if ( t == 1 )
			{
				t = 4 ;
				y = y + 3 ;
			}

			else
			{
				t = t - 1 ;
				y = y - 1 ;
			}
			gotoxy(10,y) ;
			cout <<chr ;
			gotoxy(13,5) ;
			sound(200) ;
			delay(30) ;
			nosound() ;
		}
	} while (( ch1 != 13 ) && ( ch2 != 13 )) ;
	if (t == 1)
	 return("account.dat");
	if (t == 2)
	 return("business.dat");
	if (t == 3)
	 return("economics.dat");
	 return("null");
   } while ( t != 4 ) ;
  return("null");
  }
 }while( n!=4);
 return("null");
}
//	CLASS NAME    : menu
//	FUNCTION NAME : sub_menu2
//	DETAILS       : IT CREATES THE SUB MAIN MENU AND
//                   RETURN NOTES FILE NAME
char *menu :: sub_menu2(char filenames[23])
{clrscr();
int acptrno;

if(strcmp(filenames,"math.dat")==0)
  {
   gotoxy(18,2);
   cout<<"Class X - Mathematics";
   gotoxy(5,4);
   cout<<"Chapter 1: Real Numbers";
    gotoxy(5,5);
   cout<<"Chapter 2: Polynomials";
    gotoxy(5,6);
   cout<<"Chapter 3: Pair of Linear Equations in two Variables";
    gotoxy(5,7);
   cout<<"Chapter 4: Quadratic equations";
    gotoxy(5,8);
   cout<<"Chapter 5: Arithmetic progressions";
    gotoxy(5,9);
   cout<<"Chapter 6: Triangles";
    gotoxy(5,10);
   cout<<"Chapter 7: Coordinate geometry";
    gotoxy(5,11);
   cout<<"Chapter 8: Introduction to trigonometry";
    gotoxy(5,12);
   cout<<"Chapter 9: Some applications of trigonometry";
    gotoxy(5,13);
   cout<<"Chapter 10: Circles";
    gotoxy(5,14);
   cout<<"Chapter 11: Constructions";
    gotoxy(5,15);
   cout<<"Chapter 12: Areas related to circles";
    gotoxy(5,16);
   cout<<"Chapter 13: Surface areas and volumes";
    gotoxy(5,17);
   cout<<"Chapter 14: Statistics";
    gotoxy(5,18);
   cout<<"Chapter 15: Probability";
    gotoxy(5,21);
 cout<<"Enter chapter number you want to study :"<<"";
 cin>>acptrno;
   if(acptrno==1)
   return("math1.txt");
   else
    if(acptrno==2)
   return("math2.pdf");
   else
    if(acptrno==3)
   return("math3.pdf");
   else
    if(acptrno==4)
   return("math4.pdf");
   else
    if(acptrno==5)
   return("math5.pdf");
   else
   if(acptrno==6)
   return("math6.pdf");
   else
    if(acptrno==7)
   return("math7.pdf");
   else
    if(acptrno==8)
   return("math8.pdf");
   else
    if(acptrno==9)
   return("math9.pdf");
   else
    if(acptrno==10)
   return("math10.pdf");
   else
    if(acptrno==11)
   return("math11.pdf");
   else
    if(acptrno==12)
   return("math12.pdf");
   else
    if(acptrno==13)
   return("math13.pdf");
   else
    if(acptrno==14)
   return("math14.pdf");
   else
    if(acptrno==15)
   return("math15.pdf");
   else
   return ("null");
  }


   if(strcmp(filenames,"science.dat")==0)
  {
   gotoxy(18,2);
   cout<<"Class X - Science";
   gotoxy(5,4);
   cout<<"Chapter 1: Chemical reactions and equations";
    gotoxy(5,5);
   cout<<"Chapter 2: Acid, bases and salts";
    gotoxy(5,6);
   cout<<"Chapter 3: Metals and non-metals";
    gotoxy(5,7);
   cout<<"Chapter 4: Carbon and its compounds";
    gotoxy(5,8);
   cout<<"Chapter 5: Periodic classification of elements";
    gotoxy(5,9);
   cout<<"Chapter 6: Life process";
    gotoxy(5,10);
   cout<<"Chapter 7: Control and coordination";
    gotoxy(5,11);
   cout<<"Chapter 8: How do organisms reproduce";
    gotoxy(5,12);
   cout<<"Chapter 9: Heredity and evolution";
    gotoxy(5,13);
   cout<<"Chapter 10: Light::Reflection and Refraction";
    gotoxy(5,14);
   cout<<"Chapter 11: The human eye and the colourful world";
    gotoxy(5,16);
   cout<<"Chapter 12: Electricity";
    gotoxy(5,17);
   cout<<"Chapter 13: Magnetic effects of electric current";
    gotoxy(5,18);
   cout<<"Chapter 14: Sources of energy";
    gotoxy(5,19);
   cout<<"Chapter 15: Our environment";
    gotoxy(5,20);
   cout<<"Chapter 16: Sustainable management of natural resources";
    gotoxy(5,21);
 cout<<"Enter chapter number you want to study :"<<"";
 cin>>acptrno;
   if(acptrno==1)
   return("sci1.pdf");
   else
    if(acptrno==2)
   return("sci2.pdf");
   else
    if(acptrno==3)
   return("sci3.pdf");
   else
    if(acptrno==4)
   return("sci4.pdf");
   else
    if(acptrno==5)
   return("sci5.pdf");
   else
   if(acptrno==6)
   return("sci6.pdf");
   else
    if(acptrno==7)
   return("sci7.pdf");
   else
    if(acptrno==8)
   return("sci8.pdf");
   else
    if(acptrno==9)
   return("sci9.pdf");
   else
    if(acptrno==10)
   return("sci10.pdf");
   else
    if(acptrno==11)
   return("sci11.pdf");
   else
    if(acptrno==12)
   return("sci12.pdf");
   else
    if(acptrno==13)
   return("sci13.pdf");
   else
    if(acptrno==14)
   return("sci14.pdf");
   else
    if(acptrno==15)
   return("sci15.pdf");
   else
    if(acptrno==16)
   return("sci16.pdf");
   else
   return ("null");
  }

 if(strcmp(filenames,"physics.dat")==0)
  {
   gotoxy(18,2);
   cout<<"Class XII sci - Physics";
   gotoxy(5,4);
   cout<<"Chapter 1: Electric field and charges";
    gotoxy(5,5);
   cout<<"Chapter 2: Electrostatic potential and capacitance";
    gotoxy(5,6);
   cout<<"Chapter 3: Current electricity";
    gotoxy(5,7);
   cout<<"Chapter 4: Moving charges and magnetism";
    gotoxy(5,8);
   cout<<"Chapter 5: Magnetism and matter";
    gotoxy(5,9);
   cout<<"Chapter 6: Electromagnetic induction";
    gotoxy(5,10);
   cout<<"Chapter 7: Alternative current";
    gotoxy(5,11);
   cout<<"Chapter 8: Electromagnetic waves";
    gotoxy(5,12);
   cout<<"Chapter 9: Ray optics and optical instrument";
    gotoxy(5,13);
   cout<<"Chapter 10: Wave optics";
    gotoxy(5,14);
   cout<<"Chapter 11: Dual nature of radiation and matter";
    gotoxy(5,15);
   cout<<"Chapter 12: Atoms";
    gotoxy(5,16);
   cout<<"Chapter 13: Nuclei";
    gotoxy(5,17);
   cout<<"Chapter 14: Semiconductor Electronics::Materials,devices & simple circuits";
    gotoxy(5,18);
   cout<<"Chapter 15:Communication Systems";
     gotoxy(5,21);
 cout<<"Enter chapter number you want to study :"<<"";
 cin>>acptrno;
   if(acptrno==1)
   return("phy1.pdf");
   else
    if(acptrno==2)
   return("phy2.pdf");
   else
    if(acptrno==3)
   return("phy3.pdf");
   else
    if(acptrno==4)
   return("phy4.pdf");
   else
    if(acptrno==5)
   return("phy5.pdf");
   else
   if(acptrno==6)
   return("phy6.pdf");
   else
    if(acptrno==7)
   return("phy7.pdf");
   else
    if(acptrno==8)
   return("phy8.pdf");
   else
    if(acptrno==9)
   return("phy9.pdf");
   else
    if(acptrno==10)
   return("phy10.pdf");
   else
    if(acptrno==11)
   return("phy11.pdf");
   else
    if(acptrno==12)
   return("phy12.pdf");
   else
    if(acptrno==13)
   return("phy13.pdf");
   else
    if(acptrno==14)
   return("phy14.pdf");
   else
    if(acptrno==15)
   return("phy15.pdf");
   else
   return ("null");
  }

   if(strcmp(filenames,"chemistry.dat")==0)
  {
   gotoxy(18,2);
   cout<<"Class XII sci - Chemistry";
   gotoxy(5,4);
   cout<<"Chapter 1: Solid state";
    gotoxy(5,5);
   cout<<"Chapter 2: Solutions";
    gotoxy(5,6);
   cout<<"Chapter 3: Electrochemistry";
    gotoxy(5,7);
   cout<<"Chapter 4: Chemical kinetics";
    gotoxy(5,8);
   cout<<"Chapter 5: Surface chemistry";
    gotoxy(5,9);
   cout<<"Chapter 6: General principles & processes of isolation of elements";
    gotoxy(5,10);
   cout<<"Chapter 7: P-block elements";
    gotoxy(5,11);
   cout<<"Chapter 8: D&F block elements";
    gotoxy(5,12);
   cout<<"Chapter 9: Coordination compounds";
    gotoxy(5,13);
   cout<<"Chapter 10: Haloalkanes and Haloarenes";
    gotoxy(5,14);
   cout<<"Chapter 11: Alcohols, Phenols & Ethers";
    gotoxy(5,15);
   cout<<"Chapter 12: Aldehydes, ketones & carboxylic acids";
    gotoxy(5,16);
   cout<<"Chapter 13: Organic compounds containing nitrogen";
    gotoxy(5,17);
   cout<<"Chapter 14: Biomolecules";
    gotoxy(5,18);
   cout<<"Chapter 15: Polemers";
    gotoxy(5,19);
   cout<<"Chapter 16: Chemistry in evreyday life";
    gotoxy(5,21);
 cout<<"Enter chapter number you want to study :"<<"";
 cin>>acptrno;
   if(acptrno==1)
   return("chem1.pdf");
   else
    if(acptrno==2)
   return("chem2.pdf");
   else
    if(acptrno==3)
   return("chem3.pdf");
   else
    if(acptrno==4)
   return("chem4.pdf");
   else
    if(acptrno==5)
   return("chem5.pdf");
   else
   if(acptrno==6)
   return("chem6.pdf");
   else
    if(acptrno==7)
   return("chem7.pdf");
   else
    if(acptrno==8)
   return("chem8.pdf");
   else
    if(acptrno==9)
   return("chem9.pdf");
   else
    if(acptrno==10)
   return("chem10.pdf");
   else
    if(acptrno==11)
   return("chem11.pdf");
   else
    if(acptrno==12)
   return("chem12.pdf");
   else
    if(acptrno==13)
   return("chem13.pdf");
   else
    if(acptrno==14)
   return("chem14.pdf");
   else
    if(acptrno==15)
   return("chem15.pdf");
   else
    if(acptrno==16)
   return("chem16.pdf");
   else
   return ("null");
  }

  if(strcmp(filenames,"biology.dat")==0)
  {
   gotoxy(18,2);
   cout<<"Class XII sci - Biology";
   gotoxy(5,4);
   cout<<"Chapter 1: Reproduction in organisms";
    gotoxy(5,5);
   cout<<"Chapter 2: Sexual reproduction in flowering plants";
    gotoxy(5,6);
   cout<<"Chapter 3: Human reproduction";
    gotoxy(5,7);
   cout<<"Chapter 4: Reproductive health";
    gotoxy(5,8);
   cout<<"Chapter 5: Principles of inheritance and variations";
    gotoxy(5,9);
   cout<<"Chapter 6: Molecular bases of inheritance";
    gotoxy(5,10);
   cout<<"Chapter 7: Evolution";
    gotoxy(5,11);
   cout<<"Chapter 8: Human health and diseases";
    gotoxy(5,12);
   cout<<"Chapter 9: Strategies for enhancement in food production";
    gotoxy(5,13);
   cout<<"Chapter 10: Microbes in human welfare";
    gotoxy(5,14);
   cout<<"Chapter 11: Biotechnology::principles and processes";
    gotoxy(5,16);
   cout<<"Chapter 12: Biotechnology and its applications";
    gotoxy(5,17);
   cout<<"Chapter 13: Organisms and population";
    gotoxy(5,18);
   cout<<"Chapter 14: Ecosystem";
    gotoxy(5,19);
   cout<<"Chapter 15: Biodiversity and conservation";
    gotoxy(5,20);
   cout<<"Chapter 16: Environmental issues";
    gotoxy(5,21);
 cout<<"Enter chapter number you want to study :"<<"";
 cin>>acptrno;
   if(acptrno==1)
   return("bio1.pdf");
   else
    if(acptrno==2)
   return("bio2.pdf");
   else
    if(acptrno==3)
   return("bio3.pdf");
   else
    if(acptrno==4)
   return("bio4.pdf");
   else
    if(acptrno==5)
   return("bio5.pdf");
   else
   if(acptrno==6)
   return("bio6.pdf");
   else
    if(acptrno==7)
   return("bio7.pdf");
   else
    if(acptrno==8)
   return("bio8.pdf");
   else
    if(acptrno==9)
   return("bio9.pdf");
   else
    if(acptrno==10)
   return("bio10.pdf");
   else
    if(acptrno==11)
   return("bio11.pdf");
   else
    if(acptrno==12)
   return("bio12.pdf");
   else
    if(acptrno==13)
   return("bio13.pdf");
   else
    if(acptrno==14)
   return("bio14.pdf");
   else
    if(acptrno==15)
   return("bio15.pdf");
   else
    if(acptrno==16)
   return("bio16.pdf");
   else
   return ("null");
  }

    if(strcmp(filenames,"account.dat")==0)
  {
   gotoxy(18,2);
   cout<<"Class XII com - Accountancy";
   gotoxy(5,4);
   cout<<"Chapter 1: FS of non profit organisation";
    gotoxy(5,5);
   cout<<"Chapter 2: Fundamentals of partnership and goodwill";
    gotoxy(5,6);
   cout<<"Chapter 3: Change in profit sharing ratio of partners";
    gotoxy(5,7);
   cout<<"Chapter 4: Admission of a partner";
    gotoxy(5,8);
   cout<<"Chapter 5: Retirement or death of a partner";
    gotoxy(5,9);
   cout<<"Chapter 6: Dissolution of partnership";
    gotoxy(5,10);
   cout<<"Chapter 7: Accounting for share capital";
    gotoxy(5,11);
   cout<<"Chapter 8: Accounting for debentures";
    gotoxy(5,12);
   cout<<"Chapter 9: Financial statement and analysis";
    gotoxy(5,13);
   cout<<"Chapter 10: Statement analysis tools and accounting ratios";
    gotoxy(5,14);
   cout<<"Chapter 11: Cash flow statement";
    gotoxy(5,21);
 cout<<"Enter chapter number you want to study :"<<"";
 cin>>acptrno;
   if(acptrno==1)
   return("acc1.pdf");
   else
    if(acptrno==2)
   return("acc2.pdf");
   else
    if(acptrno==3)
   return("acc3.pdf");
   else
    if(acptrno==4)
   return("acc4.pdf");
   else
    if(acptrno==5)
   return("acc5.pdf");
   else
   if(acptrno==6)
   return("acc6.pdf");
   else
    if(acptrno==7)
   return("acc7.pdf");
   else
    if(acptrno==8)
   return("acc8.pdf");
   else
    if(acptrno==9)
   return("acc9.pdf");
   else
    if(acptrno==10)
   return("acc10.pdf");
   else
    if(acptrno==11)
   return("acc11.pdf");
   else
   return ("null");
  }


    if(strcmp(filenames,"business.dat")==0)
  {
   gotoxy(18,2);
   cout<<"Class XII com - Business";
   gotoxy(5,4);
   cout<<"Chapter 1: Nature and significance of management";
    gotoxy(5,5);
   cout<<"Chapter 2: Principles of management";
    gotoxy(5,6);
   cout<<"Chapter 3: Business environment";
    gotoxy(5,7);
   cout<<"Chapter 4: Planning";
    gotoxy(5,8);
   cout<<"Chapter 5: Organising";
    gotoxy(5,9);
   cout<<"Chapter 6: Staffing";
    gotoxy(5,10);
   cout<<"Chapter 7: Directing";
    gotoxy(5,11);
   cout<<"Chapter 8: Controlling";
    gotoxy(5,12);
    cout<<"Chapter 9: Financial management";
    gotoxy(5,13);
   cout<<"Chapter 10: Financial market";
    gotoxy(5,14);
   cout<<"Chapter 11: Marketing management";
    gotoxy(5,15);
   cout<<"Chapter 12: Consumer protection";
   gotoxy(5,21);
 cout<<"Enter chapter number you want to study :"<<"";
 cin>>acptrno;
   if(acptrno==1)
   return("bus1.pdf");
   else
    if(acptrno==2)
   return("bus2.pdf");
   else
    if(acptrno==3)
   return("bus3.pdf");
   else
    if(acptrno==4)
   return("bus4.pdf");
   else
    if(acptrno==5)
   return("bus5.pdf");
   else
   if(acptrno==6)
   return("bus6.pdf");
   else
    if(acptrno==7)
   return("bus7.pdf");
   else
    if(acptrno==8)
   return("bus8.pdf");
   else
    if(acptrno==9)
   return("bus9.pdf");
   else
    if(acptrno==10)
   return("bus10.pdf");
   else
    if(acptrno==11)
   return("bus11.pdf");
   else
    if(acptrno==12)
   return("bus12.pdf");
   else
   return ("null");
  }

  if(strcmp(filenames,"economics.dat")==0)
  {
   gotoxy(18,2);
   cout<<"Class XII com - Economics";
   gotoxy(5,4);
   cout<<"Chapter 1: Natural income and related aggregates";
    gotoxy(5,5);
   cout<<"Chapter 2: Money and banking";
    gotoxy(5,6);
   cout<<"Chapter 3: Determination of income and employment";
    gotoxy(5,7);
   cout<<"Chapter 4: Government budget and the economy";
    gotoxy(5,8);
   cout<<"Chapter 5: Balance of payments and foreign exchange";
    gotoxy(5,9);
   cout<<"Chapter 6: Indian economy on the eve of independence";
    gotoxy(5,10);
   cout<<"Chapter 7: Indian economy 1950-90";
    gotoxy(5,11);
   cout<<"Chapter 8: Economic reforms since 1991";
    gotoxy(5,12);
   cout<<"Chapter 9: Poverty";
    gotoxy(5,13);
   cout<<"Chapter 10: Human capital formation in India";
    gotoxy(5,14);
   cout<<"Chapter 11: Rural development";
    gotoxy(5,15);
   cout<<"Chapter 12: Employment growthinformational and other issues";
    gotoxy(5,16);
   cout<<"Chapter 13: Infrastructure";
    gotoxy(5,17);
   cout<<"Chapter 14: Environment sustainable development";
    gotoxy(5,18);
   cout<<"Chapter 15: Development experiences India and neighbours";
   gotoxy(5,21);
 cout<<"Enter chapter number you want to study :"<<"";
 cin>>acptrno;
   if(acptrno==1)
   return("eco1.txt");
   else
    if(acptrno==2)
    return("eco2.pdf");
   else
    if(acptrno==3)
   return("eco3.pdf");
   else
    if(acptrno==4)
   return("eco4.pdf");
   else
    if(acptrno==5)
   return("eco5.pdf");
   else
   if(acptrno==6)
   return("eco6.pdf");
   else
    if(acptrno==7)
   return("eco7.pdf");
   else
    if(acptrno==8)
   return("eco8.pdf");
   else
    if(acptrno==9)
   return("eco9.pdf");
   else
    if(acptrno==10)
   return("eco10.pdf");
   else
    if(acptrno==11)
   return("eco11.pdf");
   else
    if(acptrno==12)
   return("eco12.pdf");
   else
    if(acptrno==13)
   return("eco13.pdf");
   else
    if(acptrno==14)
   return("eco14.pdf");
   else
    if(acptrno==15)
   return("eco15.pdf");
   else
   return ("null");
  }
  return ("null");
 }
 //	CLASS NAME    : menu
//	FUNCTION NAME : sub_menu3
//	DETAILS       : IT CREATES THE SUB MAIN MENU AND
//                   RETURN CHAPTER NUMBER FILE NAME
int menu :: sub_menu3(char filenames[23])
{clrscr();
 int acptrno;
 if(strcmp(filenames,"math.dat")==0)
  {
   gotoxy(18,2);
   cout<<"Class X - Mathematics";
   gotoxy(5,4);
   cout<<"Chapter 1: Real Numbers";
    gotoxy(5,5);
   cout<<"Chapter 2: Polynomials";
    gotoxy(5,6);
   cout<<"Chapter 3: Pair of Linear Equations in two Variables";
    gotoxy(5,7);
   cout<<"Chapter 4: Quadratic equations";
    gotoxy(5,8);
   cout<<"Chapter 5: Arithmetic progressions";
    gotoxy(5,9);
   cout<<"Chapter 6: Triangles";
    gotoxy(5,10);
   cout<<"Chapter 7: Coordinate geometry";
    gotoxy(5,11);
   cout<<"Chapter 8: Introduction to trigonometry";
    gotoxy(5,12);
   cout<<"Chapter 9: Some applications of trigonometry";
    gotoxy(5,13);
   cout<<"Chapter 10: Circles";
    gotoxy(5,14);
   cout<<"Chapter 11: Constructions";
    gotoxy(5,15);
   cout<<"Chapter 12: Areas related to circles";
    gotoxy(5,16);
   cout<<"Chapter 13: Surface areas and volumes";
    gotoxy(5,17);
   cout<<"Chapter 14: Statistics";
    gotoxy(5,18);
   cout<<"Chapter 15: Probability";

  }
   if(strcmp(filenames,"science.dat")==0)
  {
   gotoxy(18,2);
   cout<<"Class X - Science";
   gotoxy(5,4);
   cout<<"Chapter 1: Chemical reactions and equations";
    gotoxy(5,5);
   cout<<"Chapter 2: Acid, bases and salts";
    gotoxy(5,6);
   cout<<"Chapter 3: Metals and non-metals";
    gotoxy(5,7);
   cout<<"Chapter 4: Carbon and its compounds";
    gotoxy(5,8);
   cout<<"Chapter 5: Periodic classification of elements";
    gotoxy(5,9);
   cout<<"Chapter 6: Life process";
    gotoxy(5,10);
   cout<<"Chapter 7: Control and coordination";
    gotoxy(5,11);
   cout<<"Chapter 8: How do organisms reproduce";
    gotoxy(5,12);
   cout<<"Chapter 9: Heredity and evolution";
    gotoxy(5,13);
   cout<<"Chapter 10: Light::Reflection and Refraction";
    gotoxy(5,14);
   cout<<"Chapter 11: The human eye and the colourful world";
    gotoxy(5,16);
   cout<<"Chapter 12: Electricity";
    gotoxy(5,17);
   cout<<"Chapter 13: Magnetic effects of electric current";
    gotoxy(5,18);
   cout<<"Chapter 14: Sources of energy";
    gotoxy(5,19);
   cout<<"Chapter 15: Our environment";
    gotoxy(5,20);
   cout<<"Chapter 16: Sustainable management of natural resources";
  }
   if(strcmp(filenames,"physics.dat")==0)
  {
   gotoxy(18,2);
   cout<<"Class XII sci - Physics";
   gotoxy(5,4);
   cout<<"Chapter 1: Electric field and charges";
    gotoxy(5,5);
   cout<<"Chapter 2: Electrostatic potential and capacitance";
    gotoxy(5,6);
   cout<<"Chapter 3: Current electricity";
    gotoxy(5,7);
   cout<<"Chapter 4: Moving charges and magnetism";
    gotoxy(5,8);
   cout<<"Chapter 5: Magnetism and matter";
    gotoxy(5,9);
   cout<<"Chapter 6: Electromagnetic induction";
    gotoxy(5,10);
   cout<<"Chapter 7: Alternative current";
    gotoxy(5,11);
   cout<<"Chapter 8: Electromagnetic waves";
    gotoxy(5,12);
   cout<<"Chapter 9: Ray optics and optical instrument";
    gotoxy(5,13);
   cout<<"Chapter 10: Wave optics";
    gotoxy(5,14);
   cout<<"Chapter 11: Dual nature of radiation and matter";
    gotoxy(5,16);
   cout<<"Chapter 12: Atoms";
    gotoxy(5,17);
   cout<<"Chapter 13: Nuclei";
    gotoxy(5,18);
   cout<<"Chapter 14: Semiconductor Electronics::Materials,devices & simple circuits";
    gotoxy(5,19);
   cout<<"Chapter 15:Communication Systems";
  }
    if(strcmp(filenames,"chemistry.dat")==0)
  {
   gotoxy(18,2);
   cout<<"Class XII sci - Chemistry";
   gotoxy(5,4);
   cout<<"Cha6pter 1: Solid state";
    gotoxy(5,5);
   cout<<"Chapter 2: Solutions";
    gotoxy(5,6);
   cout<<"Chapter 3: Electrochemistry";
    gotoxy(5,7);
   cout<<"Chapter 4: Chemical kinetics";
    gotoxy(5,8);
   cout<<"Chapter 5: Surface chemistry";
    gotoxy(5,9);
   cout<<"Chapter 6: General principles & processes of isolation of elements";
    gotoxy(5,10);
   cout<<"Chapter 7: P-block elements";
    gotoxy(5,11);
   cout<<"Chapter 8: D&F block elements";
    gotoxy(5,12);
   cout<<"Chapter 9: Coordination compounds";
    gotoxy(5,13);
   cout<<"Chapter 10: Haloalkanes and Haloarenes";
    gotoxy(5,14);
   cout<<"Chapter 11: Alcohols, Phenols & Ethers";
    gotoxy(5,16);
   cout<<"Chapter 12: Aldehydes, ketones & carboxylic acids";
    gotoxy(5,17);
   cout<<"Chapter 13: Organic compounds containing nitrogen";
    gotoxy(5,18);
   cout<<"Chapter 14: Biomolecules";
    gotoxy(5,19);
   cout<<"Chapter 15: Polemers";
    gotoxy(5,20);
   cout<<"Chapter 16: Chemistry in evreyday life";
  }
    if(strcmp(filenames,"biology.dat")==0)
  {
   gotoxy(18,2);
   cout<<"Class XII sci - Biology";
   gotoxy(5,4);
   cout<<"Chapter 1: Reproduction in organisms";
    gotoxy(5,5);
   cout<<"Chapter 2: Sexual reproduction in flowering plants";
    gotoxy(5,6);
   cout<<"Chapter 3: Human reproduction";
    gotoxy(5,7);
   cout<<"Chapter 4: Reproductive health";
    gotoxy(5,8);
   cout<<"Chapter 5: Principles of inheritance and variations";
    gotoxy(5,9);
   cout<<"Chapter 6: Molecular bases of inheritance";
    gotoxy(5,10);
   cout<<"Chapter 7: Evolution";
    gotoxy(5,11);
   cout<<"Chapter 8: Human health and diseases";
    gotoxy(5,12);
   cout<<"Chapter 9: Strategies for enhancement in food production";
    gotoxy(5,13);
   cout<<"Chapter 10: Microbes in human welfare";
    gotoxy(5,14);
   cout<<"Chapter 11: Biotechnology::principles and processes";
    gotoxy(5,16);
   cout<<"Chapter 12: Biotechnology and its applications";
    gotoxy(5,17);
   cout<<"Chapter 13: Organisms and population";
    gotoxy(5,18);
   cout<<"Chapter 14: Ecosystem";
    gotoxy(5,19);
   cout<<"Chapter 15: Biodiversity and conservation";
    gotoxy(5,20);
   cout<<"Chapter 16: Environmental issues";
  }
    if(strcmp(filenames,"account.dat")==0)
  {
   gotoxy(18,2);
   cout<<"Class XII com - Accountancy";
   gotoxy(5,4);
   cout<<"Chapter 1: FS of non profit organisation";
    gotoxy(5,5);
   cout<<"Chapter 2: Fundamentals of partnership and goodwill";
    gotoxy(5,6);
   cout<<"Chapter 3: Change in profit sharing ratio of partners";
    gotoxy(5,7);
   cout<<"Chapter 4: Admission of a partner";
    gotoxy(5,8);
   cout<<"Chapter 5: Retirement or death of a partner";
    gotoxy(5,9);
   cout<<"Chapter 6: Dissolution of partnership";
    gotoxy(5,10);
   cout<<"Chapter 7: Accounting for share capital";
    gotoxy(5,11);
   cout<<"Chapter 8: Accounting for debentures";
    gotoxy(5,12);
   cout<<"Chapter 9: Financial statement and analysis";
    gotoxy(5,13);
   cout<<"Chapter 10: Statement analysis tools and accounting ratios";
    gotoxy(5,14);
   cout<<"Chapter 11: Cash flow statement";
  }
    if(strcmp(filenames,"business.dat")==0)
  {
   gotoxy(18,2);
   cout<<"Class XII com - Business";
   gotoxy(5,4);
   cout<<"Chapter 1: Nature and significance of management";
    gotoxy(5,5);
   cout<<"Chapter 2: Principles of management";
    gotoxy(5,6);
   cout<<"Chapter 3: Business environment";
    gotoxy(5,7);
   cout<<"Chapter 4: Planning";
    gotoxy(5,8);
   cout<<"Chapter 5: Organising";
    gotoxy(5,9);
   cout<<"Chapter 6: Staffing";
    gotoxy(5,10);
   cout<<"Chapter 7: Directing";
    gotoxy(5,11);
   cout<<"Chapter 8: Controlling";
    gotoxy(5,12);
   cout<<"Chapter 9: Financial management";
    gotoxy(5,13);
   cout<<"Chapter 10: Financial market";
    gotoxy(5,14);
   cout<<"Chapter 11: Marketing management";
    gotoxy(5,16);
   cout<<"Chapter 12: Consumer protection";
  }
    if(strcmp(filenames,"economics.dat")==0)
  {
   gotoxy(18,2);
   cout<<"Class XII com - Economics";
   gotoxy(5,4);
   cout<<"Chapter 1: Natural income and related aggregates";
    gotoxy(5,5);
   cout<<"Chapter 2: Money and banking";
    gotoxy(5,6);
   cout<<"Chapter 3: Determination of income and employment";
    gotoxy(5,7);
   cout<<"Chapter 4: Government budget and the economy";
    gotoxy(5,8);
   cout<<"Chapter 5: Balance of payments and foreign exchange";
    gotoxy(5,9);
   cout<<"Chapter 6: Indian economy on the eve of independence";
    gotoxy(5,10);
   cout<<"Chapter 7: Indian economy 1950-90";
    gotoxy(5,11);
   cout<<"Chapter 8: Economic reforms since 1991";
    gotoxy(5,12);
   cout<<"Chapter 9: Poverty";
    gotoxy(5,13);
   cout<<"Chapter 10: Human capital formation in India";
    gotoxy(5,14);
   cout<<"Chapter 11: Rural development";
    gotoxy(5,15);
   cout<<"Chapter 12: Employment growthinformational and other issues";
    gotoxy(5,16);
   cout<<"Chapter 13: Infrastructure";
    gotoxy(5,17);
   cout<<"Chapter 14: Environment sustainable development";
    gotoxy(5,18);
   cout<<"Chapter 15: Development experiences India and neighbours";
  }
   gotoxy(5,21);
   cout<<"Enter chapter number you want to study :"<<" ";
   cin>>acptrno;
  getch();
   return (acptrno);
 }

//	CLASS NAME    : quiz
//	FUNCTION NAME : add
//	DETAILS       : IT ADDS THE RECORDS IN THE GIVEN FILE
void quiz :: add(char filenames[23],int acptrno)
{      clrscr();
  quiz q;
   lines line ;
    textbackground(BLUE) ;
   textcolor(YELLOW) ;
   int valid ;
   int t_ques_no=0;
   char ch ;
	textbackground(BLUE) ;
	textcolor(YELLOW) ;
	do
	{       clrscr();
		textbackground(BLUE) ;
		textcolor(YELLOW) ;
		line.box(1,1,79,23,218) ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;
		gotoxy(3,5) ;
		cout <<"question # " <<1;
		gotoxy(3,8) ;
		cout <<"question : " ;
		gotoxy(3,10) ;
		cout <<"answer 1 : " ;
		gotoxy(3,12) ;
		cout <<"answer 2 : " ;
		gotoxy(3,14) ;
		cout <<"answer 3 : " ;
		gotoxy(3,16) ;
		cout <<"solution 1 : " ;
		gotoxy(3,18);
		cout<<"solution 2 : " ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;
		gotoxy(3,25) ;
		cout <<"ENTER QUESTION" ;
		gotoxy(14,8) ;
		gets(ques1) ;
		if (ques1[0] == '0')
			return ;
		if (strlen(ques1) > 159 || strlen(ques1) == 0)
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(1,24) ;
			cout <<"LENGTH SHOULD NOT BE BLANK OR GREATER THAN 159" ;
			gotoxy(1,25) ;
			cout <<"Press any key to continue..." ;
			getch() ;
			gotoxy(1,24) ;	clreol() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(14,8) ; clreol() ;
		}
	} while ( !valid ) ;
	do
	{line.box(1,1,79,23,218) ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;
		gotoxy(3,25) ;
		cout <<"ENTER ANSWER FOR THE QUESTION" ;
		gotoxy(14,10) ;
		gets(ans11) ;
		if (ans11[0] == '0')
			return ;
		if (strlen(ans11) > 49)
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(1,24) ;
			cout <<"LENGTH SHOULD NOT GREATER THAN 49" ;
			gotoxy(1,25) ;
			cout <<"Press any key to continue..." ;
			getch() ;
			gotoxy(1,24) ;	clreol() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(14,10) ; clreol() ;
		}
	} while ( !valid ) ;
	do
	{line.box(1,1,79,23,218) ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;
		gotoxy(3,25) ;
		cout <<"ENTER ANSWER FOR THE QUESTION" ;
		gotoxy(14,12) ;
		gets(ans12) ;
		if (ans12[0] == '0')
			return ;
		if (strlen(ans12) > 49)
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(1,24) ;
			cout <<"LENGTH SHOULD NOT GREATER THAN 49" ;
			gotoxy(1,25) ;
			cout <<"Press any key to continue..." ;
			getch() ;
			gotoxy(1,24) ;	clreol() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(14,12) ; clreol() ;
		}
	} while ( !valid ) ;
	do
	{line.box(1,1,79,23,218) ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;
		gotoxy(3,25) ;
		cout <<"ENTER ANSWER FOR THE QUESTION" ;
		gotoxy(14,14) ;
		gets(ans13) ;
		if (ans13[0] == '0')
			return ;
		if (strlen(ans13) > 49)
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(1,24) ;
			cout <<"LENGTH SHOULD NOT GREATER THAN 49" ;
			gotoxy(1,25) ;
			cout <<"Press any key to continue..." ;
			getch() ;
			gotoxy(1,24) ;	clreol() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(14,14) ; clreol() ;
		}
	} while ( !valid ) ;
	do
	{line.box(1,1,79,23,218) ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;
		gotoxy(3,25) ;
		cout <<"ENTER CORRECT SOLUTION 1 FOR THE QUESTION (1/2/3)" ;
		gotoxy(16,16) ;
		sol11 = getche() ;
		if (sol11 == '0')
			return ;
		if (sol11 != '1' && sol11 != '2' && sol11 != '3')
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(14,16) ; clreol() ;
		}
	} while ( !valid ) ;
		do
	{line.box(1,1,79,23,218) ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;
		gotoxy(3,25) ;
		cout <<"ENTER CORRECT SOLUTION 2 FOR THE QUESTION (1/2/3)" ;
		gotoxy(16,18) ;
		sol12 = getche() ;
		if (sol12 == '0')
			return ;
		if (sol12 != '1' && sol12 != '2' && sol12 != '3')
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(14,16) ; clreol() ;
		}
	} while ( !valid ) ;
	do
	      { clrscr();
		line.box(1,1,79,23,218) ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;
		gotoxy(3,25) ;
		cout <<"ENTER EXPLANATION" ;
		gotoxy(14,8) ;
		gets(abs1) ;
		if (abs1[0] == '0')
			return ;
		if (strlen(abs1) > 499 || strlen(abs1) == 0)
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(1,24) ;
			cout <<"LENGTH SHOULD NOT BE BLANK OR GREATER THAN 159" ;
			gotoxy(1,25) ;
			cout <<"Press any key to continue..." ;
			getch() ;
			gotoxy(1,24) ;	clreol() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(14,8) ; clreol() ;
		}
	      } while ( !valid ) ;
	      t_ques_no++ ;
	      do
	      {  clrscr();
		textbackground(BLUE) ;
		textcolor(YELLOW) ;
		line.box(1,1,79,23,218) ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;
		gotoxy(3,5) ;
		cout <<"question # " <<2 ;
		gotoxy(3,8) ;
		cout <<"question : " ;
		gotoxy(3,10) ;
		cout <<"answer 1 : " ;
		gotoxy(3,12) ;
		cout <<"answer 2 : " ;
		gotoxy(3,14) ;
		cout <<"answer 3 : " ;
		gotoxy(3,16) ;
		cout <<"solution : " ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;
		gotoxy(3,25) ;
		cout <<"ENTER QUESTION" ;
		gotoxy(14,8) ;
		gets(ques2) ;
		if (ques2[0] == '0')
			return ;
		if (strlen(ques2) > 159 || strlen(ques2) == 0)
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(1,24) ;
			cout <<"LENGTH SHOULD NOT BE BLANK OR GREATER THAN 159" ;
			gotoxy(1,25) ;
			cout <<"Press any key to continue..." ;
			getch() ;
			gotoxy(1,24) ;	clreol() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(14,8) ; clreol() ;
		}
	} while ( !valid ) ;
	do
	{line.box(1,1,79,23,218) ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;
		gotoxy(3,25) ;
		cout <<"ENTER ANSWER FOR THE QUESTION" ;
		gotoxy(14,10) ;
		gets(ans21) ;
		if (ans21[0] == '0')
			return ;
		if (strlen(ans21) > 49)
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(1,24) ;
			cout <<"LENGTH SHOULD NOT GREATER THAN 49" ;
			gotoxy(1,25) ;
			cout <<"Press any key to continue..." ;
			getch() ;
			gotoxy(1,24) ;	clreol() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(14,10) ; clreol() ;
		}
	} while ( !valid ) ;
	do
	{line.box(1,1,79,23,218) ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;
		gotoxy(3,25) ;
		cout <<"ENTER ANSWER FOR THE QUESTION" ;
		gotoxy(14,12) ;
		gets(ans22) ;
		if (ans22[0] == '0')
			return ;
		if (strlen(ans22) > 49)
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(1,24) ;
			cout <<"LENGTH SHOULD NOT GREATER THAN 49" ;
			gotoxy(1,25) ;
			cout <<"Press any key to continue..." ;
			getch() ;
			gotoxy(1,24) ;	clreol() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(14,12) ; clreol() ;
		}
	} while ( !valid ) ;
	do
	{line.box(1,1,79,23,218) ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;
		gotoxy(3,25) ;
		cout <<"ENTER ANSWER FOR THE QUESTION" ;
		gotoxy(14,14) ;
		gets(ans23) ;
		if (ans23[0] == '0')
			return ;
		if (strlen(ans23) > 49)
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(1,24) ;
			cout <<"LENGTH SHOULD NOT GREATER THAN 49" ;
			gotoxy(1,25) ;
			cout <<"Press any key to continue..." ;
			getch() ;
			gotoxy(1,24) ;	clreol() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(14,14) ; clreol() ;
		}
	} while ( !valid ) ;
	do
	{line.box(1,1,79,23,218) ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;
		gotoxy(3,25) ;
		cout <<"ENTER CORRECT SOLUTION FOR THE QUESTION (1/2/3)" ;
		gotoxy(14,16) ;
		sol2 = getche() ;
		if (sol2 == '0')
			return ;
		if (sol2 != '1' && sol2 != '2' && sol2 != '3')
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(14,16) ; clreol() ;
		}
	} while ( !valid ) ;
	  t_ques_no++ ;
	  do
	      { clrscr();
		line.box(1,1,79,23,218) ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;
		gotoxy(3,25) ;
		cout <<"ENTER EXPLANATION" ;
		gotoxy(14,8) ;
		gets(abs2) ;
		if (abs2[0] == '0')
			return ;
		if (strlen(abs2) > 499 || strlen(abs2) == 0)
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(1,24) ;
			cout <<"LENGTH SHOULD NOT BE BLANK OR GREATER THAN 159" ;
			gotoxy(1,25) ;
			cout <<"Press any key to continue..." ;
			getch() ;
			gotoxy(1,24) ;	clreol() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(14,8) ; clreol() ;
		}
	      } while ( !valid ) ;
	gotoxy(1,25) ;	clreol() ;
	gotoxy(1,24) ;  clreol() ;
	gotoxy(72,25) ;
	cout <<"<0>=EXIT" ;
	gotoxy(3,19) ;
	cout <<"Do you want to save the record (y/n) : " ;
	do
	{
		line.box(1,1,79,23,218) ;
		valid = 1 ;
		gotoxy(42,19) ;
		ch = getche() ;
		ch = toupper(ch) ;
		if (ch == '0')
			return ;
		if (ch != 'Y' && ch != 'N')
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(42,19) ; clreol() ;
		}
	} while ( !valid ) ;
	if (ch == 'Y')
	{       ques_no=t_ques_no;
		cptrno=acptrno;
		fstream file ;
		file.open(filenames,ios::app|ios::binary);
		file.seekp(0,ios::end);
		file.write((char *) this, sizeof(quiz)) ;
		file.close() ;
		t_ques_no++ ;
	}
	gotoxy(72,25) ;
	cout <<"<0>=EXIT" ;
}

//	CLASS NAME    : quiz
//	FUNCTION NAME : modify_record
//	DETAILS       : IT MODIFY THE RECORD FOR THE GIVEN CHAPTER NO
//                      AND QUESTION NO. FROM THE GIVEN FILE
void quiz :: modify_record(char filenames[23], int t_ques_no,int acptrno)
{ clrscr();
  quiz q;
fstream file;
   lines line ;
   int valid, modified=0 ;
   char ch ;
    textbackground(BLUE) ;
   textcolor(YELLOW) ;
   line.line_hor(2,78,12,196) ;
   line.box(1,1,70,23,218) ;
   gotoxy(3,14) ;
   cout <<"QUESTION # " <<1 ;
   gotoxy(3,16) ;
   cout <<"QUESTION : " ;
   gotoxy(3,17) ;
   cout <<"ANSWER 1 : " ;
   gotoxy(3,18) ;
   cout <<"ANSWER 2 : " ;
   gotoxy(3,19) ;
   cout <<"ANSWER 3 : " ;
   gotoxy(3,20) ;
   cout <<"SOLUTION : " ;
   gotoxy(1,25) ;	clreol() ;
   line.line_hor(1,79,23,196) ;
   gotoxy(14,16) ;
   cout <<"Change (y/n)  " ;
   do
   {
	line.box(1,1,70,23,218) ;
	valid = 1 ;
	gotoxy(28,16) ;
	ch = getche() ;
	ch = toupper(ch) ;
	if (ch != 'Y' && ch != 'N')
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(28,16) ; clreol() ;
	}
   } while (!valid) ;
   valid = 0 ;

    while (!valid && ch == 'Y')
     { line.line_hor(2,78,12,196) ;
   line.box(1,1,70,23,218) ;
   gotoxy(3,14) ;
   cout <<"QUESTION # " <<1 ;
   gotoxy(3,16) ;
   cout <<"QUESTION : " ;
   gotoxy(3,17) ;
   cout <<"ANSWER 1 : " ;
   gotoxy(3,18) ;
   cout <<"ANSWER 2 : " ;
   gotoxy(3,19) ;
   cout <<"ANSWER 3 : " ;
   gotoxy(3,20) ;
   cout <<"SOLUTION 1 : " ;
   gotoxy(3,22);
   cout<<"SOLUTION 2 : ";
   gotoxy(1,25) ;	clreol() ;
   line.line_hor(1,79,23,196) ;
   textbackground(BLUE) ;
	textcolor(YELLOW) ;
	line.box(1,1,70,23,218) ;
	modified = 1 ;
	valid = 1 ;
	gotoxy(14,16) ; clreol() ;
	gotoxy(72,25) ;
	cout <<"<0>=EXIT" ;
	gotoxy(3,25) ;
	cout <<"ENTER QUESTION" ;
	gotoxy(14,16) ;
	gets(ques1) ;
	if (ques1[0] == '0')
		return ;
	if (strlen(ques1) >159 || strlen(ques1) == 0)
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(1,24) ;
		cout <<"LENGTH SHOULD NOT BLANK OR GREATER THAN 159" ;
		gotoxy(1,25) ;
		cout <<"Press any key to continue..." ;
		getch() ;
		gotoxy(1,24) ;	clreol() ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(14,16) ; clreol() ;
	}
   }
   gotoxy(1,25) ;	clreol() ;
   gotoxy(14,17) ;
   cout <<"Change (y/n)  " ;
   do
   {line.box(1,1,70,23,218) ;
	valid = 1 ;
	gotoxy(28,17) ;
	ch = getche() ;
	ch = toupper(ch) ;
	if (ch != 'Y' && ch != 'N')
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(28,17) ; clreol() ;
	}
   } while (!valid) ;
   valid = 0 ;
   while (!valid && ch == 'Y')
   {     textbackground(BLUE) ;
   textcolor(YELLOW) ;
	line.box(1,1,70,23,218) ;
	modified = 1 ;
	valid = 1 ;
	gotoxy(13,17) ; clreol() ;
	gotoxy(72,25) ;
	cout <<"<0>=EXIT" ;
	gotoxy(3,25) ;
	cout <<"ENTER ANSWER FOR THE QUESTION" ;
	gotoxy(14,17) ;
	gets(ans11) ;
	if (ans11[0] == '0')
		return ;
	if (strlen(ans11) > 99)
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(1,24) ;
		cout <<"LENGTH SHOULD NOT GREATER THAN 99" ;
		gotoxy(1,25) ;
		cout <<"Press any key to continue..." ;
		getch() ;
		gotoxy(1,24) ;	clreol() ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(14,17) ; clreol() ;
	}
   }
   gotoxy(1,25) ;	clreol() ;
   gotoxy(14,18) ;
   cout <<"Change (y/n)  " ;
   do
   {line.box(1,1,70,23,218) ;
	valid = 1 ;
	gotoxy(28,18) ;
	ch = getche() ;
	ch = toupper(ch) ;
	if (ch != 'Y' && ch != 'N')
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(28,18) ; clreol() ;
	 }
   } while (!valid) ;
   valid = 0 ;
   while (!valid && ch == 'Y')
   {     textbackground(BLUE) ;
   textcolor(YELLOW) ;
	line.box(1,1,70,23,218) ;
	modified = 1 ;
	valid = 1 ;
	gotoxy(14,18) ; clreol() ;
	gotoxy(72,25) ;
	cout <<"<0>=EXIT" ;
	gotoxy(3,25) ;
	cout <<"ENTER ANSWER FOR THE QUESTION" ;
	gotoxy(14,18) ;
	gets(ans12) ;
	if (ans12[0] == '0')
		return ;
	if (strlen(ans12) > 99)
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(1,24) ;
		cout <<"LENGTH SHOULD NOT GREATER THAN 99" ;
		gotoxy(1,25) ;
		cout <<"Press any key to continue..." ;
		getch() ;
		gotoxy(1,24) ;	clreol() ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(14,18) ; clreol() ;
	}
   }
   gotoxy(1,25) ;	clreol() ;
   gotoxy(14,19) ;
   cout <<"Change (y/n)  " ;
   do
   {line.box(1,1,70,23,218) ;
	valid = 1 ;
	gotoxy(28,19) ;
	ch = getche() ;
	ch = toupper(ch) ;
	if (ch != 'Y' && ch != 'N')
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(28,19) ; clreol() ;
	}
   } while (!valid) ;
   valid = 0 ;
   while (!valid && ch == 'Y')
   {line.box(1,1,70,23,218) ;
	modified = 1 ;
	valid = 1 ;
	gotoxy(14,19) ; clreol() ;
	gotoxy(72,25) ;
	 textbackground(BLUE) ;
   textcolor(YELLOW) ;
	cout <<"<0>=EXIT" ;
	gotoxy(3,25) ;
	cout <<"ENTER ANSWER FOR THE QUESTION" ;
	gotoxy(14,19) ;
	gets(ans13) ;
	if (ans13[0] == '0')
		return ;
	if (strlen(ans13) > 99)
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(1,24) ;
		cout <<"LENGTH SHOULD NOT GREATER THAN 99" ;
		gotoxy(1,25) ;
		cout <<"Press any key to continue..." ;
		getch() ;
		gotoxy(1,24) ;	clreol() ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(14,19) ; clreol() ;
	}
   }
   if (!modified)
	return ;
   do
   {line.box(1,1,70,23,218) ;
	gotoxy(1,25) ;	clreol() ;
	valid = 1 ;
	gotoxy(72,25) ;
	cout <<"<0>=EXIT" ;
	 textbackground(BLUE) ;
   textcolor(YELLOW) ;
	gotoxy(3,25) ;
	cout <<"ENTER CORRECT SOLUTION 1 FOR THE QUESTION (1/2/3)" ;
	gotoxy(14,20) ;
	sol11 = getche() ;
	if (sol11 == '0')
		return ;
	if (sol11 != '1' && sol11 != '2' && sol11 != '3')
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(14,20) ; clreol() ;
	}
   } while (!valid) ;

    do
   {line.box(1,1,70,23,218) ;
	gotoxy(1,25) ;	clreol() ;
	valid = 1 ;
	gotoxy(72,25) ;
	cout <<"<0>=EXIT" ;
	 textbackground(BLUE) ;
   textcolor(YELLOW) ;
	gotoxy(3,25) ;
	cout <<"ENTER CORRECT SOLUTION 2 FOR THE QUESTION (1/2/3)" ;
	gotoxy(14,20) ;
	sol12 = getche() ;
	if (sol12 == '0')
		return ;
	if (sol12 != '1' && sol12 != '2' && sol12 != '3')
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(14,20) ; clreol() ;
	}
   } while (!valid) ;
	 do
	      { clrscr();
		line.box(1,1,79,23,218) ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;

		gotoxy(3,25) ;
		cout <<"ENTER EXPLANATION" ;
		gotoxy(14,8) ;
		gets(abs1) ;
		if (abs1[0] == '0')
			return ;
		if (strlen(abs1) > 159 || strlen(abs1) == 0)
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(1,24) ;
			cout <<"LENGTH SHOULD NOT BE BLANK OR GREATER THAN 159" ;
			gotoxy(1,25) ;
			cout <<"Press any key to continue..." ;
			getch() ;
			gotoxy(1,24) ;	clreol() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(14,8) ; clreol() ;
		}
	      } while ( !valid ) ;
   gotoxy(1,25) ; clreol() ;
   gotoxy(1,24) ; clreol() ;
   gotoxy(1,22) ;
   t_ques_no++ ;
  valid = 0 ;
    while (!valid && ch == 'Y')
     {   clrscr();
      line.line_hor(2,78,12,196) ;
   line.box(1,1,70,23,218) ;
   gotoxy(3,14) ;
   cout <<"QUESTION # " <<2 ;
   gotoxy(3,16) ;
   cout <<"QUESTION : " ;
   gotoxy(3,17) ;
   cout <<"ANSWER 1 : " ;
   gotoxy(3,18) ;
   cout <<"ANSWER 2 : " ;
   gotoxy(3,19) ;
   cout <<"ANSWER 3 : " ;
   gotoxy(3,20) ;
   cout <<"SOLUTION : " ;
   gotoxy(1,25) ;	clreol() ;
   line.line_hor(1,79,23,196) ;
   textbackground(BLUE) ;
	textcolor(YELLOW) ;
	line.box(1,1,70,23,218) ;
	modified = 1 ;
	valid = 1 ;
	gotoxy(14,16) ; clreol() ;
	gotoxy(72,25) ;
	cout <<"<0>=EXIT" ;
	gotoxy(3,25) ;
	cout <<"ENTER QUESTION" ;
	gotoxy(14,16) ;
	gets(ques2) ;
	if (ques2[0] == '0')
		return ;
	if (strlen(ques2) >159 || strlen(ques2) == 0)
	{       valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(1,24) ;
		cout <<"LENGTH SHOULD NOT BLANK OR GREATER THAN 159" ;
		gotoxy(1,25) ;
		cout <<"Press any key to continue..." ;
		getch() ;
		gotoxy(1,24) ;	clreol() ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(14,16) ; clreol() ;
	}
   }
   gotoxy(1,25) ;	clreol() ;
   gotoxy(14,17) ;
   cout <<"Change (y/n)  " ;
   do
   {line.box(1,1,70,23,218) ;
	valid = 1 ;
	gotoxy(28,17) ;
	ch = getche() ;
	ch = toupper(ch) ;
	if (ch != 'Y' && ch != 'N')
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(28,17) ; clreol() ;
	}
   } while (!valid) ;
   valid = 0 ;
   while (!valid && ch == 'Y')
   {     textbackground(BLUE) ;
   textcolor(YELLOW) ;
	line.box(1,1,70,23,218) ;
	modified = 1 ;
	valid = 1 ;
	gotoxy(13,17) ; clreol() ;
	gotoxy(72,25) ;
	cout <<"<0>=EXIT" ;
	gotoxy(3,25) ;
	cout <<"ENTER ANSWER FOR THE QUESTION" ;
	gotoxy(14,17) ;
	gets(ans21) ;
	if (ans21[0] == '0')
		return ;
	if (strlen(ans21) > 99)
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(1,24) ;
		cout <<"LENGTH SHOULD NOT GREATER THAN 99" ;
		gotoxy(1,25) ;
		cout <<"Press any key to continue..." ;
		getch() ;
		gotoxy(1,24) ;	clreol() ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(14,17) ; clreol() ;
	}
   }
   gotoxy(1,25) ;	clreol() ;
   gotoxy(14,18) ;
   cout <<"Change (y/n)  " ;
   do
   {line.box(1,1,70,23,218) ;
	valid = 1 ;
	gotoxy(28,18) ;
	ch = getche() ;
	ch = toupper(ch) ;
	if (ch != 'Y' && ch != 'N')
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(28,18) ; clreol() ;
	  }
   } while (!valid) ;
   valid = 0 ;
   while (!valid && ch == 'Y')
   {     textbackground(BLUE) ;
   textcolor(YELLOW) ;
	line.box(1,1,70,23,218) ;
	modified = 1 ;
	valid = 1 ;
	gotoxy(14,18) ; clreol() ;
	gotoxy(72,25) ;
	cout <<"<0>=EXIT" ;
	gotoxy(3,25) ;
	cout <<"ENTER ANSWER FOR THE QUESTION" ;
	gotoxy(14,18) ;
	gets(ans22) ;
	if (ans22[0] == '0')
		return ;
	if (strlen(ans22) > 99)
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(1,24) ;
		cout <<"LENGTH SHOULD NOT GREATER THAN 99" ;
		gotoxy(1,25) ;
		cout <<"Press any key to continue..." ;
		getch() ;
		gotoxy(1,24) ;	clreol() ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(14,18) ; clreol() ;
	}
   }
   gotoxy(1,25) ;	clreol() ;
   gotoxy(14,19) ;
   cout <<"Change (y/n)  " ;
   do
   {   line.box(1,1,70,23,218) ;
	valid = 1 ;
	gotoxy(28,19) ;
	ch = getche() ;
	ch = toupper(ch) ;
	if (ch != 'Y' && ch != 'N')
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(28,19) ; clreol() ;
	}
   } while (!valid) ;
   valid = 0 ;
   while (!valid && ch == 'Y')
   {line.box(1,1,70,23,218) ;
	modified = 1 ;
	valid = 1 ;
	gotoxy(14,19) ; clreol() ;
	gotoxy(72,25) ;
	 textbackground(BLUE) ;
   textcolor(YELLOW) ;
	cout <<"<0>=EXIT" ;
	gotoxy(3,25) ;
	cout <<"ENTER ANSWER FOR THE QUESTION" ;
	gotoxy(14,19) ;
	gets(ans23) ;
	if (ans23[0] == '0')
		return ;
	if (strlen(ans23) > 99)
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(1,24) ;
		cout <<"LENGTH SHOULD NOT GREATER THAN 99" ;
		gotoxy(1,25) ;
		cout <<"Press any key to continue..." ;
		getch() ;
		gotoxy(1,24) ;	clreol() ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(14,19) ; clreol() ;
	}
   }
   if (!modified)
	return ;
   do
   {line.box(1,1,70,23,218) ;
	gotoxy(1,25) ;	clreol() ;
	valid = 1 ;
	gotoxy(72,25) ;
	cout <<"<0>=EXIT" ;
	 textbackground(BLUE) ;
   textcolor(YELLOW) ;
	gotoxy(3,25) ;
	cout <<"ENTER CORRECT SOLUTION FOR THE QUESTION (1/2/3)" ;
	gotoxy(14,20) ;
	sol2 = getche() ;
	if (sol2 == '0')
		return ;
	if (sol2 != '1' && sol2 != '2' && sol2 != '3')
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(14,20) ; clreol() ;
	}
   } while (!valid) ;
   gotoxy(1,25) ; clreol() ;
   gotoxy(1,24) ; clreol() ;
   gotoxy(1,22) ;
    t_ques_no++ ;
	 do
	      { clrscr();
		line.box(1,1,79,23,218) ;
		valid = 1 ;
		gotoxy(1,25) ;	clreol() ;
		gotoxy(72,25) ;
		cout <<"<0>=EXIT" ;
		gotoxy(3,25) ;
		cout <<"ENTER EXPLANATION" ;
		gotoxy(14,8) ;
		gets(abs2) ;
		if (abs2[0] == '0')
			return ;
		if (strlen(abs2) > 159 || strlen(abs2) == 0)
		{       valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(1,24) ;
			cout <<"LENGTH SHOULD NOT BE BLANK OR GREATER THAN 159" ;
			gotoxy(1,25) ;
			cout <<"Press any key to continue..." ;
			getch() ;
			gotoxy(1,24) ;	clreol() ;
			gotoxy(1,25) ;	clreol() ;
			gotoxy(14,8) ; clreol() ;
		}
	      } while ( !valid ) ;
	  gotoxy(1,25) ; clreol() ;
   gotoxy(1,24) ; clreol() ;
   gotoxy(1,22) ;
   t_ques_no++ ;
   gotoxy(1,25) ; clreol() ;
   gotoxy(1,24) ; clreol() ;
   gotoxy(1,22) ;
  cout <<"Do you want to save the record (y/n)  : " ;
   do
   {line.box(1,1,70,23,218) ;
	valid = 1 ;
	gotoxy(41,22) ;
	ch = getche() ;
	ch = toupper(ch) ;
	if (ch != 'Y' && ch != 'N')
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(41,22) ; clreol() ;
	}
   } while ( !valid ) ;
   if (ch == 'N')
	return ;
file.open(filenames, ios::out | ios::ate|ios::binary) ;
while(file.read((char*)this,sizeof(quiz)))
  {if(this->cptrno==acptrno)
    {  int recno ;
   recno = t_ques_no ;
   int location ;
   location = (recno-1) * sizeof(quiz) ;
   file.seekp(location) ;
   file.write((char *) this, sizeof(quiz)) ;
   file.close() ;}
   clrscr() ;
   sound(500) ;
   delay(100) ;
   nosound() ;}
   gotoxy(1,14) ;
   cout <<"Record Modified" ;
line.line_hor(1,79,24,196) ;
   gotoxy(1,25) ;
   cout <<"Press any key to continue..." ;
   getch() ;
}
//	CLASS NAME    : quiz
//	FUNCTION NAME : record_count
//	DETAILS       : IT RETURNS THE NO. OF RECORD IN THE
//                   GIVEN FILE
int  quiz :: record_count(char filename[23],int acptrno)

{ fstream file ;
   file.open(filename, ios::in) ;
   file.seekg(0,ios::beg) ;
   int t=0 ;
   while (file.read((char *) this, sizeof(quiz)))
       {if(this->cptrno==acptrno)
	t++ ;}
   file.close() ;
   return t ;
}
//	CLASS NAME    : quiz
//	FUNCTION NAME : found_record
//	DETAILS       : IT SEARCH THE GIVEN RECORDS IN THE
//                   GIVEN FILE AND RETURN 0 IF NOT FOUND
int  quiz :: found_record(char filenames[23], int acptrno)
{   fstream file ;
   file.open(filenames, ios::in) ;
   file.seekg(0,ios::beg) ;
   int found=0 ;
   while (file.read((char *) this, sizeof(quiz)))
   {   if(this->cptrno==acptrno)
       {
		found++ ;
		break ;
       }
   }
   file.close() ;
   return found ;
}
//	CLASS NAME    : quiz
//	FUNCTION NAME : display_record
//	DETAILS       : IT DISPLAY THE RECORD FOR THE GIVEN
//                   QUESTION NO. FROM THE GIVEN FILE
void quiz :: display_record(char filenames[23], int acptrno)
{  fstream file ;
   file.open(filenames, ios::in) ;
   file.seekg(0,ios::beg) ;
   while (file.read((char *) this, sizeof(quiz)))
   {   if(this->cptrno==acptrno)
       {        gotoxy(3,3) ;
		cout <<"question # " <<1 ;
		gotoxy(3,7) ;
		cout <<"question : " <<ques1 ;
		gotoxy(3,8) ;
		cout <<"answer 1 : " <<ans11 ;
		gotoxy(3,9) ;
		cout <<"answer 2 : " <<ans12 ;
		gotoxy(3,10) ;
		cout <<"answer 3 : " <<ans13 ;
			gotoxy(3,3) ;
		cout <<"question # " <<2 ;
		gotoxy(3,7) ;
		cout <<"question : " <<ques2 ;
		gotoxy(3,8) ;
		cout <<"answer 1 : " <<ans21 ;
		gotoxy(3,9) ;
		cout <<"answer 2 : " <<ans22 ;
		gotoxy(3,10) ;
		cout <<"answer 3 : " <<ans23 ;
		break ;
	  }
   }
   file.close() ;
}
//	CLASS NAME    : quiz
//	FUNCTION NAME : delete_record
//	DETAILS       : IT DELETE THE RECORD FOR THE GIVEN
//                      QUESTION NO. FROM THE GIVEN FILE
void quiz :: delete_record(char filenames[23], int t_ques_no, int acptrno)
{  fstream file ;
   file.open(filenames, ios::in) ;
   fstream temp ;
   temp.open("temp.dat", ios::out) ;
   file.seekg(0,ios::beg) ;
   while (file.read((char *) this, sizeof(quiz)))
   {   if(this->cptrno==acptrno)
       { if (ques_no != t_ques_no)
		temp.write((char *) this, sizeof(quiz)) ;
       }
   }
   file.close() ;
   temp.close() ;
   file.open(filenames, ios::out) ;
   temp.open("temp.dat", ios::in) ;
   temp.seekg(0,ios::beg) ;
   t_ques_no = 1 ;
   while (temp.read((char *) this, sizeof(quiz)))
   {   if(this->cptrno==acptrno)
       {ques_no = t_ques_no ;
	if (temp.eof())
		break ;
	file.write((char *) this, sizeof(quiz)) ;
	t_ques_no++ ;
       }
   }
   file.close() ;
   temp.close() ;
}

//	CLASS NAME    : quiz
//	FUNCTION NAME : modify
//	DETAILS       : IT GIVE THE CHAPTER NO & QUESTION NO. TO MODIFY
//                      RECORD FROM THE GIVEN FILE
void quiz :: modify(char filenames[23],int acptrno)
{
   lines line ;
   clrscr() ;
   int valid ;
   int t_ques_no=0, t;
   char t1_ques_no[5] ;
   char ch ;
   line.box(1,1,79,23,218) ;
   gotoxy(72,25) ;
   cout <<"<0>=EXIT" ;
   gotoxy(3,3) ;
   cout <<"Enter question no. to be modify  : " ;
   do
   {gotoxy(38,3) ;
	gets(t1_ques_no) ;
   } while (strlen(t1_ques_no) == 0) ;
   t = atoi(t1_ques_no) ;
   t_ques_no = t ;
   if (t1_ques_no[0] == '0')
	return ;
   if (!found_record(filenames,acptrno))
   {
	sound(500) ;
	delay(100) ;
	nosound() ;
	gotoxy(3,15) ;
	cout <<"question not found" ;
	line.line_hor(2,78,24,196) ;
	gotoxy(1,25) ;
	cout <<"Press any key to continue..." ;
	getch() ;
	return ;
   }
   clrscr() ;
   display_record(filenames,acptrno) ;
   gotoxy(3,12) ;
   cout <<"Do you want to modify this Record (y/n) : " ;
   do
   {valid = 1 ;
	gotoxy(45,12) ;
	ch = getche() ;
	ch = toupper(ch) ;
	if (ch != 'Y' && ch != 'N')
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(45,10) ; clreol() ;
	}
   } while (!valid ) ;
   if (ch == 'N')
	return ;
   modify_record(filenames,t_ques_no,acptrno) ;
}

//	CLASS NAME    : quiz
//	FUNCTION NAME : play
//	DETAILS       : IT CREATES SCREEN FOR PLAYING QUIZ
//                      TO THE PLAYER FOR THE GIVEN FILE NAME
//                      .
void quiz :: play(char filenames[23],char filenamen[23],int acptrno)
{
   clrscr() ;
   int valid ;
   lines line ;
   char name[20] ;
   gotoxy(3,3) ;
   cout <<"Enter your name : " ;
   do
   {line.box(1,1,39,25,219) ;
	valid = 1 ;
	gotoxy(30,24) ;
	cout <<"<0>=EXIT" ;
	gotoxy(21,3) ;
	gets(name) ;
	strupr(name) ;
	if (name[0] == '0')
		return ;
	if (strlen(name) > 18)
	{
		valid = 0 ;
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(30,24) ;
		cout <<"        " ;
		gotoxy(3,23) ;
		cout <<"LENGTH SHOULD NOT GREATER THAN 18" ;
		gotoxy(3,24) ;
		cout <<"Press any key to continue..." ;
		getch() ;
		gotoxy(3,23) ;
		cout <<"                                  " ;
		gotoxy(3,24) ;
		cout <<"                             " ;
		gotoxy(21,3) ;
		cout <<"                  " ;
	}
   } while ( !valid ) ;
    char t_sol, ch,career[50] ;
   int  played=0 ;
   fstream file ;
   file.open(filenames,ios::in|ios::binary) ;
   file.seekg(0,ios::beg) ;
   while (file.read((char *) this, sizeof(quiz)))
   {
    if(this->cptrno==acptrno)
       { textbackground(BLUE) ;
	 textcolor(YELLOW) ;
	line.box(1,1,70,25,219) ;
	clrscr() ;
	valid = 1 ;
	gotoxy(28,24) ;
	cout <<"<ESC>=Exit" ;
	gotoxy(3,4) ;
	cout <<"question # " <<1 ;
	gotoxy(3,6) ;
	cout <<"question : " <<ques1 ;
	gotoxy(3,10) ;
	cout <<"answer 1 : " <<ans11 ;
	gotoxy(3,11) ;
	cout <<"answer 2 : " <<ans12 ;
	gotoxy(3,12) ;
	cout <<"answer 3 : " <<ans13 ;
	gotoxy(3,14) ;
	cout <<"Enter correct solution : " ;
	int i=0, j=0, time=10 ;
	do
	{valid = 1 ;
		gotoxy(3,21) ;
		cout <<"Time : " <<time ;
		gotoxy(28,12) ;
		do
		{delay(1) ;
			i++ ;
			j++ ;
			if (j == 600)
			{
				j = 0 ;
				time-- ;
				gotoxy(11,21) ;
				cout <<" " ;
				gotoxy(10,21) ;
				cout <<time ;
				gotoxy(28,14) ;
			}
		} while (!kbhit() && i<6000) ;
		if (i >= 6000)
		{
			played++ ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(13,16) ;
			cout <<"Sorry Time up!" ;
			gotoxy(1,1) ;
			getch() ;
			file.close();

			return ;
		}
		gotoxy(3,21) ;
		cout <<"             " ;
		gotoxy(28,14) ;
		t_sol = getche() ;
		if (t_sol == 27)
		{       file.close();

			return ;
		}
		if (t_sol != '1' && t_sol != '2' && t_sol != '3')
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(28,12) ;
			cout <<"  " ;
		}
	} while (!valid) ;
	played++ ;
	if (t_sol != sol11 || t_sol != sol12)
	{
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(14,16) ;
		cout <<"wrong answer" ;
		gotoxy(13,17) ;
		cout <<"Correct answer : " <<sol11 ;
		gotoxy(1,1) ;
		ch = getch() ;
		gotoxy(14,15) ;
		cout <<"            " ;
		gotoxy(13,16) ;
		cout <<"                    " ;
		gotoxy(3,24) ;
		cout <<"                                    " ;
	}
	else
	{

		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(16,16) ;
		cout <<"GOOD ! CORRECT ANSWER" ;
		gotoxy(1,1) ;
		ch = getch() ;
	}

	clrscr();
	gotoxy(14,4);
	cout<<"EXPLANATION";
	gotoxy(5,7);
	puts(abs1);
	getch();
	clrscr();
	gotoxy(3,4) ;
	cout <<"question # " <<2 ;
	gotoxy(3,6) ;
	cout <<"question : " <<ques2 ;
	gotoxy(3,10) ;
	cout <<"answer 1 : " <<ans21 ;
	gotoxy(3,11) ;
	cout <<"answer 2 : " <<ans22 ;
	gotoxy(3,12) ;
	cout <<"answer 3 : " <<ans23 ;
	gotoxy(3,14) ;
	cout <<"Enter correct solution : " ;
	i=0, j=0, time=10 ;
	do
	{valid = 1 ;
		gotoxy(3,21) ;
		cout <<"Time : " <<time ;
		gotoxy(28,12) ;
		do
		 {delay(1) ;
			i++ ;
			j++ ;
			if (j == 600)
			{
				j = 0 ;
				time-- ;
				gotoxy(11,21) ;
				cout <<" " ;
				gotoxy(10,21) ;
				cout <<time ;
				gotoxy(28,14) ;
			}
		} while (!kbhit() && i<6000) ;
		if (i >= 6000)
		{
			played++ ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(13,16) ;
			cout <<"Sorry Time up!" ;
			gotoxy(1,1) ;
			getch() ;
			file.close();
			return ;
		}
		gotoxy(3,21) ;
		cout <<"             " ;
		gotoxy(28,14) ;
		t_sol = getche() ;
		if (t_sol == 27)
		{       file.close();

			return ;
		}
		if (t_sol != '1' && t_sol != '2' && t_sol != '3')
		{
			valid = 0 ;
			sound(500) ;
			delay(100) ;
			nosound() ;
			gotoxy(28,12) ;
			cout <<"  " ;
		}
	} while (!valid) ;
	played++ ;
	if (t_sol != sol2)
	{
		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(14,16) ;
		cout <<"wrong answer" ;
		gotoxy(13,17) ;
		cout <<"Correct answer : " <<sol2 ;
		gotoxy(1,1) ;
		ch = getch() ;
		gotoxy(14,15) ;
		cout <<"            " ;
		gotoxy(13,16) ;
		cout <<"                    " ;
		gotoxy(3,24) ;
		cout <<"                                    " ;
	}
	else
	{

		sound(500) ;
		delay(100) ;
		nosound() ;
		gotoxy(16,16) ;
		cout <<"GOOD ! CORRECT ANSWER" ;
		gotoxy(1,1) ;
		ch = getch() ;
	}
	clrscr();
	gotoxy(14,4);
	cout<<"EXPLANATION";
	gotoxy(5,7);
	puts(abs2);
	getch();
   }
  }
	gotoxy(3,22) ;
   cout <<"No more questions available" ;
   clrscr();
   file.close();
   char f[100];
   int count = 0;
   file.open(filenamen,ios::in);
   while(file.getline(f,100))
   {cout<<f;
    ++count;
    if(count==20)
    {count=0;
     getch();
    }
    if(file.eof())
    break;
   }
   clrscr();
  gotoxy(8,3);
   cout<<("MESSAGE FROM ADMIN");
   gotoxy(5,6);
   cout<<name<<" You played well and studied during play...";
   gotoxy(6,8);
   cout<<"How was your experience please comment...";
   gotoxy(14,16);
   cout<<"THANK YOU";
    gotoxy(3,22) ;
   cout <<"No more questions available" ;
   getch();
   if(!played)
   return;
 }
//	FUNCTION NAME : main
//	DETAILS       : IT CALLS THE MENU FUNCTION.
void main(void)
{
   menu m ;
   m.main_menu() ;
}
//                  END OF PROJECT