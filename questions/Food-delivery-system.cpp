#include<iostream>
#include <string>
#include <vector>
using namespace std;

class DeliveryPartner {
    protected:
    int earnings = 0;

    public:

    int getEarnings() const {
        return earnings;
    }
    virtual void acceptOrder() = 0;
    virtual void pickOrder() = 0;
    virtual void deliverOrder() = 0;
    virtual void calculateEarnings() = 0;
    virtual ~DeliveryPartner() = default;
};

class BikeDeliveryPartner : public DeliveryPartner {
    private:
    string partnerName;
    int vehicleNumber;
    int totalOrdersDelivered;

    public:

    BikeDeliveryPartner(string partnerName,int vehicleNumber) {
        this->partnerName = partnerName;
        this->vehicleNumber = vehicleNumber;
        this->totalOrdersDelivered = 0;
    }

    void acceptOrder() override {
        cout << "Order is Accepted by Bike Delivery Partner\n";
    }

    void pickOrder() override {
        cout << "Order is Picked by Bike Delivery Partner\n";
    }

    void deliverOrder() override {
        this->totalOrdersDelivered++;
        cout << "Order is Delivered by Bike Delivery Partner\n";
    }

    void calculateEarnings() override {
        this->earnings += 50;
        cout << "Total Earnings is calculated" << endl;
    } 
};

class CycleDeliveryPartner : public DeliveryPartner {
    private:
    string partnerName;
    int vehicleNumber;
    int totalOrdersDelivered;

    public:

    CycleDeliveryPartner(string partnerName,int vehicleNumber) {
        this->partnerName = partnerName;
        this->vehicleNumber = vehicleNumber;
        this->totalOrdersDelivered = 0;
    }

    void acceptOrder() override {
        cout << "Order is Accepted by Bike Delivery Partner\n";
    }

    void pickOrder() override {
        cout << "Order is Picked by Bike Delivery Partner\n";
    }

    void deliverOrder() override {
        cout << "Order is Delivered by Bike Delivery Partner\n";
    }

    void calculateEarnings() override {
        this->earnings += 30;
        cout << "Total Earnings is calculated" << endl;
    } 
};

class CarDeliveryPartner : public DeliveryPartner {
    private:
    string partnerName;
    int vehicleNumber;
    int totalOrdersDelivered;

    public:
    CarDeliveryPartner(string partnerName,int vehicleNumber) {
        this->partnerName = partnerName;
        this->vehicleNumber = vehicleNumber;
        this->totalOrdersDelivered = 0;
    }

    void acceptOrder() override {
        cout << "Order is Accepted by Bike Delivery Partner\n";
    }

    void pickOrder() override {
        cout << "Order is Picked by Bike Delivery Partner\n";
    }

    void deliverOrder() override {
        cout << "Order is Delivered by Bike Delivery Partner\n";
    }

    void calculateEarnings() override {
        this->earnings += 80;
        cout << "Total Earnings is calculated" << endl;
    } 
};

int main() {
    vector<DeliveryPartner*> partners;

    partners.push_back(new BikeDeliveryPartner("Shivam Verma",123));
    partners.push_back(new CycleDeliveryPartner("Ravi Gupta",124));
    partners.push_back(new CarDeliveryPartner("Nitin Sah",125));

    for(auto partner : partners)
    {
        partner->acceptOrder();
        partner->pickOrder();
        partner->deliverOrder();
        partner->calculateEarnings();
        cout << partner->getEarnings() << endl;
    }

    for(auto partner : partners)
    {
        delete partner;
    }
    return 0;
}   