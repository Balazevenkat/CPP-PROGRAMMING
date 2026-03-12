class Student
{
	protected : int id;
		    char name[20];
	public : Student()
		{
			cout<<"Student Constructor:"<<endl;
			cout<<"enter the id:"<<endl;
			cin>>id;
			cout<<"enter the name:"<<endl;
			cin>>name;
		}
		void SPrint()
		{
			cout<<"id:"<<id<<endl;
			cout<<"name:"<<name<<endl;
		}
		~Student()
		{
			cout<<"Student destructor:"<<endl;
		}
};


