//PROJECT ON "BUS RESERVATION SYSTEM"//
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
struct date
{
	int d,m,y;
};
struct time
{
	int h,m;
};
void main()
{
clrscr();
int n,age,btype,route,seatno,gender;

time_t t;
	time(&t);
repeat:
cout<<setw(20)<<"-:WELCOME TO BUS RESERVATION SYSTEM:-";
cout<<"\n\t\t\t1.PROCESS\n";
cout<<"\n\t\t\t2.EXIT\n";
cout<<"\n\t WHAT DO YOU WANT --> ";
cin>>n;
switch(n)
{
default : cout<<"Choose Correct Choice  ";
	 goto repeat;

case 2:
	exit(0);
	break;
case 1:
	;
}
//NAME.......................................
char s6[80];
	cout<<"\n\nName of Passenger = ";
	gets(s6);
//AGE........................................
	cout<<"\n Age of Passenger = ";
	cin>>age;

//SEX........................................
	cout<<"\n\n\t\t1.MALE";
	cout<<"\n\t\t2.FEMALE";
	cout<<"\nYOUR GENDER=>";
	cin>>gender;
//ROUTE......................................
	rout:
	cout<<"\n\t\t1.MUMBAI TO KOLHAPUR\n";
	cout<<"\t\t2.MUMBAI TO GOA\n";
	cout<<"\t\t3.MUMBAI TO NASHIK\n";
	cout<<"\t\t4.MUMBAI TO RATNAGIRI\n";
	cout<<"\t\t5.MUMBAI TO PUNE\n";
	cout<<"\t\t6.MUMBAI TO GUJRAT\n";
	cout<<"\n\nEnter Bus Route=>";
	cin>>route;
	if(route>6)
	{
		cout<<"PLEASE CHOOSE VALID ROUTE...........";
		goto rout;
	}


//BUS TYPE....................................
	top:
	cout<<"\n\n\t\t1.Ordinary\n";
	cout<<"\t\t2.Luxury";
	cout<<"\nENTER TYPE =";
	cin>>btype;
	if(btype>2)
	{
		cout<<"YOUR CHOICE IS INVALID......";
		goto top;
	}

//SEAT NO.............................................
	seat:
	cout<<"\nENTER SEAT NUMBER= ";
	cin>>seatno;
	if(seatno>45)
	{
		cout<<"ENTER VALID SEAT NUMBER.............";
		goto seat;
	}


//JOURNEY DATE................................
struct date d1;
	date1:
	cout<<"\n\nEnter journey date=\n ";
	cout<<"dd : ";
	cin>>d1.d;
	if(d1.d>31)
	{
		cout<<"ENTER VALID DATE..............";
		goto date1;
	}
	date2:
	cout<<"\nmm : ";
	cin>>d1.m;
	if(d1.m>12)
	{
		cout<<"ENTER VALID MONTH..............";
		goto date2;
	}
	date3:
	cout<<"\nyyyy : ";
	cin>>d1.y;
	if(d1.y<2000)
	{
		cout<<"ENTER VALID YEAR FROM 2000..............";
		goto date3;
	}

//JOURNEY TIME................................
struct time t1;
	cout<<"\n\nEnter journey time=\nHH: ";
	cin>>t1.h;
	cout<<"\nMM: ";
	cin>>t1.m;




clrscr();

//Receipt
	cout<<"===============================================================================";
	cout<<"\n\n\n\n"<<setw(50)<<"BUS RESERVATION SYSTEM";
	cout<<"\n\n\n\n"<<"===============================================================================";
	cout<<"\n\n\n"<<setw(55)<<"JOURNEY CUM RESERVATION TICKET";
	cout<<"\n--------------------------------------------------------------------------------";
	cout<<"\n\n\n"<<setw(20)<<"JOURNEY DATE :"<<d1.d<<"/"<<d1.m<<"/"<<d1.y;
	cout<<setw(40)<<"JOURNEY TIME :"<<t1.h<<":"<<t1.m;


	cout<<"\n\n\n\n"<<setw(30)<<"ROUTE :";
	switch(route)
	{
		case 1:
			cout<<"MUMBAI TO KOLHAPUR";
			break;
		case 2:
			cout<<"MUMBAI TO GOA";
			break;
		case 3:
			cout<<"MUMBAI TO NASHIK";
			break;
		case 4:
			cout<<"MUMBAI TO RATNAGIRI";
			break;
		case 5:
			cout<<"MUMBAI TO PUNE";
			break;
		case 6:
			cout<<"MUMBAI TO NAGPUR";
			break;
	    }

	cout<<"\n\n\n"<<setw(20)<<"TYPE OF BUS:";

		switch(btype)
		{
			case 1:
				cout<<"ORDINARY";
				break;
			case 2:
				cout<<"LUXURY";
				break;
		}

	cout<<"\n\n\n"<<setw(20)<<"NAME : ";
	puts(s6);

	cout<<"\n\n"<<setw(10)<<"SEAT NO"<<"\tAge"<<"\tSex"<<"\tFare\n\n\t";
//seat number.........................
cout<<seatno;

//age..............................
cout<<"\t"<<age;


//gender........................

	switch(gender)
	{
	case 1:
		cout<<"\tMALE\t";
		break;
	case 2:
		cout<<"\tFEMALE\t";
		break;
	}
//fare.......................
	if(route==1)
	{
		if(age<=14)
		{
			if(btype==1)
				cout<<"200";
			else
				cout<<"250";
		}
		else
		{
			if(btype==1)
				cout<<"400";
			else
				cout<<"450";
		}
	}
	else if(route==2)
	{
			if(age<=14)
			{
				if(btype==1)
					cout<<"250";
				else
					cout<<"300";
			}
			else
			{
			if(btype==1)
				cout<<"500";
			else
				cout<<"550";
			}
	}
	else if(route==3)
	{
		if(age<=14)
		{
			if(btype==1)
				cout<<"200";
			else
				cout<<"250";
		}
		else
		{
			if(btype==1)
				cout<<"400";
			else
				cout<<"450";
		}
	}
	else if(route==4)
	{
		if(age<=14)
		{
			if(btype==1)
				cout<<"175";
			else
				cout<<"225";
		}
		else
		{
			if(btype==1)
				cout<<"350";
			else
				cout<<"400";
		}
	}
	else if(route==5)
	{
		if(age<=14)
		{
			if(btype==1)
				cout<<"75";
			else
				cout<<"125";
		}
		else
		{
			if(btype==1)
				cout<<"150";
			else
				cout<<"200";
		}
	}
	else if(route==6)
	{
		if(age<=14)
		{
			if(btype==1)
				cout<<"175";
			else
				cout<<"225";
		}
		else
		{
			if(btype==1)
				cout<<"350";
			else
				cout<<"400";
		}
	}

//..............................................................
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n"<<setw(50)<<ctime(&t);
	cout<<"\n-------------------------:HAPPY JOURNEY:-------------------------------";

getch();
}





