#include "Logger.h"
#include <iostream>
#include <ctime>
#include <iomanip>

namespace HomeOs {
   // Operator overloading for Level enum
   std::ostream& operator<<(std::ostream& os, const Level& level) {
      switch (level) {
         case Level::ERROR: os << "ERROR"; break;
         case Level::WARNING: os << "WARNING"; break;
         case Level::INFO: os << "INFO"; break;
      }
      return os;
   }

   void Logger::log(Level level, const std::string& sender, const std::string& message) {
      std::time_t now = std::time(nullptr);
      std::tm* localTime = std::localtime(&now);
      
      std::cout << "[" << std::put_time(localTime, "%Y-%m-%d %H:%M:%S") << "] "
               << "[" << level << "] "
               << "[" << sender << "]: " 
               << message << std::endl;
   }
}