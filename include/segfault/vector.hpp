#pragma once
#include <cstddef>
#include <stdexcept>

namespace segfault {

class Vector {
public:
    Vector(size_t n = 0);
    ~Vector();
    size_t size() const { return m_size; }

private:
    size_t m_size;
    int* m_data;
};

} // namespace segfault

