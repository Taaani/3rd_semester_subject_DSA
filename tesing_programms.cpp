#include "iostream"
using namespace std;
class programms
{
	private:
		int arr[10], first ,last,mid;
		public:
			void input()
			{
				for(int i=0;i<10;i++)
				{
					cout<<"enter 10 number for binary_search :";
				    cin>>arr[i];
				}
				
			}
			void b_search(int search)
			{
				first =0;
				last = 9;
				while(first<=last)
				{
					mid = (first+last)/2;
					if(arr[mid]<search)
					{
						first = mid +1;
						
					}
					else if(arr[mid]>search)
					{
						first = mid -1;
						
					}
					else if (arr[mid]== search)
					{
						cout<<endl;
						cout<<"numbr find out at "<<mid+1<<" idex";
						break;
					}
				}
			}
};
int main()
{
	programms obj;
	obj.input();
	int n;
	cout<<"enter number to search in sort : ";  cin>>n;
	obj.b_search(n);
}
