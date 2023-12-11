#include <bits/stdc++.h>
using namespace std;

class Man{
    public:
    //function overloading
    void sayhello(){
        cout<<"Hello friend"<<endl;
    }
    void sayhello(string name){
        cout<<"Hello "<<name<<endl;
    }
    void sayhello(string name,string sirname="anything"){
        cout<<"Hello-"<<name<<endl;
    }
};

int main()
{
    cout<<"Hello World"<<endl;
    Man m;
    //m.sayhello("name");//ambiguity case
    m.sayhello("name","helloo");
    

    return 0;
}
