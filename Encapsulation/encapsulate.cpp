#include<iostream>
using namespace std ;
#include<string.h>
#include<math.h>


class human{


    //Encapsulation : Wrapping up data members and functions .
    //Fully encapsulated class : All the data members are private marked .

    //Advantages of encapsulation :
    //1. Information hiding / data hiding .
    //2. security increased .
    //3. Data members can be fetched only using getters and setters , so if we want we can make our class read only .
    //4. Code reusability .

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