#include "CMakeSpdlog.h"

using namespace std;

#include "spdlog/spdlog.h"

int main()
{
	cout << "Hello CMake." << endl;

	spdlog::info("Hello {}", 42);

	return 0;
}
