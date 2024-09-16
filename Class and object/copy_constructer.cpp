#include<iostream>
using namespace std;
class hero{
    public:
    int health;
    char level;

    hero(int health,char level){
        this->health = health;
        this->level = level;    //this me sab class ke element hote  hai class ke property ke access karta hai this
    }
    
    void print(){
        cout<<this->health;
        cout<<endl;
        cout<<this->level;
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
    hero R(70,'A');//copy constructer
    cout<<R.health<<endl;
    cout<<R.level<<endl;
    hero S(R);
    S.print();
    
    return 0;
}