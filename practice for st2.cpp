
#include <iostream>
#include <string>
using namespace std;

class Mobile {
private:
    string c_name;
    string Iphone;
    float price[3];

public:
    Mobile() {
        
        cin >> c_name;
        cin >> Iphone;
        for (int i = 0; i < 3; i++) {
            cin >> price[i];
        }
    }
    float minprice() {
        float min = price[0];
        for (int i = 1; i < 3; i++) {
            if (price[i] < min)
                min = price[i];
        }
        return min;
    }
    void display() {
        cout << "\nC.Name: " << c_name
             << "\nIphone: " << Iphone
             << "\nMin Price: " << minprice() << endl;
    }

    ~Mobile() {
        cout << "\n" << c_name << "" << Iphone << "destroyed.\n";
    }
};

int main() {
    Mobile m1;   
    m1.display(); 
    return 0;    
}