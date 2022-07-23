#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    int multiplier = 1;
    vector<int> vec;
    while(num != 0){
        int rem = num % 10;
        vec.push_back(rem*multiplier);
        num = num /10;
        multiplier *= 10;
    }
    reverse(vec.begin(), vec.end());
    for(auto ele : vec){
        cout << ele << endl;
    }

}