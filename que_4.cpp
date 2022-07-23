#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        // cout << endl;
        for(int j=i-1; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}