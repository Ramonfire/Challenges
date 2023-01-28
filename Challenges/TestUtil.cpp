#include "TestUtil.h"

std::unique_ptr<vector<std::shared_ptr<Test>>> make()
{
    return std::make_unique<vector<std::shared_ptr<Test>>>();
}

void fill(vector<std::shared_ptr<Test>>& vec, int num)
{
	int data{};
	std::cout << "values : " << std::endl;
	for (size_t i = 0; i < num; i++)
	{
		std::cout << "element " << i + 1 << " value is: " << std::endl;
		std::cin >> data;
		std::cin.clear();
		std::cin.ignore();
		vec.push_back(std::make_shared<Test>(data));

	}
	
	
}

void DisplayPtrVector(const vector<std::shared_ptr<Test>>& vec)
{
	for (const auto& element : vec)
	{
		std::cout << "\t" << *element ;
		// or std::cout<<element->getData()<<std::endl;
	}
	std::cout<< std::endl;
}
