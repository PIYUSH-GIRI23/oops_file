// overload new and delete operator
#include <iostream>
using namespace std;

class SimpleClass {
public:
    SimpleClass() {
        cout << "Constructor called ." << endl;
    }

    void* operator new(size_t size) {
        cout << "Custom new operator called. Allocating " << size << " bytes." << endl;
        void* p = ::new SimpleClass(); 
        return p;
    }
    void operator delete(void* p) {
        cout << "Custom delete operator called. Deallocating memory." << endl;
        ::delete static_cast<SimpleClass*>(p); 
    }
    
    ~SimpleClass() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    SimpleClass* obj = new SimpleClass(); 
    delete obj; 
    return 0;
}


