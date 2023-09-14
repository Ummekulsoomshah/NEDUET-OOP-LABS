// 	#include <iostream>
//      #include<string.h>
// #include<stdio.h>
// #include<ctype.h>

// 	using namespace std;

// string login(char b) {
// 	   if((strlen(b)<6)|| (isdigit(b)) ){
// 	      throw "error!";
// 	   }
// 	   return "login successfully";
// 	}

	
// 	int main () {
//        cout<<"enter username";
// 	   string x;
//        cin>>x;
//        cout<<"enter password";
// 	  char y;
//        cin>>y;
	   
	 
// 	   try {
// 	      login(y);
// 	   } catch (const msg) {
// 	     cerr << msg << endl;
// 	   }
	
// 	   return 0;
// 	}


// #include<iostream>
// #include<string.h>
// #include<stdio.h>
// #include<ctype.h>

// using namespace std;

// int main()
// {
//      char uname[50];
//      char pass[20];
//      cout<<"\n Enter User Name  :  ";
//      gets(uname);
//      cout<<"\n Enter Password   :  ";
//      gets(pass);
//      try
//      {
//           //This section is used to verify the number of characters.
//           if(strlen(pass)<6)
//           {
//                cout<<"\n Password must be at least 6 Characters Long..."<<endl;
//                throw 'c';
//           }
//           //This section is used to verify the digits in the string.
//           bool digit_yes=false;
//           bool valid;
//           int len = strlen(pass);
//           for (int count = 0; count < len; count++)
//           if (isdigit(pass[count]))      
//                digit_yes=true;
//           if (!digit_yes)
//           {
//                valid=false;
//                cout <<"\n Password must have at least One Digit (0-9)"<< endl;
//                throw 'c';
//           }
//           else
//           {
//                valid=true;
//                cout<<"\n Password is Correct";
//           }
//      }
//      catch(char c)
//      {
//           cout<<"\n Invalid Password Format!!!";
//      }
//      catch(...)
//      {
//           cout<<"\n Default Exception";
//      }
//      return 0;
// }
// #include <iostream>
// #include <string>
// #include <cstring>
// #include <cctype>

// using namespace std;

// string login(const char* password) {
//     if (strlen(password) < 6 || !isdigit(password[0])) {
//         throw "Invalid password: Password must have at least 6 characters and  digit.";
//     }
//     return "Login successful!";
// }

// int main() {
//     cout << "Enter username: ";
//     string username;
//     cin >> username;

//     cout << "Enter password: ";
//     string password;
//     cin >> password;

//     try {
//         login(password.c_str());
//         cout << "Login successful!\n";
//     } catch (const char* msg) {
//         cerr << "Login failed: " << msg << endl;
//     }

//     return 0;
// }
// q2
// #include <iostream>

// template<typename T>
// T findSum(T arr[], int size) {
//     T sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main() {
//     const int SIZE = 5;

//     int intArray[SIZE];
//     float floatArray[SIZE];

//     std::cout << "Enter 5 integer values: ";
//     for (int i = 0; i < SIZE; i++) {
//         std::cin >> intArray[i];
//     }

//     std::cout << "Enter 5 float values: ";
//     for (int i = 0; i < SIZE; i++) {
//         std::cin >> floatArray[i];
//     }

//     int intSum = findSum(intArray, SIZE);
//     float floatSum = findSum(floatArray, SIZE);

//     std::cout << "Sum of integer array: " << intSum << std::endl;
//     std::cout << "Sum of float array: " << floatSum << std::endl;

//     return 0;
// }




// #include <iostream>
// #include <map>
// #include <string>
// #include<list>
// using namespace std;

// // function to retrieve grade
// void showGrade(const map<string, string> &student, const string &studentName){
//     auto x = student.find(studentName);
//     if(x != student.end()) {
//         cout << "Grade for student " << studentName << ": " << x->second << endl;
//     } else {
//         cout << "Student " << studentName << " not found" << endl;
//     }
//     cout << endl;
// }

// //function to update grade
// void updateGrade(map<string, string> &student, const string &studentName){
//    string grade;
//    auto x = student.find(studentName);
//    if (x != student.end()){
//     cout << "Enter updated grade: ";
//     getline(cin,grade);
//     x->second = grade;
//     cout << "Updated grade for student " << studentName << ": " << x->second << endl;
//    } else {
//     cout << "Student not found" << endl;
//    }
//    cout << endl;
// }

// // function to delete student
// void deleteStudent(map<string,string> &student, const string &studentName){
//     auto x = student.find(studentName);
//     if (x != student.end()){
//         student.erase(x);
//         cout << "Student " << studentName << " has been deleted" << endl;
//     } else {
//         cout << "Student not found" << endl;
//     }
//     cout << endl;
// }

// // function to display student data
// void display(map<string,string> &student){
//     for (const auto & x : student){
//         cout << "Student name: " << x.first << endl;
//         cout << "Student grade: " << x.second << endl;
//     }
//     cout << endl;
// }


// int main() {
//     int num;
//     map<string, string> student;
//     string name, grade;

//     while (true){
//         cout << "Enter student's name: ";
//         getline(cin,name);
//         if(name == "quit"){
//             break;
//         }
//         cout << "Enter grade: ";
//         getline(cin,grade);
//         student[name] = grade;
//     }
//         string searchName;
//         cout << "Enter student's name to retrieve grade: ";
//         getline(cin,searchName);
//         showGrade(student, searchName);
        
//         cout << "Enter student's name to be deleted: ";
//         getline(cin,searchName);
//         deleteStudent(student, searchName);

//         cout << "Enter student's name to update grade: ";
//         getline(cin,searchName);
//         updateGrade(student, searchName);
//         display(student);
//     return 0;
// }

#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    
    set<string> guests;
    string guestName;
     
    while(true){
        cout << "Enter guest name: ";
        getline(cin,guestName);

        if(guestName == "quit"){
            break;
        }
        guests.insert(guestName);
    }

    cout << "Guests names: " << endl;
    for(const string &x : guests){
        cout << x << " ";
    }
    cout << "\nNumber of guests: " << guests.size() << endl;
    
    return 0;
}
