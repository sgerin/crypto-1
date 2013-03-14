#include "heuristics.hpp"

std::vector<int> caesar_shift(std::string msg)
{
	std::map<char, int> occur; 
	std::vector<int> shifts;
	for(char c = 'a'; c <= 'z'; ++c)
	{
		int i = letter_occurences(msg, c);
		occur.insert(std::pair<char, int>(c, i));
	}
	std::map<char, int>::iterator it;
	unsigned int size = occur.size();
	while(shifts.size() != size)
	{
		int max = occur.begin()->second;
		char maxc = occur.begin()->first;
		for(it = occur.begin(); it != occur.end(); ++it)
		{
			if(it->second > max)
			{
				max = it->second;
				maxc = it->first;
			}
			//std::cout << it->first << "  " << it->second << std::endl;
		}
		occur.erase(maxc);
		int shift = maxc - 'e';
		if(shift < 0)
		{
			shift = 26 + shift;
		}
		//std::cout << maxc << "   " << shift << std::endl;
		shifts.push_back(shift);
	}
	return shifts;
}


int letter_occurences(std::string msg, char c)
{
	int count = 0;
	bool isCaps = ( c >= 'A' ) && ( c <= 'Z' );
	for(unsigned int i=0; i<msg.length(); ++i)
	{
		if(isCaps)
		{
			if(msg[i] == c || msg[i] == c - 'A'+'a')
			{
				++count;
			}
		}
		else
		{
			if(msg[i] == c || msg[i] == c+'A'-'a')
			{
				++count;
			}
		}	
	}
	//std::cout << "nombre = " << count << std::endl;
	return count;
}