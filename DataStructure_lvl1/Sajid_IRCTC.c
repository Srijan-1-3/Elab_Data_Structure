/* Sajid was booking a tour package of IRCTC from Chennai to Delhi for his family. */

#include <iostream>
#include <stack>
#include <string>
using namespace std;
void valid_paren (string xi)
{
 stack <char> s;
 int length = xi.length();
 char top;

 for(int i = 0; i< length; i++){
   if(xi[i] == '(' || xi[i] == '{' || xi[i] == '['){
     s.push(xi[i]);
   }
   else
   { 
     if(s.empty()){
       cout<<"Not Balanced";
       return;
     }
      else{
      top = s.top();
      if((xi[i] == ')' && top == '(') || (xi[i] == '}' && top == '{') || (xi[i] == ']' && top == '[')) {
        s.pop();
      }
    else{
        cout<<"Not Balanced";
        return;}
     }
   }
 }
if (s.empty()){
   cout<<"Balanced";
 }
 else{
   cout<<"Not Balanced";
 }
}
int main() {
 string xi;
 cin>>xi;
 valid_paren(xi);
 return 0;
}
