#include "iostream"
using namespace std;
struct node
{
	int info;
	node *next;
	node *prev;
	
}
class duble_link
{
	private :
		node *start, *temp ,*cur ,*back, *fwd;
		pubic:
			duble_link()
			{
				start =NULL
			}
			void addnode(int n)
			{
				if(start == NULL)
				{
					start = new node()
					start->info = n;
					start ->next = NULL;
					start ->prev = NULL;
					
				}
				else
				{
					cur = start;
					while(cur->next != NULL)
					{
						cur = cur->next;
						
					}
					temp = new node();
					temp->info = n;
					temp->next = NULL;
					temp->prev = cur;
					cur->next = temp;
					
				}
			}
			void add_after_node(int sear, int m)
			{
				cur = start;
				fwd = cur->next;
				while(cur !=NULL)
				{
				  if(cur->info sear)
				  {
				  	temp = new node();
				  	temp ->info = n;
				  	temp ->next = fwd
				  	fwd->prev = temp;
				  	cur->next = temp;
				  	temp-> prev = cur;
				  }
				  cur = cur->next;
				  fwd = fwd->next;
					
				}
			}
			void add_befor_node(int search , int n)
			{
				cur = back = start;
				while(cur != NULL)
				{
					if(cur->info==search)
					{
						temp = new node();
						temp->info = n;
						temp->next = cur;
						cur->prev = temp;
						back->next = temp;
						temp->prev = back;
					}
					back = cur;
					cur = cur->next;
				}
			}
			 void delete_node()
			 {
			 	cur = back = start;
			 	fwd = cur->next;
			 	while(cur!=NULL)
			 	{
			 		if(cur->info = search)
			 		{
			 			back->next = fwd;
			 			fwd->prev = back;
			 			delete cur;
			 			break;
					 }
					 back=cur;
					 cur->cur->next;
					 fwd->fwd->next;
				 }
			 	
			 	
			 	
			 	
			 	
			 	
			 }
			
};
int main()
