#include <iostream>
#include <vector>

using namespace std;

/*

Problem Statement: Single Responsibility Principle (SRP) Violation in Shopping Cart System

You are developing an E-Commerce application that contains a ShoppingCart class responsible for managing products added by customers.

Currently, the ShoppingCart class performs the following tasks:

Stores products added to the cart.
Calculates the total price of all products.
Prints the invoice/bill for the customer.
Saves shopping cart information to the database.

This design violates the Single Responsibility Principle (SRP) because the ShoppingCart class has multiple reasons to change:

If invoice formatting changes, the class must be modified.
If database logic changes, the class must be modified.
If cart calculation logic changes, the class must be modified.
Your Task

Refactor the design so that each class has only one responsibility.

Create separate classes for:

Managing cart items.
Printing invoices.
Persisting cart data to the database.

The ShoppingCart class should only be responsible for maintaining products and calculating the total amount.

Expected Design
Product → Represents a product.
ShoppingCart → Stores products and calculates total cost.
InvoicePrinter → Prints the shopping cart invoice.
ShoppingCartRepository (or DatabaseManager) → Saves cart data to the database.
Goal

Apply the Single Responsibility Principle (SRP) to improve:

Maintainability
Readability
Testability
Extensibility

without changing the overall functionality of the application.

*/

// SRP is violated


/*

class Product {
public:
    string name;
    double price;

    Product(string name, double price) {
        this->name = name;
        this->price = price;
    }
}

class ShoppingCart {
private:
    vector<Product*> products;

public:
    void addProduct(Product* p) {
        products.push_back(p);
    }

    const vector<Product*>& getProducts() {
        return products;
    }

    double totalPrice () {
        double total = 0;
        for(auto &p : products) {
            total += p->price;
        }
        return double;
    }

    void printInvoice() {
        cout << "Shopping Cart Invoice:\n";
        for (auto p : products) {
            cout << p->name << " - Rs " << p->price << endl;
        }
        cout << "Total: Rs " << calculateTotal() << endl;
    }
    
    void saveToDatabase() {
        cout << "Saving shopping cart to database..." << endl;
    }
}

*/

// SRP is not violated

class Product {
public:
    string name;
    double price;

    Product(string name, double price) {
        this->name = name;
        this->price = price;
    }
};

class ShoppingCart {
private:
    vector<Product*> products;

public:
    void addProduct(Product* p) {
        products.push_back(p);
    }

    const vector<Product*>& getProducts() {
        return products;
    }
};

class ShoppingCartTotalPrice {
private:
    ShoppingCart *cart;

public:
    ShoppingCartTotalPrice(ShoppingCart* cart) {
        this->cart = cart;
    }

    double totalPrice() {
        double total = 0;
        for(auto &p : cart->getProducts()) {
            total += p->price;
        }
        return total;
    }
};

class ShoppingCartInvoice {
private:
    ShoppingCart *cart;

public:
    ShoppingCartInvoice(ShoppingCart* cart) {
        this->cart = cart;
    }

    void printInvoice() {
        cout << "Shopping Cart Invoice:\n";
        for (auto p : cart->getProducts()) {
            cout << p->name << " - Rs " << p->price << endl;
        }
        // cout << "Total: Rs " << this->calculateTotal() << endl;
    }
};

class ShoppingDBInstance {
private:
    ShoppingCart *cart;
public:
    ShoppingDBInstance(ShoppingCart* cart) {
        this->cart = cart;
    }

    void saveToDatabase() {
        cout << "Saving shopping cart to database..." << endl;
    }
};

int main() {
    ShoppingCart* cart = new ShoppingCart();

    cart->addProduct(new Product("Brush", 1000));
    cart->addProduct(new Product("HeadPhone", 3000));

    ShoppingCartTotalPrice* totalPrice = new ShoppingCartTotalPrice(cart);

    cout << totalPrice->totalPrice() << endl;

    cout << "Hey i am here\n";

    totalPrice->totalPrice();

}