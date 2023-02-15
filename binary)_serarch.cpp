#include "iostream"
using namespace std;
class binary_sear
{
	private:
		int arr[10],mid,first,last;
	public:
		void input()
		{
			for(int i=0;i<10;i++)
			{
				cout<<"Enter array input : ";
				cin>>arr[i];
			}
		}
			
		void binary_search(int search)
		{
				first=0;
				last=9;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(arr[mid]<search)
		{
			first=mid+1;
		}
		else if(arr[mid]>search)
		{
			last=mid-1;
		}
		else if(arr[mid]==search)
		{
			cout<<"Found at index : "<<mid+1;
			break;
		}
		
	}
		}
		
};
int main()
{
	int search;
	binary_sear obj;
	obj.input();
		cout<<"Enter array u want to search :";
		cin>>search;
		obj.binary_search(search);
		return 1;
}

