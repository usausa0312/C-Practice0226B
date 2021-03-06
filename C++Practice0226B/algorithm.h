#pragma once
#include<algorithm>
#include<vector>
#include<iostream>

// 条件 = ５以下
auto condition = [](int x) {
    return (x <= 5);
};

std::vector<int> v = { 1, 2, 3, 4, 5 };
// 全てが５以下か？
bool a = std::all_of(v.begin(), v.end(), condition);  
// １つでも５以下の要素があるか？
bool b = std::any_of(v.begin(), v.end(), condition);   
// 全てが６以上(５以下ではない)か？
bool c = std::none_of(v.begin(), v.end(), condition);   

void ShowALG(bool _a)
{
    std::cout << std::string(_a ? "true" : "false") << std::endl;
};