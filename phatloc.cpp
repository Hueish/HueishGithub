#include<bits/stdc++.h>
using namespace std;
int n;
int a[100];
bool ok=true;
bool check(){
    if(a[0]!=1 || a[n-1]!=0||a[1]!=0){
        return 0;
    }
    for(int i=2;i<n-2;i++){
        if(a[i]==1 && a[i+1]==1){
            return 0;
        }
    }
    for(int i=1;i<n-3;i++){
        if(a[i]==0 && a[i+1]==0 && a[i+2]==0 && a[i+3]==0){
            return 0;
        }
    }
    return 1;
}
void sinh(){
    int i=n-1;
    while(i>=0 && a[i]==1){
        i--;
    }
    if(i>=0){
        a[i]=1;
        for(int j=i+1;j<n;j++){
            a[j]=0;
        }
    }
    else{
        ok=false;
    }
}
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    while(ok){
        if(check()){
            for(int i=0;i<n;i++){
            if(a[i]==1){
                cout << "8";
            }
            else{
                cout << "6";
            }
            } cout << endl;
        }

        sinh();

    }
}
