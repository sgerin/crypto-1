#ifndef HEURISTICS
#define HEURISTICS

#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <map>
#include <vector>

struct A{
    static std::map<char,int> create_map()
        {
          std::map<char,int> m;
          m['a'] = 3;
          m['b'] = 18;
          m['c'] = 12;
          m['d'] = 11;
          m['e'] = 1;
          m['f'] = 17;
          m['g'] = 19;
          m['h'] = 20;
          m['i'] = 4;
          m['j'] = 21;
          m['k'] = 26;
          m['l'] = 9;
          m['m'] = 14;
          m['n'] = 6;
          m['o'] = 10;
          m['p'] = 13;
          m['q'] = 16;
          m['r'] = 7;
          m['s'] = 2;
          m['t'] = 5;
          m['u'] = 8;
          m['v'] = 15;
          m['w'] = 25;
          m['x'] = 22;
          m['y'] = 23;
          m['z'] = 24;
          return m;
        }
    static const std::map<char,int> myMap;

};

const std::map<char,int> myMap =  A::create_map();


std::vector<int> caesar_shift(std::string);
int letter_occurences(std::string, char);



#endif
