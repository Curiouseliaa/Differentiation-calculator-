#include <regex>
#include <iostream>
#include <string>
using namespace std;
int main()
{
string s;
cout << "Enter the line you want to check" << endl;
getline(cin,s);
regex parse("\\d+");
if (regex_search(s,parse)){
cout << "The string contains only digits" << endl;
}

else{

cout << "No string have values other than digits" << endl;



}





}