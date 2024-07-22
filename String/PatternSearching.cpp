#include <bits/stdc++.h>
using namespace std;

void patSearch(const string &s, const string &p) {
    int m = p.size();
    int n = s.size();
    
    // Loop through the main string
    for (int i = 0; i <= n - m; i++) {
        int j;
        
        // Check for the pattern in the substring starting at index i
        for (j = 0; j < m; j++) {
            if (p[j] != s[i + j])
                break;
        }
        
        // If the pattern was found, print the starting index
        if (j == m) {
            cout << i << " ";
        }
    }
}

int main() {
    string s = "abcabcd";
    string p = "abcd";
    patSearch(s, p);
    return 0;
}

