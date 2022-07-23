#include<bits/stdc++.h>
using namespace std;

bool prime(int num){
    for(int i=2; i<sqrt(num); i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int upper_bound;
    int lower_bound;
    cin >> lower_bound >> upper_bound;
    if(lower_bound == 1){
        lower_bound++;
    }
    for(int i=lower_bound; i<=upper_bound; i++){
        if(prime(i)){
            cout << i << " ";
        }
    }
}