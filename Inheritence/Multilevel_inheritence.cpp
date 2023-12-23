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

//MULTI-LEVEL INHERITEENCE 
//Multi-level Inheritance. The multi-level inheritance includes the involvement of at least two or more than two classes. 
//One class inherits the features from a parent class and the newly created sub-class becomes the base class for another new class.

class german_shepherd : public dog{

    private :

        string color ;

    public :
        void colors(string c){
            this->color = c ;
            cout<<"This dog is "<<this->color<<" ."<<endl ;
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
    german_shepherd tom ;
    tom.breed ;
    tom.age ;
    tom.colors("brown") ;
    return 0 ;
}