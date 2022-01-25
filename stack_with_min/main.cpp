#include "stack.h"

#include <iostream>

int main()
{
	Stack<int> st;

	st.push(5);
	st.push(3);
	st.push(8);
	st.push(9);
	st.push(2);
	st.push(7);
	st.push(1);

	std::cout << "min value is " << st.min() << std::endl;

	st.pop();
	st.pop();
	st.pop();

	std::cout << "min value is " << st.min() << std::endl;

	return 0;
}
