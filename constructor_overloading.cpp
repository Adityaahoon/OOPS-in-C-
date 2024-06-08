#include <iostream>
using namespace std;
class construct{
    public:
        /// @brief 
        const float pi=3.14;
        float area;
        construct(){
            area=0;
        }
        construct(int a,int b){
            area=a*b;
        }
        construct(int c){
            area=c*c*pi;
        }
        void disp(){
            cout<<area<<endl;
        }
};
int main(){
    construct o1;
    construct o2(10,20);
    construct o3(14);

    o1.disp();
    o2.disp();
    o3.disp();

    return 0;
}
