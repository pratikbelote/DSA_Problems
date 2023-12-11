#include <bits/stdc++.h>
using namespace std;

//dynamic or runtime polymorphism
//method overriding
class animal{
    public:
    int height = 50;
    
    void getheight(){
        cout<<"my height is "<<30<<endl;
    }
    
    void speaking(){
        cout<<"somme noise"<<endl;
    }
};

class dog : public animal{
    public:
    int weight;
    
    void getheight(){
        cout<<"my height is "<<40<<endl;
    }
    
    void barking(){
        cout<<"bho..bho..bhp"<<endl;
    }
};

int main()
{   
    dog d;
    d.getheight();
    d.animal::getheight();
    return 0;
}
