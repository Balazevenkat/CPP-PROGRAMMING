class Circle : public Shape{
    float rad;
    public :
        Circle(){
            cout<<"Circle Constructor:"<<endl;
			 cout<<"enter the radius:"<<endl;
			 cin>>rad;
        }
        void Whomi(){
			cout<<"Iam Circle Class"<<endl;
		}
		void CalArea(){
			area=3.14*rad*rad;
		}
		void CalPeri(){
			peri=2*3.14*rad;
		}
		~Circle(){
			cout<<"Circle Destructor:"<<endl;
		}
};
