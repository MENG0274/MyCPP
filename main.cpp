#include <iostream>
using namespace std;

class TrafficTool {
public:
    virtual void tansport() = 0;
};

class Bus: public TrafficTool {
public:
    void transport() override {
        cout << "Bus for passengers" << endl;
    }
};

int main() {

    return 0;
}