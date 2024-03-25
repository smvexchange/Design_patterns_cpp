#ifndef DESIGN_PATTERNS_CPP_SINGLETON_H
#define DESIGN_PATTERNS_CPP_SINGLETON_H


class Singleton {

private:
    const int value_;

    static Singleton *singleton_;

    explicit Singleton(const int value) : value_(value) {}

public:
    Singleton(Singleton &other) = delete;

    void operator=(const Singleton &) = delete;

    static Singleton *getInstance(int value);

    int getValue() const {
        return value_;
    }

};

#endif //DESIGN_PATTERNS_CPP_SINGLETON_H
