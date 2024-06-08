#include<iostream>
using namespace std;
class wall{
    private:
        int len;
        int bre;
    public:
        wall(int l,int y){
            len=l;
            bre=y;
        }
        wall(wall &obj){
            len=obj.len;
            bre=obj.bre;
        }
        int calc(){
            int area=len*bre;
            return area;
        }
};
int main(){
    wall w1(5,6);
    cout<<w1.calc()<<endl;
    wall w2=w1;
    cout<<w2.calc()<<endl;
}
