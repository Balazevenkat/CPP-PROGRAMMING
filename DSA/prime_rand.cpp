#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

typedef struct node
{
	int data;
	struct node*next=nullptr;
} NODE;
NODE*head=nullptr;

NODE*creat_node(int n)
{
	NODE*node=new NODE;
	node->data=n;
	node->next=nullptr;

	return node;
}

void insert_end(int num)
{

	NODE *node=creat_node(num);

	if(head==nullptr)
	{
		node->next=head;
		head=node;

		return;
	}

	NODE *tem=nullptr;

	tem=head;

	while(tem->next)
	{
		tem=tem->next;
	}

	tem->next=node;

}
int is_prime(int n)
{
	if(n==0 || n==1)
		return 0;

	for(int i=2; i*i<=n; i++)
	{
		if((n%i)==0)
			return 0;
	}

	return 1;
}
void prime_node()
{
	if(head==nullptr)
		return;

	while(head)
	{
		if(!(is_prime(head->data)))
			head=head->next;
		else
			break;
	}

    if(head==nullptr)
		return;
		
	NODE*tem=head;

	while(tem && tem->next) 
	{
		if(!(is_prime(tem->next->data)))
			tem->next=tem->next->next;
			else
		tem=tem->next;
	}


}

void display_node()
{
	if(head==nullptr)
	{
		cout<<"NOde is empty"<<endl;
		return;
	}
	NODE*tem=head;
	while(tem)
	{
		cout<<tem->data<<" ->";
		tem=tem->next;
	}

	cout<<"Null"<<endl;
}

int main()
{
	int n;
	cin>>n;

	if(n>10)
	{
		cout<<"re-try";
		return 0;
	}

	//int *arr=(int*)calloc(n,sizeof(int));

	int *arr = new int[n];
	srand(time(0));
	for(int i=0; i<n; i++)
	{
		arr[i]=rand()%(10-1)+1;
		for(int j=0; j<i; j++)
		{
			if(arr[i]==arr[j])
			{
				i--;
				break;
			}
		}
	}

	cout<<"****************************"<<endl;
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";

	cout<<endl;

	for(int i=0; i<n; i++)
		insert_end(arr[i]);

	display_node();

cout<<"****************************"<<endl;
	prime_node();
	display_node();


}
