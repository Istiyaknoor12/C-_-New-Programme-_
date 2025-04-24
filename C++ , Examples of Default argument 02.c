////Example 2: String Processing with Multiple Default Arguments


#include <iostream>
#include <string>
using namespace std;

// Function with multiple default arguments
void printFormatted(string text,
                   bool uppercase = false,
                   int repeat = 1,
                   char separator = ' ') {
    if (uppercase) {
        for (char &c : text) c = toupper(c);
    }

    for (int i = 0; i < repeat; i++) {
        cout << text;
        if (i < repeat - 1) cout << separator;
    }
    cout << endl;
}

int main() {
    // Using all defaults
    printFormatted("hello");

    // Overriding some defaults
    printFormatted("world", true);
    printFormatted("cpp", false, 3);
    printFormatted("default", true, 2, '-');

    return 0;
}
