#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> vec;
    string name;
    while(n--){
        cin >> name;
        vec.push_back(name);
    }
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec.size()-i-1; j++){
            if(vec[j][0] > vec[j+1][0]){
                swap(vec[j], vec[j+1]);
            }
        }
    }
    cout << endl;
    for(auto ele : vec){
        cout << ele << endl;
    }
}