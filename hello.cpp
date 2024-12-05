#include <iostream>

int main(void)
{
    std::cout << "Hi!, you have reached the first code that I have added to this trial repo!!!\n";
    std::cout << "Hi!, this is the first time I'm making a change in a code that I have already uploaded in Github :)\n";
    std::cout << "The third change, this one I made directly on github and will pull in local clone using 'git clone' trying to generate a merge conflict!\n";
    int x;
    std::cout << "Hi!, pls input ur age! I've added this feature in feature branch :)\n";
    std::cin >> x;
    if (x>=18)
    {
	    std::cout << "Nice, you are an adult!\n";
    }
    else
    {
	    std::cout << "Stay happy with driving GTA cars for now\n";
    }
}
