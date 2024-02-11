#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream input_file("input.txt");
    if (!input_file.is_open()) {
        cerr << "Failed to open input.txt" << endl;
        return 1; 
    }

    int x;
    while (input_file >> x) {
        cout << x << endl;
    }

    input_file.close();
    return 0;
}
