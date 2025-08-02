#include <iostream>
using namespace std;

struct node {
    node* child[26];
    bool isword;
};

node* newnode() {
    node* temp = new node; // C++ way to allocate memory
    temp->isword = false;
    for (int i = 0; i < 26; i++) {
        temp->child[i] = NULL;
    }
    return temp;
}

void insert(node* root, string str) {
    int n = str.length();
    for (int i = 0; i < n; i++) {
        if (root->child[str[i] - 'a'] == NULL)
            root->child[str[i] - 'a'] = newnode();
        root = root->child[str[i] - 'a'];
    }
    root->isword = true;
}

bool search(node* root, string str) {
    int n = str.length();
    for (int i = 0; i < n; i++) {
        if (root->child[str[i] - 'a'] == NULL) {
            cout << "Node not present\n";
            return false;
        }
        root = root->child[str[i] - 'a'];
    }
    if (root->isword == false) {
        cout << "isword is false\n";
    }
    return root->isword;
}

bool check(node* root) {
    for (int i = 0; i < 26; i++) {
        if (root->child[i] != NULL) return false;
    }
    return !root->isword;
}

node* deleteutils(node* root, string str, int n, int i) {
    if (root == NULL) return NULL;

    if (i == n) {
        root->isword = false;
        if (check(root)) {
            delete root;
            return NULL;
        }
        return root;
    }

    node* temp = deleteutils(root->child[str[i] - 'a'], str, n, i + 1);
    root->child[str[i] - 'a'] = temp;

    if (temp == NULL && check(root)) {
        delete root;
        return NULL;
    }

    return root;
}

void delete2(node* root, string str) {
    int n = str.length();
    deleteutils(root, str, n, 0);
}

int main() {
    int Q, ch;
    node* root = newnode();
    string str;

    cout << "Enter number of queries: ";
    cin >> Q;
    while (Q--) {
        cout << "\nMenu\n1. Insert\n2. Search\n3. Delete\nEnter choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "Enter word to insert: ";
                cin >> str;
                insert(root, str);
                break;
            case 2:
                cout << "Enter word to search: ";
                cin >> str;
                if (search(root, str))
                    cout << str << " is in trie\n";
                else
                    cout << str << " is not in trie\n";
                break;
            case 3:
                cout << "Enter word to delete: ";
                cin >> str;
                if (search(root, str))
                    delete2(root, str);
                else
                    cout << str << " not found in trie\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    }

    return 0;
}

