#include<iostream>
using namespace std;


// public - everything is accessible within same class and outside class as well including derived class
// protected - everything is accessible within the same class and in the derived class(child class), but not in any random class
// private - everything is accessible within the same class but nothing outside the class, not even in the child class

// HOW TO INHERIT ANY CLASS
// class childClass : access_modifier parentClass

class Human{
    string Religion, color;
    public:
    string name;
    int age,weight;
};
class student: protected Human{
    private:
    int roll_number, fees;
    public:
    student(string name, int age, int weight, int roll_number, int fees)
    {
        this-> name = name;
        this-> age  = age;
        this-> weight = weight;
        this-> roll_number = roll_number;
        this->fees = fees;
    }
    void display()
    {
        cout<<name<<" age is "<<age<<" weight is "<<weight<<" Roll_No. is "<<roll_number<<" and fees is "<<fees;
    }

};

class Teacher : public Human{
    int salary,id;
};

int main()
{
    student A("vivek", 12, 400, 23, 200);
    A.display();
    Teacher B;
    B.name = "Mohit";
}