#ifndef STACK_H
#define STACK_H

#include <vector>

template <typename T>
class Stack
{
public:
	Stack() = default;
	Stack(const T&);

	void push(const T&);
	T pop();
	bool is_empty() const;
	int size() const;
	T min() const;

private:
	std::vector<T> m_vec;
	std::vector<T> m_mins;
};

#include "stack.hpp"

#endif
