#include <iostream>
#include <map>
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "input file rquired" << std::endl;
        exit(1);
    }
    (void)ac, (void)av;
    try
    {
        parseInputFile(av[1], parseDataBase());
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}