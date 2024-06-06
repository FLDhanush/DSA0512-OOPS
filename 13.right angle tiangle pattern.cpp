#include <iostream>
using namespace std;
class RightAngleTriangle {
private:
    int height;
public:
    RightAngleTriangle(int h) {
        height = h;
    }
	void printTriangle() const {
        for (int i = 1; i <= height; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};
int main() {
    int height;
    cout << "Enter the height of the triangle: ";
    cin >> height;
	RightAngleTriangle triangle(height);
	triangle.printTriangle();
	return 0;
}
