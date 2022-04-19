#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define flarish_1138 cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pi 3.141592653589793238
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repr(i, a, b) for (int i = a; i >= b; --i)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nline "\n"
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#define min_ele(v) *min_element(v.begin(), v.end())
#define max_ele(v) *max_element(v.begin(), v.end())
#define accu(v, s) accumulate(v.begin(), v.end(), s)
#define ct(v, s) count(v.begin(), v.end(), s)
#define sz(v) (int)(v.size())
#define all(v) v.begin(), v.end()

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); }
bool sorta(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
bool sortd(const pair<int, int> &a, const pair<int, int> &b) { return (a.second > b.second); }
void printarr(ll arr[], ll n)
{
    rep(i, 0, n) cout << arr[i] << " ";
    cout << "\n";
}
int countDigit(long long n)
{
    return floor(log10(n) + 1);
}
string decToBinary(int n)
{
    string s = "";
    int i = 0;
    while (n > 0)
    {
        s = to_string(n % 2) + s;
        n = n / 2;
        i++;
    }
    return s;
}
ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

int nxt()
{
    int x;
    cin >> x;
    return x;
}
ll power(ll x, ll y)
{
    ll temp;
    if (y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

int binarySearch(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - mid) / 2;
        if (arr[mid] == k)
            return mid;
        else if (arr[mid] > k)
            end = end - 1;
        else
            start = start + 1;
    }
    return -1;
}

void nxt(vector<ll> &v)
{
    int x;
    cin >> x;
    v.push_back(x);
}

void solve()
{
    ll x1, x2;
    ll p1, p2;
    cin >> x1 >> p1 >> x2 >> p2;

    string s = to_string(x1);
    string t = to_string(x2);

    rep(i,0,p1) s.push_back('0');
    rep(i,0,p2) t.push_back('0');

    while (s.length() > 0 and s.back() == '0')
    {
        s.pop_back();
        p1++;
    }
    while (t.length() > 0 and t.back() == '0')
    {
        t.pop_back();
        p2++;
    }
    if (s.length() + p1 > t.length() + p2)
        cout << ">" << nline;
    else if (s.length() + p1 < t.length() + p2)
        cout << "<" << nline;
    else
    {
        if (s > t)
            cout << ">" << nline;
        else if (s < t)
            cout << "<" << nline;
        else
            cout << "=" << nline;
    }
}

int main()
{
    Code By flarish_1138 int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}

// 1.DP se soch
// 2.DP se soch
// 3.DP se soch
// graph, gcd, BS, seive
// if NOTA,then
// brute force hi optimal h
