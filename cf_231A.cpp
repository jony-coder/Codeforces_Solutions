#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,counter=0,sum=0, counter_two=0,increase=0, setvalue;
    cin>>n;
    int num[1000];
    for(int i=0; i<n; i++){

        for(int i=0; i<3; i++){
            cin>>num[i];
        }
        for(int i=0; i<3; i++){

            sum = sum + num[i];
            cout<<sum<<endl;

        }


    }

cout<<setvalue<<endl;

 return 0;
}



