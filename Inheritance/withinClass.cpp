#include<iostream>
using namespace std;

// Same Class All Access
// Within same class everything is accessible
class Human{
   private:
   int a;
   protected:
   int b;
   public:
   int c;

   void fun(){
    a = 10;
    b = 20;
    c = 30;
   }
};

int main()
{
    Human Rohit;
    Rohit.c = 10;
}