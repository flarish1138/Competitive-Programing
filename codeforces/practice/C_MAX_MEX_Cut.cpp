#include <bits/stdc++.h>

using namespace std;
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define flarish_1138 cout.tie(NULL);
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repr(i, a, b) for (int i = a; i >= b; --i)
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define sz(s) (int)(s.size())
#define all(s) s.begin(), s.end()

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
void solve()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int ans = 0;
    int cnt00 = 0;
    int cnt10 = 0;
    int cnt01 = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int f = 0;
    //     while (s[i] == '0' and s[i+1]=='0')
    //     {
    //         i++;
    //         f = 1;
    //     }
    //     ans += f;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     if ((s1[i] == '1' && s1[i + 1] == '0' && s2[i] == '1' && s2[i + 1] == '0'))
    //         cnt10++;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if ((s1[i] == '0' && s1[i + 1] == '1' && s2[i] == '0' && s2[i + 1] == '1'))
    //         cnt01++;
    // }
    for (int i = 0; i < n; i++)
    {
        if ((s1[i] == '1' && s1[i + 1] == '0' && s2[i] == '1' && s2[i + 1] == '0'))
        {
            ans += 2;
            i++;
        }
        else if ((s1[i] == '0' && s1[i + 1] == '1' && s2[i] == '0' && s2[i + 1] == '1'))
        {
            ans += 2;
            i++;
        }
        else if ((s1[i] == '0' && s2[i] == '1') || (s1[i] == '1' && s2[i] == '0'))
        {
            ans += 2;
        }
        else if (s1[i] == '0' && s2[i] == '0')
        {
            ans += 1;
            // cnt00++;
        }
    }
    // if (cnt00 > 0)
        cout << ans << endl;
    // else
    // if (cnt10 > 0)
    //     ans += 1;
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

int main()
{
    Code By flarish_1138 int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

//1.DP se soch
//2.DP se soch
//3.DP se soch
//graph, gcd, BS, seive
//if NOTA,then
//brute force hi optimal h
