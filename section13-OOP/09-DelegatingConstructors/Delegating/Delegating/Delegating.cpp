#include <iostream>
#include "Player.h"

int main()
{
	Player noArgs{};
	std::cout << std::string(50, '*') << std::endl;
	Player friendly{"A friendly"};
	std::cout << std::string(50, '*') << std::endl;
	Player* enemy = new Player{ "Not friendly", 100, 50 };
	std::cout << std::string(50, '*') << std::endl;

	std::cout<<std::endl << enemy->get_name() << std::endl;
	std::cout << friendly.get_name() << std::endl;
	std::cout << noArgs.get_name() << std::endl<<std::endl;

	delete enemy;
	return 0;
}