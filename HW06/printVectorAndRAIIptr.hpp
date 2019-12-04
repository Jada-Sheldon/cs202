//Jada Sheldon
#pragma once
#ifndef PRINTVECTORANDRAIIPTR_HPP
#define PRINTVECTORANDRAIIPTR_HPP

#include <vector>
#include <iostream>


//Vector function
template <typename pvector>
std::ostream& printVector(std::ostream& os, const std::vector<pvector>& vectortype) {
	for (auto i:vectortype) {
		os << i << "\n";
	}
	return os;
}



//class
template <typename ObjectType>
class RAIIPtr {
public:
	ObjectType& operator*();
	ObjectType* operator->();
	RAIIPtr(ObjectType* object);
	~RAIIPtr();
private:
	ObjectType* _ptr;
};



//definitions for class
template<typename ObjectType>
inline ObjectType& RAIIPtr<ObjectType>::operator*()
{
	return *_ptr;
}

template<typename ObjectType>
inline ObjectType* RAIIPtr<ObjectType>::operator->()
{
	return _ptr;
}

template<typename ObjectType>
inline RAIIPtr<ObjectType>::RAIIPtr(ObjectType* object) : _ptr(object) {
}


template<typename ObjectType>
inline RAIIPtr<ObjectType>::~RAIIPtr()
{
	delete _ptr;
}




#endif // !PRINTVECTORANDRAIIPTR_HPP


