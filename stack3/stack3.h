#ifndef STACK3_H
#define STACK3_H

#include <vector>

template <typename T>
class Stack3
{
public:
	Stack3();

	void push1(const T&);
	void push2(const T&);
	void push3(const T&);
	void pop1();
	void pop2();
	void pop3();
	int size1() const;
	int size2() const;
	int size3() const;

private:
	void adapt_vec(); //helper

	int m_size1{};
	int m_size2{};
	int m_size3{};
	int m_cap{};
	std::vector<T> m_vec;
};

#include "stack3.hpp"

#endif
