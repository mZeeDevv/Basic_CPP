//Program written to solve question no 3 on book.
//Program written by Hamza Shaukat Reg no. 4629-Foc-BSCS-B
//Dated :- 10 March 2023

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number between 9 to 35..... :";
    cin >> num;
if(num <=9)
{
    cout << " The number you give was"<< num << endl;
}
else if( num >= 10 && num <=35 )
{
    char letter = static_cast<char>('A' + num - 10);
    cout << "You Entered : " << letter << endl;
}
else {
    cout << "Already told you to give Interger between 9 to 35......";
}
}