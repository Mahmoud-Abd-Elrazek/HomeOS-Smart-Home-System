# تحديد أقل إصدار مطلوب من CMake
cmake_minimum_required(VERSION 3.10)

# اسم المشروع وإصدار لغة C++
project(HomeOS_SmartHomeSystem VERSION 1.0 LANGUAGES CXX)

# استخدام C++17 (أو C++20 حسب تفضيلك)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# إضافة مجلد src ليتم معالجته بواسطة CMake
add_subdirectory(src)

# إنشاء الملف التنفيذي من main.cpp
add_executable(${PROJECT_NAME} main.cpp)

# ربط مكتبة الكود الأساسية (التي سننشئها في مجلد src) بالملف التنفيذي
target_link_libraries(${PROJECT_NAME} PRIVATE HomeOS_Core)