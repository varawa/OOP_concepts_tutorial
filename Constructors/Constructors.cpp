#include<iostream>
#include<string.h>

using namespace std ;

class hero{

    private :
        int health ;
        char level ;

    public :   
        static int timetocomplete ;
        char *name ;
        //Copy constructor . 
        //NOTE : Default copy constructor makes a shallow copy .
        //Two types of copy constructors :
            //1. Shallow Copy .
            //2. Deep copy .
        hero(){
            name = new char[100] ;
        }

        hero(hero &copy){

            char *ch = new char[strlen(copy.name)] ;
            strcpy(ch , copy.name) ;
            this -> name = ch ;
            int h ;
            h = copy.health ;
            char l ;
            l = copy.level ;
            this -> health = h ;
            this -> level = l ;
        }
        
        hero(int health , char level){
            
            this -> health = health ;
            this -> level = level ;
        }

        //Destructor : No return type .
        // No parameters .
        // Name same as class name .
        // For statically allocated objects , destructor is called automatically .
        // For dynamically allocated objects , destructor is called manually .

        ~hero()
        {
            cout<<"Destructor called ." <<endl ;
        }

        int set(int h , char a){
            
            health = h ;
            level = a ;
        }

        void get(){
            cout<<"Name of hero : "<<this->name <<endl ;
            cout<<"Health of hero : "<< this->health << endl ;
            cout <<"Level of hero : "<< this->level << endl ;
            
        }

        void setname(char name[])
        {
            strcpy( this -> name , name) ;
        }

        //Static function .
        //1.No need to create object to call it .
        //2.Can only access static members .
        static int stat(int timetocomplete )
        {
            timetocomplete = 50 ;
        }
        
};

int hero::timetocomplete = 5 ;

int main(){
    char s[6] = "DAMON" ;
    hero harry ;
    
    harry.set(100 , 'A') ;
    harry.setname(s) ;
    harry.get() ;
    hero tom(harry) ;
    harry.get() ;
    harry.name[0] = 'a' ;
    harry.get() ;
    tom.get() ;
    hero::stat(44) ;
    cout<<hero::timetocomplete<<endl ;
    hero draco ;
    draco = harry ;
    draco.get() ;
    return 0 ;
}