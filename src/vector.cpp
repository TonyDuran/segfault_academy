#include "segfault/vector.hpp"

namespace segfault {

Vector::Vector(size_t n)
    : m_size(n), m_data(new int[n]()) {}

Vector::~Vector() {
    delete[] m_data;
}

}  // namespace segfault

