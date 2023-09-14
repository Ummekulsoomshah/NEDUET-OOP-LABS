#include <iostream>
using namespace std;
class concatenatestring
{
    string concatStr;

public:
    concatenatestring() {}
    concatenatestring(string s1, string s2)
    {
        concatStr = s1 + s2;
    }
    void enter_str()
    {
        cin >> concatStr;
    }
    concatenatestring operator+(concatenatestring s3)
    {
        concatenatestring addstr;
        addstr.concatStr = concatStr + s3.concatStr;
        return addstr;
    }
    void showaddstr()
    {
        cout << "after addition of string the new string is" << concatStr;
    }
};
int main()
{
    concatenatestring str1, str2, str3;
    cout << "enter string one" << endl;
    str1.enter_str();
    cout << "enter string two" << endl;
    str2.enter_str();
    str3 = str1 + str2;
    str3.showaddstr();
}