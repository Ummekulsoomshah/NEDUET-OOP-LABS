// #include <iostream>
// using namespace std;
// class complex
// {
//     float real, img;

// public:
//     complex()
//     {
//         real = img = 0;
//     }
//     complex(float r){
//         img=real=r;

//     }
//     // complex(complex &c){
//     //     real=c.real;
//     //     img=c.img;

//     // }

//     complex( float r,float i)
//     {
//         real = r;
//         img = i;
//     }

//     complex operator+(complex c)
//     {
//         complex t;
//         t.real = real + c.real;
//         t.img = img + c.img;
//         return t;
//     }

//     void show()
//     {

//         cout << "(" << real << "," << img << ")" << endl;
//     }
//     };
//     int main()
//     {
//         complex c1(1, 2);
//         complex c2(2, 2);

//         complex c3 = c1 + c2;
//         c3.show();
//         // c3=c1.sub(c1);
//         // c3.show();
//     }
// #include<iostream>
// using namespace std;
// class complex{
//     private:
//     float img,real;
//     public:
//     complex(){
//         real=img=0;
//     }
//     complex(float r){
//         real=img=r;

//     }
//     complex(float r,float i){
//         real=r;
//         img=i;
//     }
//     complex(complex &c){
//         real=c.real;
//         img=c.img;
//     }
//     complex operator+(complex c){
//         complex t;
//         t.real=real+c.real;
//         t.img=img+c.img;
//         return t;

//     }
//     void show(){
//         cout<<"("<<real<<","<<img<<")";
//     }
// };

// int main(){
//     complex c1(1,2);
//     complex c2(1,2);
//     complex c3;
//     c3=c1+c2;
//     c3.show();

// }
// #include<iostream>
// using namespace std;
// class person{
//     private:
//     string name;
//     int age;
//     string gender;
//     public:
//     person(string n,int a,string g){name=n;
//     gender=g;
//     age=a;}
//     void setname(string n){
//         name=n;
//     }
//     string getname(){
//         return name;
//     }
//     void setage(int a){
//         age=a;
//     }
//     int getage(){
//         return age;
//     }
//     void setgender(string g){
//         gender=g;
//     }
//     string getgender(){
//         return gender;

//     }
//     void eat(){
//        cout<< getname()<<"whose age is"<<getage()<<"and who is "<<getgender()<<"eats bhindi";

//     }
//     void walk(){}

// };
// class student:public person{
// private:
// string program;
// int study_year;
// public:
// student(string n,int a,string g,string p,int s):person(n,a,g){
//     program=p;
//     study_year=s;

// }
// void study(){}
// void held_exam(){}

// };
// int main(){

// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// class Triangle
// {
// protected:
//     float side1, side2, side3;

// public:
//     Triangle(float s1, float s2, float s3)
//     {
//         side1 = s1;
//         side2 = s2;
//         side3 = s3;
//     }
//     float getside1()
//     {
//         return side1;
//     }
//     float getside2()
//     {
//         return side2;
//     }
//     float getside3()
//     {
//         return side3;
//     }
//     double perimeter()
//     {
//         return side1 + side2 + side3;
//     }
//     virtual double area() = 0;
// };
// class isocelestriangle : public Triangle
// {
// public:
//     isocelestriangle(float s1, float s2) : Triangle(s1, s2, s2) {}
//     double area()
//     {
//         return 0.5 *side2* sqrt(side1 * side1 - 0.25 * side2 * side2);
//     }
// };
// class rightangletriangle : public Triangle
// {
// public:
//     rightangletriangle(float s1, float s2, float s3) : Triangle(s1, s2, s3) {}
//     double area()
//     {
//         return 0.5 * side1 * side2;
//     }
// };
// class equaliteraltriangle : public Triangle
// {
// public:
//     equaliteraltriangle(float s) : Triangle(s, s, s) {}
//     double area()
//     {
//         return 0.25 * sqrt(3) * side1 * side1;
//     }
// };
// int main()
// {
//     isocelestriangle iso(5, 4);
//     rightangletriangle ri(2, 3, 4);
//     equaliteraltriangle eq(4);
//     cout << "the perimeter is" << iso.perimeter() << endl;
//     cout << "the perimeter is" << ri.perimeter() << endl;
//     cout << "the perimeter is" << eq.perimeter() << endl;
//     cout << "the area is" << iso.area() << endl;
//     cout << "the area is" << ri.area() << endl;
//     cout << "the area is" << eq.area() << endl;
// }
// #include<iostream>
// using namespace std;

// class fish {
// public:
//     void eat() {
//         cout << "Fish eat" << endl;
//     }
// };

// class human {
// public:
//     void eat() {
//         cout << "Human eat" << endl;
//     }
// };

// class mermaid : public fish, public human {
// public:
// };

// int main() {
//     mermaid m;
//     fish *f_ptr = &m;
//     human *h_ptr = &m;

//     // Accessing the eat() function using fish pointer
//     f_ptr->eat(); // Output: Fish eat

//     // Accessing the eat() function using human pointer
//     h_ptr->eat(); // Output: Human eat

//     // Accessing the eat() function using mermaid object directly
//     // m.eat();      // Ambiguity - Compiler will give an error due to ambiguity

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int f1,f2;
//     cout<<"enter the f1"<<endl;
//     cin>>f1;
//     cout<<"enter the f2"<<endl;
//     cin>>f2;
//     if(f1%f2==0){
//         cout<<"the first num is multiple of sec"<<endl;
//     }else{
//         cout<<"the first num is not multiple of sec"<<endl;


//     }
    

// }
// #include<iostream>
// using namespace std;
// class shape{
//     public:
//     virtual double area()=0;
// };
// class rectangle{
// private:
// double length,width;
// public:
// double area(){
//     return length*width;
// }
// };


// int main(){
//     shape*shapeptr;
//     rectangle r;
//     shapeptr=&r;
//     shapeptr->area();


// }

// #include <iostream>
// using namespace std;

// class Woman {
// public:
//     void eat() {
//         cout << "Woman eats like a human." << endl;
//     }
// };

// class Fish {
// public:
//     void eat() {
//         cout << "Fish eats like an aquatic animal." << endl;
//     }
// };

// class Mermaid : public Woman, public Fish {
// public:
//     void eat(){
//         string ans;
//         cout<<"which eating method you like"<<endl;
//         cin>>ans;
//         // Determine which eat method to call based on the Mermaid's behavior
//         if (ans=="woman") {
//             Woman::eat(); // Call the eat method from Woman class
//         } else if (ans=="fish") {
//             Fish::eat(); // Call the eat method from Fish class
//         } else {
//             // Handle any other behavior if needed
//             cout << "Mermaid eats in a unique way." << endl;
//         }
//     }
// };

// int main() {
//     Mermaid mermaid;
//     mermaid.eat();

//     return 0;
// }



