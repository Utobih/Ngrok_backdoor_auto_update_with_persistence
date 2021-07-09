#ifndef BEHAVIOUR_H_INCLUDED
#define BEHAVIOUR_H_INCLUDED

#include <bits/stdc++.h>
#include <string.h>

// SPLIT STRING
extern std::vector<std::string> split(std::string str,std::string sep){
    char* cstr=const_cast<char*>(str.c_str());
    char* current;
    std::vector<std::string> arr;
    current=strtok(cstr,sep.c_str());
    while(current!=NULL){
        arr.push_back(current);
        current=strtok(NULL,sep.c_str());
    }
    return arr;
}

#endif // BEHAVIOUR_H_INCLUDED
