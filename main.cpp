#include <iostream>
#include <filesystem>
#include <random>
#include <vector>

int main(int argc, char *argv[]) {
	// Get path argument
	std::string directoryPath = argv[1];
	// Vector to store files
	std::vector<std::string> files;

	// TODO: Check if theres no argument

	// List files
	for (const auto& entry : std::filesystem::directory_iterator(directoryPath)) {
		if (entry.is_regular_file()) {
			files.push_back(entry.path().filename().string());
		}
	}

	// Check if directory empty
	if (files.empty()) {
		std::cout << "No files found in directory " << directoryPath << std::endl;
		return 1;
	}

	// Prepare randomizer
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(0, files.size() - 1);

	// Generate random index
	int randomIndex = dist(gen);

	// Print random file name
	std::cout << files[randomIndex] << std::endl;

	return 0;
}
