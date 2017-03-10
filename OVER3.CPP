# include<iostream.h>
# include<conio.h>
# include<process.h>

struct complex
{
	int r,i ;
} ;

void sum (int a,int b);
void sum (int a);
void sum (int a[20],int n) ;
complex sum (complex c1,complex c2);


void sum (int a,int b)
{
	int sum = a+b;
	cout<<" Sum = "<<sum<<'\n';
}

void sum (int n)
{
	int sum=0;
	for (int i=1;i<=n;i++)
	sum+=i;
	cout<<"Sum = "<<sum<<'\n';
}

void sum (int a[20],int n)
{
	float avg,t=0.0;
	for (int i=0;i<=n-1;i++)
	{
		cout<<"Enter integer "<<i+1<<'\n';
		cin>>a[i];
		t+=a[i];
	}
	avg=t/n;
	cout<<" Total   = "<<t<<'\n';
	cout<<" Average = "<<avg<<'\n';
}

complex sum (complex c1,complex c2)
{
	complex c;
	c.r = c1.r + c2.r ;
	c.i = c1.i + c2.i ;
	if ( c.i >= 0 )
	cout<<"Sum of two complex numbers = "<< c.r<<" + "<< c.i<<"i";
	else
	cout<<"Sum of two complex numbers = "<< c.r<<" "<< c.i << "i";
}
void main ()
{
	char ch;
	int x;
	do
	{
		clrscr();
		cout<<"------SUM------"<<'\n'<<'\n'<<'\t';
		cout<<"  2 integers              1  "<<'\n'<<'\n'<<'\t';
		cout<<"  Naturals upto N         2  "<<'\n'<<'\n'<<'\t';
		cout<<"  Array of integers       3  "<<'\n'<<'\n'<<'\t';
		cout<<"  Complex Numbers         4  "<<'\n'<<'\n'<<'\t';
		cout<<"  Exit                    5  "<<'\n'<<'\n'<<'\t';
		cout<<"  Enter Your choice          ";
		cin>>x;
		switch(x)
		{
			case 1 :
			{   	clrscr();
				int x,y;
				cout<<"Enter the 2 numbers"<<'\n';
				cin>>x>>y;
				sum(x,y);
				break;
			}
			case 2 :
			{   	clrscr();
				int x;
				cout<<"Enter the nth natural no."<<'\n';
				cin>>x;
				sum(x);
				break;
			}
			case 3 :
			{	clrscr();
				int a[20],n;
				cout<<" How many integers ? "<<'\n';
				cin>>n;
				if (n>20)
				cout<<"Invalid";
				else if (n<20)
				sum(a[20],n);
				break;
			}

			case 4 :
			{	clrscr();
				complex c1,c2;
				cout<<"Enter the 1st complex no."<<'\n';
				cin>>c1.r>>c1.i;
				cout<<"Enter the 2nd complex no."<<'\n';
				cin>>c2.r>>c2.i;
				sum(c1,c2);
				break;
			}
			case 5 :
			{ 	exit(0);
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
