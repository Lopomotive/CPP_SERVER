#include <iostream>
#include <vector>
#include <type_traits>

// Example struct for demonstration
struct Debuggable {
    Debuggable(int id) : id(id) {}
    int id;
};

// Function to simulate DebugFunction
void DebugFunction(Debuggable&& debuggable) {
    std::cout << "Debugging: ID = " << debuggable.id << std::endl;
}

// Template function to process arguments
template <typename... Args>
void processArguments(Args&&... args) {
    // Example of validating arguments (this is simplistic and depends on your criteria)
    bool isValid = (... && std::is_same_v<decltype(args), Debuggable>);
    
    if (isValid) {
        // Perfectly forward arguments to DebugFunction
        DebugFunction(std::forward<Args>(args)...);
    } else {
        std::cout << "Invalid arguments." << std::endl;
    }
}

int main() {
    // Example usage
    Debuggable debuggable1(1);
    Debuggable debuggable2(2);
    
    // Calling processArguments with Debuggable objects
    processArguments(debuggable1, debuggable2);
    
    // Attempting to call with invalid arguments
    processArguments(1, 2.0, "test"); // Expected to print "Invalid arguments."
    
    return 0;
}
