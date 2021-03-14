#include <iostream>
using namespace std;
class Base {
   private:
    int pvt = 1;

   protected:
    int prot = 2;
    int getbaseprotected() {
      return prot;
    }
   public:
    int pub = 3;
    // function to access private member
    int getPVT() {
        return pvt;
    }
};

class PublicDerived : public Base {
   public:
    // function to access protected member from Base
    int getProt() {
        return getbaseprotected();
    }
};

int main() {
    PublicDerived object1;
    cout << "Private = " << object1.getPVT() << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.pub << endl;
    return 0;
}
