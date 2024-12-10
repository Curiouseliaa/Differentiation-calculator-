#include<iostream>
#include<sstream>
using namespace std;
int main(){
string a;
cout << "Enter the sentance to be parsed " << endl;
getline(cin,a);
istringstream iss(a);
int c,d;
string z;
iss >>c>>d;
cout << "The parsed values "<<c<< z<<d<< endl;
ostringstream oss;
oss<<c<<" and "<<d<<" are numbers"<<endl;

cout<< oss.str();


}
    