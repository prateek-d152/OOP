#include <iostream>
#include <stdexcept>
using namespace std;

void throwDifferentErrors(int choice) {
    if (choice == 1)
        throw 100;               // int exception
    else if (choice == 2)
        throw 3.14f;             // float exception
    else if (choice == 3)
        throw "String error";    // const char* exception
    else
        throw runtime_error("Standard C++ exception");  // standard exception
}

int main() {
    int option;
    cout << "Choose error type (1=int, 2=float, 3=string, 4=std): ";
    cin >> option;

    try {
        throwDifferentErrors(option);
    } 
    catch (int e) {
        std::cout << "Caught int exception: " << e << "\n";
    }
    catch (float e) {
        std::cout << "Caught float exception: " << e << "\n";
    }
    catch (const char* e) {
        std::cout << "Caught const char* exception: " << e << "\n";
    }
    catch (const std::exception& e) {
        std::cout << "Caught std::exception: " << e.what() << "\n";
    }
    catch (...) {
        std::cout << "Caught unknown exception type.\n";
    }

    return 0;
}


