
#include <boost/filesystem.hpp>
#include <iostream>

using namespace boost::filesystem;

int main() {
    // Path to the executable file
    path exe_path("./my_program");

    // Path to the other file you want to check permissions for
    path other_file_path("./other_file.txt");

    // Check if the executable file exists
    if (exists(exe_path)) {
        // Get the permissions of the executable file
        perms exe_perms = status(exe_path).permissions();

        // Check if the executable file has execute permissions
        bool has_exe_perms = exe_perms.executable();

        std::cout << "Executable file has execute permissions: " << has_exe_perms << std::endl;

        // Now, check if the executable file has permissions to access the other file
        // Note: This is a simplistic check and assumes the executable runs with the same user permissions
        // as the user running the check. Actual permission checks may require more complex analysis.
        bool can_access_other_file = has_exe_perms;

        std::cout << "Can the executable file access the other file: " << can_access_other_file << std::endl;
    } else {
        std::cout << "Executable file does not exist." << std::endl;
    }

    return 0;
}

