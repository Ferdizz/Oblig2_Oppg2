//
// Created by Ferdinand Forgaard on 10.03.2016.
//

#ifndef OBLIG2_OPPG2_PRIORITYQUEUE_H
#define OBLIG2_OPPG2_PRIORITYQUEUE_H

#include <string>
#include <vector>

using namespace std;

template<class T>
class PriorityQueue {

private:

    vector<T> elements;

public:

    PriorityQueue();

    ~PriorityQueue();

    void add(T el);

    T remove();

    bool isEmpty();

    T operator+=(T el);

};

template<>
string PriorityQueue<string>::remove() {

    if(PriorityQueue<string>::elements.empty()){
        throw range_error("ERROR: The queue is empty!");
    }else{

        string el = PriorityQueue<string>::elements.at(0);
        int index = 0;

        for(int i = 0; i < PriorityQueue<string>::elements.size(); i++){
            if(el.compare(PriorityQueue<string>::elements.at(i)) < 0){
                el = PriorityQueue<string>::elements.at(i);
                index = i;
            }
        }

        PriorityQueue<string>::elements.erase(PriorityQueue<string>::elements.begin() + index);
        return el;

    }

}

#endif //OBLIG2_OPPG2_PRIORITYQUEUE_H
