#include<iostream>
#include<regex>
#include<string>
using namespace std;
int main(){

string equation;
cout << "enter the equation" << endl;
getline(cin,equation);
smatch te;
regex parse(R"([a-zA-Z0-9\^]+|[+\-*/()]|\s)");
while( regex_search (equation,te,parse)){
cout << "matches patterns are  " <<te[0]<<endl;
equation=te.suffix().str();


}
}