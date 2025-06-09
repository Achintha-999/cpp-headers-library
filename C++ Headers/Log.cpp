#include <iostream>

void Log(const char*);

void InitLog() {
	Log("Initializing Log...");
}

void Log(const char* message) {
	std::cout << message << std::endl;
}