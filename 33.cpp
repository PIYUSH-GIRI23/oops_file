#include <iostream>
#include <vector>
#include <string>
using namespace std;
class LineConcatenator {
private:
    vector<string> lines;
    string l;
public:
    void readLines() {
        cout << "Enter lines of text: (Enter -1 to exit)" << endl;
        while (true) {
            string line;
            getline(cin, line);
            if (line == "-1") {
                break;
            }
            lines.push_back(line);
        }
    }
    void result() {
        for (auto& i:lines) l.append(i+ ' ');
        cout << "You entered: " << l << endl;
    }
};
int main() {
    LineConcatenator l;
    l.readLines();
    l.result();
    return 0;
}
