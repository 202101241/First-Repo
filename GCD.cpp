#include<bits/stdc++.h>
using namespace std;

int gcd(int num1, int num2){
    if(num2 == 0) return num1;

    return gcd(num2, num1%num2);
}

int main(){
    int a, b;
    cin>>a>>b;

    cout<<gcd(a, b)<<endl;
} 