#include "easyfind.hpp"

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator    easyfind(T& haystack, int needle) {
  typename T::iterator it = std::find(haystack.begin(), haystack.end(), needle);
  if (it == haystack.end()) {
    throw std::runtime_error("Needle not found in provided haystack. :(");
  }
  return (it);
}
