#pragma once
#ifndef PRINTVECTORANDRAIIPTR_HPP
#define PRINTVECTORANDRAIIPTR_HPP

#include <vector>
#include <iostream>

template <typename pvector>
std::ostream printVector(std::ostream& os, const std::vector<pvector>& vectortype) {
	for (auto i:vectortype) {
		os << vectortype[i] << "\n";
	}
	return os;
}

template <typename ObjectType>
class RAIIPtr {
public:
	RAIIPtr(ObjectType* object) : _ptr(object) {
	}
	~RAIIPtr{
		//delete pointer
	}
private:
	ObjectType* _ptr;
};


#endif // !PRINTVECTORANDRAIIPTR_HPP
