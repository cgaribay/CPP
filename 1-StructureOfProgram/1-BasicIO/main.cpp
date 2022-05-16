// Basic I/O using cin and cout
#include <iostream>
#include <math.h>

using namespace std;

int main() {
//     import math

// def main():
//     print('Calcular el area de un triangulo a partir del valor de sus tres lados')
//     print('Lado 1:')
//     a=float(input())
//     print('Lado 2:')
//     b=float(input())
//     print('Lado 3:')
//     c=float(input())
//     s=(a+b+c)/2
//     area=math.sqrt(s*(s-a)*(s-b)*(s-c))
//     print('El area es: '+str(area))

// main()

cout << "Calcular el area de un triangulo a partir del valor de sus tres lados" << endl;
cout << "Lado 1: " << endl;
float a {0.0};
cin >> a;
cout << "Lado 2: " << endl;
float b {0.0};
cin >> b;
cout << "Lado 3: " << endl;
float c {0.0};
cin >> c;

float s = (a + b + c) / 2;
float area = sqrt(s * (s - a) * (s - b) * (s - c));
cout << "El are es: " << area << endl; 



    // cout << "Hello world!";

    
//    cout << "Hello";
//    cout << "World" << endl;

//    cout << "Hello world!" << endl;
// //    cout << "Hello" << " world!" << endl;
// //    cout << "Hello" << " world!\n";
//    cout << "Hello\nOut\nThere\n";

//    int num1 {200};
//    int num2 {0};
//    double num3 {0.0};

//    cout <<  "Enter an integer: ";
//    cin >> num1;
//    cout << "You entered: " << num1 << endl;

//    cout << "Enter a first integer: ";
//    cin >> num1;
   
//    cout << "Enter a second integer: ";
//    cin >> num2;
   
//    cout << "You entered " << num1 << " and " << num2 << endl;
    
    
//    cout << "Enter 2 integers separated with a space: ";
//    cin >> num1 >> num2;
//    cout << "You entered " << num1 << " and " << num2 << endl;



//    cout << "Enter a double: ";
//    cin >> num3;
   
//    cout << "You entered : " << num3 << endl;

   
//    cout << "Enter an integer: ";
//    cin >> num1;
//    
//    cout << "Enter a double: ";
//    cin >> num3;
//    
//    cout << "The integer is: " << num1 << endl;
//    cout << "And the double is " << num3 << endl;
  

    return 0;
}