#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        double px, py, ax, ay, bx, by;
        cin >> px >> py >> ax >> ay >> bx >> by;

        double op = distance(px, py, ax, ay);
        double ob = distance(ax, ay, bx, by);
        double ap = distance(px, py, bx, by);

        double ans;

        // Check if the house is inside the circle with center at A
        if ((px - ax) * (px - ax) + (py - ay) * (py - ay) <= ob * ob) {
            ans = op;
        }
        // Check if the house is inside the circle with center at B
        else if ((px - bx) * (px - bx) + (py - by) * (py - by) <= ob * ob) {
            ans = ap;
        }
        // Otherwise, calculate the minimum distance to the closest point on AB
        else {
            double ab = distance(ax, ay, bx, by);
            ans = min(op, ap);
            if (ab > 0) {
                double h = abs((ax - px) * (by - py) - (ay - py) * (bx - px)) / ab;
                ans = min(ans, h);
            }
        }

        cout << fixed << setprecision(10) << ans << endl;
    }

    return 0;
}
