#include <iostream>
#include <vector>
#include <iomanip> // For formatting output
using namespace std;

// Class to represent individual items in the shopping cart
class Item {
public:
    string name;
    float price;
    int quantity;

    // Constructor
    Item(string itemName, float itemPrice, int itemQuantity) {
        name = itemName;
        price = itemPrice;
        quantity = itemQuantity;
    }
};

// Class to manage the shopping cart
class ShoppingCart {
private:
    vector<Item> cart;

public:
    // Add an item to the cart
    void addItem(string name, float price, int quantity) {
        cart.push_back(Item(name, price, quantity));
        cout << "Item added successfully!" << endl;
    }

    // Display the cart
    void displayCart() {
        if (cart.empty()) {
            cout << "The cart is empty." << endl;
        } else {
            cout << "\nItems in your cart:\n";
            cout << left << setw(20) << "Name" << setw(10) << "Price" << setw(10) << "Quantity" << "Total" << endl;
            for (const auto& item : cart) {
                cout << left << setw(20) << item.name << setw(10) << item.price << setw(10) << item.quantity 
                     << (item.price * item.quantity) << endl;
            }
        }
    }

    // Calculate the total cost of items in the cart
    float calculateTotal() {
        float total = 0;
        for (const auto& item : cart) {
            total += item.price * item.quantity;
        }
        return total;
    }

    // discount on order above 500rs
    float applyDiscount(float total) {
        if (total > 500) {
            float discount = total * 0.10;
            total -= discount;
            cout << "Discount applied: " << discount << endl;
        } else {
            cout << "No discount applied." << endl;
        }
        return total;
    }
};

int main() {
    ShoppingCart myCart;
    int choice;

    while (true) {
        cout << "\nMenu:\n";
        cout << "\n1. Add Item\n";
        cout << "2. View Cart\n";
        cout << "3. Calculate Total\n";
        cout << "4. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            float price;
            int quantity;

            cout << "Enter item name: ";
            cin>>name;
            cout << "Enter item price: ";
            cin >> price;
            cout << "Enter item quantity: ";
            cin >> quantity;

            myCart.addItem(name, price, quantity);
        } 
        else if (choice == 2) {
            myCart.displayCart();
        } 
        else if (choice == 3) {
            float total = myCart.calculateTotal();
            cout<<" \nFLAT 10% off on Order above 500/- "<<endl;
            cout << "\n\nTotal before discount: " << total << endl;
            float finalTotal = myCart.applyDiscount(total);
            cout << "Total after discount: " << finalTotal << endl;
        } 
        else if (choice == 4) {
            cout << "\nExiting the program. Thank you!\n" << endl;
            cout<< "\033[1m\nMade by Ehteshamul Ghani aka Kabir \n\033[0m" <<endl;
            break;
        } 
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
