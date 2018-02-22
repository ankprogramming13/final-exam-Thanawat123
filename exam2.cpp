#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    int cmb;
    ofstream writefile ("std.txt", ofstream::app);
    ifstream readfile ("std.txt");
    string line;
    string name;

    cin >> cmb;

    if (cmb == 1){
        cin >> name;
        if (writefile.is_open()){
            writefile << name << endl;
            writefile.close();
        }else{
                cout << "Unable to open file";
        }
    }else if (cmb == 2){
        if (readfile.is_open()){
            while (getline(readfile,line)){
            cout << line << endl;
            }
            readfile.close();
        }
        }else{
        }
        return 0;
}
