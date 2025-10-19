#include<iostream> 

using namespace std;

class a{
    int a;
    char b;
    // Size = 8 But expected 5 This is because of the concept Padding
};

int main(){

    a obj;

    cout<<sizeof(obj);

    // Even if obj would have been empty like no a or b then also its size would have been 1 as in C++ they assign 1 bit to any object to distinguish from the other objects
    return 0;
}

// More interesting padding examples below

// #include<iostream>
// using namespace std;

// // Eg.1
// class a
// {
//     char c;
//     int b;
//     char d;
// };

// int main()
// {
//     a obj;
//     cout<<sizeof(obj)<<" "; //12 Output
// }

// // Eg.2
// class a
// {
//     char c;
//     char d;
//     int b;
// };

// int main()
// {
//     a obj;
//     cout<<sizeof(obj)<<" "; //8 Output
// }

// //Eg.3
// class a
// {
//     char c;
//     char d;
//     int b;
//     double e;
//     // c d p p b b b b e e e e e e e e
// };

// int main()
// {
//     a obj;
//     cout<<sizeof(obj)<<" "; //16 Output (2 Padding)
// }

// //Eg.4
// class a
// {
//     char c;
//     int b;
//     char d;
//     double e;
//     // c p p p b b b b d p p p e e e e e e e e
//     // p = padding
// };

// int main()
// {
//     a obj;
//     cout<<sizeof(obj)<<" "; //24 Output
// }