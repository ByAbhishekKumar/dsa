#include<iostream>
using namespace std;
void replaceBits(int &n,int &m,int i,int j){
    int a = (~0<<(j+1));
    int b = (1<<i)-1;
    int mask = (a|b);
    int o = (n&mask);
    m = (m<<i);
    n = (o|m);
}
int main(){
    int n = 42, m = 3,i = 3,j = 6;
    cout<<"Enter n,m,i,j simultaneously: ";
    cin>>n>>m>>i>>j;
    cout<<endl;
    replaceBits(n,m,i,j);
    cout<<n;

}