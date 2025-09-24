#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    stack<char> st;
    for (char ch : s)
    {
        st.push(ch);
    }
    string ans;
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    cout << ans << "\n";

    return 0;
}