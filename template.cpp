#include<bits/stdc++.h>

using namespace std;

/* User Template
@Shaurya Gautam
CP.cpp */

/*****************************************/

#define ll long long
#define vb vector<bool>
#define vi vector<int>
#define vl vector<long>
#define vll vector<long long>
#define vpii vector<pair<int, int>>
#define vc vector<char>
#define pii pair<int, int>
#define mp make_pair
#define F(i,L,R) for (ll i = L; i < R; i++)
#define FE(i,L,R) for (ll i = L; i <= R; i++)
#define FR(i,L,R) for (ll i = L; i > R; i--)
#define FRE(i,L,R) for (ll i = L; i >= R; i--)
#define pb push_back
#define endl "\n"
#define PI 3.14159265358979323846


/**Graphs***/
class Graph {
    int vert;
    vector<int> *adjl;  // array of vectors. 
    //Can create vector<vector> and then resize

    public:
        Graph(int);
        void addEdge(int, int);
        void dfsFunc(int, vector<bool>&);
        void bfsFunc(int);
};

Graph:: Graph(int vert){
    this->vert = vert;
    adjl = new vector<int> [vert];
}

void Graph::addEdge(int src, int dest){
    //directed conencted graph
    adjl[src].push_back(dest);
}

void Graph::dfsFunc(int src, vector<bool> &vis){
    vis[src] = true;

    for(auto it{adjl[src].begin()}; it != adjl[src].end(); it++){
        if(!vis[*it]){
            dfsFunc(*it, vis);
        }
    }
}

void Graph::bfsFunc(int src){
    vector<bool> vis(vert, 0);

    queue<int> q;
    
    vis[src] = 1;
    q.push(src);
    q.push(-1);

    while(!q.empty()){
        int f = q.front();
        q.pop();    
        // cannot mark vis here because a node might be connected to more than one source, 
        //and this might lead it to be added multiple times

        if(f != -1){
            for(int x: adjl[f]){
                if(!vis[x]){
                    q.push(x);
                    vis[x] = 1;  // need to mark vis here
                }
            }
        } else {
            if(!q.empty()) q.push(-1);
        }
    }
}


const int sz = 1e3;

int adjm[sz + 1][sz + 1];
vector<int> adjl[(int)(1e6 + 1)];
vector<bool> vis((int)1e6 + 1, 0);

void init_adjm(int n){
    FE(i, 0, n){
        FE(j, 0, n) adjm[i][j] = 0;
    }
}

void bfs(int s, int n, int m){
    // vector<int> level(n + 1, 0);
    queue<int> q;
    // int currlevel{0};
    q.push(s);
    q.push(-1);
    vis[s] = 1;

    // cout << "\nLevel " << currlevel << endl;

    while(!q.empty()){
        int p = q.front();
        q.pop();

        if(p == -1){        
            if(!q.empty()){               //check if not last NULL
                // currlevel++;
                // cout << "\nLevel " << currlevel << endl;
                q.push(-1);
            }

        } else {
            // cout << p << " ";
            F(i, 0, adjl[p].size()){
                int curr{adjl[p][i]};

                if(!vis[curr]){
                    // level[curr] = level[p] + 1;
                    q.push(curr);
                    vis[curr] = 1;
                }
            }
        }
    }

}

void dfs(int s){
    vis[s] = 1;
    for(int i{0}; i < adjl[s].size(); i++){
        if(!vis[adjl[s][i]]){
            dfs(adjl[s][i]);
        }
    }
}

/***General Algos***/

vector<bool> is_prime(1e6 + 1, true);

ll gcd(ll x, ll y){
    if(x == 0) return y;
    return gcd(y % x, x);
}

void sievePrime(ll n){

    for(ll p{2}; p*p <= n; p++){
        if(is_prime[p]){
            for(ll i{p*p}; i <= n; i += p){
                is_prime[i] = false;
            }
        }
    }

    //Printing all the primes-
    // for(ll p{2}; p<=n; p++){
    //     if(is_prime[p]) cout << p << " ";
    // }
}

vi SPF((int)1e6 + 1); 
vll prime;
void manipulated_seive(int N) 
{ 
    // 0 and 1 are not prime 
    is_prime[0] = is_prime[1] = false ; 

    F(i, 2, N)
    { 
        if (is_prime[i]){
            prime.push_back(i); 
            SPF[i] = i; 
        } 

        for (int j{0}; j < (int)prime.size() &&  i*prime[j] < N && prime[j] <= SPF[i]; j++) 
        { 
            is_prime[i*prime[j]] = false;
            SPF[i*prime[j]] = prime[j] ; 
        } 
    } 
} 

class my_compare{
    public:
        bool operator()(pii &p1, pii &p2){
            return p1.second < p2.second;
        }
};

/***nCr and nPr normal  --> For small numbers***/

ll fact(int n){
    ll res{1};
    FE(i, 2, n) res *= i;
    return res;
}

ll nPr(int n, int r){
    ll num{1}, denom{1};

    F(i, 0, r){
        denom *= (i + 1);
        num *= (n - i);
    }

    return num/denom;
}

ll nCr(int n,  int r){
    ll num{1}, denom{1};

    F(i, 0, r){
        denom = (denom * (i + 1));
        num = (num * (n - i));
    }

    return num / denom;
}

/***power, modInv, nCr and nPr % m  --> For large numbers***/
long long pow2(long long x, int y)
{
    long long res = 1; // Initialize result
 
    while (y > 0) 
    {
     
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x);
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x);
    }
    return res;
}

unsigned long long power(unsigned long long x, int y, int p)
{
    unsigned long long res = 1; // Initialize result
 
    x = x % p; // Update x if it is more than or
    // equal to p
 
    while (y > 0) 
    {
     
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
 
// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n, int p)
{
    return power(n, p - 2, p);
}
 
// Returns nCr % p using Fermat's little
// theorem.
unsigned long long nCrModPFermat(unsigned long long n, int r, int p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;
 
    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    unsigned long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
 
    return (fac[n] * (modInverse(fac[r], p) % p) * (modInverse(fac[n - r], p) % p)) % p;
}


/*************************************************/
void solve(){
    string a, b;
    getline(cin, a);
    getline(cin, b);

    map<char, int> st;

    F(i, 0, a.length()){
        if(a[i] == ' ') continue;
        if(st.find(a[i]) == st.end()) st[a[i]] = 1;
        else st[a[i]]++;
    }

    bool isPoss{1};

    F(i, 0, b.length()){
        if(b[i] == ' ') continue;
        if(st.find(b[i]) == st.end() || st[b[i]] == 0){
            isPoss = 0;
            break;
        } else st[b[i]]--;
    }

    if(isPoss) cout << "YES";
    else cout << "NO";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    bool test_case{0}, fileop{0};

    if(fileop){
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    }

    int t;
    if(test_case){
        cin >> t;
        while(t--){
            solve();
        }
    }
    else solve();
}

/* 
Some Learnings-
     -Don't focus on ratings or standings
     -See problem from new perspective and forget current thoughts 
     -Accuracy is important, be sure that you think right
     -Speed builds up once accuracy does... solve as many questions as possible 
     -Editorial is last resort... don't jump to it
     -BE CONSISTENT
     -My two brothers - Hard Work and Perseverance
     -Never leave a contest, no matter how tough it might be
*/