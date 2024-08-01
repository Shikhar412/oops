#include<iostream>
using namespace std;

class Hero{

   public:
    int health ;
    char level;

    Hero() { 
        cout<<"Constructor called"<<endl;
    }
    
    //Parameterized constructor
    Hero(int health){
        
        this->health=health;
        cout<<"this"<<this<<endl;
    }


    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
    return health;
    }

    char getLevel(){
        return level;
    }
    
    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level=ch;     
    }

    };


int main(){
    //object created statically

    Hero ramesh(10);
    cout<<"Address of ramesh"<<&ramesh <<endl;
    //ibject created dynamically

    Hero *h= new Hero();

}    