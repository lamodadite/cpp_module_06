#include "Serializer.hpp"

int main()
{
	Data		data1;
	Data		*data2 = NULL;
	uintptr_t	serialNum;

	data1.name = "jongmlee";
	data1.age = 3;
	std::cout << "data1 : " << &data1 << std::endl;
	std::cout << "data2 : " << data2 << std::endl << std::endl;
	
	serialNum = Serializer::serialize(&data1);
	std::cout << "serialize data1 to serialNum: " << serialNum << std::endl << std::endl;
	
	data2 = Serializer::deserialize(serialNum);
	std::cout << "deserialize serialNum to data2: " << data2 << std::endl;
	std::cout << "data2 name: " << data2->name << std::endl;
	std::cout << "data2 age: " << data2->age << std::endl;
}