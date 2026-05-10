#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *head=NULL;
NODE *creat_node(int val)
{
    NODE *node=(NODE*)calloc(1,sizeof(NODE));
    
    node->data=val;
    node->next=NULL;
    
    return node;
}

void insert_end(int n)
{
    NODE *node=creat_node(n);
    if(head==NULL)
    {
        node->next=head;
        head=node;
        return;
    }
    NODE*tem=head;
    while(tem->next)
    tem=tem->next;
    
    tem->next=node;
    
}

void rem_dup()
{
    NODE *cur=head;
    
    while(cur!=nullptr)
    {
        NODE *run=cur;
        while(run->next!=nullptr)
        {
            if(cur->data == run->next->data)
            {
                NODE*tem=run->next;
                run->next=run->next->next;
            }
            else
            run=run->next;
        }
        cur=cur->next;
    }
}

void display_list()
{
    NODE*tem=head;
    if(tem==NULL)
    return;
    
    while(tem)
    {
        cout<<tem->data<<" ->";
        tem=tem->next;
    }
    cout<<"NULL"<<endl;
}


int main()
{
    srand(time(nullptr));
    
    int arr[5];
    
    for(int i=0;i<5;i++)
    {
        arr[i]=rand()%(15-10)+10;
       /*for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
            i--;
            break;
            }
        }*/
    }
    
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    
    cout<<endl;
    
    for(int i=0;i<5;i++)
    insert_end(arr[i]);
    
    display_list();
    
    
    rem_dup();
    
    cout<<"*************"<<endl;
    
    display_list();
}
