#include<iostream>

using namespace std;

class Customer
{
    string name;
    int acc_number;
    int balance;

    public:
    // Default Constructor
    Customer()
    {
        name = "Rohit";
        acc_number = 12345;
        balance = 0;
    }

    // Parametrized Constructor and Constructor Overloading
    Customer(string name, int acc_number, int balance){
        this->name = name;
        this->acc_number = acc_number;
        this->balance = balance;
    }

    // Inline Constructor
    inline Customer(string a, int b): name(a), acc_number(b){}


    // Copy Constructor
    // Customer(Customer &B){
    //     name = B.name;
    //     acc_number = B.acc_number;
    //    balance = B.balance;
    // }


    // If we don't pass parametes as reference in the constructors that we make then it causes infinite recursion call problem, watch video if you want to relate it with example

};

// We need our own constructor, even though compiler provides one is because maybe we don't want to totally copy everything...we want to change some value or something

int main(){
     Customer A1;
    Customer A2("Rohit", 123, 10000);
    Customer A3("Mohit", 25, 5000);
   
    Customer A4(A3);
      
    // Value assign with assignment operator
    Customer A5;
    A5 = A3;
   
    return 0;
}