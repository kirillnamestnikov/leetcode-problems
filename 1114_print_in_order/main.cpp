class Foo {
public:
    void first(function<void()> printFirst) {
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        p1.set_value();
    }

    void second(function<void()> printSecond) {
        // printSecond() outputs "second". Do not change or remove this line.
        p1.get_future().wait();
        printSecond();
        p2.set_value();
    }

    void third(function<void()> printThird) {
        // printThird() outputs "third". Do not change or remove this line.
        p2.get_future().wait();
        printThird();
    }
private:
    std::promise< void > p1;
    std::promise< void > p2;
};
