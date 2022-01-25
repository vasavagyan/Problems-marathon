#ifndef SORTEDSTACK_H
#define SORTEDSTACK_H

#include <stack>

template <typename T>
class SortedStack
{
public:
	void push(const T&);
	void pop();
	T peek() const;
	bool is_empty() const;

private:
	std::stack<T> sorted;
};

#include "sortedStack.hpp"

#endif
