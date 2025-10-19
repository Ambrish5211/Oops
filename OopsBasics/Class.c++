#include<iostream>

using namespace std;

class Student{
    private: // by default also private
    string name;
    int age, roll;
    string grade;

    public:
    void setName(string name){
        this->name  = name;
    }

    void setAge(int age){
        this->age = age;
    }

    void setRoll(int roll){
        this->roll = roll;
    }

    void setGrade(string grade){
        this->grade = grade;
    }

    string getName(){
        return this->name;
    }

    int getRoll(){
        return this->roll;
    }

};


int main(){
    Student s1;
    // s1.name = "Ambrish Kumar";
    // s1.age = 18;        
    // Directly modifying these are not allowed as they are by default private members, we will use getters and setters to access private or protected members

    s1.setName("Ambrish");
    s1.setRoll(04);

    cout<<s1.getName()<<" "<<endl;
    cout<<s1.getRoll()<<" \n";




    return 0;
}