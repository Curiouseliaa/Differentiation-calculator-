#include<iostream>
#include<sstream>
using namespace std;
int main(){
string parse;
bool num;
cout << "Enter the line to be parsed" << endl;
getline(cin,parse);
istringstream iss(parse);//create the stream from string 
string token;
cout << "parsed tokens are" << endl;
while(iss>>token){
cout << "the tokens are " <<token<< endl;
 num= true;
for(char ch: token){
if(!isdigit(ch)){
 num= false;
break;


}


}

if(num){
cout << "This is anumber\n " <<token<< endl;
}
else {
cout << "It is word\n" <<token<< endl;


}





}

}
    