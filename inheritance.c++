 #include<iostream>
 using namespace std;
 class student
 {
    private:
    int rno;
    char name[30];
    public:
    void getdata1()
    {
        cout<<"enter name and roll no \n";
        cin>>name>>rno;
    }
    void display1()
    {
        cout<<"the name and roll of student is "<<"\n"<<rno<<"\n"<<name<<endl;

    }
 };
 
class test: public student
 {
    private:
    int math,eng;
    public:
    void getdata2();
    void display2();
 };
 void test::getdata2()
 {
    getdata1();
    cout<<"enter marks of two subject";
    cin>>math>>eng;
 }
 void test::display2()
 {
     display1();
    cout<<"the marks of two subjects is:"<<"\n"<<math<<"\n"<<eng;
 }
 class sk:public test
 {
    private:
    int id;
    public:
    void getdata3()
    {
        getdata2();
        cout<<"enter the id";
        cin>>id;
    }
    
    void display3()
    {
        display2();
        cout<<"the id is :"<<id;
    }

 };
 int main()
{
    sk k;
    k.getdata3();
    k.display3();
    return 0;
}
