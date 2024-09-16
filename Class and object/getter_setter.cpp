#include<iostream>
using namespace std;
class hero{
    public:
    int health;
    char level;

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
    hero ravi;

    //dynamically allocation

    hero *a = new hero;

    // ravi.health = 10;
    // ravi.level='A';
    // cout<<"health is :"<<ravi.health<<endl;
    // ravi.sethealth(50);
    // cout<<"health is  : "<<ravi.gethealth()<<endl;
    // cout<<endl;
    // cout<<"level is :"<<ravi.level<<endl;
    // ravi.setlevel('B');
    // cout<<"level is :"<<ravi.getlevel()<<endl;
    return 0;
}