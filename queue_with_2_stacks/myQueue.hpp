template <typename T>
MyQueue<T>::push(const T& val)
{
	st1.push(val);
}

template <typename T>
T MyQueue<T>::pop()
{
	while (! st1.empty())
	{
		st2.push(st1.top());
		st1.pop();
	}

	T tmp = s2.top();
	st2.pop();

	while (! st2.empty())
	{
		st1.push(st2.top);
		st2.pop();
	}

	return tmp;
}
