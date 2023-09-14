// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     ofstream obj1;
//     string line;
//     obj1.open("myfile2.txt");
   
//         for(int i=0;i<3;i++){

//         getline(cin,line);
//         cout<<endl;
//         cout<<i<<endl;
//         if(i==3){
//         break;

//         }
//         }
      

  
//     ifstream obj2;
//     obj2.open("myfile2.txt");
//     while (getline(obj2,line))
//     {
//         cout<<line<<endl;
//     }
//     obj2.close();
 
// }
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ofstream obj1;
//     string line;
//     const string filename = "student.doc";
//     obj1.open(filename, ios::app); // Use ios::app to create the file if it doesn't exist

//     if (!obj1) {
//         cout << "Error creating the file." << endl;
//         return 1;
//     }

//     for (int i = 0; i < 3; i++) {
//         cout << "Enter a line of text: ";
//         getline(cin, line);
//         obj1 << line << endl;

//         cout << endl;
//         cout << i << endl;
//         if (i == 2) {
//             break;
//         }
//     }

//     obj1.close();

//     ifstream obj2(filename);
//     if (obj2.is_open()) {
//         cout << "\nContents of the file:\n";
//         while (getline(obj2, line)) {
//             cout << line << endl;
//         }
//         obj2.close();
//     }
//     else {
//         cout << "Unable to open the file." << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <fstream>

using namespace std;

struct Student {
  string name;
  int rollNo;
  double fee;
};

int main() {
  // Create and write student data to file
  ofstream outfile("D:\\student.doc");
  if (outfile.is_open()) {
    for (int i = 0; i < 10; ++i) {
      Student student;

      cout << "Enter details for student " << i + 1 << ":" << endl;

      cout << "Name: ";
      getline(cin, student.name);

      cout << "Roll No: ";
      cin >> student.rollNo;

      cout << "Fee: ";
      cin >> student.fee;

      cin.ignore(); // Ignore the newline character

      outfile << "Name: " << student.name << endl;
      outfile << "Roll No: " << student.rollNo << endl;
      outfile << "Fee: " << student.fee << endl;

      outfile << endl;
    }
    outfile.close();
    cout << "Student data written to file successfully." << endl;
  } else {
    cout << "Unable to open file for writing." << endl;
    return 1;
  }

  // Read student data from file
  ifstream infile("D:\\student.doc");
  if (infile.is_open()) {
    string line;
    cout << "Student data read from file:" << endl;
    while (getline(infile, line)) {
      cout << line << endl;
    }
    infile.close();
  } else {
    cout << "Unable to open file for reading." << endl;
    return 1;
  }

  return 0;
}