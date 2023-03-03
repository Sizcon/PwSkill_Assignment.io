/*  Assignment 1

Q1 - Take 2 integer values in two variables x and y and print their product.

Ans :-

#include <iostream>

using namespace std;

int main(){

    int x,y,sum;

cout << "Enter the value for x " <<endl;
cin >> x;                                    // Taking input from the user for the value of x

cout << "Enter the value for y " <<endl;
cin >> y;                                      // Taking input from the user for the value of y


sum = x * y ;

cout << x << " * " << y << " = " << sum <<endl;

cout << "The answer is :- " << sum <<endl;

    return 0;
}

Q2 - Print the ASCII value of character ‘U’.

Answer:-



#include <iostream>

using namespace std;

int main(){


cout << "The ACII value is :- " << (int)'U' <<endl;

    return 0;
}

Q3 - Write a C++ program to take length and breadth of a rectangle and print its area.

Answer:-



#include <iostream>

using namespace std;

int main(){

int lenght,breadth,area;

cout << "Enter the lenght " <<endl;
cin >> lenght;

cout << "Enter the breadth " <<endl;
cin >> breadth;

area = lenght * breadth;

cout << "The are of reactangle is :- " << area <<endl;

    return 0;
}



Q4 - Write a C++ program to calculate the cube of a number.

Answer:-

#include <iostream>

using namespace std;

int main(){

int x,sum;

cout << "Enter the value " <<endl;
cin >> x;

sum = x*x*x;

cout << "Cube of the number is :- "  << sum <<endl;


    return 0;
    }

Q5 - Write a C++ program to find size of basic data types.

Answer:-

 

#include <iostream>

using namespace std;

int main()
{

    int a;
    char b;
    float c;
    double d;
    long e;
    bool f;

    cout << sizeof(a) <<endl;
    cout << sizeof(b) <<endl;
    cout << sizeof(c) <<endl;
    cout << sizeof(d) <<endl;
    cout << sizeof(e) <<endl;
    cout << sizeof(f) <<endl;

    return 0;
} 

Q6 - Write a C++ program to swap two numbers with the help of a third variable.

Answer :- 
  

#include <iostream>

using namespace std;

int main(){

int num1 = 1; 
int num2 = 2;
int temp;

cout << "Value of num 1 before swapping " << num1 << endl;
cout << "Value of num 2 before swapping " << num2 << endl;

temp = num2;  // temp(0) = 2
num2 = num1;  // 2 = 1
num1 = temp;  // 1 = 2

cout << "Value of num 1 after swapping " << num1 << endl;
cout << "Value of num 2 after swapping " << num2 << endl;


    return 0;
}

*/