# Shopping Cart Program

This is a simple C++ program that implements a shopping cart system. The program allows users to add items to their cart, view the cart, calculate the total cost, and apply discounts on orders above 500 units. The program uses object-oriented principles with classes to manage the shopping cart and individual items.

## Features

- **Add Item to Cart**: Users can add items to the cart by providing item name, price, and quantity.
- **View Cart**: Displays the list of items in the cart along with their price, quantity, and total cost for each item.
- **Calculate Total**: Computes the total cost of items in the cart.
- **Apply Discount**: A flat 10% discount is applied to orders that exceed 500 units in total cost.
- **Exit**: Exit the program.

## Classes

### `Item`
This class represents an individual item in the shopping cart with the following attributes:
- `name`: The name of the item.
- `price`: The price of the item.
- `quantity`: The quantity of the item added to the cart.

### `ShoppingCart`
This class manages the shopping cart and includes the following methods:
- `addItem`: Adds an item to the shopping cart.
- `displayCart`: Displays all items in the cart.
- `calculateTotal`: Calculates the total cost of the items in the cart.
- `applyDiscount`: Applies a 10% discount to the total cost if it exceeds 500 units.

## Usage

1. **Add Item**: Choose option `1` to add an item to the cart by providing its name, price, and quantity.
2. **View Cart**: Choose option `2` to display the current items in the cart.
3. **Calculate Total**: Choose option `3` to view the total cost before and after applying the discount.
4. **Exit**: Choose option `4` to exit the program.

## Example

```
Menu:

1. Add Item
2. View Cart
3. Calculate Total
4. Exit

Enter your choice: 1
Enter item name: Apple
Enter item price: 50
Enter item quantity: 5
Item added successfully!

Menu:

1. Add Item
2. View Cart
3. Calculate Total
4. Exit

Enter your choice: 2

Items in your cart:
Name                 Price     Quantity  Total
Apple                50        5         250

Menu:

1. Add Item
2. View Cart
3. Calculate Total
4. Exit

Enter your choice: 3

FLAT 10% off on Order above 500/-
Total before discount: 250
No discount applied.
Total after discount: 250
```

## Compilation and Execution

To compile and run the program, follow these steps:

1. **Compile**: Use a C++ compiler like `g++`:
   ```bash
   g++ -o shopping_cart shopping_cart.cpp
   ```
2. **Run**: Execute the program:
   ```bash
   ./shopping_cart
   ```

## Future Improvements

- **Bug Fixes**: While testing the program, I encountered some bugs that need to be fixed in future versions.
- **Website Implementation**: I plan to use HTML, CSS, and JavaScript to create a website for this program in the future.

## Contact Me

If you have a solution or suggestions, feel free to contact me. You can reach out via email at:

- ghaniehteshamul@gmail.com

## Author

Made by **Ehteshamul Ghani aka Kabir**
