#include <iostream>

using namespace std;

bool isprime(int y){
    bool p=true;
    if(y==0 || y==1){
        p=false;
    }
    for(int i=2;i<=y/2;++i){
        if(y%i==0){
            p=false;
            break;
        }
    }
    return p;
}

void sumofprimes(int x){
    for(int i=1;i<=x/2;i++){
        for(int j=1;j<=x;j++){
            if(i+j==x && isprime(j)==true && isprime(i)==true){
                cout<<"34="<<i<<"+"<<j<<" ";
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    sumofprimes(n);

    return 0;
}
