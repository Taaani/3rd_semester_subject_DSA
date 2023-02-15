#include<iostream>
using namespace std;
struct node
{
	int info;
	node *link;	
};
class linklist
{
	private:
		node *start, *temp, *cur, *pre;
	public: 
		linklist()
		{
			start = NULL;	
		}	
		void addNode(int num)
		{
			if(start == NULL)
			{
				start  = new node();
				start->info = num;
				start->link = NULL;
			}
			else
			{
				cur = start;
				while(cur->link != NULL)
				{
					cur = cur->link;
				}
				temp  = new node();
				temp->info = num;
				temp->link = NULL;
				cur->link = temp;
			}
		}
		void show()
		{
			cur = start;
			while(cur != NULL)
			{
				cout<<cur->info<<endl;
				cur = cur->link;
			}
		}
void add_after_node(int seer, int m)
{
	cur=start;
	while(cur!=NULL)
	{
		if(cur->info==seer)
		{
			temp=new node();
			temp->info=m;
			temp->link=cur->link;
			cur->link=temp;
			
		}
		cur=cur->link;
	}
}
void add_before_node(int seer, int m)
{
	
	pre=cur=start;
	while(cur!=NULL)
	{
		if(cur->info==seer)
		{
			temp=new node();
			temp->info=m;
			temp->link=cur;
			pre->link=temp;
			
		}
		pre=cur;
		cur=cur->link;
	}
}
void add_start(int x)
{
	temp=new node();
	temp->info=x;
	temp->link=start;
	start=temp;
	
}
void delete_node(int s)
{
	pre=cur=start;
	while(cur!=NULL)
	{
		if(cur->info==s)
		{
			pre->link=cur->link;
			delete cur;
			break;
		}
		pre=cur;
		cur=cur->link;
	}
}
};
int main()
{
	int num;
	linklist a;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter data for node : ";
		cin>>num;
		a.addNode(num);
	}
	
		
	cout<<"LinkList values entered are : \n";
	a.show();
	a.add_after_node(20,18);
   a.show();
 

	
	
}
