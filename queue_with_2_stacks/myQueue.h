#ifndef MYQUEUE_H
#define MYQUEUE_H

#include <stack>

template <typename T>
class MyQueue
{
public:
	void push(const T&);
	T pop();

private:
	std::stack<T> st1;
	std::stack<T> st2;
};

#include "myQueue.hpp"

#endif
