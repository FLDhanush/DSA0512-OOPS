#include <iostream>
using namespace std;

int main() {
    int intVar = 42;    
    float floatVar;     
    floatVar = intVar;  
    cout << "Integer value: " << intVar << endl;
    cout << "Float value after implicit conversion: " << floatVar << endl;
	float result = intVar + 2.5f;
    cout << "Result of intVar + 2.5: " << result << endl;
    return 0;
}
