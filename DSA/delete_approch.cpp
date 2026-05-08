#include<iostream>
#include"stdlib.h"
using namespace std;
typedef struct node
{
    int data;
    struct node*next;
}NODE;

NODE *head=NULL;

NODE*creat_node(int n)
{
    NODE *newnode=new NODE;
    
    newnode->data=n;
    newnode->next=nullptr;
    
    return newnode;
}

void insert_end(int n)
{
    
    NODE *node=creat_node(n);
    
    if(head==nullptr)
    {
        node->next=head;
        head=node;
        return;
    }
    
    NODE *tem=head;
    
    while(tem->next)
    tem=tem->next;
    
    tem->next=node;
}

void insert_beg(int n)
{
    NODE *node=creat_node(n);
    
    if(head==nullptr)
    {
        node->next=head;
        head=node;
        return;
    }
    
    node->next=head;
    head=node;
    
}

void delete_list()
{
    NODE*tem;
    while(head)
    {
        tem=head;
        head=head->next;
        delete tem;
    }
}

void display_node()
{
    NODE *tem=head;
    
    while(tem)
    {
        cout<<tem->data<<" ->";
        tem=tem->next;
    }
    
    cout<<"NULL"<<endl;
}
int main()
{
    int i=0;
    
    while(i<5)
    {
        insert_beg(i);
        i++;
    }
    
    display_node();
    
    delete_list();
    
    cout<<"deleteed"<<endl;
    i=10;
    while(i<16)
    {
        insert_end(i);
        i++;
    }
        
    display_node();
}
