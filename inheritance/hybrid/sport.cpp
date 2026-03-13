class Sport : virtual public Student
{
	protected : char sgrade[3];
	public : Sport()
		 {
			 cout<<"Sport constructor:"<<endl;
			cout<<"enter the sports grade:"<<endl;
			 cin>>sgrade;
		 }
		 void Print()
		 {
			 cout<<"sports grade:"<<sgrade<<endl;
		 }
		 ~Sport()
		 {
			 cout<<"sports Destructor:"<<endl;
		 }
};
