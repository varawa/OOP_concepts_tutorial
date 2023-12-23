#include<iostream>
#include<string.h>
#include<math.h>
using namespace std ;

class animal{
    
    public:
        
        int age ;
        int weight ;
        
    public :
        void speak(){
            cout<<"IT SPEAKS ."<<endl ;
        }
};

//TYPES OF INHERITENCE .
//1. SINGLE INHERITENCE     2. MULTI LEVEL     3. MULTIPLE     4. HYBRID     5. HIERARCHICAL 

//___________
//SINGLE INHERITENCE 
//The inheritance in which a single derived class is inherited from a single base class is known as the Single Inheritance. 
//It is the simplest among all the types of inheritance since it does not include any kind of inheritance combination or different levels of inheritance.

class dog : public animal{

    public :
    string breed ;
    
    int Breed(string breed ){
        this->breed = breed ;
        return 0 ;
    }

    void ages(int a){
        this->age = a ;
    }

    void get(){
        cout<<"IM CALLED"<<endl ;
        cout<<"Age : "<<this->age<<endl ;
        cout<<"Breed : "<<this->breed<<endl ;
        cout<<"Weight : "<<this->weight<<endl ;
    }


};

int main(){

    dog tiger ;
    tiger.ages(5) ;
    tiger.weight = 48 ;
    tiger.speak() ;
    char br[20] = "German Shepherd" ;
    tiger.Breed(br) ;
    tiger.get() ;
    return 0 ;
}