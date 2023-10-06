#include <iostream>
#include "Player.h"

int main()
{
	Player* enemy = new Player{ "Not friendly", 100, 50};
	Player friendly{"A friendly"};
	Player noArgs{};

	std::cout<<std::endl << enemy->get_name() << std::endl;
	std::cout << friendly.get_name() << std::endl;
	std::cout << noArgs.get_name() << std::endl<<std::endl;

	delete enemy;
	return 0;
}