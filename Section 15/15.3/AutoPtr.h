#pragma once

#include <iostream>

template<class T>
class AutoPtr {
	T* m_ptr;

public:
	AutoPtr(T* ptr = nullptr)
		:m_ptr(ptr)
	{
		std::cout << "AutoPtr default constructor " << std::endl;
	}

	~AutoPtr() {
		std::cout << "AutoPtr destructor " << std::endl;
	}

	AutoPtr(const AutoPtr& a) {
		std::cout << "AutoPtr copy constructor " << std::endl;
		
		//deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr;
	}

	AutoPtr& operator = (const AutoPtr& a) {
		std::cout << "AutoPtr copy assignment " << std::endl;

		if (&a == this)		//prevent self-assignment
			return *this;
		if (m_ptr != nullptr) delete m_ptr;

		//deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr;

		return *this;
	}

	AutoPtr(AutoPtr&& a)
		:m_ptr(a.m_ptr) {
		a.m_ptr = nullptr; // really necessary?

		std::cout << "AutoPtr move constructor " << std::endl;
	}

	AutoPtr& operator = (AutoPtr&& a) {
		std::cout << "AutoPtr move assignment" << std::endl;

		if (&a == this)		//prevent self-assignment
			return *this;
		
		if (!m_ptr) delete m_ptr;

		// shallow copy
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr; // really necessary?

		return *this;
	}
};