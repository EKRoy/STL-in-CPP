#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m = {{2, "For"}, {3, "Geeks"}};
    m.insert({1, "Geeks"});

    // Access
    cout << m[1] << endl;
    cout << m.at(2) << endl;

    // Find
    auto it = m.find(2);
    if (it != m.end())
        cout << it->first << " " << it->second << endl;

    // Traverse
    for (auto &p : m)
        cout << p.first << " " << p.second << endl;

    // Structured binding
    for (auto [x, y] : m)
        cout << x << " " << y << endl;

    // Delete
    m.erase(2);
    m.erase(m.begin());

    return 0;
}