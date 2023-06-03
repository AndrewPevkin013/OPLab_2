#include "Menu.h"
#include "CircleBuffer.hpp"


int Menu::start() {

    CircleBuffer<int> buffer(4);

    buffer.push_back(10);
    buffer.push_back(42);
    buffer.push_back(39);
    buffer.push_back(64);
    intermediateResult(buffer);

    buffer.pop_front();
    buffer.pop_back();
    intermediateResult(buffer);

    buffer.insert(2, 0);
    intermediateResult(buffer);

    buffer.remove(1);
    intermediateResult(buffer);

    buffer.resize(5);
    buffer.push_back(99);
    buffer.push_back(12);
    intermediateResult(buffer);

    return 0;
}