class Shape{
    protected :
        float area,peri;
    public :
        Shape(){
            cout<<"Shape Constructor"<<endl;
            area=peri=0;
        }
        virtual void CalArea()=0;
        virtual void CalPeri()=0;
        virtual void Print(){
            cout<<"Area : "<<area<<endl;
            cout<<"Peri : "<<peri<<endl;
        }
        virtual void Whomi(){
            cout<<"I am Shape class "<<endl;
        }
        virtual ~Shape(){
            cout<<"Shape Destructor"<<endl;
        }
};
