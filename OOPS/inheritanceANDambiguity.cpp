
#include <bits/stdc++.h>
using namespace std;

class Human{
    public:
    int weight;
    int height;
    int age;
    
    int getage(){
        return age;
    }
    void setage(int data){
        age = data;
    }
    void grow(){
        cout<< "grow your personality man"<<endl;
    }
    
};

class College{
    public:
    int collegeId = 4;
    
    void grow (){
        cout<<"grow your avarage score"<<endl;
    }
};

class Student : public College,public Human{
    private:
        string name;
        int age=12;
        int height;
    
    // public:
    //     int getage(){
    //         return age;
    //     }
};


int main()
{
    cout<<"Hello World"<<endl;
    Student s;
    s.setage(80);
    cout<<s.getage()<<endl;
    cout<<s.collegeId<<endl;
    
    s.College::grow();//this is called as ambiguity when same function gets called by inheritance
    s.Human::grow();

    return 0;
}
