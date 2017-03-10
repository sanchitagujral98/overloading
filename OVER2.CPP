# include <iostream.h>
# include <conio.h>
# include <process.h>

int max (int,int);
int max (int,int,int);
int max (int a[20],int n);

int max(int a,int b)
{
	if (a>b)
	return a;
	else
	return b;
}

int max(int a,int b, int c)
{
	if (a>b && a>c)
	return a;
	else if (b>a && b>c)
	return b;
	else
	return c;
}

int max(int a[20],int n)
{
	int big=a[0];
	for(int i=0;i<=n-1;i++)
	{
		cout<<"Enter element "<<i+1<<'\n';
		cin>>a[i] ;
		if (a[i]>big)
		big=a[i];
	}
	return big;
}

void main ()
{
	char ch;
	int x;
	do
	{
		clrscr();
		cout<<'\n'<<'\n'<<'\t'<<"------MAXIMUM------"<<'\n'<<'\n'<<'\t';
		cout<<"Max of 2 numbers      	      1"<<'\n'<<'\n'<<'\t';
		cout<<"Max of 3 numbers	     	      2"<<'\n'<<'\n'<<'\t';
		cout<<"Max of an array of integer     3"<<'\n'<<'\n'<<'\t';
		cout<<"Exit                  	      4"<<'\n'<<'\n'<<'\t';
		cout<<"Enter Your choice      ";
		cin>>x;
		switch(x)

		{
			case 1 :
			{   	clrscr();
				int x,y;
				cout<<"Enter the 2 numbers"<<'\n';
				cin>>x>>y;
				if (x==y)
				cout<<"Both num are equal"<<'\n';
				else
				cout<<"Bigger num = "<<max(x,y);
				break;
			}
			case 2 :
			{   	clrscr();
				int x,y,z;
				cout<<"Enter the 3 numbers"<<'\n';
				cin>>x>>y>>z;
				if(x==y && y==z)
				cout<<"All numbers are equal"<<'\n';
				else
				cout<<"Bigger num = "<<max(x,y,z);
				break;
			}
			case 3 :
			{ 	clrscr();
				int a[20],n;
				cout<<" How many numbers ? "<<'\n';
				cin>>n;
				if (n>20)
				{
					cout<<"invalid"<<'\n';
					exit(0);
				}
				else
				cout<<"Biggest number = "<<max(a,n);
				break;
			}
			case 4 :
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









