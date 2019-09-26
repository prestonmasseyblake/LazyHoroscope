//Authors:Preston Massey-Blake
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string first = "";
string last= "";
int lucky = 0;
  //get user input
cout<<"What is your first name?\n";
cin>>first;
cout<<"What is your last name?\n";
cin>>last;
cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune...\n";
  //tell fortune
cout<<"your lucky number is "<<first.length()<<endl;
if (first[0]== 'a') { 
cout<<"you are destined to be famous!\nyou have already met your true love.\nhave a good day!"<<endl;
}
else if (first[0]== 'A') {
cout<<"you are destined to be famous!\nyou have already met your true love.\nhave a good day!"<<endl;
}
else if (first[0]== 'e') {
cout<<"you are destined to be famous!\nyou have already met your true love.\nhave a good day!"<<endl;
}
else if (first[0]== 'E') {
cout<<"you are destined to be ramous!\nyou have already met your true love.\nhave a good day!"<<endl;
}
else if (first[0]== 'i') {
cout<<"you are destined to be famous!\nyou have already met your true love.\nhave a good day!"<<endl;
}
else if (first[0]== 'I') {
cout<<"you are destined to be famous!\nyou have already met your true love.\nhave a good day!"<<endl;
}
else if (first[0]== 'o') {
cout<<"you are destined to be famous!\nyou have already met your true love.\nhave a good day!"<<endl;
}
else if (first[0]== 'O') {
cout<<"you are destined to be famous!\nyou have already met your true love.\nhave a good day!"<<endl;
}
else if (first[0]== 'u') {
cout<<"you are destined to be famous!\nyou have already met your true love.\nhave a good day!"<<endl;
}
else if (first[0]== 'U') {
cout<<"you are destined to be famous!\nyou have already met your true love.\nhave a good day!"<<endl;
}
else  {
cout<<"you should keep a low profile.\nhave a good day!"<<endl;
}
  return 0;
}
