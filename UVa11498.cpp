#include <cstdio>
#include <string>
using namespace std;

int main() {
    int N;
    double x0, y0;
    double x, y;

    while (scanf("%d\n", &N) && N) {
        scanf("%lf %lf\n", &x0, &y0);
        
        while (N--) {
            scanf("%lf %lf\n", &x, &y);
            
            // can optimize runtime by using bunch of printf statement instead
            string s;
            if (x > x0 && y > y0) s="NE";
            else if (x > x0 && y < y0) s="SE";
            else if (x < x0 && y > y0) s="NO";
            else if (x < x0 && y < y0) s="SO";
            else s="divisa";
            printf("%s\n", s.c_str());
        }
    }
    return 0;
}
