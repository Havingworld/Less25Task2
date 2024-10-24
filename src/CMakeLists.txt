cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Less25Task2 Less25Task2.cpp ${MY_INCLUDE_DIR} "cpu.cpp" "disk.cpp" "gpu.cpp" "kbd.cpp"  "ram.cpp")
target_include_directories(Less25Task2 PUBLIC ${MY_INCLUDE_DIR})
