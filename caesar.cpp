#include "caesar.hpp"

std::string encrypt(std::string msg, int shift)
{
	//std::string result = "";
	for(int i=0; i<msg.length(); ++i)
	{
		msg[i] += shift%26;
	}
	return msg;
}


std::string decrypt(std::string msg)
{	

}


std::string decrypt(std::string msg, int shift)
{	
	for(int i=0; i<msg.length(); ++i)
	{
		msg[i] -= shift%26;
	}
	return msg;
}
