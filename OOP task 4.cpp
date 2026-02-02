#include <iostream>
using namespace std;

class StationeryShop {
private:
    string itemNames[100];
    double itemPrices[100];
    int totalItems;

public:
    StationeryShop() {
        totalItems = 0;
    }

    void addNewItem() {
        if (totalItems >= 100) {
            cout << "Storage limit reached.\n";
            return;
        }

        cout << "Enter item name: ";
        cin.ignore(); //ignores characters left in the input buffer, usually '\n'
        getline(cin, itemNames[totalItems]);

        cout << "Enter item price: ";
        cin >> itemPrices[totalItems];

        totalItems++;
        cout << "Item added successfully.\n";
    }

    void displayItemList() {
        if (totalItems == 0) {
            cout << "No items available.\n";
            return;
        }

        cout << "\nAvailable Items:\n";
        for (int index = 0; index < totalItems; index++) {
            cout << index + 1 << ". " << itemNames[index] << endl;
        }
    }

    void displayItemsWithPrices() {
        if (totalItems == 0) {
            cout << "No items to show.\n";
            return;
        }

        cout << "\nItem Details (Name & Price):\n";
        for (int index = 0; index < totalItems; index++) {
            cout << index + 1 << ". " << itemNames[index] << " - Rs. " << itemPrices[index] << endl;
        }
    }

    void updateItemPrice() {
        displayItemsWithPrices();
        if (totalItems == 0) return;

        int selectedItem;
        cout << "Enter item number to change price: ";
        cin >> selectedItem;

        if (selectedItem < 1 || selectedItem > totalItems) {
            cout << "Invalid item number.\n";
            return;
        }

        cout << "Enter new price: ";
        cin >> itemPrices[selectedItem - 1];

        cout << "Price updated successfully.\n";
    }

    void createReceipt() {
        if (totalItems == 0) {
            cout << "No items available for receipt generation.\n";
            return;
        }

        int itemNumber, quantity;
        double totalBill = 0;
        char addMore;

        cout << "\n----- RECEIPT -----\n";

        do {
            displayItemsWithPrices();

            cout << "Enter item number: ";
            cin >> itemNumber;

            if (itemNumber < 1 || itemNumber > totalItems) {
                cout << "Invalid selection.\n";
                continue;
            }

            cout << "Enter quantity: ";
            cin >> quantity;

            double itemCost = itemPrices[itemNumber - 1] * quantity;
            totalBill += itemCost;

            cout << itemNames[itemNumber - 1]
                 << " x " << quantity
                 << " = Rs. " << itemCost << endl;

            cout << "Add another item? (y/n): ";
            cin >> addMore;

        } while (addMore == 'y' || addMore == 'Y');

        cout << "- - - - - - - - - - - - -\n";
        cout << "Total Amount: Rs. " << totalBill << endl;
        cout << "Thank you for shopping with us!\n";
    }
};

int main() {
    StationeryShop shop;
    int menuOption;

    do {
        cout << "\n----- STATIONERY SHOP MENU -----\n";
        cout << "1. Add Item\n";
        cout << "2. View Item Names\n";
        cout << "3. Edit Item Price\n";
        cout << "4. View Items with Prices\n";
        cout << "5. Generate Receipt\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> menuOption;

        switch (menuOption) {
        case 1:
            shop.addNewItem();
            break;
        case 2:
            shop.displayItemList();
            break;
        case 3:
            shop.updateItemPrice();
            break;
        case 4:
            shop.displayItemsWithPrices();
            break;
        case 5:
            shop.createReceipt();
            break;
        case 0:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (menuOption != 0);

    return 0;
}

