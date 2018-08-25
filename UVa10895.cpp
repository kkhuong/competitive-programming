#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;




void get_dimension(istream &is, int &m, int &n) {
    is >> m >> n;
    is.ignore();
}




vector<vii> build_graph(istream &is, int &m, int &n) {

    get_dimension(is, m, n);

    vector<vii> g(m+1);
    string str1, str2;

    for (int r = 1; r <= m; ++r) {
        getline(is, str1);
        getline(is, str2);

        // assume well formed
        istringstream ss1(str1); ss1.ignore();
        istringstream ss2(str2);
        int c, e;
        while (ss1 >> c && ss2 >> e)
            g[r].emplace_back(c, e);
    }
    return g;
}

vector<vii> transpose(const vector<vii> &g, int m, int n) {
    vector<vii> gt(n+1);
    for (int r = 1; r <= m; ++r) {
        for (const auto &p : g[r])
            gt[p.first].emplace_back(r, p.second);
    }

    for (auto &lsts : gt)
        std::sort(lsts.begin(), lsts.end());
    return gt;
}

void print(const vector<vii> &_g) {
    auto g = _g;
    g.erase(g.begin());
    for (const auto &edges : g) {
        bool first = true;
        cout << edges.size();
        for (const auto &p : edges)
            cout << ' ' << p.first;
        cout << endl;
        for (const auto &p : edges) {
            if (!first) cout << ' ';
            else first = false; 
            cout << p.second;
        }

        cout << endl;
    }
}


int main() {
    int m, n; // Matrix Dimensions
    
    // Build the Matrix
    auto g  = build_graph(cin, m, n);
    auto gt = transpose(g, m, n);

    // Print the Matrix Transposed
    printf("%d %d\n", n, m);
    print(gt);
}
