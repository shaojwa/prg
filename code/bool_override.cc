#include <iostream>
using namespace std;

class Dog {
  public:
    Dog() {
      cout << "Dog()" << endl;
    }
    ~Dog() {
      cout << "~Dog()" << endl;
    }
    Dog* operator &() const {
      return nullptr;
    }
    operator bool() const {
      return (this != nullptr);
    }
};

int constexpr max_count = 5;
int main() {
  int count = 0;
  while (count++ < max_count) {
    Dog d;
    cout << "count " << count << ", &d " << &d << ", exist " << (d ? "true" : "false") << endl;
  }
  return 0;
}

