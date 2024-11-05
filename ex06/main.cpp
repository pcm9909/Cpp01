#include "harl.hpp"

int get_ret(std::string str)
{
    if (std::string(str) == "DEBUG")
        return 0;
    else if (std::string(str) == "INFO")
        return 1;
    else if (std::string(str) == "WARNING")
        return 2;
    else if (std::string(str) == "ERROR")
        return 3;
    else
        return -1;
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "input Err" << std::endl;
        return 1;
    }

    Harl    harl;
    int     ret;

    ret = get_ret(argv[1]);
    switch (ret)
    {
		default:
			std::cout << "[Probably complaining about insignificant problems]" << std::endl;
			break;
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
    }
    return 0;
}