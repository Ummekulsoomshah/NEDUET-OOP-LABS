// #include <iostream>

// // Abstract class representing a store
// class Store {
// public:
//     // Constructor
//     Store(double totalBill) : totalBill(totalBill) {}

//     // Virtual function to calculate the final bill after discount
//     virtual double calculateFinalBill() = 0;

// protected:
//     double totalBill;
// };

// // Derived class for "ImtiazStore"
// class ImtiazStore : public Store {
// public:
//     // Constructor
//     ImtiazStore(double totalBill) : Store(totalBill) {}

//     // Implementation of the virtual function to calculate the final bill after discount for ImtiazStore
//     double calculateFinalBill() override {
//         // 7 percent discount
//         double discountPercentage = 0.07;
//         return totalBill * (1 - discountPercentage);
//     }
// };

// // Derived class for "BinHashimStore"
// class BinHashimStore : public Store {
// public:
//     // Constructor
//     BinHashimStore(double totalBill) : Store(totalBill) {}

//     // Implementation of the virtual function to calculate the final bill after discount for BinHashimStore
//     double calculateFinalBill() override {
//         // 5 percent discount
//         double discountPercentage = 0.05;
//         return totalBill * (1 - discountPercentage);
//     }
// };

// int main() {
//     double totalBill;

//     // Input total bill from the user
//     std::cout << "Enter total bill amount: ";
//     std::cin >> totalBill;

//     // Create objects for both stores
//     ImtiazStore imtiazStore(totalBill);
//     BinHashimStore binHashimStore(totalBill);

//     // Calculate and display final bill after discount for both stores
//     std::cout << "Final bill after discount at ImtiazStore: " << imtiazStore.calculateFinalBill() << std::endl;
//     std::cout << "Final bill after discount at BinHashimStore: " << binHashimStore.calculateFinalBill() << std::endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class PoweredDevice{
// public:
// PoweredDevice(int power){
// cout << "PoweredDevice: " << power << '\n';
// }
// };
// class Scanner : public PoweredDevice{
// public:
// Scanner(int scanner, int power) : PoweredDevice(power){
// cout << "Scanner: " << scanner << '\n';
// }
// };
// class Printer : public PoweredDevice{
// public:
// Printer(int printer, int power) : PoweredDevice(power){
// cout << "Printer: " << printer << '\n';
// }
// };
// class Copier : public Scanner, public Printer{
// public:
// Copier(int scanner, int printer, int power) : Scanner(scanner, power),
// Printer(printer, power) {}

// };
// int main(){
// Copier copier(1, 2, 3);
// return 0;
// }
// #include<iostream>
// using namespace std;
// class ground{
// private:
// int rooms;
// protected:
// void put();
// public:
// void get();
// };
// class middle:private ground{
// int labs;
// public:
// void take();
// void give(){
//     put();
//     cout<<roo
// }

// };
// class top:public middle{
// int roof;
// public:
// void int();
// void out();
// };
// int main(){
// middle m;

// }
// #include <iostream>
// using namespace std;
// class employee
// {
// private:
//     int salry;

// public:
//     employee() {
//         salry=0;
//     }
//     void setsalry(int s)
//     {
//         salry = s;
//     }
//     double getsalry()
//     {
//         return salry;
//     }
//     friend void update(employee &);
// };
// class payroll
// {
// public:
//     friend void update(employee &);
// };
// void update(employee &e)
// {
//      e.salry *= 0.7;
// }
// int main()
// {
//     employee e1;
//     e1.setsalry(50000);
//     cout<<e1.getsalry();
//     update(e1);
//     cout<<e1.getsalry();
// }

// #include <iostream>
// using namespace std;

// class employee {
// private:
//     int salry;

// public:
//     employee() : salry(0) {}

//     void setsalry(int s) {
//         salry = s;
//     }

//     int getsalry() const { // Add a getter function to retrieve the salary.
//         return salry;
//     }

//     friend void update(employee&); // Pass the employee object by reference.
// };

// class payroll {
// public:
//     friend void update(employee&);
// };

// void update(employee& e) { // Pass the employee object by reference to update its salary.
//     e.salry *= 0.7; // Update the salary directly in the employee object.
// }

// int main() {
//     employee e1;
//     e1.setsalry(50000);

//     cout << "Original Salary: " << e1.getsalry() << endl;
//     update(e1); // Call the update function with the employee object.
//     cout << "Updated Salary: " << e1.getsalry() << endl;

//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;
class vector
{
private:
    int x, y;

public:
    vector()
    {
        x = 0;
        y = 0;
    }
    vector(int a, int b)
    {
        x = a;
        y = b;
    }
    vector operator+(vector v)
    {
        vector t;
        t.x = x + v.x;
        t.y = y + v.y;
        return t;
    }
    vector operator-(vector v)
    {
        vector t;
        t.x = x - v.x;
        t.y = y - v.y;
        return t;
    }
    vector operator*(int scaler)
    {
        vector t;
        t.x = x * scaler;
        t.y = y * scaler;
        return t;
    }
    vector operator/(int scaler)
    {
        if (scaler != 0)
        {
            vector t;
            t.x = x / scaler;
            t.y = y / scaler;
            return t;
        }
        else
        {
            vector t;
            t.x = x;
            t.y = y;
            return t;
        }
    }
      vector magnitude() const {
        int mag = sqrt(x * x + y * y);
        return vector(mag, 0);
    }


    void display()
    {
        cout << "the sum of x and y is" << x << "," << y<<endl;
    }
};
int main()
{
    
    vector v1(3, 4);
    vector v2(1, -2);

    cout << "vector v1: ";
    v1.display();

    cout << "vector v2: ";
    v2.display();

    vector v3 = v1 + v2;
    cout << "vector v1 + v2: ";
    v3.display();

    vector v4 = v1 - v2;
    cout << "vector v1 - v2: ";
    v4.display();

    vector v5 = v1 * 2;
    cout << "vector v1 * 2: ";
    v5.display();

    vector v6 = v2 / 2;
    cout << "vector v2 / 2: ";
    v6.display();

    vector v7 = v1.magnitude();
    cout << "Magnitude of Vector v1: ";
    v7.display();

    vector v8 = v2.magnitude();
    cout << "Magnitude of Vector v2: ";
    v8.display();

    return 0;
}