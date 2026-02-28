#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<int, string> um = {{2, "For"}, {3, "Geeks"}};

    um.insert({1, "Hello"});
    um[4] = "Code";

    cout << um[1] << endl;

    auto it = um.find(2);
    if (it != um.end())
        cout << it->first << " " << it->second << endl;

    for (auto &p : um)
        cout << p.first << " " << p.second << endl;

    um.erase(3);

    return 0;
}