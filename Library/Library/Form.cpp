#include "Form.pb.h"
#include <fstream>
#include <iostream>
#include <string>

void AddForm(tutorial::Person* player) {

	std::string speed = "75.0f";
	std::getline(std::cin, speed);

}

int main(int argc, char* argv[]) {
	// Verify that the version of the library that we linked against is
	// compatible with the version of the headers we compiled against.
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	if (argc != 2) {
		std::cerr << "Usage:  " << argv[0] << " OUTPUT_FILE" << std::endl;
		return -1;
	}

	tutorial::Person player;

	{
		// Read the existing form.
		std:: fstream input(argv[1], std::ios::in | std::ios::binary);
		if (!input) {
			std::cout << argv[1] << ": File not found.  Creating a new file." <<std:: endl;
		}
		else if (!player.ParseFromIstream(&input)) {
			std::cerr << "Failed to parse address book." << std::endl;
			return -1;
		}
	}

	{
		// Write the new form back to disk.
		std::fstream output(argv[1],std:: ios::out | std::ios::trunc | std::ios::binary);
		if (!player.SerializeToOstream(&output)) {
			std::cerr << "Failed to form." << std::endl;
			return -1;
		}
	}

	// Optional:  Delete all global objects allocated by libprotobuf.
	google::protobuf::ShutdownProtobufLibrary();

	return 0;
}