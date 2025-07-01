#include <iostream>
using namespace std;
int main() {
    int i, j, n;
    cin>>n;

    // Upper half
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++)
            cout<<" ";
        for(j = 1; j <= 2*i - 1; j++) {
            if(j == 1 || j == 2*i - 1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }

    // Lower half
    for(i = n - 1; i >= 1; i--) {
        for(j = 1; j <= n - i; j++)
            cout<<" ";
        for(j = 1; j <= 2*i - 1; j++) {
            if(j == 1 || j == 2*i - 1)
            cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
