#include<iostream>
#include<string>

using namespace std;
class Address{
    public:
    int hno;
    string colony;
    string city;
    
    Address(int x,string p,string q){
        hno=x;
        colony=p;
        city=q;
    }
};
class person{
    string name;
    Address *p;
    public:
    void setAddresss(Address *ptr){
        p=ptr;

    }
    void display(){
        cout<<"my house is in "<<p->colony<<"and city "<<p->city;
    }

};
int main(){
    Address add1(61,"sultanabad","karachi");
    person kulsoom;
    kulsoom.setAddresss(&add1);
    kulsoom.display();
}