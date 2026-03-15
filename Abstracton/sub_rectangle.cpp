class Rectangle : public Shape{
	float len,bre;
	public : Rectangle(){
			cout<<"Rectangle Cons:"<<endl;
			cout<<"enter the len and bre:"<<endl;
			cin>>len>>bre;
		}
		void Print(){
			cout<<"len:"<<len<<endl;
			cout<<"bre:"<<bre<<endl;
			Shape :: Print();
		}
		void Whomi(){
			cout<<"Iam Rectangle Class"<<endl;
		}
		void CalArea(){
			area=len*bre;
		}
		void CalPeri(){
			peri=2*(len+bre);
		}
		~Rectangle(){
			cout<<"Rectangle Destructor:"<<endl;
		}
};
