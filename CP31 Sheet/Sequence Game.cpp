#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a;
        int prev = -1; // A variable to keep track of the previous element

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            
            if (i > 0 && prev > x) {  // If the sequence is decreasing
                a.push_back(1);  // Add a separator
            }
            
            a.push_back(x); // Add the current number
            prev = x; // Update the previous element
        }

        // Output the size of the modified sequence
        cout << a.size() << "\n";

        // Output the modified sequence
        for (int el : a) {
            cout << el << " ";
        }
        cout << "\n";
    }

    return 0;
}
