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

// begin Bob :b  Limak :a a<=b
// after year a=a*3 b=b*2

void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int s = 0;
    while (a <= b)
    {
        s += 1;
        a = a * 3;
        b = b * 2;
    }
    cout << s;
    return 0;
}