template <typename T>
Stack3<T>::Stack3()
{
	m_cap = 1;
	m_vec.resize(m_cap * 3);
}

template <typename T>
void Stack3<T>::push1(const T& val)
{
	if (m_size1 == m_cap)
	{
		m_cap *= 2;
		m_vec.resize(m_cap * 3);
		adapt_vec();
	}
	m_vec[m_size1] = val;
	m_size1++;
}

template <typename T>
void Stack3<T>::push2(const T& val)
{
	if (m_size2 == m_cap)
	{
		m_cap *= 2;
		m_vec.resize(m_cap * 3);
		adapt_vec();
	}
	m_vec[m_cap + m_size2] = val;
	++m_size2;
}

template <typename T>
void Stack3<T>::push3(const T& val)
{
	if (m_size3 == m_cap)
	{
		m_cap *= 2;
		m_vec.resize(m_cap * 3);
		adapt_vec();
	}
	m_vec[m_cap * 2 + m_size3] = val;
	++m_size3;
}

//helper method to adapt abstract indexes in the array
template <typename T>
void Stack3<T>::adapt_vec()
{
	for (int i = m_cap; i < m_cap + m_size3; ++i)
		m_vec[i + m_cap] = m_vec[i];

	for (int i = m_cap/2; i < m_cap/2 + m_size2; ++i)
		m_vec[i + m_cap/2] = m_vec[i];
}

template <typename T>
void Stack3<T>::pop1()
{
	m_size1--;
}
	
template <typename T>
void Stack3<T>::pop2()
{
	m_size2--;
}

template <typename T>
void Stack3<T>::pop3()
{
	m_size3--;
}

template <typename T>
int Stack3<T>::size1() const
{
	return m_size1;
}

template <typename T>
int Stack3<T>::size2() const
{
	return m_size2;
}

template <typename T>
int Stack3<T>::size3() const
{
	return m_size3;
}
