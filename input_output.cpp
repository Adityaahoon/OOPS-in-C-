#include<iostream>
using namespace std;
class sum
{
    private:
        int a,b;
    public:
        int sum;
        void setdata(int x,int y){
            a=x;
            b=y;
        }
        void getdata(){
            sum=a+b;
            cout<<"a="<<a<<endl;
            cout<<"b="<<b<<endl;
            cout<<"sum="<<sum<<endl;

        }
};
int main()
{
    sum a1;
    a1.setdata(14,30);
    a1.getdata();
    return 0;

}
