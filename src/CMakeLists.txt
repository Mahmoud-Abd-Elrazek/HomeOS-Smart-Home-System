# البحث عن جميع ملفات .cpp في المجلدات الفرعية (domain, application, إلخ)
# ملاحظة: في المشاريع الضخمة يُفضل كتابة أسماء الملفات يدوياً، لكن هذه الطريقة أسرع للتطوير
file(GLOB_RECURSE SOURCES "*.cpp")

# إنشاء مكتبة باسم HomeOS_Core تحتوي على جميع ملفات النظام
add_library(HomeOS_Core STATIC ${SOURCES})

# تحديد مجلد src كمسار عام للـ Includes
# هذا سيسمح لك بكتابة #include "domain/MyClass.h" مباشرة في main.cpp
target_include_directories(HomeOS_Core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})