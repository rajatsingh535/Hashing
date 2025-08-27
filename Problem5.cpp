//Prefix Sum

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> prefix(n);
    for(int i = 1; i <= n ; i++){
        cin >> a[i];
        prefix[i] = prefix[i-1] + a[i];
    }
     int q;
    cin >> q;
    while(q--){
        int l , r;
        cin >> l >> r;
        long long sum  = 0;
        cout << prefix[r] - prefix[l-1] << endl;
        
    }

    
    return 0;
}
