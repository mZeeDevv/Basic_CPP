//Program written to find out Right Triangle
//Program written by Hamza Shaukat 
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