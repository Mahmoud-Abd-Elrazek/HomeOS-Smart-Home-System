// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
#include "src/infrastructure/logger.h"
using namespace std;

int main () {

   HomeOs::Logger::log(HomeOs::Level::INFO, "Main", "HomeOS Smart Home System started successfully.");

   return 0;
}