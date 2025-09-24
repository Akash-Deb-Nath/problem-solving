#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Creation
    unordered_map<string, ll> mp;

    // Insertion
    // 1
    pair<string, ll> p = make_pair("babbar", 3);
    mp.insert(p);
    // 2
    pair<string, ll> pair2("love", 2);
    mp.insert(pair2);
    // 3
    mp["mera"] = 1;
    // What will happen
    mp["mera"] = 2;

    // Search
    cout << mp["mera"] << "\n";
    cout << mp.at("babbar") << "\n";
    cout << mp["unknown"] << "\n";
    cout << mp.at("unknown") << "\n";

    // Size
    cout << mp.size() << "\n";

    // To check presence
    cout << mp.count("love") << "\n";

    // Erase
    mp.erase("love");
    cout << mp.size() << "\n";

    for (auto &i : mp)
    {
        cout << i.first << " " << i.second << "\n";
    }
    cout << "\n";

    // Print using iterator
    unordered_map<string, ll>::iterator it = mp.begin();
    while (it != mp.end())
    {
        cout << it->first << " " << it->second << "\n";
        it++;
    }

    return 0;
}