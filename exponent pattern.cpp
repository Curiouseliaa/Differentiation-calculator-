#include<iostream>
#include<regex>
#include<string>
using namespace std;
int main(){

string equation;
cout << "enter the equation" << endl;
getline(cin,equation);
smatch te;
regex parse(R"(\^(-?\d+))");
while (regex_search(equation,te,parse)){
cout << "the matches are " <<te[1]<< endl;
equation=te.suffix().str();
}

}
