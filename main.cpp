#include <iostream>
#include <map>
#include <iterator>
#include <vector>
using namespace std;

map<int,int>anteriores;

int me(int k){
    int m=k,matar,eliminados;
      while (true){
        eliminados=0;
        matar=(m-1)%(2*k-eliminados);
        while (matar>=k && eliminados<k){
            eliminados++;
            matar = (matar-1+m)%(2*k-eliminados);
        }
        if (eliminados==k){
            anteriores[k]=m;
            break;
        }
        m++;
    }
    return m;
}

int main() {
    int k;
    cin>>k;
    while (k!=0){
        if(anteriores[k]){
            cout<<anteriores[k]<<endl;
        }
        else
            cout<<me(k)<<endl;
        cin>>k;

    }
    return 0;
}