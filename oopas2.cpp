// #include<iostream>
// using namespace std;
// int main(){
// for(int i=0;i<5;i++){
//     for(int j=0;j<24;j++){
//         if(i==0 && j<5 || i+j==2|| i-j==2 || i==4 && i<j && j<5){
//             cout<<"c";

//         }
//         else if(i==2 && 6<j && j<12 || j==9 || i==2 && 13<j && j<19 || j==16){
//             cout<<"+";
//         }
//         else{
//             cout<<" ";
//         }
//     }cout<<endl;
// }
// }
// #include <iostream>
// using namespace std;

// // Parent class: GunRifle
// class GunRifle {
// public:
//     void shoot() {
//         cout << "Shooting the target!" << endl;
//     }
// };

// // Derived class: AK7
// class AK7 : public GunRifle {
// public:
//     void magnifyingGlass() {
//         cout << "Using the magnifying glass to see the target clearly!" << endl;
//     }

//     void newFeature() {
//         cout << "Using the new feature of AK7!" << endl;
//     }
// };

// // Derived class: DreamGun
// class DreamGun : public AK7 {
// public:
//     void dreamGunFeature() {
//         cout << "Using the dream gun feature!" << endl;
//     }
// };

// int main() {
//     // Creating objects
//     GunRifle gun;
//     AK7 ak7;
//     DreamGun dreamGun;

//     // Using the objects
//     gun.shoot();

//     ak7.shoot();
//     ak7.magnifyingGlass();
//     ak7.newFeature();

//     dreamGun.shoot();
//     dreamGun.magnifyingGlass();
//     dreamGun.newFeature();
//     dreamGun.dreamGunFeature();

//     return 0;
// }
// #include <iostream>
// using namespace std;

// // Parent class: Bird
// class Bird {
// public:
//     void fly() {
//         cout << "Flying!" << endl;
//     }

//     void haveFeathers() {
//         cout << "Has feathers!" << endl;
//     }
// };

// // Parent class: Horse
// class Horse {
// public:
//     void walk() {
//         cout << "Walking!" << endl;
//     }

//     void run() {
//         cout << "Running!" << endl;
//     }
// };

// // Derived class: Unicorn
// class Unicorn : public Bird, public Horse {
// public:
//     void shape() {
//         cout << "Has a unique shape!" << endl;
//     }
// };

// int main() {
//     // Creating object
//     Unicorn unicorn;

//     // Using the object
//     unicorn.fly();
//     unicorn.haveFeathers();
//     unicorn.walk();
//     unicorn.run();
//     unicorn.shape();

//     return 0;
// }


#include <iostream>
using namespace std;

// Parent class: Vehicle
class Vehicle {
public:
    void startEngine() {
        cout << "Engine started!" << endl;
    }

    void stopEngine() {
        cout << "Engine stopped!" << endl;
    }
};

// Derived class: Car
class Car : public Vehicle {
public:
    void drive() {
        cout << "Driving the car!" << endl;
    }
};

// Derived class: Motorcycle
class Motorcycle : public Vehicle {
public:
    void ride() {
        cout << "Riding the motorcycle!" << endl;
    }
};

// Derived class: Bicycle
class Bicycle : public Vehicle {
public:
    void pedal() {
        cout << "Pedaling the bicycle!" << endl;
    }
};

int main() {
    // Creating objects
    Car car;
    Motorcycle motorcycle;
    Bicycle bicycle;

    // Using the objects
    car.startEngine();
    car.drive();
    car.stopEngine();

    motorcycle.startEngine();
    motorcycle.ride();
    motorcycle.stopEngine();

    bicycle.startEngine();
    bicycle.pedal();
    bicycle.stopEngine();

    return 0;
}
