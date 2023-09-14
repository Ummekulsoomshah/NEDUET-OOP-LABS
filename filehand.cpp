// #include <iostream>
// using namespace std;

// double division(int a, int b) {
//     if (b == 0) {
//         throw "Division by zero condition!";
//     }
//     return (a) / b;
// }

// int main() {
//     int y = 1;
//     double z = 0;

//     int x = 50;
//     try {
//         z = division(x, y);
//         cout << z << endl;
//     } catch (const char* msg) {
//         cerr << "Error: " << msg << endl;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// double division(int a, int b)
// {

//     if (b == 0)
//     {
//         throw "can't divid by zero";
//     }
//     return a / b;
// }
// int main()
// {
//     int y=0;
//     int x=9;
//     int z;
//     try{
//     z=division(x,y);
//     cout<<z<<endl;

//     }catch(const char* msg){
//         cout<<"error:"<<msg<<endl;

//     }
// }
// #include<iostream>
// using namespace std;
// int division(int a ,int b){
//     if(b==0){
//         throw "can not divide by zero";
//     }
//     return a/b;
// }

// int main(){
//     int x=1;
//     int y=0;
//     try{
//         int z=division(x,y){
//             cout<<z<<endl;
//         }catch(const char* msg){
//             cout<<"error"<<msg<<endl;

//         }
//     }

// }

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main()
// {
// fstream myFile;
// // part a
// myFile.open("sample.txt", ios::out);
// string line;
// while (myFile)
// {
// getline(cin, line);
// if (line == "-1"){
// break;
// }
// // write line in file
// myFile << line << endl;
// }
// myFile.close();
// // part b
// myFile.open("sample.txt", ios::in);
// if(myFile.is_open()){
// while(getline(myFile,line)){
// cout << line << endl;
// }
// myFile.close();
// }
// // part c
// myFile.open("sample.txt",ios::app);
// if(myFile.is_open()){
// myFile << "C++ is amazing\n";
// myFile.close();
// }
// return 0;
// }
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream myfile; // Use ofstream for writing to the file
    myfile.open("kul.txt",ios::out); // No need to specify ios::out here

    string line;
    while (myfile) { // Use an infinite loop, you can use 'true' instead of 'myfile' in the loop condition
        getline(cin, line);
        if (line == "-1") {
            break;
        }
        myfile << line << endl; // Writing 'line' to the file
    }

    myfile.close(); // Close the file after writing

    return 0;
}
