### Solution Code

```cpp
/**
* Tailor Burkham
* 4483 Programming Techniques
* 9/6/2024
*/
#include <iostream>

#define endl "\n"

using namespace std;

int main() {
    long B = 0, A = 0;

    while (cin >> A >> B) {
        long difference;
        if (A > B) {
            difference = A - B;
        } else {
            difference = B - A;
        }
        // Output the result
        cout << difference << "\n";
    }
    return 0;
}
```
