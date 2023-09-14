#include<iostream>
using namespace std;
class hospital1{
string name;
string date_add;
string disease;
string date_dis;
public:
void get_name(){
    cout<<"enter name of patient"<<endl;
    cin>>name;
}
void get_date_add(){
    cout<<"enter date of admission"<<endl;
    cin>>date_add;
}
void get_disease(){
    cout<<"enter disease of patient"<<endl;
    cin>>disease;
}
void get_date_dis(){
    cout<<"enter date of discharge"<<endl;
    cin>>date_dis;
}

};
class hospital2:public hospital1{
int age;
public:
void get_age(){
    cout<<"enter age"<<endl;
    cin>>age;
}
};
int main(){
hospital2 patient1;
patient1.get_name();
patient1.get_date_add();
patient1.get_age();
patient1.get_disease();
patient1.get_date_dis();

}