#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

typedef struct node
{
  int roll;
  int age;
  char name[20];
  
  struct node *next;
}NODE;

NODE *head=nullptr;

NODE *creat_node()
{
    NODE *newnode= new NODE;
    cout<<"Enter Roll: ";
    cin>>newnode->roll;
    cout<<"Enter age: ";
    cin>>newnode->age;
    cout<<"Enter name: ";
    cin>>newnode->name;
    
    return newnode;
}

void insert_sort()
{
    NODE *node=creat_node();
    
    if(head==nullptr ||  strcmp(node->name, head->name) < 0)
    {
        cout<<"This is first data.."<<endl;
        node->next=head;
        head=node;
        return;
    }
    
    NODE*tem=head;
    
    while(tem->next && strcmp(node->name,tem->next->name)>0)
    {
        tem=tem->next;
    }
    
    node->next = tem->next;
    tem->next = node;
}

void display()
{
    
    NODE *tem=head;
    
    if(tem==nullptr)
    {
        cout<<"\nList is empty...\n";
        return;
    }
    
    while(tem)
    {
        cout<<"**********\n"<<"Name: "<<tem->name<<"\n"<<"Age: "<<tem->age<<"\n"<<"Rollno: "<<tem->roll<<endl;
        tem=tem->next;
    }
}

int main()
{
    
    char c;
    
    while(1)
    {
        cout<<"opt: 1.insert_sort 2.display 3.quit"<<endl;
        cin>>c;
        switch(c)
        {
            case '1':insert_sort();
            break;
            
            case '2':display();
            break;
            
            case '3':exit(0);
            
        }
    }
}
