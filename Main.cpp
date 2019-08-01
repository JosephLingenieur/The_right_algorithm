//By Joseph L'ingenieur
//The rigth algorithm make a great difference 

// What to do:
// 1. Compile the following code and run it on an input "40" to see how long it for this  algorithm "slow_fibonacci(number)"  to show the output 
// 2. Comment the lines "slow_fibonacci(number)" and uncomment the line "fast_fibonacci(number)" compile, run it again on a input of "40" and =>  see the magic happen!! .

#include <iostream>

using namespace std;

// int factorial(int n)
// {
// if (n <= 1)
//  return n;
// return n * factorial(n - 1);
// }
// int _factorial(int n)
// {
// int result =1 ;
// while (n!=0)
// {
//  result= result* n ;
//  n--;
// }
// return result;
// }

int slow_fibonacci(int n)
{
if (n <= 1)
 return n;
return(slow_fibonacci(n - 1) + slow_fibonacci(n - 2));
}

int fast_fibonacci( int n)
{ 
int result =0 ;
int* myarray = new int[n + 1];
for (int i = 0; i < n + 1; i++)
{

 if (i <= 1)
 { 
  //initialize fib
  myarray[i] = i;
  result = myarray[i];
 }
 else
 {
  myarray[i] = myarray[i - 2] + myarray[i - 1];
     result = myarray[i];
 }
}
delete[] myarray;
return result;
}

//----------------------- main program ------------------------------------------------
int main()
{  
int number;
cout << "...... Enter a interger number......." << std::endl;
std::cin >> number;
if (number <= 0)
 return 0; //exist by wrong number
//cout << fast_fibonacci(number) << endl;
cout << slow_fibonacci(number) << endl; 

cout << ".......end......" << endl;
return 0;
}