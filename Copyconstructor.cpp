#include<iostream>
using namespace std;

class Hero{

   public:
    int health ;
    char level;

    Hero() { 
        cout<< "Constructor called" <<endl;
    }
    


    Hero(int health){
        
        this->health=health;

    }
    
    Hero(int health,char level){
        this->level=level;
        this->health=health;
    }

    //Copy constructor

 
    Hero (Hero& temp) {
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << "health" << this->health <<endl;
        cout << "level" << this->level <<endl;
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
    Hero S(70,'C');
    S.print();

    //Copy constructor
    Hero R(S);
    R.print();
}    