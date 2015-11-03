#ifndef FUNCTS_H
#define FUNCTS_H
#include <string>
#include <vector>
#include <initializer_list>

void swap(int *a, int *b);
bool isShorter (const std::string &s1, const std::string &s2);
void reset(int &);
int has_capitals(const std::string &s);
void make_lower(std::string &s);
int sum_list(std::initializer_list<int> il);

#endif
