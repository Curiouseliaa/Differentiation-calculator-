#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
string n,sen,op;
int numcount{0},sum{0},stringcount{0};

int operatorcount{0};


bool num;
cout << "Enter the sentance to be parsed" << endl;
getline(cin,n);
istringstream iss(n);
string token;
cout << "The text parsed" << endl;
while (iss>>token){
cout << "The tokens created  " << token<<endl;
num=true;
for(char ch : token){
if (!isdigit(ch)){
num= false;
break;

}
}
if(num){
numcount=numcount+1;
sum=stoi(token)+sum;

}
else if (token=="+"|| token=="-"|| token=="*"|| token=="/"|| token=="="){
operatorcount++;
op=op+token+" , ";}


else {
stringcount=stringcount+1;
sen=sen+token+" ";



}

}
cout << "The number of words are:\n " <<stringcount<< endl;
cout << "the Sentance without words is:\n " << sen<<endl;
cout<< " The number of digits are:\n"<<numcount<<endl;
cout << "Sum of all numbers is: \n" << sum<<endl;
cout << "The number of operators is:\n " <<operatorcount<< endl;
cout << "the operators are:\n " << op<<endl;


}





