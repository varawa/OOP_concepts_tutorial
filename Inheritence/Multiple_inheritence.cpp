#include<iostream>
#include<string.h>
#include<math.h>

using namespace std ;

class animal{
    
    public:
        
        int age ;
        int weight ;
        
    public :

        animal(){
            cout<<"Animal constructor called ."<<endl ;
        }

        void bark(){
            cout<<"Barking."<<endl ;
        }
};

class human{

    private :
        string name ;
        string race ;
        int age ;
        int weight ;
        int height_f ;
        int height_in ;

    protected :
        int i ;

    public :

        human(){
            cout<<"Human constructor called ."<<endl ;
        }

        void speak(){
            cout<<"Speaking ."<<endl ;
        }

        int setAge(int a){
            this->age = a  ;
            return this->age ;
        }

        int setWeight(int wt){
            this->weight = wt ;
            return this->weight ;
        }

        void setRace(string race){
            this->race = race ;
        }

        void setHeight(int ft , int inches){
            this->height_f = ft ;
            this->height_in = inches ;
        }

        void setName(string name){
             this->name = name ;
        }

        void getDetails(){
            cout<<"Race of human : "<<this->race <<endl ;
            cout<<"Height of human : "<<this->height_f<<"'"<<this->height_in<<"''" <<endl ;
            cout<<"Age of human : "<<this->age <<endl ;
            cout<<"Weight of human : "<<this->weight <<endl ;
            cout<<"Name of human : "<<this->name <<endl ;

        }

};

//MULTIPLE INHERITENCE .
//Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes.  
//The constructors of inherited classes are called in the same order in which they are inherited.

class hybrid : public human , public animal{

    public :
        void hi(){
            cout<<"Hi! Im a hybrid ."<<endl ;
        }

};

int main(){

    hybrid klaus ;
    klaus.hi() ;
    klaus.bark() ;
    klaus.speak() ;
    return 0 ;
}