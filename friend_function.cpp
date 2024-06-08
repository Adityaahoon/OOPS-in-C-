#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        void setnum(int x, int y){
            a=x;
            b=y;
        }

        void getnum(){
            cout<<"your num is "<<a<<"+ "<<b<<"i"<<endl;
        }
        friend Complex sumcomp(Complex o1, Complex o2);
};
Complex sumcomp(Complex o1, Complex o2){
    Complex o3;
    o3.setnum((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}
int main(){
    Complex a1,a2,sum;
    a1.setnum(4,2);
    a2.setnum(3,2);
    a1.getnum();
    a2.getnum();
    sum= sumcomp(a1,a2);
    sum.getnum();


