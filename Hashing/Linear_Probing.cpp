#include <iostream>
using namespace std;

class HashTable {
private:
    int size;
    int *table;

public:
    HashTable(int s) {
        size = s;
        table = new int[size];
        for (int i = 0; i < size; i++)
            table[i] = -1;      // -1 means empty
    }

    int hashFunction(int key) {
        return key % size;
    }

    void insert(int key) {
        int index = hashFunction(key);

        // Linear probing
        while (table[index] != -1) {
            index = (index + 1) % size;
        }
        table[index] = key;
    }

    bool search(int key) {
        int index = hashFunction(key);
        int start = index;

        while (table[index] != -1) {
            if (table[index] == key)
                return true;

            index = (index + 1) % size;
            if (index == start)  // full cycle
                return false;
        }
        return false;
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << "Index " << i << ": " << table[i] << endl;
    }
};

int main() {
    HashTable ht(7);

    ht.insert(10);
    ht.insert(20);
    ht.insert(5);
    ht.insert(15);

    cout << "Hash Table:\n";
    ht.display();

    cout << "\nSearch 15: " << (ht.search(15) ? "Found :" : "Not Found") << endl;
    cout << "Search 99: " << (ht.search(99) ? "Found :" : "Not Found") << endl;

    return 0;
}
