#include<iostream>

using namespace std;

class employee{
    private:
    string name;
    string designator;
    int age;
    double salary;

    public:
    void get_data(int num)
    {
        cout<<"Enter the name of "<<num+1<<" student : ";
        cin>>name;
        cout<<"Enter the designator of "<<num+1<<" student : ";
        cin>>designator;
        cout<<"Enter the age of "<<num+1<<" student : ";
        cin>>age;
        cout<<"Enter the salary of "<<num+1<<" student : ";
        cin>>salary;
    }
    void display_data(int num)
    {
        cout<<"Name of "<<num+1<<" student = "<<name<<endl;
        cout<<"Designation of "<<num+1<<" student = "<<designator<<endl;
        cout<<"age of "<<num+1<<" student = "<<age<<endl;
        cout<<"salary of "<<num+1<<" student = "<<salary<<endl<<endl;
    }
    
};

int main() {
    employee obj[3];

    for(int i=0; i<3; i++)
    {
        obj[i].get_data(i);
    }
    
    cout<<endl;

    for(int i=0; i<3; i++)
    {
        obj[i].display_data(i);
    }
    
    return 0;
}