#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s += s;
        vector<int> cnt(26);
        while (s.back() != 'g')
            s.pop_back();
        int ct = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != 'g')
                ct++;
            else
                ct = 0;
            cnt[s[i] - 'a'] = max(ct, cnt[s[i] - 'a']);
        }
        cout << cnt[c - 'a'] << endl;
    }
    return 0;
}