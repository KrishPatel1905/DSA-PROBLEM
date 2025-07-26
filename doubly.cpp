#include <iostream>
using namespace std;

struct node {
    int info;
    node *lptr;
    node *rptr;
};

node *l = NULL, *r = NULL;

node* create(int n) {
    node *temp = new node();
    temp->info = n;
    temp->lptr = NULL;
    temp->rptr = NULL;
    return temp;
}

void insert_f() {
    int n;
    cin >> n;
    node *temp = create(n);
    if (l == NULL) {
        l = r = temp;
    } else {
        temp->rptr = l;
        l->lptr = temp;
        l = temp;
    }
}

void insert_e() {
    int n;
    cin >> n;
    node *temp = create(n);
    if (r == NULL) {
        l = r = temp;
    } else {
        r->rptr = temp;
        temp->lptr = r;
        r = temp;
    }
}

void insert_df() {
    if (l == NULL) {
        cout << "List is Empty" << endl;
        return;
    }
    node *temp = l;
    if (l == r) {
        l = r = NULL;
    } else {
        l = l->rptr;
        l->lptr = NULL;
    }
    delete temp;
}

void insert_da() {
    if (r == NULL) {
        cout << "List is Empty" << endl;
        return;
    }
    node *temp = r;
    if (l == r) {
        l = r = NULL;
    } else {
        r = r->lptr;
        r->rptr = NULL;
    }
    delete temp;
}

void de_m() {
    int x;
    cin >> x;
    node *trav = l;

    while (trav != NULL && trav->info != x) {
        trav = trav->rptr;
    }

    if (trav == NULL) {
        cout << "Given node not found" << endl;
        return;
    }

    int val;
    cin >> val;
    node *temp = create(val);

    temp->rptr = trav->rptr;
    temp->lptr = trav;

    if (trav->rptr != NULL)
        trav->rptr->lptr = temp;
    else
        r = temp; 

    trav->rptr = temp;
}

void display() {
    if (l == NULL) {
        cout << "List is Empty" << endl;
        return;
    }

    node *trav = l;
    while (trav != NULL) {
        cout << trav->info << " ";
        trav = trav->rptr;
    }
    cout << endl;
}

void count_nodes() {
    int count = 0;
    node *trav = l;
    while (trav != NULL) {
        count++;
        trav = trav->rptr;
    }
    cout << count << endl;
}

int main() {
    int ch;
    do {
        cin >> ch;
        switch (ch) {
            case 1:
                insert_f();
                break;
            case 2:
                insert_e();
                break;
            case 3:
                insert_df();
                break;
            case 4:
                insert_da();
                break;
            case 5:
                de_m();
                break;
            case 6:
                display();
                break;
            case 7:
                count_nodes();
                break;
            case 0:
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (ch != 0);

    return 0;
}
