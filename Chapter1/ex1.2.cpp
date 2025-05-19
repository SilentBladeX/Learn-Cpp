// -----------------------------------------
// Program 1: "Program Failed" message
// -----------------------------------------

#include <iostream>
using namespace std;

int main() {
    cout << "Program Failed";
    return -1;  // Returning -1 indicates program failure
}



// -----------------------------------------
// Program 2: Understanding int8_t / uint8_t behavior
// -----------------------------------------

/*
    When we use int8_t or uint8_t, these types are aliases of 
    'signed char' and 'unsigned char' respectively.
    
    That means they behave like characters when printed using 'cout'.
    So, instead of showing numeric values, they print ASCII characters.

    To correctly print the numeric values, we use 'static_cast<int>()'.
*/

#include <iostream>
#include <cstdint>  // For fixed-width integer types like int8_t, uint8_t

using namespace std;

int main() {
    int8_t signed_value = -1;
    uint8_t unsigned_value = signed_value;

    // Print numeric values instead of ASCII characters
    cout << "signed value = " << static_cast<int>(signed_value) << endl;
    cout << "unsigned value = " << static_cast<int>(unsigned_value) << endl;

    return 0;
}
