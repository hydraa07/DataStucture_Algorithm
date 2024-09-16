#include<iostream>
using namespace std;
class hero{
    public:
    int health;
    char level;

    hero(int health){
        this->health = health;//this me sab class ke element hote  hai class ke property ke access karta hai this
    }
    hero(char level){
        this->level = level;
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
};

int main(){
    //statically allocation
    // hero a;
    // a.health=10;
    // a.level = 'A';
    // cout<<"health is :"<<a.health<<endl;
    // cout<<"level is :"<<a.level<<endl;
    // cout<<endl;

    //dynamically allocation

    hero *b = new hero(10);
    cout<<b->health<<endl;
    cout<<b->level;



    // b->sethealth(20);
    // b->setlevel('B');
    // cout<<"health is :"<<b->gethealth()<<endl;
    // cout<<"level is :"<<b->getlevel()<<endl;
    // cout<<endl;
     
    // (*b).sethealth(50);
    // (*b).setlevel('F');
    // cout<<"health is :"<<(*b).gethealth()<<endl;
    // cout<<"level is :"<<(*b).getlevel()<<endl;
    


    return 0;
}