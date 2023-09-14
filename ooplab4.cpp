#include<iostream>
using namespace std;
class tollbooth{
 int totalcar;
 double totalmoney;
 public:
 tollbooth(){
    totalcar=0;
    totalcar=0;
 }  
 void payingCar() 			//increment count
{    totalcar++;
    totalmoney+=0.5; }
void show_inc() 			//return count
{ cout<<totalcar<<" "<<totalmoney; }


};
int main(){
    tollbooth to1;
    to1.payingCar();
    to1.show_inc();

}