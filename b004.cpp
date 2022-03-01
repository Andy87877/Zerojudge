// https://zerojudge.tw/ShowProblem?problemid=b004
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double D,L,pi,area;
    while(cin >> D >>L) {   
        pi = 2*acos(0);
        area = pi*L/2*sqrt( (L/2)*(L/2) -(D/2)*(D/2) );
        printf("%.3f\n",area);
    }
}
