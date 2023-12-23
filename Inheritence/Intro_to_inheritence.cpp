#include<iostream>
using namespace std ;
#include<string.h>
#include<math.h>

//INHERITENCE

//Class X -> Class Y .
//Such as some functions A and B are inherited from class A to class B .
//Theres a class called HUMAN.
//Its properties are height , age , weight etc .
//Now we wanna make two new classes male and female .
//In such cases we can inherit some properties from class human in classes male and female .
//Here human can be called CLASS/SUPERCLASS/PARENT CLASS and , male and female are CHILD CLASS/SUB CLASS/DERIVED CLASS .


//Example : If a data member of parent class is private and a child class is inherited as public then the data member will not be accessible .
//And if a data member of parent class is public and a child is inherited as public then data member will be public .

// PARENT CLASS    |    CHILD CLASS    |   FINAL DATA MEMBER
//_________________|___________________|_____________________
//  Private        |     Public        |    N.A. (Private data members of parent class can not be inherited) .
//  Private        |     Private       |    N.A. (Private data members of parent class can not be inherited) .
//  Private        |     Protected     |    N.A. (Private data members of parent class can not be inherited) .
//  Protected      |     Public        |    Protected
//  Protected      |     Protected     |    Protected
//  Protected      |     Private       |    Private
//  Public         |     Public        |    Public
//  Public         |     Protected     |    Protected
//  Public         |     Private       |    Private

//NOTE : Privte data member of super class / parent class can not be inherited .


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



class male : public human{

    public :
        string religion ;

        void sleep(){
            cout<<"Male is sleeping ."<<endl ;
        }

};

//PROTECTED INHERITENCE
//Can be accessed inside the class .
//Similar as private class but can be accessed by child/derived class unlike private data member .

int main(){

    //MORMAL CLASS

    human neha ;
    neha.setRace("Brown") ;
    neha.setWeight(55) ;
    neha.setHeight(5 , 5) ;
    neha.setName("NEHA SHARMA") ;
    neha.setAge(19) ;

    neha.getDetails() ;

    //INHERITED CLASS

    male ram ;
    
    ram.setRace("Brown") ;
    ram.setWeight(75) ;
    ram.setHeight(7 , 0) ;
    ram.setName("RAM") ;
    ram.setAge(25) ;

    ram.getDetails() ;
    ram.sleep() ;
    return 0 ;
}