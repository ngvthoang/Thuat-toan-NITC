#include <bits/stdc++.h>

using namespace std;

int digitsProduct(int product){
    if (product==1) return 1;
    else if (product==0) return 10;
    int tmp=0;
    for (int i=9 ; i>=2 ; i--){
        while (product%i==0){
            tmp=tmp*10+i;
            product/=i;
        }
    }
    int ans=0;
    while (tmp>0){
        ans=ans*10+tmp%10;
        tmp/=10;
    }
    return (product==1) ? ans : -1;
}

int main(){
    int product;
    cin >> product;
    cout << digitsProduct(product);
}