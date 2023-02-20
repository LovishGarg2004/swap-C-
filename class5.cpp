#include<iostream>

// WAP to create array of objects for the same.

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
        cout<<"Enter the name of "<<num<<" student : ";
        cin>>name;
        cout<<"Enter the designator of "<<num<<" student : ";
        cin>>designator;
        cout<<"Enter the age of "<<num<<" student : ";
        cin>>age;
        cout<<"Enter the salary of "<<num<<" student : ";
        cin>>salary;
    }
    void display_data(int num)
    {
        cout<<"Name of "<<num<<" student = "<<name<<endl;
        cout<<"Designation of "<<num<<" student = "<<designator<<endl;
        cout<<"age of "<<num<<" student = "<<age<<endl;
        cout<<"salary of "<<num<<" student = "<<salary<<endl<<endl;
    }
    
};

int main() {
    employee obj1, obj2, obj3;

    obj1.get_data(1);
    obj1.display_data(1);

    obj2.get_data(2);
    obj2.display_data(2);

    obj3.get_data(3);
    obj3.display_data(3);

    return 0;
}