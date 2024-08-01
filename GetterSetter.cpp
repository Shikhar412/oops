//Getter/Setter Concept:


 /* Getters : In C++, getters, also known as accessors
 (as they access the value), are the public member functions
 that are used to fetch private member’s values.
  In general, the getter starts with the word “get” followed by the variable name.*/

/*Setters, also known as mutators
 (as they update the value), are also the public member functions
 that set the value of a private member variable.
 In general, the setter starts with the word “set” followed by the variable name. */

 
#include <iostream>
using namespace std;

class Hero{

   public:
    int health ;
    char level;
 
    void print(){
        cout<<level<<endl;
    }
    

    // returns health
    int getHealth(){
    return health;
    }

    // returns level:

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

        Hero ramesh;
        cout<<sizeof(ramesh)<<endl;//This concept is in notes by name under gettersetter concept
        cout<<"Ramesh health is "<<ramesh.getHealth()<<endl; 
        ramesh.setHealth(70);
        ramesh.level = 'A';

        cout <<"health is "<< ramesh.getHealth() <<endl;
        cout <<"Level is " << ramesh.level<<endl;

        return 0;
    }

    /* Ramesh will take size as 8 byte eventhough it is having char and int bcoz::
    
    To determine the memory size taken by the Hero class, we need to consider the sizes of its data members and how padding might affect the overall memory usage. Let's analyze it step by step.

Analyzing Memory Usage
Data Members:

int health; — Typically 4 bytes.
char level; — Typically 1 byte.
Padding and Alignment:

Compilers often add padding to align data members on natural boundaries. For instance, on a 64-bit system, the alignment requirement is often 8 bytes.
Since int usually requires 4 bytes and char requires 1 byte, the compiler might align the size of the Hero class to a multiple of 4 or 8 bytes to ensure proper alignment.
Example Calculation
Let’s calculate the size of the Hero class considering typical alignments:

Initial Sizes:

int health — 4 bytes.
char level — 1 byte.
Padding:

After char level, there might be padding added to make the total size align with the largest alignment requirement of the class.
Alignment Consideration:

Most systems align objects to 4 or 8 bytes. If int is aligned to 4 bytes, the total size of the Hero class might be padded to align with this requirement.
Typical Size Calculation
The size of int is 4 bytes.
The size of char is 1 byte.
The char may be followed by 3 bytes of padding to align the total size to 8 bytes.
Thus, the class might be padded to 8 bytes to meet the alignment requirements.*/