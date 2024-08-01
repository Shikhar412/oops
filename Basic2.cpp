#include <iostream>  //we can also include (#include "Hero.cpp") in the header file
using namespace std;

class Hero{

    //properties
   public:
    int health ;
    char level;
 
    void print(){
        cout<<level<<endl;
    }
    };

    int main(){

        //Creation of Object

        Hero ramesh;

        ramesh.health = 70;
        ramesh.level = 'A';

        cout <<"health is "<< ramesh.health <<endl;
        cout <<"Level is " << ramesh.level<<endl;

        return 0;
    }