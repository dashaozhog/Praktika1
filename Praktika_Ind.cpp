#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{   const int size=20;
    int correct = 0;
    string quest[size];
    string ans[size];
    ifstream fin("source.txt", ios_base::in);
    if (!fin.is_open()) {
        cout << "couldn't open file";
        return 1;
    }
    string line;
    int ind = 0;
    while (getline(fin, line)) {  
        if (ind % 2 == 0) {
            quest[ind / 2] = line;
        }
        else {
            ans[ind / 2] = line;
        }
        ind++;
    }
    string answer;
    for (int i = 0; i < size; i++) {
        cout <<i+1<<". " << quest[i] << endl;
        cin >> answer;
        if (answer == ans[i]) {
            cout << "Correct!"<<endl;
            correct++;
        }
        else {
            cout << "Wrong!"<<endl;
        }
    }
    cout << "Score: " << ((float)correct / size) * 100 << "%";
    fin.close();
    return 0;
}

