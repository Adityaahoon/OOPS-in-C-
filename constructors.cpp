#include<iostream>
using namespace std;
class Employee
{
    private:
        int id;
        string name;
        float salary;
    public:
        Employee(int i,string n ,float s){
            id=i;
            name=n;
            salary=s;
        }
        void display_data(){
            cout<<id<<" "<<name<<" "<<salary<<endl;
        }
};
int main(){
    Employee e1(123,"raghu",54000);
    Employee e2(133,"ram",5000);
    Employee e3(143,"rahul",5900.90);
    e1.display_data();
    e2.display_data();
    e3.display_data();
    return 0;
    
}
