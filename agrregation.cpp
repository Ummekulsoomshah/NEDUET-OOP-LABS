#include <iostream>
#include <string>
using namespace std;

//The School class represents a school entity that 
//contains a pointer to a Location object representing the school's address. 

//The Location class represents the address with its house, city, and state member variables. 

//When we create a School object, we associate it with a Location object 
//representing its address through aggregation.

class Location{
public:
    int houseNumber;
    string city, district;

    Location(int houseNum, string cityName, string districtName){
        houseNumber = houseNum;
        city = cityName;
        district = districtName;
    }
};
// school has-a location
class School{
private:
// Location is used as a data type for the 'location' member variable
// 'location' member variable will store the memory address of a Location object.
    Location *location;
public:
// Other member functions and public interface of the School class...
    string schoolName;

    School(string name, Location *address){
        schoolName = name;
        location = address;
    }

    void display(){
        cout << "School name: " << schoolName << endl;
        cout << "Location: " << location->houseNumber << ", " << location->district << ", " << location ->city << endl;
    }
};

int main(){
    Location schoolLocation(112,"Karachi","Central");
    School mySchool("XYZ School", &schoolLocation);

    mySchool.display();
    return 0;
}

//generalization
// #include <iostream>
// #include <string>
// #include<math.h>
// using namespace std;

// // base class representing a general shape

// class Shape{
// protected:
//     string color;
// public:
//     Shape(string shapeColor){
//         color = shapeColor;
//     }

//     // method to get color of shape
//     string getColor(){
//         return color;
//     }
//     virtual double calculateArea(void) = 0;
// };

// class Circle : public Shape{
// private:
//     double radius;
// public:
//     Circle(string shapeColor, double circleRadius):Shape(shapeColor){
//         radius = circleRadius;
//     }
    
//     double calculateArea(void){
//         cout << "Area of circle: " << 3.142 * pow(radius,2) << endl;
//     }
// };
// class CRectangle : public Shape{
// private:
//     double length,width;
// public:
//     CRectangle(string shapeColor, double rectLength, double rectWidth):Shape(shapeColor){
//         length = rectLength;
//         width = rectWidth;
//     }
//     double calculateArea(void){
//         cout << "Area of rectangle: " << length*width << endl;
//     }
// };
// int main(){
//     Circle circle("Red",45.1);
//     circle.calculateArea();
//     CRectangle rectangle("Yellow",12.5,42.2);
//     rectangle.calculateArea();

//     return 0;
// }