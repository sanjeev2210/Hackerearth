#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    vector <int>::iterator it;
    v.push_back(5);
    cout<<v.back();
    cout<<v.front();
    while(v.back() > 0)
        v.push_back(v.back() - 1);
    for(int i = v.begin(); it != v.end();++it)
        cout << *it << ' ';
    cout << endl;
    for(int i = 0;i < v.size();++i)
        cout << v.at(i) << ' ';
    cout << endl;
    while(!v.empty())
    {
        cout << v.back() << ' ';
        v.pop_back();
    }
    cout << endl;
    return 0;
}
