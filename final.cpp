#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
  float a, b, c;
  int d;
  //menu for calculator 
cout<<"________________________________________"<< endl;                        cout<<"Scientific Calculator with equation list"<<endl;                
cout<<"________________________________________"<< endl << endl;
cout<<"Please pick an operation or function\n\n";   
cout<<"1. Addition\n";
cout<<"2. Subtraction\n";
cout<<"3. Multiplication\n";
cout<<"4. Division\n";
cout<<"5. Exponent\n";
cout<<"6. Square Root\n";
cout<<"7. Sin\n";
cout<<"8. Cos\n";
cout<<"9. Tan\n";
cout<<"10. Sin Inverse\n";
cout<<"11. Cos Inverse\n";
cout<<"12. Tan Inverse\n";
cout<<"13. Log\n";
cout<<"14. Natural Log\n";
cout<<"15. Equation List\n\n";
cout<<"Enter the number for the calculation you want to perform (1-15) \n";
cin>>d;

switch(d)                //switch statement for calculator options
{
  case 1:                            //each case is for an operation or function
  cout<<"Enter number \n";
  cin>>a;
  cout<<"Enter the other number \n";
  cin>>b;
  cout<<"Addition =  " << a+b;         //basic addition function
  break;

case 2:                             
cout<<"Enter number \n";
cin>>a;
cout<<"Enter the other number \n";
cin>>b;
cout<<"Subtraction = " << a-b;         //subtraction function
break;

case 3:
cout<<"Enter number \n";
cin>>a;
cout<<"Enter the other number \n";
cin>>b;
cout<<"Multiplication = " << a*b;         //multiplication function
break;

case 4:
cout<<"Enter number \n";
cin>>a;
cout<<"Enter the other number \n";
cin>>b;
cout<<"Division = "<< a/b;              //division function
break;

case 5:
cout<<"Enter number \n";
cin>>a;
cout<<"Enter exponent \n";
cin>>b;
cout<<"Exponent = " << pow(a,b);        //exponent function
break;

case 6:
cout<<"Enter number \n";
cin>>a;
cout<<"The square root of " << a << " = " << sqrt(a);     //square root function
break;

case 7:
cout<<"Enter number \n";
cin>>a;
cout<<"Sin = " << sin(a);              //sine function
break;

case 8:
cout<<"Enter number \n";
cin>>a;
cout<<"Cos = " << cos(a);             //cosine function
break;

case 9:
cout<<"Enter number \n";
cin>>a;
cout<<"Tan = " << tan(a);            //tangent function
break;

case 10:
cout<<"Enter number \n";
cin>>a;
cout<<"Enter other number \n";
cin>>b;
cout<<"Sin Inverse = " << asin(a/b);    //inverse of sine function 
break;

case 11:
cout<<"Enter number \n";
cin>>a;
cout<<"Enter other number \n";
cin>>b;
cout<<"Cos Inverse = " << acos(a/b);    //inverse of cosine function
break;

case 12:
cout<<"Enter number \n";
cin>>a;
cout<<"Enter other number \n";
cin>>b;
cout<<"Tan Inverse = " << atan(a/b);    //inverse of tangent function
break;

case 13:
cout<<"Enter number \n";
cin>>a;
cout<<"Log = " << log10(a) << endl;    //log function
break;

case 14:
cout<<"Enter number \n";
cin>>a;
cout<<"Natural Log = " << log(a);     //natural log function
break;

case 15:                            //case 15 is the start of a new switch 
int e;                              //statement that if selected will open
cout<<"***************" << endl;    // a list of equations you could reference 
cout<<"*Equation List*" << endl;    
cout<<"***************" << endl << endl;
cout<<"1. Area \n";
cout<<"2. Volume \n";
cout<<"3. General Equations \n\n";
cout<<"Select a choice (1-3) \n";
cin>>e;

default:                                   //default if the user inputs a 
cout<<"Please choose between 1-15 \n";    // number not between 1 through 15

switch (e)                  // Switch statement for the equation list
{          
  case 1:
  cout<<"___________________________________\n";
  cout<<"Area of a triangle = 1/2(b*h) \n\n";
  cout<<"Area of a rectangle = b*h \n\n";
  cout<<"Area of a trapezoid = 1/2(b1+b2)*h \n\n";
  cout<<"Area of a parallelogram = b*h \n\n";
  cout<<"Area of a circle = pi*r^2 \n";
  cout<<"___________________________________\n";
  break;

  case 2:
  cout<<"______________________________________\n";
  cout<<"Volume of a rectangular prism = l*w*h \n\n";
  cout<<"Volume of a triangular prism = b*h*l/2 \n\n";
  cout<<"Volume of a cylinder = pi*r^2*h \n\n";
  cout<<"Volume of a pyramid = l*w*h/3 \n\n";
  cout<<"Volume of a cone = pi*r^2*h/3 \n\n";
  cout<<"Volue of a sphere = 4/3(pi*r^3) \n";
  cout<<"_______________________________________\n";
  break;

  case 3:
  cout<<"_________________________________\n";
  cout<<"Slope of a line: m = y^2-y/x^2-x \n\n";
  cout<<"Equation of a circle: (x-h)^2+(y-k)^2=r^2 \n\n";
  cout<<"Point slope form: y-y1=m((x-x1) \n\n";
  cout<<"Slope intercept form: y=mx+b \n\n";
  cout<<"Pythagorean theorem: a^2+b^2=c^2 \n\n";
  cout<<"Distance = r*t \n\n";
  cout<<"Velocity = d/t \n\n";
  cout<<"Density = m/v \n";
  cout<<"_________________________________\n";
  break;
default:                                    //default for equation list if user
cout<<"Please choose between 1-3 \n";       //doesnt enter between 1 through 3
}
  }
}
