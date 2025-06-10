#include <iostream>
using namespace std;
class person {
    public:
    string name;
    int age;
    void getperson(){
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Age:";
        cin>>age;
    }
    void pdisplaydata()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age"<<age<<endl;
    }
};
class department{
    public:
    string dname;
    void departmentname(){
        cout<<"Enter departmentname:";
        cin>>dname;
    }
    void ddisplaydata()
    {
        cout<<"Department:"<<dname<<endl;
    }
};
class employee : public person, public department{
    public:
    int empid;
    void getemployeedata(){
        cout<<"Enter Eplyoyee ID:";
        cin>>empid;
        getperson();
        departmentname();
    }
    void empdisplay(){
        cout<<"EmployeeID:"<<empid<<endl;
        pdisplaydata();
        ddisplaydata();

    }
};
int main()
{
    employee e1;
    e1.getemployeedata();
    e1.empdisplay();
}