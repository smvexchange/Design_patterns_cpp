#include "Singleton.h"

Singleton *Singleton::singleton_ = nullptr;;

Singleton *Singleton::getInstance(const int value) {
    if (singleton_ == nullptr) {
        singleton_ = new Singleton(value);
    }
    return singleton_;
}