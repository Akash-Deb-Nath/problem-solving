#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<ll, string> m;
    m[1] = "Babbar";
    m[13] = "Kumar";
    m[2] = "Love";
    m.insert({5, "bheem"});
    cout << "Before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "Finding -13 = " << m.count(-13) << endl;
    m.erase(13);
    cout << "After erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }

    return 0;
}