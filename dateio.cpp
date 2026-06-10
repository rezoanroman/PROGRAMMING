#include <bits/stdc++.h>
using namespace std;

int main() {
    int dd, mm, yy;
    char slash1, slash2;
    bool first = true;
    
    while(cin >> dd >> slash1 >> mm >> slash2 >> yy) {
        if(!first) {
            cout << endl;
        }
        first = false;
        
        cout << setfill('0') << setw(2) << mm << "/" 
             << setfill('0') << setw(2) << dd << "/" 
             << setfill('0') << setw(2) << yy << endl;
        
        cout << setfill('0') << setw(2) << yy << "/" 
             << setfill('0') << setw(2) << mm << "/" 
             << setfill('0') << setw(2) << dd << endl;
        
        cout << setfill('0') << setw(2) << dd << "-" 
             << setfill('0') << setw(2) << mm << "-" 
             << setfill('0') << setw(2) << yy << endl;
    }
    
    return 0;
}