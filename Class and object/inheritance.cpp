#include<iostream>
using namespace std;
class human {
    public:
    int hight;
    int age;
    int weight;
    public:
    int getweight(){
        return this->weight;
    }
    void setweghit(int w){
        this->weight = w;
    }
};

class male : public human{
    public:
    string color;

    void sleep(){
        cout<<" sleeping "<<endl;
    }
};

int main(){
    male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.hight<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.color<<endl;

    obj1.sleep();

    obj1.setweghit(66);
    cout<<obj1.getweight()<<endl;
    obj1.sleep();

    return 0;
}