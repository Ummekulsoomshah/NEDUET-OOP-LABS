#include<iostream>
using namespace std;
class publication{
    string title;
    float price;
    public:
    void gettitle(){
        cout<<"enter title name"<<endl;cin>>title;
    }
    void puttitle(){
        cout<<" title name"<<title;
    }
    void getprice(){
        cout<<"enetr price of book"<<endl;cin>>price;
    }
    void putprice(){
        cout<<" price of book"<<price<<endl;
    }
};
class book:public publication{
int pagecount;
public:
void getpagecount(){
    cout<<"enter no of pages in this book"<<endl;cin>>pagecount;
}
void putpagecount(){
    cout<<" no of pages in this book"<<pagecount<<endl;
}


};
class tape:public publication{
    float playingtime;
    public:
    void getplayingtime(){
        cout<<"enter playing time"<<endl; cin>>playingtime;
    }
    void putplayingtime(){
        cout<<"playing time"<<playingtime<<endl;
    }
};
int main(){
tape p1;
p1.getplayingtime();
p1.putplayingtime();
p1.getprice();
p1.putprice();
p1.gettitle();
p1.puttitle();
book b1;
b1.getpagecount();
b1.putpagecount();
b1.getprice();
b1.putprice();
b1.gettitle();
b1.puttitle();

}