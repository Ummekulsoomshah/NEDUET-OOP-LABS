#include<iostream>
using namespace std;
class frnd{
private:
int a ,b;
public:
void setData(int x,int y){
    a=x;
    b=y;
}
void shoData(){
    cout<<"a="<<a<<"b="<<b;

}
friend void fun(frnd);
};
void fun(frnd c){
    cout<<"private members accesed "<<c.a<<","<<c.b;
}
int main(){
    frnd f1,f2,f3;
    f1.setData(1,2);
    fun(f1);
}