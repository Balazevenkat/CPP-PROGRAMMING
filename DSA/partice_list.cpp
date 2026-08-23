#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

typedef struct node{
    int data;
    struct node*next=nullptr;
}NODE;

NODE*head=nullptr;

NODE*creat_node(int data){
    NODE *node= new NODE;
    node->data=data;
    node->next=nullptr;
    
    return node;
}

void insert_at_beg(int num)
{
    NODE *node=creat_node(num);
    if(head==nullptr)
    {
        node->next=head;
        head=node;
        return;
    }
    node->next=head;
    head=node;
}

void dispaly_list()
{
    NODE *tem=head;
    if(tem==nullptr)
    {
        cout<<"list is empty....."<<endl;
        return;
    }
    
    while(tem)
    {
        cout<<tem->data<<"->";
        tem=tem->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    int *arr=NULL,num;
    cout<<"Enter Size: ";
    cin>>num;
    
    arr= new int[num];
    srand(time(0));
    for(int i=0;i<num;i++)
    {
        arr[i]=rand()%(10-1)+1;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j]){
                i--;
                break;
            }
        }
    }
    
    for(int j=0;j<num;j++)
    cout<<"arr["<<j<<"]: "<<arr[j]<<" ";
    
    for(int i=0;i<num;i++)
        insert_at_beg(arr[i]);
        
    cout<<"\n***************************"<<endl;    
    dispaly_list();
    
}
