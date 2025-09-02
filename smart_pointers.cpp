#include <iostream>
#include <memory>

class MyClass {
    public:
        MyClass() { std::cout << "MyClass created!"; }
        ~MyClass() { std::cout << "MyClass destroyed"; }
        void display() const { std::cout << "MyClass::display()\n"; }
};

int main()
{
    std::unique_ptr<MyClass> ptr1 = std::make_unique<MyClass>();
    ptr1->display();

    std::unique_ptr<MyClass> ptr2 = std::move(ptr1);
    if (!ptr1) { std::cout << "ptr1 is null now"; }

    ptr2->display();
    return 0;
}