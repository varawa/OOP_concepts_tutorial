#include<iostream>
#include<string.h>
#include<math.h>
#include<iomanip>

using namespace std ;

//OPERATOR OVERLOADING .

//We can make operators work for user-defined classes. 
//This means C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. 
//For example, we can overload an operator 'x' in a class like String so that we can concatenate two strings by just using + .

//OPERATORS THAT CAN'T BE OVERLOADED .

//Conditional or Ternary Operator (?:) cannot be overloaded.
//Size of Operator (sizeof) cannot be overloaded.
//Scope Resolution Operator (::) cannot be overloaded.
//Class member selector Operator (.) cannot be overloaded.
//Member pointer selector Operator (.*) cannot be overloaded.
//Object type Operator (typeid) cannot be overloaded.

class complex{

    private :
        float real ;
        float img ;

    public :

        void set( float r , float i ){
            this->real = r ;
            this->img = i ;
        }

        void get(){
            //Set Precision .
            cout<<real<<setprecision(3)<<" + "<<img<<setprecision(3)<<"i"<<endl ;   
        }

        complex operator +( complex const &a ){
            float x = this->real + a.real ;
            float y = this->img + a.img ;
            complex res ;
            res.real = x ;
            res.img = y ;
            return res ;
        }

        complex operator -( complex const &b ){
            float x = this->real - b.real ;
            float y = this->img - b.img ;
            complex res ;
            res.real = x ;
            res.img = y ;
            return res ;
        }

        complex operator *(complex const &c){
            float x = this->real * c.real ;
            float y = this->img * c.img ;
            complex res ;
            res.real = x ;
            res.img = y;
            return res ;
        }

        complex operator /(complex const &d){
            float x = this->real / d.real ;
            float y = this->img / d.img ;
            complex res ;
            res.real = x ;
            res.img = y ;
            return res ;
        }

        complex operator () (){
            cout<<"Im a bracket ."<<endl ;
        }

};

int main(){

    complex num1 ;
    complex num2 ;
    num1.set( 2 , 4 ) ;
    num1.get() ;
    num2.set( 3 , 4 ) ;
    num2.get() ;

    complex sum = num1 + num2 ;
    sum.get() ;

    complex sub = num1 - num2 ;
    sub.get() ;
  
    complex multiply = num1 * num2 ;
    multiply.get() ;
  
    complex divide = num1 / num2 ;
    divide.get() ;
    
    num1() ;

    return 0 ;

}