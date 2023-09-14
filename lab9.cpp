#include<iostream>
#include "shape.h"
using namespace std;

int main(){

rectangle r1;
r1.get_data();
triangle t1;
t1.get_data();
shape *ptr1=&r1;
ptr1->display_area();
shape *ptr2=&t1;
ptr2->display_area();
}