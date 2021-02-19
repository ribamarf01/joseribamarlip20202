#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    string palavra;
    getline(cin, palavra);

    int i = 0, j = palavra.length() - 1;
    char temp;

    while (i < j) {
        temp = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = temp;
        i++;
        j--;
    }

    cout  << palavra << endl;

    return 0;
}