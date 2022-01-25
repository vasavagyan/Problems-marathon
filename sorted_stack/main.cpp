#include "sortedStack.h"

#include <iostream>

int main()
{
	SortedStack<int> st;
	st.push(5);
	st.push(7);
	st.push(2);
	st.push(6);

	while (!st.is_empty())
	{
		std::cout << st.peek() << std::endl;
		st.pop();
	}

	return 0;
}
