/* INPUT :TWO NUMBERS AND THE OPERATION WE REQUIRE TO DO
   OUTPUT: VALUE OF THE RESULT WITH THE OPERATION PERFORMED
*/

#include<stdio.h>

float add(float a,float b) //declaring a function for adding
{
 float result;
 result=(a)+(b);
 printf("%0.4f",result);
}

float sub(float a,float b) //declaring a function for subtracting
{
 float result;
 result=(a)-(b);
 printf("%0.4f",result);
}

float mul(float a,float b)  //declaring a function for multiplying
{
 float result;
 result=(a)*(b);
 printf("%0.4f",result);
}

float div(float a,float b)  //declaring a function for dividing
{
 float result;
 result=(a)/(b);
 printf("%0.4f",result);
}

int main()
{
float a,b;
char c; 

scanf("%f %f %c",&a,&b,&c); //taking input of the two numbers

if(c=='+')
{
  float (*f)(float,float)=add; //initiallizing a function pointer
          f(a,b); //calling the function using a pointer
}
else if(c=='-')
{
  float (*g)(float,float)=sub;//initiallizing a function pointer
          g(a,b);//calling the function using a pointer
}
else if(c=='*')
{
  float (*h)(float,float)=mul;//initiallizing a function pointer
          h(a,b);//calling the function using a pointer
}
else
{
 float (*i)(float,float)=div;//initiallizing a function pointer
          i(a,b);//calling the function using a pointer
}


}


