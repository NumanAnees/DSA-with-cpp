#include <iostream>

using namespace std;

class Person{
public:
    void introduce(){
    cout << "hi i am a person"<<endl;
    }

};
class Human{
    public:
    void introduce(){
        cout<<"hi i am a human"<<endl;
    }
};

class Student : public Person,public Human{
public:
    void introduce(){
    cout << "hi i am a student and i am awesome"<<endl;

    }

};

int main()
{   //call the student func....
    Student numan;
    numan.introduce();  


    return 0;
}

 