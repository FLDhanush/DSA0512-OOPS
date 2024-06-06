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
    int max = std::max(std::max(obj.a, obj.b), obj.m);
    std::cout << "Maximum no is " << max << std::endl;
}

int main() {
    Largest obj;
    int var1, var2, var3;

    std::cout << "Enter the first no: ";
    std::cin >> var1;
    std::cout << "Enter the second no: ";
    std::cin >> var2;
    std::cout << "Enter the third no: ";
    std::cin >> var3;

    obj.setdata(var1, var2, var3);
    find_max(obj);

    return 0;
}