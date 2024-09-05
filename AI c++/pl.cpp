#include <iostream>
using namespace std;
bool checkEvenOdd(int num);

int main()
{
   int num;
   bool isEven;
   cout<<"Enter any number: ";
   cin>>num;
   isEven = checkEvenOdd(num); 
   if(isEven)   
      cout<<num<<" is an rational number"; 
   else   
      cout<<num<<" is an irrational number";
  
   return 0;
}

bool checkEvenOdd(int num){
   bool b;
   
   if (num % 2 == 0)
      b=true;
   else 
      b=false;

   return b;
}
