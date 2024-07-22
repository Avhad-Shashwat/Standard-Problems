#include <bits/stdc++.h>
using namespace std;

struct MyHash {
    int BUCKET;
    list<int>* table;

    MyHash(int b) {
        BUCKET = b;
        table = new list<int>[BUCKET];
    }

    void insert(int key) {
        int index = key % BUCKET;
        table[index].push_back(key);
    }

    void search(int key) {
        int index = key % BUCKET;
        for (auto x : table[index]) {
            if (x == key) {
                cout << key << " is present" << endl;
                return;
            }
        }
        cout << key << " is not present" << endl;
    }

    void remove(int key) {
        int index = key % BUCKET;
        table[index].remove(key);
    }

    ~MyHash() {
        delete[] table;
    }
};

int main() {
    MyHash hashTable(7); 
    hashTable.insert(10);
    hashTable.insert(20);
    hashTable.insert(15);
    hashTable.insert(7);

    hashTable.search(10);
    hashTable.search(15);
    hashTable.search(30);

    hashTable.remove(15);
    hashTable.search(15);

    return 0;
}

