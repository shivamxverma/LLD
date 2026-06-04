#include <iostream>
#include <vector>

using namespace std;

class Product {
private:
    int id;
    string name;
    int price;

    Product(int id,string name,int price) {
        this->id = id;
        this->name = name;
        this->price = price;
    }
}

class ShoppingCart {
private:
    set<Product*> products;

public:
    void addProduct(Product* p) {
        products.insert(p);
    }

    set<Product*> getProducts() {
        return products;
    }

    void deleteProduct(Product* p) {
        products.erase(id);
    }

    void getProductById(Product* p) {
        return products[p];
    }

    int totalPrice() {
        int res = 0;

        for(auto &p : products) {
            res += p->price;
        }

        return res;
    }
}

class PersistentDB {
    
}