#include "iostream"
using namespace std;
struct node
{
	int info;
	node *link;
};
class linklist
{
	private : 
	         node *start , *temp , *cur , *pre;
	         public:
	         	linklist()
	         	{
	         		start = NULL;
	         		
				 }
				 void addnode(int n)
				 {
				 	if(start == NULL)
				 	{
				 		start = new node();
				 		start->info = n;
				 		start ->link = NULL;
					 }
					 else
					 {
					 	cur = start;
					 	while(cur->link != NULL)
					 	{
					 		cur= cur->link;
						 }
						 temp = new node();
						 temp->info = n;
						 temp->link = NULL;
						 
					 }
				 }
				 void show()
				 {
				 	cur = start;
				 	while (cur !=NULL)
				 	{
				 		cout<<cur->info<<endl;
				 		cur = cur->link;
					 }
				 	
				 }
};
int main()
{
	linklist obj;
	int num ;
	for(int i=0;i<5; i++)
	{
		cout<<"enter number : ";
		cin>>num;
		obj.addnode(num);
		
		
	}
	
	
	obj.show();
}
