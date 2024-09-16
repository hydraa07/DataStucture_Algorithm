#include<iostream>
using namespace std;
class Hero{
    int health;
    public:
    
    char level;

    Hero(){// default constructor 
        cout<<" I am in side the constructor"<<endl;
    }

    Hero (int health){// perameterize constructor 
    // val = health
    this->health = health;
    cout<<" I am in perameterised constructor"<<endl;
    }

    Hero (int health, char level){// perameterize constructor 
    // val = health
    this->level = level;
    this->health = health;
    cout<<" I am in perameterised constructor"<<endl;
    }

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }
    void setlevel(char ch){
        level = ch;
    }

    void print(){
        cout<<this->level<<endl;
        cout<<this->health<<endl;
    }

    //copy constructor 
    Hero (Hero& temp){// pass by referance karte  hai to same memory me update hota hai 
                      // pass by value karte hai to alg se memory banti hai 
        this->health = temp.health;
        this->level = temp.level;
    }

};

int main(){
    // cout<<" HII "<<endl;
    // Hero ram(500);
    // cout<<"hello "<<endl;
    // Hero *h = new Hero;
    // Hero ram(588,'C');

    Hero s(58,'A');
    s.print(); 

    Hero r(s); // copy constructor 
    r.print();// ESKa matlb hai ki obj s ki propertys obj r me copy ho gai hai













    // // static allocation
    // Hero ram;
    // // ram.health = 45;

   
    // ram.sethealth(66);
    // ram.level = 'A';
    // cout<<" health is = "<<ram.gethealth()<<endl;
    // cout<<" level is = "<<ram.level<<endl;

    //  // dynamic allocation
    // Hero *h = new Hero;

    // h->sethealth(100);
    // h->level = 'B';

    // cout<<(*h).gethealth()<<endl;
    // cout<<(*h).level<<endl;

    // cout<<endl<<endl;
    // cout<<h->gethealth()<<endl;
    // cout<<h->level<<endl;


    return 0;
}