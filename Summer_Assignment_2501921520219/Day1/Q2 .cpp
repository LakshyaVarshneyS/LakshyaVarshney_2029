#include <bits/stdc++.h>
using namespace std;
void print_table(int n);

int main(){
    cout<<"Enter the table number::";
    int number;
    cin>>number;
    cout<<endl;
    print_table(number);

}
void print_table(int n){
    for(int i=1;i<=10;i++){
        cout<<n<<"X"<<i<<"="<<n*i<<endl;
    }
}