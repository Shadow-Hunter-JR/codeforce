#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int a;
    cin >> a;
    while(a>0){
        string c("i");
        string d;
        cin >> d;
        d.erase(d.size() - 2);
        d.insert(d.size(), c);
        cout << d << endl;

        a--;
    }
}