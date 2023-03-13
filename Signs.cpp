//Program written to find out if number is +ve / -ve / Neutral.
//Program written by Hamza Shaukat 
//Dated :- 10 March 2023

#include <iostream>
using namespace std;

int main()
{
  int num;
  cout<< " Enter a number  ";
  cin >>num;
 if( num < 0)
    cout << "This number is Negative";
 else if( num > 0)
    cout << "This number is Postive";
else 
    cout << "This number is Neutal";
}
//End of program