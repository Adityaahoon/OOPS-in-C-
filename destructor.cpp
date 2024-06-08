#include<iostream>
using namespace std;
class Test{
    public:
        Test(){
            cout<<"const called"<<endl;

        }
        ~Test(){
            cout<<"dest. called"<<endl;

        }
};
int main(){
    Test n1;
    Test n2;
    return 0;
}
