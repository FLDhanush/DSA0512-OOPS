#include <iostream>
#include <vector>
using namespace std;
class Item {
private:
    int codeNo;
    double price;
public:
    Item(int code, double cost) {
        codeNo = code;
        price = cost;
    }
    int getCodeNo() const {
        return codeNo;
    }

    double getPrice() const {
        return price;
    }
};
class ShoppingList {
private:
    vector<Item> items;

public:
    void addItem(int code, double cost) {
        Item newItem(code, cost);
        items.push_back(newItem);
        cout << "Item added to the list." << endl;
    }
    void deleteItem(int code) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->getCodeNo() == code) {
                items.erase(it);
                cout << "Item deleted from the list." << endl;
                return;
            }
        }
        cout << "Item not found in the list." << endl;
    }
    double calculateTotal() const {
        double total = 0.0;
        for (const Item& item : items) {
            total += item.getPrice();
        }
        return total;
    }
};

int main() {
    ShoppingList list;
    list.addItem(101, 10.50);
    list.addItem(102, 20.75);
    list.deleteItem(101);
    cout << "Total value of the order: $" << list.calculateTotal() << endl;

    return 0;
}
