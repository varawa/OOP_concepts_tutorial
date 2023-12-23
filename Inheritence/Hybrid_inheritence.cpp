#include<iostream>
#include<string.h>
#include<math.h>

using namespace std ;

//The process of combining more than one type of Inheritance together while 
//deriving subclasses in a program is called a Hybrid Inheritance.

//Hybrid in C++ follows the following pattern - Multiple Inheritance, Single Inheritance, 
//and Hierarchical Inheritances are combined together. As stated earlier, in Multiple Inheritance, a sub-class derives properties from multiple superclasses.

class AA{

    public :
        void AAC(){
            cout<<"Inside AAC ."<<endl ;
        }

};

class A{

    public :
        void func1(){
            cout<<"Inside function 1 ."<<endl ;
        }
};


class B : public A{

    public:
        void func2(){
            cout<<"Inside function 2 ."<<endl ;
        }
};

//Multiple Inheritence + Hierarchical inheritence .

class C : public A , public AA{

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
    obj3.AAC() ;

    return 0 ;
}