#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    cout << str << endl;

    // Alternative way to declare string,here output will be "nnnnn" 5 times n.
    string str1(5, 'n');
    cout << str1 << endl;

    // To input a sentence
    string str2;
    getline(cin, str2);
    cout << str2 << endl;

    // Using append() function
    string str3, str4;
    cin >> str3 >> str4;
    str3.append(str4);
    cout << str3 << endl;
    // Or
    cout << str3 + str4 << endl;

    // Using clear() function,to clear the string
    string str5;
    cin >> str5;
    str5.clear();
    cout << str5 << endl;

    // Using compare() function,to compare strings
    string str6, str7;
    cin >> str6 >> str7;
    if (!str7.compare(str6))
    // Or if (str7.compare(str6) == 0)
    {
        cout << "Strings are equal" << endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }

    // Using empty() function,to check whether the string is empty or not
    string str8;
    cin >> str8;
    str8.clear();
    if (str8.empty())
    {
        cout << "String is empty" << endl;
    }
    else
    {
        cout << "String is not empty" << endl;
    }

    // Using erase() function,to erase
    string str9;
    cin >> str9;
    str9.erase(3, 3);
    cout << str9 << endl;

    // Using find() function,to find
    string str10;
    cin >> str10;
    cout << str10.find("com") << endl;

    // Using insert() function,to insert
    string str11;
    cin >> str11;
    str10.insert(2, str11);
    cout << str10 << endl;

    // Using size() and length() functions
    cout << str10.size() << endl;
    cout << str11.length() << endl;

    // Using substr() function,to substr
    string str12 = str10.substr(6, 4);
    cout << str12 << endl;

    // Using stoi() function,to convert string to int
    string str13;
    cin >> str13;
    int x = stoi(str13);
    cout << x + 2 << endl;
    // Or char to int
    int y = str13[0] - '0' + 5;
    cout << y << endl;

    // Using to_string() function,to convert int to string
    cout << to_string(x) + "2" << endl;

    // Using sort() function,to sort string values
    string str14;
    cin >> str14;
    sort(str14.begin(), str14.end());
    cout << str14 << endl;

    return 0;
}