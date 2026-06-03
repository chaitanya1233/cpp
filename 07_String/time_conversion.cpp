#include <iostream>
#include <string>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 * The function is expected to return a STRING.
 */
string timeConversion(string s) {
    // 1. Extract AM/PM from the last 2 characters
    string time_format = s.substr(8, 2);

    // 2. Extract hours, minutes, and seconds using fixed positions
    string hour = s.substr(0, 2);
    string minutes = s.substr(3, 2);
    string seconds = s.substr(6, 2);

    int h = stoi(hour);

    // 3. Apply the conversion logic
    if (time_format == "PM") {
        // If it is PM and NOT 12, add 12 (e.g., 1 PM -> 13, but 12 PM stays 12)
        if (h != 12) {
            h += 12;
        }
    } else { // If it is AM
        // If it is 12 AM, it becomes 00 (e.g., 12:05 AM -> 00:05)
        if (h == 12) {
            h = 0;
        }
    }

    // 4. Convert back to string and ensure 2 digits for the hour (e.g., "0" becomes "00")
    string new_hour = to_string(h);
    if (new_hour.length() < 2) {
        new_hour = "0" + new_hour;
    }

    // 5. Return the newly formatted string
    return new_hour + ":" + minutes + ":" + seconds;
}

int main() {
    // Test cases covering the tricky edge cases
    cout << "12:00:00AM -> " << timeConversion("12:00:00AM") << endl; // Expected: 00:00:00
    cout << "12:45:00AM -> " << timeConversion("12:45:00AM") << endl; // Expected: 00:45:00
    cout << "07:05:45AM -> " << timeConversion("07:05:45AM") << endl; // Expected: 07:05:45
    cout << "12:00:00PM -> " << timeConversion("12:00:00PM") << endl; // Expected: 12:00:00
    cout << "12:30:15PM -> " << timeConversion("12:30:15PM") << endl; // Expected: 12:30:15
    cout << "01:05:00PM -> " << timeConversion("01:05:00PM") << endl; // Expected: 13:05:00

    return 0;
}
