#pragma once
#ifndef PRINTVECTORANDRAIIPTR_HPP
#define PRINTVECTORANDRAIIPTR_HPP

#include <vector>
#include <iostream>

template <typename pvector>
std::ostream& printVector(std::ostream& os, const std::vector<pvector>& vectortype) {
	for (auto i:vectortype) {
		os << i << "\n";
	}
	return os;
}







template <typename ObjectType>
class RAIIPtr {
	/*template <typename U>
	friend ObjectType& operator* (RAIIPtr<ObjectType>& object);*/
public:
	/*ObjectType& operator* () {
		return *_ptr;
	}*/
	ObjectType& operator*();
	/*ObjectType* operator->() {
		return _ptr;
	}*/
	ObjectType* operator->();
	RAIIPtr(ObjectType* object) : _ptr(object) {
	}
	~RAIIPtr(){
		delete _ptr;
	}
private:
	ObjectType* _ptr;
};




//template <typename ObjectType>
//ObjectType& operator*(RAIIPtr<ObjectType>& object) {
//	return object._ptr;
//}

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

//template<typename ObjectType>
//ObjectType& RAIIPtr<ObjectType>::operator->(const RAIIPtr<ObjectType>& ptr)
//{
//	return ptr;
//}


#endif // !PRINTVECTORANDRAIIPTR_HPP


