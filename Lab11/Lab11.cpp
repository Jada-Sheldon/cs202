

#include <iostream>

class Person
{
public:

	Person() : _age(0)
	{
		std::cout << "Made a person with age " << _age << std::endl;
	}

	Person(int age) : _age(age)
	{
		std::cout << "Made a person with age " << _age << std::endl;
	}

	~Person()
	{
		std::cout << "Got rid of a person" << std::endl;
	}

	int getAge()
	{
		return _age;
	}

	void setAge(int age)
	{
		_age = age;
	}


protected:
	int _age;
};

class Doctor : public Person {
public:
	Doctor() : _numOfLivesSaved{ 0 } {
		std::cout << "Made a doctor." << std::endl;
	}

	Doctor(int age, int saved) : Person(age), _numOfLivesSaved{ saved }{
		std::cout << "made doctor with age " << getAge() << " who saved " << _numOfLivesSaved << " lives." << std::endl;
	}

	~Doctor() {
		std::cout << "Got rid of a doctor" << std::endl;
	}

	void setBoth(int age, int lives) {
		this->setAge(age);
		_numOfLivesSaved = lives;
	}

private:
	int _numOfLivesSaved;
};

int main()
{
	Person p;
	Person a(20);
	Doctor();
	Doctor(20, 20);
}
