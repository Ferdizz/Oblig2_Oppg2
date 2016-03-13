#include <iostream>
#include "PriorityQueue.cpp"

using namespace std;

int main() {

    PriorityQueue<string> q;

    q += "a";
    q += "c";
    q += "b";

    try{

        cout << q.remove() << endl;
        cout << q.remove() << endl;
        cout << q.remove() << endl;
        cout << q.remove() << endl;

    }catch(range_error e){
        cout << e.what() << endl;
    }

    return 0;
}