#include<iostream>
#include<regex>
#include<string>
using namespace std;
int main(){

string equation;
cout << "enter the equation" << endl;
getline(cin,equation);
regex parse(R"(([a-z0-9\^]+\b[+\-/*]+)|([a-z0-9\(\)\+^\-/*]+)|([a-z0-9\^]+[+\-/*]+))");
smatch te;
while( regex_search (equation,te,parse)){
cout << "matches patterns are  " <<te[0]<<endl;
equation=te.suffix().str();


}
}