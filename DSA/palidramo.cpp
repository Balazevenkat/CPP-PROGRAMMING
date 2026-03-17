#include<iostream>
#include<cstdlib>

using namespace std;

typedef struct node
{
    int data;
    struct node *next; 
}NODE;

NODE *head=NULL;

NODE *creat_node(int n)
{
    NODE *newnode=(NODE*)malloc(sizeof(NODE));
    
    newnode->data=n;
    newnode->next=NULL;
    
    return newnode;
}

void insert_end(int val)
{
    NODE *node=creat_node(val);
    
    if(head==NULL)
    {
        printf("\nThis is first node...\n");
        node->next=head;
        head=node;
        return;
    }
    NODE *tem=NULL;
    
    tem=head;
    
    while(tem->next)
    {
        tem=tem->next;
    }
    
    tem->next=node;
}

NODE *reverse(NODE *cur)
{
    NODE*prev=nullptr;
    NODE*tem=nullptr;
    while(cur)
    {
        tem=cur->next;
        cur->next=prev;
        prev=cur;
        cur=tem;
    }
    return prev;
}

void palidraom()
{
    NODE *slow=head;
    NODE *fast=head;
    
    //finding middle
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    
    slow=reverse(slow);
    
    NODE*first=head;
    NODE*second=slow;
    
    while(first && second)
    {
        if(first->data!=second->data)
        {
            cout<<"Not a palidraom"<<endl;
           second=reverse(slow);
        }
        second=second->next;
        first=first->next;
    }
    cout<<"palidraom"<<endl;
   reverse(slow);
    
}

void display_node()
{
    NODE *tem=NULL;
    tem=head;
    
    if(tem==NULL)
    {
        printf("\nList is empty\n");
        return;
    }
    
    while(tem)
    {
        printf("%d ->",tem->data);
        tem=tem->next;
    }
    printf("NULL\n");
}

int main()
{
    char c;
    
    while(1)
    {
        cout<<"\n opt: 1: insert_end 2:display p:palidraom"<<endl;
        //scanf(" %c",&c);
        cin>>c;
        switch(c)
        {
            case '1':
            int n;
            scanf("%d",&n);
            insert_end(n);
            break;
            
            case '2':
            display_node();
            break;
            
            case 'p':palidraom();
            break;
            
            
            case '4':return 0;
            
           // default:printf("inavalid...\n");
            //break;
        }
    }
}
