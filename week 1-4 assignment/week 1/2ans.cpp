#include<iostream>
using namespace std;
int main()
{
    int a=23;
    float b=24.231;
    double c=12.232;
    char d='r';
    bool f=true;
    cout<<"integer:"<<a <<"\t"<<sizeof(a)<<"bytes"<<endl;

    cout<<"float:"<<b <<"\t"<<sizeof(b)<<"bytes"<<endl;

    cout<<"double:"<<c <<"\t"<<sizeof(c)<<"bytes"<<endl;

    cout<<"character:"<<d <<"\t"<<sizeof(d)<<"bytes"<<endl;
    
    cout<<"boolean:"<<f <<"\t"<<sizeof(f)<<"bytes"<<endl;
}
