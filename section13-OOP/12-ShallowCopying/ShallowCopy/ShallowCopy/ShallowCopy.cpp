#include <iostream>
#include <string>

class Shallow {
private:
	int* data;
public:
	void set_data_value(int d) { *data = d; };
	int get_data() { return *data; };

	Shallow(int d);
	Shallow(const Shallow& source);
	~Shallow();
};

Shallow::Shallow(int d) {
	data = new int{ d };
};

// Copying the pointer, not what it's pointing to
Shallow::Shallow(const Shallow& source)
	: data{source.data} {

};

Shallow::~Shallow() {
	delete data;
	data = nullptr;
	std::cout << "Memory released" << std::endl;
};

void display_data(Shallow obj) {
	std::cout << "The integer is " << obj.get_data() << std::endl;
}

int main()
{
	Shallow num{55};
	display_data(num);

	// Trying to access deallocated memory:
	std::cout<<"Trying to access the integer: " << num.get_data() << std::endl;

	return 0;
}