#include<iostream>

using namespace std;

class student{
    private:
    string name;
    string UID;
    char grade;

    public:
    void get_data(int num)
    {
        cout<<"Enter the name of "<<num+1<<" student : ";
        cin>>name;
        cout<<"Enter the UID of "<<num+1<<" student : ";
        cin>>UID;
        cout<<"Enter the Grade of "<<num+1<<" student : ";
        cin>>grade;
    }
    void display_data(int num)
    {
        cout<<"Name of "<<num+1<<" student = "<<name<<endl;
        cout<<"UID of "<<num+1<<" student = "<<UID<<endl;
        cout<<"Grade of "<<num+1<<" student = "<<grade<<endl;
    }
};

int main() {
    student obj[3];

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