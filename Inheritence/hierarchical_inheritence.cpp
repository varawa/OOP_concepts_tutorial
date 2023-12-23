#include<iostream>
#include<string.h>
#include<math.h>

using namespace std ;

class A{

    public :
        void func1(){
            cout<<"Inside function 1 ."<<endl ;
        }
};

//HIERARCHICAL INHERITENCE .
//In Hierarchical inheritance, more than one sub-class inherits the property of a single base class. There is one base class and multiple derived classes.
// Several other classes inherit the derived classes as well. Hierarchical structures thus form a tree-like structure.

class B : public A{

    public:
        void func2(){
            cout<<"Inside function 2 ."<<endl ;
        }
};

class C : public A{

    public:
        void func3(){
            cout<<"Inside function 3 ."<<endl ;
        }
};

int main(){
    A obj1 ;
    obj1.func1() ;
    B obj2 ;
    obj2.func1() ;
    obj2.func2() ;
    C obj3 ;
    obj3.func1() ;
    obj3.func3() ;

    return 0 ;
}