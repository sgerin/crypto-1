#include "caesar.hpp"
#include<fstream>

int main(int argc, char** argv)
{
	if(argc != 3)
	{
		std::cout << "Syntax : ./prog message.txt code-type" << std::endl;
		return 1;
	}
	else
	{
		int i = strtol(argv[2], (char**) NULL, 10);
		
		std::ifstream ifs(argv[1]);
 		std::string code((std::istreambuf_iterator<char>(ifs)),(std::istreambuf_iterator<char>()));
		//std::cout << code << std::endl;

		if(i == 1)
		{
			std::string res = decrypt(code, 14);
			std::cout << res << std::endl;
		}
		else if(i == 2)
		{
		}
		else if(i == 3)
		{
		}
		else if(i == 4)
		{
		}
		else if(i == 5)
		{
		}
		else if(i == 6)
		{
		}
		else
		{
			std::cout << "Error" << std::endl;
		}
		return 0;	
	}
}



