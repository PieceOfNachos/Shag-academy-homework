#include <cmath>
#include <iostream>
using namespace std;
class Vector {
public:
    Vector(int x1, int y1, int x2, int y2);
    Vector& operator=(const Vector& c);
    int calculate_h();
private:
    int x1;
    int y1;
    int x2;
    int y2;
    int h;
};
Vector::Vector(int x1, int y1, int x2, int y2):
    x1(x1),
    y1(y1),
    x2(x2),
    y2(y2)
    {
    }
Vector& Vector::operator=(const Vector& c) {
    x1 = c.x1;
    x2 = c.x2;
    y1 = c.y1;
    y2 = c.y2;
    return *this;
}
int Vector::calculate_h() {
    h = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return h;
}
int main()
{
    Vector Rocket(4,5,10,79);
    Vector fly = Rocket;
    int len = Rocket.calculate_h();
    cout << len << endl;
    int len1 = fly.calculate_h();
    cout << len1 << endl;

}
