#include "iostream"
using namespace std;
class sort
{
	private:
		int arr[5];
		public:
			void input()
			{
			    for(int i=0; i<5 ; i++)
			    {
			    	cout<<"enter any number :"; cin>>arr[i];
				}
			}
			void output()
			{
				for(int j=0; j<5 ; j++)
				{
					cout<<arr[j]<<endl;
				}
				
			}
			void search(int n)
			{
				int loc=-1;
				for(int i=0; i<5; i++)
				{
					if(arr[i]==n)
					{
						loc=i;
						cout<<"value is found at : "<<i;
						break;
					}
				}
				if(loc==-1)
				{
					cout<<"value is not found : ";
				}
			}
			void sorting()
			{
				int temp;
				for(int j=4 ;j>=0;j--)
				{
					for(int i=0;i<j; i++)
					{
						if(arr[i]>arr[i+1])
						{
							temp=arr[i];
							arr[i]=arr[i+1];
							arr[i+1]=temp;
						}
					}
				}
			}
			void inser_sot()  // selection sort..........
			{
				int temp,c,i;
				for( c=0;c<5;c++)
				{
					temp=arr[c];
					for( i=c ; i>0 && temp<arr[i-1];i--)
					{
						arr[i]=arr[i-1];
					}
					arr[i]=temp;
				}
			}
			void sel_sort()
			{
				int min, temp, loc;
				for(int v=0;v<5;v++)
				{
					min=arr[v];
					loc=v;
					for(int i=v;i<5;i++)
					{
						if(min>arr[i])
						{
							min=arr[i];
							loc=i;
						}
					}
					temp=arr[loc];
					arr[loc]=arr[v];
					arr[v]=temp;
					
				}
			}
};
int main()
{
	int num;
	sort obj;
	obj.input();
	
	obj.inser_sot();
	obj.output();
	
//	cout<<"enter value to search :";
//	cin>>num;
//	earch(num);
	//obj.sorting(obj.s);
//	cout<<endl;
//	obj.output();

}

