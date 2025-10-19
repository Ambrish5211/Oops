#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age, roll_number;
    string grade;
};

int main()
{
       Student *S = new Student();
       S->name = "Rohit";
       S->age = 20;
       S->roll_number = 6;

       cout<<S->name<<" ";
       cout<<S->age<<" ";
       cout<<S->roll_number<<" \n";

       Student s1;
       s1.name = "Ambrish";
       s1.age = 10;
       s1.roll_number = 4;

       cout<<s1.name<<" ";
       cout<<s1.age<<" ";
       cout<<s1.roll_number<<" ";
}

// Summary
// Stack objects auto-destroy when out of scope; heap objects need manual delete.
// Forgetting delete causes memory leaks during program execution.
// OS reclaims all memory after program exits, so leaks only matter while running.
// Use smart pointers (unique_ptr, shared_ptr) to manage heap memory automatically.
// Prefer stack objects and STL containers over raw new/delete.
// RAII ensures resources are released when objects go out of scope.
// unique_ptr gives single ownership; shared_ptr allows shared ownership.
// Avoid raw pointers unless absolutely necessary; always delete if used.
// Memory leaks matter most in long-running programs (servers, loops, etc.).
// Enable -fsanitize=address to detect memory leaks during debugging.
