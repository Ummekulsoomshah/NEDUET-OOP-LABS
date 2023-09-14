#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class book{
private:
int bookid;
char title[20];
float price;
public:
book(){
    bookid=0;
    strcpy(title,"no title");
    price=0;
}
void getbookdata(){
    cout<<"enter bookid,  title and price of a book"<<endl;
    cin>>bookid;
    cin.ignore();
    cin.getline(title,19);
    cin>>price;

}
void showbookdata(){
    cout<<"\n"<<bookid<<" "<<title<<" "<<price;
}
int storebook();
void viewallbook();
void searchbook(char *t);
void deletebook(char *t);
};
int book::storebook(){
    if(bookid==0 && price==0){
        cout<<"book data not initialized"<<endl;
    }
    else{
        ofstream obj1;
    obj1.open("data.txt",ios::app|ios::binary);
    obj1.write((char*)this,sizeof(*this));
    obj1.close();

    }
    
}
void book::viewallbook(){
ifstream obj2;
obj2.open("data.txt",ios::in|ios::binary);
if(!obj2){
    cout<<"\nfile not found"<<endl;

}
else{
   obj2.read((char*)this,sizeof(*this));
   while (!obj2.eof())
   {
    /* code */
   obj2.read((char*)this,sizeof(*this));
   showbookdata(); 
   }
   obj2.close();
   
}
}
void book::searchbook(char*t){
    int counter=0;
    ifstream obj2;
    obj2.open("data.txt",ios::in|ios::binary);
    if(!obj2){
        cout<<"\nfile note found"<<endl;
    }
    else{
        obj2.read((char*)this,sizeof(*this));
        while (!obj2.eof())
        {
            if(!strcmp(t,title)){
                showbookdata();
                counter++;
            }
                obj2.read((char*)this,sizeof(*this));
        }
        obj2.close();
        
    }
    if(counter==0){
        cout<<"\nrecord not found"<<endl;

    }
    obj2.close();
    
}
void book::deletebook(char*t){
    ifstream obj1;
    ofstream obj2;
    obj1.open("data.txt",ios::in|ios::binary);
    if(!obj1){
        cout<<"file not found"<<endl;
    }
    else{
        obj2.open("temfile.txt",ios::out|ios::binary);
        obj1.read((char*)this,sizeof(*this));
        while (!obj1.eof())
        {
            if(strcmp(title,t)){
                obj2.write((char*)this,sizeof(*this));
            }
            obj1.read((char*)this,sizeof(*this));
                
        }
        obj1.close();
        obj2.close();
        remove("data.txt");
        rename("tempfile.txt","data.txt");
        
    }
}

int main(){
    book b1;
    // b1.getbookdata();
    // b1.showbookdata();
    // b1.storebook();
    // b2.showbookdata();
    // b2.storebook();
    b1.viewallbook();
    // b1.searchbook("the kulsoom book");
    b1.deletebook("the kulsoom book");
    cout<<"after deleting"<<endl;
    b1.viewallbook();

}