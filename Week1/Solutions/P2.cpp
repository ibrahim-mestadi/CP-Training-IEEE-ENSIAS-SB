#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;
// href:

void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2;
    }
    else
    {
        cout << (n - 1) / 2 - n;
    }
    return 0;
}