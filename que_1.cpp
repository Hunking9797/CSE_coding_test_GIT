#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec;
    vec.reserve(5);
    int num;
    cin >> num;
    while(num != 0){
        int digit = num % 10;
        if(digit == 9){
            vec.push_back(0);
        }
        else{
            vec.push_back(digit+1);
        }
        num = num / 10;
    }
    reverse(vec.begin(), vec.end());
    for(auto ele: vec){
        cout << ele ;
    }
}