#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <process.h>
#include <iomanip.h>

void roundoff (float n,int k)
{
	cout.setf(ios::fixed|ios::showpoint);
	cout<<setprecision(k)<<n;
}

void roundoff(float n)
{
	float temp=n;
	double x,y;
	x=floor(temp);
	if(n-x>=0.5)
	y=ceil(n);
	else if (n-x<0.5)
	y=floor(n);
	else
	y=n;
	cout<<"Rounded off num = "<<y<<'\n';
}

void main ()
{
	clrscr();
	int x;
	char ch;
	do
	{
		clrscr();
		cout<<'\n'<<'\n'<<'\t'<<"------Roundoff------"<<'\n'<<'\n'<<'\t';
		cout<<"R Round-Off          1"<<'\n'<<'\n'<<'\t';
		cout<<"Setprecision         2"<<'\n'<<'\n'<<'\t';
		cout<<"Exit                 3"<<'\n'<<'\n'<<'\t';
		cout<<"Enter Your choice     ";
		cin>>x;
		switch(x)
		{
			case 1 :
			{   	clrscr();
				float y;
				cout<<"Enter the number"<<'\n';
				cin>>y;
				roundoff(y);
				break;
			}
			case 2 :
			{   	clrscr();
				float n;
				int k;
				cout<<"Enter a number"<<'\n';
				cin>>n;
				cout<<"Enter the decimal places"<<'\n';
				cin>>k;
				roundoff(n,k);
				break;
			}
			case 3 :
			{ 	exit(0);
				break;
			}
			default :
			{ 	cout<<"Wrong Option";
				getch();
				exit(0);
			}
		}
		cout<<'\n'<<"Do you want to continue...Y/N"<<'\n';
		cin>>ch;
	}
	while (ch=='y'||ch=='Y');
	getch();
}








