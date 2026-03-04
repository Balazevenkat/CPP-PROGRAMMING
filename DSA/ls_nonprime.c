/*
prev      cur
 |         |
 v         v
NULL    +----+----+    +----+----+    +----+----+
        | 10 |  o-----> | 11 |  o-----> | 20 | NULL
        +----+----+    +----+----+    +----+----+
        (NP)            (P)             (NP)

prev = cur;
cur  = cur->next;

prev      cur
 |         |
 v         v
+----+----+    +----+----+    +----+----+
| 10 |  o-----> | 11 |  o-----> | 20 | NULL
+----+----+    +----+----+    +----+----+

prev->next = cur->next;
free(cur);
cur = prev->next;


prev                cur
 |                   |
 v                   v
+----+----+    +----+----+
| 10 |  o-----> | 20 | NULL
+----+----+    +----+----+

prev = cur;
cur  = cur->next;


prev      cur
 |         |
 v         v
+----+----+
| 20 | NULL
+----+----+

cur == NULL

cur(head)
 |
 v
+----+----+    +----+----+
| 11 |  o-----> | 20 | NULL
+----+----+    +----+----+

head = cur->next;
free(cur);
cur = head;

cur(head)
 |
 v
+----+----+
| 20 | NULL
+----+----+

+----+----+    +----+----+
| 10 |  o-----> | 20 | NULL
+----+----+    +----+----+


  */

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
typedef struct node{
    int data;
    struct node*next;
}NODE;

NODE*head=nullptr;
NODE* creat_node(int v)
{
    NODE*newnode= new(NODE);
    
    newnode->data=v;
    newnode->next=nullptr;
    
    return newnode;
}

void insert_at_end(int val)
{
    NODE*node=creat_node(val);
    
    if(head==nullptr)
    {
        node->next=nullptr;
        head=node;
        return;
    }
    NODE*tem=nullptr;
    tem=head;
    while(tem->next!=nullptr)
    {
        tem=tem->next;
    }
    tem->next=node;
}
int is_prime(int n)
{
    if(n==2)
    return 1;
    
    for(int i=2;i*i<=n;i++)
    {
        if(n%i == 0)
        return 0;
        
    }
return 1;
}
void non_prime()
{
    NODE*cur=head;
    NODE*prev=nullptr;
    
    while(cur!=nullptr)
    {
        if(is_prime(cur->data))
        {
            if(cur==head)
            {
                head=cur->next;
                free(cur);
                cur=head;
            }
            else
            {
                prev->next=cur->next;
                free(cur);
                cur=prev->next;
            }
        }
        else
        {
            prev=cur;
            cur=cur->next;
        }
    }
}
void display_nodes()
{
    NODE*tem=nullptr;
    
    tem=head;
    while(tem!=nullptr)
    {
        cout<<tem->data<<" ->";
        tem=tem->next;
    }
    
    cout<<"null"<<endl;
}
int main()
{
    int arr[5];
    srand(time(nullptr));
    for(int i=0;i<5;i++)
    {
        arr[i]=rand()%(10-1+1)+1;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                i--;
                break;
            }
        }
    }
    
    for(int i=0;i<5;i++)
          cout<<arr[i]<<" ";
          
          cout<<endl;
          
    for(int i=0;i<5;i++)
    insert_at_end(arr[i]);
    
    display_nodes();
    
    non_prime();//deleting the prime..
    
    display_nodes();
    
    free(head);
    return 0;
}
