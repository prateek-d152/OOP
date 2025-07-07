#include <iostream>
using namespace std;
class person {
    public:
    string name;
    int age;
    void getperson(){
        cout<< "Enter name" <<endl;
        cin>> name;
        cout<< "Enter age" <<endl;
        cin>> age;

    

    }
    void displayperson(){
        cout<< name << endl;
        cout<< age << endl;
    }
};
class department{
    public: 
    string dname;
    void getdepartment(){
    cout<<"Enter dept name: " << endl;
    cin>> dname;
    }

    void displaydepartment(){
        cout<< dname <<endl;
    }

};

class employee: public person , public department{
public:
int emp_id;
void getemployee(){
    getperson();
    getdepartment();
    cout<< "Enter employee id: "<< endl;
    cin>> emp_id;
}
void displayemployee(){
    displayperson();
    displaydepartment();
    cout<< emp_id << endl;
}

};

int main(){

    employee e1;
    e1.getemployee();
    e1.displayemployee();

    return 0;
};