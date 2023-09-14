#include <iostream>
using namespace std;

class Father {
protected:
    int age;
public:
    Father(int x) {
        age = x;
    }
    
    virtual void iam() {
        cout << "I AM FATHER, my age is " << age << endl;
    }
};

class Son : public Father {
public:
    Son(int x) : Father(x) {}
    
    void iam() {
        cout << "I AM SON, my age is " << age << endl;
    }
};

class Daughter : public Father {
public:
    Daughter(int x) : Father(x) {}
    
    void iam() {
        cout << "I AM DAUGHTER, my age is " << age << endl;
    }
};

int main() {
    Father fatherObj(50);
    Son sonObj(25);
    Daughter daughterObj(20);
    
    Father* ptr = nullptr;
    
    ptr = &fatherObj;
    ptr->iam();
    
    ptr = &sonObj;
    ptr->iam();
    
    ptr = &daughterObj;
    ptr->iam();
    
    return 0;
}
