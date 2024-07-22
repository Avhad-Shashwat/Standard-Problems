#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Shashwat Avhad";
    int start = 0;

    for (int end = 0; end <= s.size(); ++end) {
        if (end == s.size() || s[end] == ' ') {
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
        }
    }

    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}

