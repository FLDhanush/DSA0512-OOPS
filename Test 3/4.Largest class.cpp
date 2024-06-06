#include <iostream>
#include <algorithm>

class Largest {
    int a, b, m;

public:
    void setdata(int x, int y, int z) {
        a = x;
        b = y;
        m = z;
    }

    friend void find_max(Largest obj);
};

void find_max(Largest obj) {
    int max = std::max({obj.a, obj.b, obj.m});
    std::cout << "The maximum value is: " << max << std::endl;
}

int main() {
    Largest obj;
    obj.setdata(10, 20, 30);
    find_max(obj);
    return 0;
}