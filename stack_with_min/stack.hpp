template <typename T>
Stack<T>::Stack(const T& val)
{
	m_vec.push_back(val);
}

template <typename T>
void Stack<T>::push(const T& val)
{
	m_vec.push_back(val);
	if (m_mins.size() == 0)
	{
		m_mins.push_back(val);
	}
	else if (val < m_mins[m_mins.size() - 1])
	{
		m_mins.push_back(val);
	}
}

template <typename T>
T Stack<T>::pop()
{
	T val = m_vec[m_vec.size() - 1];
	m_vec.pop_back();
	
	if (val == m_mins[m_mins.size() - 1])
	{
		m_mins.pop_back();
	}

	return val;
}

template <typename T>
bool Stack<T>::is_empty() const
{
	return m_vec.empty() ? true : false;
}

template <typename T>
int Stack<T>::size() const
{
	return m_vec.size();
}

template <typename T>
T Stack<T>::min() const
{
	return m_mins[m_mins.size() - 1];
}
