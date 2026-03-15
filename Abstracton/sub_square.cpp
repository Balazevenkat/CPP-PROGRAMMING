class Square : public Shape{
    float side;
    public :
        Square(){
            cout<<"Square Constructor:"<<endl;
			cout<<"enter the side:"<<endl;
			cin>>side;
        };
        void Whomi(){
            cout<<"I am Square Class"<<endl;
        }
        void CalArea(){
            area = side * side;
        }
        void CalPeri(){
            peri = 4 * side;
        }
        ~Square(){
            cout<<"Square Destructor"<<endl;
        };
};
