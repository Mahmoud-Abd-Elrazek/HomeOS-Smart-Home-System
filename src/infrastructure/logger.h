#pragma once
#include <string>

namespace HomeOs {
    enum class Level { INFO, WARNING, ERROR };

    class Logger {
    public:
        static void log(Level level, const std::string& sender, const std::string& message);
    };
}