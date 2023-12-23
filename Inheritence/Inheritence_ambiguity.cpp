#include<iostream>
#include<string.h>
#include<math.h>

//SCOPE RESOLUTION OPERATOR .

using namespace std ;
class animal{
    
    public :

        void abc(){
            cout<<"abc of animal ."<<endl ;
        }
};

class human{


    public :
        //  Same name function as in parent class .
        void abc(){
            cout<<"abc of human ."<<endl ;
        }

};

class hybrid : public human , public animal{

    
};

int main(){

    hybrid klaus ;
    //Scope resolution to tell the compiler which function is being called .
    klaus.human::abc() ;
    return 0 ;

}