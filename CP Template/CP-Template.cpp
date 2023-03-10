// Author: Shibam Saha
// s4shibam (Social)

// ------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

// *Fast Input Output
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

// *Short Naming
#define ll long long             // Long Long Type Variable
#define nl '\n'                  // New Line
#define py cout << "YES" << endl // Print Yes
#define pn cout << "NO" << endl  // Print No
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
#define llmax LLONG_MAX
#define llmin LLONG_MIN
#define maxll max<ll> // Max for ll
#define minll min<ll> // Min for ll
#define pi = 3.1415926535897932384626
const int mod = 1e9 + 7;
long long INFF = 1000000000000000005ll;

// ------------------------------------------------------------------------------------------

// *Loops
#define loop(i, start, n) for (int(i) = (start); (i) < (n); ++(i))          // For <
#define loopn(i, start, n) for (int(i) = (start); (i) <= (n); ++(i))        // For <=
#define rloop(i, n, front) for (int(i) = (n); (i) >= (front); (i)--)        // Reverse For
#define loopSq(i, start, n) for (int(i) = (start); (i) * (i) <= (n); ++(i)) // For Square
#define loopc(ch, start, n) for (char(ch) = (start); (ch) <= (n); ++(ch))   // For Char
#define foreach(it, ds) for (auto &(it) : (ds))                             // For Each

// ------------------------------------------------------------------------------------------

// *Data Structures
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvl;

// ------------------------------------------------------------------------------------------

// *Define Functions
// Full Vector
#define all(ds) (ds).begin(), (ds).end()
// Clear Memory
#define clr(x) memset(x, 0, sizeof(x))
// Ascending Vector
#define sort(ds) sort(all(ds))
// Descending Vector
#define rev(ds) reverse(all(ds))
// Total Sum
#define tsum(ds) (accumulate(all(ds), 0ll))
// Count frequency of x
#define ctx(ds, x) (count(all(ds), (x)))
// Size
#define sz(ds) ((ll)(ds).size())
// Min Value
#define minv(ds) (*min_element(all(ds)))
// Max Value
#define maxv(ds) (*max_element(all(ds)))
// Min Value Index
#define minIdx(ds) (min_element(all(ds)) - (ds).begin())
// Max Value Index
#define maxIdx(ds) (max_element(all(ds)) - (ds).begin())
// Binary Search
#define bs(ds, x) (binary_search(all(ds), x))
// Lower Bound Index
#define lob(ds, x) (lower_bound(all(ds), (x)) - (ds).begin())
// Upper Bound Index
#define upb(ds, x) (upper_bound(all(ds), (x)) - (ds).begin())
// Ceil Function
#define ceil(num, div) ((num % div != 0) ? ((num / div) + 1) : (num / div))
// Debug 1
#define dbg(x) cout << (#x) << " = " << x << '\n'
// Debug 2
#define dbg2(x, y) cout << (#x) << " = " << x << " : " << (#y) << " = " << y << '\n'

// ------------------------------------------------------------------------------------------

// *Templates
template <typename T>
vector<T> &operator--(vector<T> &v)
{
    for (auto &i : v)
        --i;
    return v;
}
template <typename T>
vector<T> &operator++(vector<T> &v)
{
    for (auto &i : v)
        ++i;
    return v;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &v)
{
    for (auto &i : v)
        is >> i;
    return is;
}
template <typename T>
ostream &operator<<(ostream &os, vector<T> v)
{
    for (auto &i : v)
        os << i << ' ';
    return os;
}
template <typename T, typename U>
pair<T, U> &operator--(pair<T, U> &p)
{
    --p.first;
    --p.second;
    return p;
}
template <typename T, typename U>
pair<T, U> &operator++(pair<T, U> &p)
{
    ++p.first;
    ++p.second;
    return p;
}
template <typename T, typename U>
istream &operator>>(istream &is, pair<T, U> &p)
{
    is >> p.first >> p.second;
    return is;
}
template <typename T, typename U>
ostream &operator<<(ostream &os, pair<T, U> p)
{
    os << p.first << ' ' << p.second;
    return os;
}
template <typename T, typename U>
pair<T, U> operator-(pair<T, U> a, pair<T, U> b) { return mp(a.first - b.first, a.second - b.second); }
template <typename T, typename U>
pair<T, U> operator+(pair<T, U> a, pair<T, U> b) { return mp(a.first + b.first, a.second + b.second); }

// -------------------------------------------THE--------------------------------------------
// -------------------------------------------END--------------------------------------------

// *Solution
void solution()
{
}

// *Driver Code
int main()
{
    FIO;
#ifndef ONLINE_JUDGE
    freopen("0_input.txt", "r", stdin);
    freopen("0_output.txt", "w", stdout);
#endif

    auto startingTime = chrono::high_resolution_clock::now();
    int t = 1;
    cin >> t; // Comment for single Test Case
    while (t--)
    {
        solution();
    }

    auto endingTime = chrono::high_resolution_clock::now();
    cerr << "Time taken: " << chrono::duration_cast<chrono::milliseconds>(endingTime - startingTime).count() << "ms" << nl;
    return 0;
}