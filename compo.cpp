#include<iostream>
#include<string>
using namespace std;
class student{
private:
float gpa;
char*name;
int rollno;
public:
student(char*=NULL,int=0,float=0.0);
student(const student & st);
const char*getname()const;
~student();
student::student(char*_name,int roll,float g){
    cout<<"constructir::student"<<endl;
    if(!_name){
        name=new char[strlen(_name)+1];
        strcpy(name,_name);
    }
    else name=NULL;
    rollno=roll;
    gpa=g;
}
student::student(const student & st){
    if(str.name!=NULL){
        name=new char[strlen(st.name)+1];
        strcpy(name,st.name);
    }
    else name=NULL;
    rollno=st.roll;
    gpa=st.g;
}
const char*student::getname(){
    return name;
}
student::~student()

{
    delete []name;
}


};

class String{
    private:
    char*ptr;
    public:
    String();
    String(const String &);
    void setstring(char *);
    const char* getstring() const;
    ~String();
    String::String(){
        cout<<"constructor::string"<<endl;
        ptr=NULL;

    }
    String::String(const String & ptr){
        if(str.ptr!=NULL){
            string=new;
            char[strlen(str.ptr)+1];
            strcpy(ptr,str.ptr);
        }else ptr=NULL;
    }
    void String::setstring(char * str){
        if(ptr!=NULL){
            delete[]ptr;
            ptr=NULL;
        }
    
    if(str!=NULL){
        ptr=new char[strlen(str)+1];
        strcpy(ptr,str);
    }
    }
    const char* string::getstring()const{
        return ptr;
    }
    String::~String(){
        delete[]ptr;
        cout<<"destructor::string"<<endl;
    }

};
int main(){

}