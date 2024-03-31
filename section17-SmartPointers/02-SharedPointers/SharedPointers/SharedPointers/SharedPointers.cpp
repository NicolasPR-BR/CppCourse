#include <iostream>
#include <vector>

int main()
{
    // use_count - the number of shared_ptr objects
    // managing the heap object

    std::shared_ptr<int> p1{ std::make_shared<int>(100) };
    std::cout << "Use count: " << p1.use_count() << std::endl;

    std::shared_ptr<int> p2{ p1};
    std::cout << "Use count: " << p2.use_count() << std::endl<<std::endl;

    p1.reset();
    std::cout << "Use count: " << p1.use_count() << std::endl;
    std::cout << "Use count: " << p2.use_count() << std::endl;


    // vectors
    //We're allowed to do it because shared_ptr overrides copy constructor
    std::vector<std::shared_ptr<int>> vec{ std::make_shared<int>(300) };

    std::shared_ptr<int> p3{std::make_shared<int>(32)};
    vec.push_back(p3);
    vec.push_back(p2);

    for (const std::shared_ptr<int> v : vec) {
        std::cout << *v << ", use count: "<<v.use_count() << std::endl;
    }
    
    return EXIT_SUCCESS;
}
