# include<iostream.h>
# include<conio.h>
# include<process.h>

void calculate (int a,int b,int c)
{
	int i=1;
	cout<<"Common factors are "<<'\n';
	while(i<=a && i<=b && i<=c)
	{
		if (a%i==0 && b%i==0 && c%i==0)
		cout<<i<<' ';
		i++;
	}

}

void calculate (int a,int b)
{
	int gcd,lcm;
	for(int i=1; i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i == 0 )
		gcd=i;
	}
	lcm=(a*b)/gcd;
	cout<<" Greatest Common Divisor (GCD) : "<<gcd<<'\n';
	cout<<" Lowest Common Multiple  (LCM) : "<<lcm<<'\n';
}

void calculate (int n)
{
	int d=0,t=0;
	while(n!=0)
	{
		d=n%10;
		t+=d;
		n/=10;
	}
	cout <<"Sum of digits : " <<t<<'\n';
}

void main ()
{
	char ch;
	int x;
	do
	{
		clrscr();
		cout<<"------Calculate------"<<'\n'<<'\n'<<'\t';
		cout<<"Common Factors of 3 numbers  1"<<'\n'<<'\n'<<'\t';
		cout<<"GCD and LCM of 2 numbers     2"<<'\n'<<'\n'<<'\t';
		cout<<"Sum of Digits of a number    3"<<'\n'<<'\n'<<'\t';
		cout<<"Exit                         4"<<'\n'<<'\n'<<'\t';
		cout<<"Enter Your choice             "<<'\n'<<'\n'<<'\t';
		cin>>x;
		switch(x)
		{
		case 1 :
		{   	clrscr();
			int x,y,z;
			cout<<"Enter the 3 numbers"<<'\n';
			cin>>x>>y>>z;
			calculate(x,y,z);
			break;

		}
		case 2 :
		{   	clrscr();
			int x,y;
			cout<<"Enter the 2 numbers"<<'\n';
			cin>>x>>y;
			calculate(x,y);
			break;
		}
		case 3 :
		{ 	clrscr();
			int x;
			cout<<"Enter the number"<<'\n';
			cin>>x;
			calculate(x);
			break;
		}
		case 4 :
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








