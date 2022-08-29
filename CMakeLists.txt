project(
	A
	LANGUAGES CXX
	)
add_compile_options(--static --std=c++2a)
add_executable(a a.cpp)
