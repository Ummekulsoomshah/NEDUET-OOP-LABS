#include<iostream>
using namespace std;
class store{
    protected:
    double totalbill;
    public:
    store(double totalbill):totalbill(totalbill){};
    virtual double calculatbill()=0;

};
class imtiazstore:public store{
imtiazstore(double totalbill):store(totalbill){};
double calculatbill(){
    
}
};
int main(){

}