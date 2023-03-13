//Program written to find out Right Triangle
//Program written by Hamza Shaukat Reg no. 4629-Foc-BSCS-B
//Dated :- 10 March 2023

#include <iostream>
using namespace std;

int main(){
int firstSide,secondSide,thirdSide;
cout<<"Input firstside: ";
cin>>firstSide;
cout<<"Input secondside: ";
cin>>secondSide;
cout<<"Input thirdside: ";
cin>>thirdSide;
if((firstSide*firstSide+secondSide*secondSide==thirdSide*thirdSide)||(firstSide*firstSide+thirdSide*thirdSide==secondSide*secondSide)
||(thirdSide*thirdSide+secondSide*secondSide==firstSide*firstSide))
cout<<"Triangle is right"<<endl;
else
cout<<"Triangleis not right"<<endl;

}