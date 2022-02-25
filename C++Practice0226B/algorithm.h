#pragma once
#include<algorithm>
#include<vector>
#include<iostream>

// ğŒ = ‚TˆÈ‰º
auto condition = [](int x) {
    return (x <= 5);
};

std::vector<int> v = { 1, 2, 3, 4, 5 };
// ‘S‚Ä‚ª‚TˆÈ‰º‚©H
bool a = std::all_of(v.begin(), v.end(), condition);  
// ‚P‚Â‚Å‚à‚TˆÈ‰º‚Ì—v‘f‚ª‚ ‚é‚©H
bool b = std::any_of(v.begin(), v.end(), condition);   
// ‘S‚Ä‚ª‚UˆÈã(‚TˆÈ‰º‚Å‚Í‚È‚¢)‚©H
bool c = std::none_of(v.begin(), v.end(), condition);   

void ShowALG(bool _a)
{
    std::cout << std::string(_a ? "true" : "false") << std::endl;
};