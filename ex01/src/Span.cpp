#include "Span.hpp"

#include <algorithm>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <vector>

Span::Span() : maxValues_(42) {}

Span::Span(int maxNumValues) : maxValues_(maxNumValues) {}

Span::Span(const Span &original) : maxValues_(original.getMaxValues()) {
  *this = original;
}

Span::~Span() { this->container_.clear(); }

void Span::addNumber(int value) {
  if (this->container_.size() >= this->maxValues_) {
    throw std::runtime_error("Error: Can't add any more value to vector.");
  }
  this->container_.push_back(value);
}

void Span::addNumber(std::vector<int>::iterator begin,
                     std::vector<int>::iterator end) {
  if (std::distance(begin, end) + this->container_.size() > this->maxValues_) {
    throw std::runtime_error("Error: Trying to add too many values to vector.");
  }
  this->container_.insert(this->container_.end(), begin, end);
}

int Span::longestSpan() const {
  if (this->container_.size() < 2) {
    throw std::runtime_error("Error: Too few value to determinate a span.");
  }
  int min = *std::min_element(this->container_.begin(), this->container_.end());
  int max = *std::max_element(this->container_.begin(), this->container_.end());
  return (max - min);
}

int Span::shortestSpan() const {
  if (this->container_.size() < 2) {
    throw std::runtime_error("Error: Too few value to determinate a span.");
  }
  std::vector<int> sorted = this->container_;
  std::sort(sorted.begin(), sorted.end());

  int min_span = sorted.back() - sorted.front();
  for (size_t i = 1; i < sorted.size(); ++i) {
    int span = sorted[i] - sorted[i - 1];
    if (span < min_span) {
      min_span = span;
    }
  }
  return (min_span);
}

Span&	Span::operator=(const Span &original) {
	if (this != &original) {
		if (this->maxValues_ >= original.getContainer().size()) {
			this->container_.clear();
			this->container_ = original.getContainer();
		} else
		throw std::runtime_error("Trying to copy Span too a recipient that is too small.");
	}
	return (*this);
}

unsigned int	Span::getMaxValues() const {
	return (this->maxValues_);
}

const std::vector<int>&	Span::getContainer() const {
	return (this->container_);
}
