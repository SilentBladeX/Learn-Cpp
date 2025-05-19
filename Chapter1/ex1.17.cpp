#include <iostream>
using namespace std;

int main()
{
    int curr_value = 0, val = 0;

    // Prompt user for the first number
    cout << "Enter a number";

    // Try to read the first value
    if (cin >> curr_value)
    {
        int cnt = 1; // Initialize count for the first value

        // Read remaining values one by one
        while (cin >> val)
        {
            if (curr_value == val)
            {
                // If the current value is the same as the last one, increment count
                cnt = cnt + 1;
            }
            else
            {
                // If it's a new value, reset count and update current value
                curr_value = val;
                cnt = 1;
            }

            // Print how many times the current value has occurred consecutively so far
            cout << "The current value " << curr_value << " occurs " << cnt << " times" << endl;
        }
    }

    return 0; // Indicate successful program end
}
