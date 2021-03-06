#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <iostream>
#include <map>
#include <string>

bool inDict(std::map<std::string, uint16_t>& dict, const std::string& word);

std::map<std::string, uint16_t> makeDict(std::string& text);

void printDict(std::map<std::string, uint16_t>& dict);

int calcDictSize(std::map<std::string, uint16_t>& dict);

#endif