#include <iostream>
using namespace std;

// Strategy interface
class PaymentStrategy {
public:
    virtual void pay(int amount) = 0;
};

// Concrete strategies
class CreditCardPayment : public PaymentStrategy {
public:
    void pay(int amount) override {
        cout << "Paid " << amount << " using Credit Card.\n";
    }
};

class PayPalPayment : public PaymentStrategy {
public:
    void pay(int amount) override {
        cout << "Paid " << amount << " using PayPal.\n";
    }
};

// Context
class PaymentContext {
private:
    PaymentStrategy& strategy;
public:
    PaymentContext(PaymentStrategy& s) : strategy(s) {}

    void makePayment(int amount) {
        strategy.pay(amount);
    }
};

// Usage
int main() {
    CreditCardPayment credit;
    PayPalPayment paypal;

    PaymentContext context1(credit);
    context1.makePayment(100);

    PaymentContext context2(paypal);
    context2.makePayment(200);

    return 0;
}
