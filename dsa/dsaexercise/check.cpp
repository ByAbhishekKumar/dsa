#include<bits/stdc++.h>
// #include<iostream>
// #include<string.h>

using namespace std;

bool isPalindrome(char* str)
{
    // your code goes here
    char cpy[100];
    strcpy(cpy,str);
    vector<char> cpy1;
    int i=0;
    
     while(cpy[i] != NULL){
              cpy1[i] = cpy[i];
             i++;

    }
    
    
    reverse(cpy1.begin(),cpy1.end());
    i=0;
     while(cpy[i] != NULL){
           cpy[i] = cpy1[i];
           i++;
     }
    //reverse(cpy1.begin(),cpy1.end());
    if(!strcmp(cpy,str)){
        return true;
    }
    return false;
        
    
}
int main(){
    char s[] = "zzzzzzzzzz";
    
    bool x = isPalindrome(s);
    cout<<x;
}