#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

typedef struct node
{
    int  data;
    struct node *next;
}NODE;
NODE *head=nullptr;


NODE *create_node(int val)
{
    NODE *newnode=new NODE;
    
    newnode->data=val;
    newnode->next=nullptr;
    
    return newnode;
}

void insert_at_beg(int val)
{
    NODE *node=create_node(val);
    
    if(head==nullptr)
    {
        cout<<"first node,...."<<endl;
        cout<<node->data<<endl;
    }
    node->next=head;
    head=node;
    
}


void revers_nodes()
{
    NODE* next=nullptr;
    NODE* prev=nullptr;
    NODE* cur=head;
    
    while((cur)!=nullptr)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;//move pointer next
    }
    
    head=prev;
}
void display_node()
{
    NODE *tem=nullptr;
    
    tem=head;
    
    if(tem==nullptr)
    {
        cout<<"list is empty..."<<endl;
        return ;
    }
    while((tem)!=nullptr)
    {
        cout<<tem->data<<"->";
        tem=tem->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    int arr[5];
    int i,j;
    
    srand(time(nullptr));
    
    for(i=0;i<5;i++)
      arr[i]=rand()%(50-20+1)+20;
      
    for(i=0;i<5;i++)
      cout<<arr[i]<<" ";
      
      cout<<endl;
      
      for(i=0;i<5;i++)
      insert_at_beg(arr[i]);
      
     
      
      cout<<endl;
      display_node();
      
      revers_nodes();
      display_node();
      
      free(head);
}
