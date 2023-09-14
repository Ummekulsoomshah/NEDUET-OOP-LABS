#include<iostream>
using namespace std;
class shape{
    protected:
double length,width;
public:
void get_data(){
    cout<<"enetr length and width"<<endl;
    cin>>length>>width;
}
virtual void display_area()=0;

};
class triangle:public shape{
    public:
void display_area(){
    cout<<(width*length)/2<<endl;

}
};
class rectangle:public shape{
    public:
void display_area(){
    cout<<(width*length)<<endl;

}
};
