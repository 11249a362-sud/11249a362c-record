#include <iostream>
using namespace std;
#define SIZE 10

int hashFunc(int key) {
    return key % SIZE;
}

int main() {
    int hashTable[SIZE];
    for (int i = 0; i < SIZE; i++) hashTable[i] = -1;

    int keys[] = {23, 43, 13, 27};
    for (int key : keys) {
        int index = hashFunc(key);
        while (hashTable[index] != -1)
            index = (index + 1) % SIZE;
        hashTable[index] = key;
    }

    cout << "Hash Table:\n";
    for (int i = 0; i < SIZE; i++)
        cout << i << " : " << hashTable[i] << endl;
}
