template <typename T>
void SortedStack<T>::push(const T& val)
{

	if (sorted.empty())
	{
		sorted.push(val);
	}
	else if (val < sorted.top())
	{
		sorted.push(val);
	}
	else
	{
		std::stack<T> tmp;
		while ((!sorted.empty()) and (val >= sorted.top()))
		{
			tmp.push(sorted.top());
			sorted.pop();
		}
		tmp.push(val);
		while (!tmp.empty())
		{
			sorted.push(tmp.top());
			tmp.pop();
		}
	}
}

template <typename T>
void SortedStack<T>::pop()
{
	sorted.pop();
}

template <typename T>
T SortedStack<T>::peek() const
{
	return sorted.top();
}

template <typename T>
bool SortedStack<T>::is_empty() const
{
	return sorted.empty() ? true : false;
}
