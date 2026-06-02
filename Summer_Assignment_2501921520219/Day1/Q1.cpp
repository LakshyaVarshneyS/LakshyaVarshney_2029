#include<bits/stdc++.h>

using namespace std;
int sumNNumbers(int n){
    int sum= 0;

    for(int i=n;i<0;i--){
        sum = sum+i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the number::";
    cin>>n;
    cout<<endl<<"Sum of the natural number till"<<n<<"::"<<sumNNumbers(n);
    
}