#include "iostream"
using namespace std;
void factT(int n);
void fab();

int main()
{
//	int num;
//	cout<<" enter any number to findout the facturial to that number : ";  cin>>num;
	 
	 //factT(num);
	 fab();
	 
	 
	 
	 
	
}
void factT(int n)
{
	int fact=1,i;
	for(i=n ; i>=1 ; i--)
	{
		fact = fact * i;
	}
	cout<<"facturial of the number : "<<fact;
}
void fab()
{
	int n,i,f=0,s=1,next;
	cout<<"enter value :"; cin>>n;
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
			next = i;
		}
		else
		{
			next = f + s;
			f = s;
			s = next;
		}
		cout<<"  "<<next<<endl;
	}
	
}


