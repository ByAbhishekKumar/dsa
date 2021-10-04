#include<iostream>
#include <string>

using namespace std;

string compressedString(string data){
    int n = data.length();
    string compressedData;
    for(int i=0;i<n;i++){
        int count = 1;
        while(i<n && data[i+1]==data[i]){
            count++;
            i++;
        }
        compressedData += data[i];
        compressedData += to_string(count);

    }
    if(compressedData.length() < data.length()){
        return compressedData;
    }
    else{
        return data;
    }
}
int main(){
    string data;
    cout<<"Enter String:";
    getline(cin, data);
    cout << "compressed string is: " << compressedString(data) << endl;
    
}