#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x[5] = {1, 2, 3, 5, 4};
    int x_length = sizeof(x) / sizeof(x[0]);
    for(int i=0; i<x_length; i++){
        cout<<x[i]<<"\n";
    }

    for(int i=0; i<x_length;i++){
        for(int j=0;j<i; j++){
            if(x[i]>x[j]){
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    cout<<"jhvhhvhjvjh"<<"\n";
    for(int i=0; i<x_length; i++){
        cout<<x[i]<<"\n";
    }
    return 0;
}