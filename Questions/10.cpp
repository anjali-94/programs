#include <iostream>
using namespace std;

class Resource {
private:
    static bool resourceAllocated; // Static data member to track resource allocation

public:
    Resource() {
        // Constructor checks if the resource is available before allocating
        if (!resourceAllocated) {
            resourceAllocated = true;
            cout << "Resource allocated." << endl;
        } else {
            cout << "Resource already allocated. Cannot allocate again." << endl;
        }
    }

    ~Resource() {
        // Destructor releases the resource
        if (resourceAllocated) {
            resourceAllocated = false;
            cout << "Resource deallocated." << endl;
        }
    }

    // Static member function to check if the resource is currently allocated
    static bool isResourceAllocated() {
        return resourceAllocated;
    }
};

// Initializing the static data member
bool Resource::resourceAllocated = false;

int main() {
    // Check if resource is allocated before creating instances
    cout << "Is resource allocated? " << (Resource::isResourceAllocated() ? "Yes" : "No") << endl;

    // Allocate resource with the first instance
    Resource resource1;

    // Check again after allocation
    cout << "Is resource allocated? " << (Resource::isResourceAllocated() ? "Yes" : "No") << endl;

    // Attempt to allocate resource with another instance
    Resource resource2; // This instance won't allocate the resource because it's already allocated

    // Check again after the attempt
    cout << "Is resource allocated? " << (Resource::isResourceAllocated() ? "Yes" : "No") << endl;

    // Resource deallocated automatically when instances go out of scope

    return 0;
}
