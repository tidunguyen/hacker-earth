#include <bits/stdc++.h>

using namespace std;
// using std::cout
// namespace chrono = std::chrono;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define watch(x) cout << (#x) << " is " << (x) << endl
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi = acos(-1.0);
typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n_test;
    cin >> n_test;
    while (n_test--) {
        int N;
        cin >> N;
        int A[N], ans = -1, mfreq = N + 1;
        MPII freq;
        REP(i, N) {
            cin >> A[i];
            freq[A[i]]++;
        }

        for (auto [v, f] : freq) {
            ans = max(ans, freq[v] - mfreq);
            mfreq = min(mfreq, freq[v]);
        }

        // map<int, int[2]> ifreq;

        // for (auto &[v, f] : freq) {
        //     if (ifreq.find(f) == ifreq.end()) {
        //         ifreq[f][0] = 1000001;
        //         ifreq[f][1] = 0;
        //     }
        //     ifreq[f][0] = min(ifreq[f][0], v);
        //     ifreq[f][1] = max(ifreq[f][1], v);
        // }

        // for (auto i = ifreq.begin(); i != prev(ifreq.end(), 1); i++) {
        //     for (auto j = next(i, 1); j != ifreq.end(); j++) {
        //         if (j->second[1] > i->second[0]) {
        //             tmp = j->first - i->first;
        //             ans = max(tmp, ans);
        //         }
        //     }
        // }

        cout << ans << '\n';
    }
}
