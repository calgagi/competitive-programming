// Calvin Gagliano
// Oregon State University
// Competitive Programming Template
#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define ld long double
#define x first
#define y second
#define pb push_back
#define forn(i, n) for(int i = 0; i < int(n); ++i)
#define fore(i, l, r) for(int i = int(l); i < int(r); ++i)
#define forb(i, n) for(int i = int(n) - 1; i >= 0; --i)

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    if (s == "") cout << "Odd." << endl;
    else {
        bool e = false;
        fore(i, 1, s.length()) 
            if (s[i] == s[i-1]) {
                e = true;
                break;
            }
        if (e) cout << "Or not." << endl;
        else cout << "Odd." << endl;
    }
	

    return 0;
}
