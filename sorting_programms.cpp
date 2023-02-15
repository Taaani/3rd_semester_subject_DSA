#include "iostream"
using namespace std;
class sort
{
	private:
		int arr[5];
	public:
void input()
		{
		for(int i=0;i<5;i++)
		{
			cout<<"Enter array value : ";
			cin>>arr[i];
		}
		}
void output()
	{
		cout<<"Array inputs are : "<<endl;
		for (int i=0;i<5;i++)
				{
				cout<<"   "<<arr[i]<<endl;
				}
	}
void search(int n)
		{
				int flag=-1;
			for(int j=0;j<5;j++)
				{
					if(arr[j]==n)
					{
						cout<<"Value Found at "<<j<<" index "<<endl;
						flag=1;
						break;
					}
				}
		if(flag==-1)
		cout<<"Value not found "<<endl;
		}
void insertion_sort()
{
	int temp=0,i=0,j=0;
	for(i=0;i<5; i++)
	{
		temp = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}

	
	

void selection_sort()
{
	int temp =0, min=0, loc=0,j=0,i=0;
	for(i=0 ; i<4 ; i++)
	{
		min = arr[i];
		loc = i;
		for(j=i+1;j<5;j++)
		{
			if(arr[j]<min)
			{
				min = arr[j];
				loc = j;
			}
			temp = arr[i];
			arr[i]= arr[loc];
			arr[loc]= temp;
		}
	}
}
void bubble_sort()
{
	int temp;
	for(int j=4;j>=0;j--)
	{
		for(int i=0;i<j;i++)
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
};
int main()
{
	sort obj;
	obj.input();
	//int num;
	//cout<<"Enter a value to search: ";
	//cin>>num;
	//obj.search(num);
	//obj.bubble_sort();
	 obj.selection_sort();
	obj.output();
return 1;
}


