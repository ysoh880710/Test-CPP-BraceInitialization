#include <iostream>

struct SStruct0
{
	unsigned long long ullData;
};

struct SStruct1
{
	unsigned long long ullData;

	SStruct1()
		: ullData(1ull)
	{
	}

	~SStruct1()
	{
	}
};

class CClass0
{
	unsigned long long ullData;
};

class CClass1
{
private:

	unsigned long long ullData;

public:

	CClass1()
		: ullData(2ull)
	{
	}

	~CClass1()
	{
	}
};

int main()
{
	SStruct0 st0{};						// Zero initialization (implicit default constructor)
	SStruct1 st1{};						// Default initialization (user-provided default constructor)
	CClass0 cl0{};						// Zero initialization (implicit default constructor)
	CClass1 cl1{};						// Default initialization (user-provided default constructor)

	unsigned long long pArray[3]{};		// Zero initialization (array type)
	SStruct0 pS0[3]{};					// Zero initialization (array type) - each element of the array is value initialized
	SStruct1 pS1[3]{};					// Default initialization (array type) - each element of the array is value initialized
	CClass0 pC0[3]{};					// Zero initialization (array type) - each element of the array is value initialized
	CClass1 pC1[3]{};					// Default initialization (array type) - each element of the array is value initialized

	return 0;
}