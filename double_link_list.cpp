#include "iostream "
using namespace std;
struct node
{
	int info;
	node *next;
	node *prev;
	
	
};
//class for creation of doublelink list...............
class doublelist      
{
   private:
   node *start ,*temp ,*cur,*fwd ,*back;
   public:
    doublelist()
	{
		start = NULL;
		
		}
		void addnode(int n)
		{
			if(start == NULL)
			{
			  start=new node;
			  start->info=n;
			  start->next=NULL;
			  start->prev=NULL;
			  	
			}
			else
			{
				cur=start;
				while(cur->next!= NULL)
				{
					cur=cur->next;
				}
				temp=new node;
				temp->info=n;
				temp->next=NULL;
				temp->prev=cur;
				cur->next=temp;
			}
			
		}
		void show()
		{
			cur=start;
			while(cur!=NULL)
			{
				cout<<cur->info<<endl;
				cur=cur->next;
			}
		}
		void addafternode(int sear, int n)
		{
			cur=start;
			fwd=cur->next;
			while(cur != NULL)
			{
				if(cur->info==sear)
				{
					temp=new node;
					temp->info=n;
					temp->next=fwd;
					temp->prev=cur;
					cur->next=temp;
					fwd->prev=temp;
					break;
				}
				
				cur=cur->next;
				fwd=fwd->next;
			}
			cout<<"value is not found : "<<endl;
		}
	       void add_beforenode(int sear,int n)  //add before node ............
	       {
	       	 back=cur=start;
	       	 while(cur!=NULL)
	       	    {
	       	 	  if(cur->info==sear)
	       	 	   {
	       	 	   	 temp=new node;
	       	 	   	 temp->info=n;
	       	 	   	 temp->next=cur;
	       	 	   	 temp->prev=back;
	       	 	   	 cur->prev=temp;
	       	 	   	 back->next=temp;
	       	 	   	 break;
				   }
				   back=cur;
				   cur=cur->next;
			    }
			    cout<<"value is not found : "<<endl;
		   }
		   void deletnode(int sear)     // delete double link node function...........
		   {
		   	 back=cur=start;
		   	 fwd=cur->next;
		   	      while(cur!=NULL)
		   	     {
		   	 	     if(cur->info==sear)
						{
						 	back->next=fwd;
						 	fwd->prev=back;
						 	delete cur;
						 	break;
					   	}  
						back=cur;
						cur=cur->next;
						fwd=fwd->next;	 
				 }
				 cout<<"value not found :";
		   }
	   		
};
int main()
{
	int num , s,n;
	doublelist obj;
	for(int i=0; i<5;i++)
	{
		cout<<"enter node :";
		cin>>num;
		obj.addnode(num);
	}
	cout<<"enter search number :";
	cin>>s;
//	cout<<"enter new node number :";
//	cin>>n;
	
	obj.deletnode(s);
	obj.show();
	
}
