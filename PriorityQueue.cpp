//
// Created by Ferdinand Forgaard on 10.03.2016.
//

#include <iostream>
#include "PriorityQueue.h"

using namespace std;

template <class T>
PriorityQueue<T>::PriorityQueue() {
    cout << "Empty PriorityQueue constructed!" << endl;
}

template <class T>
PriorityQueue<T>::~PriorityQueue() {
    cout << "PriorityQueue destructed" << endl;
}

template <class T>
void PriorityQueue<T>::add(T el) {
    PriorityQueue<T>::elements.push_back(el);
}

template <class T>
T PriorityQueue<T>::remove() {

    if(PriorityQueue<T>::isEmpty()){
        throw range_error("ERROR: The queue is empty!");
    }else{

        T el = PriorityQueue<T>::elements.at(0);
        int index = 0;

        for(int i = 0; i < PriorityQueue<T>::elements.size(); i++){
            if(el < PriorityQueue<T>::elements.at(i)){
                el = PriorityQueue<T>::elements.at(i);
                index = i;
            }
        }

        PriorityQueue<T>::elements.erase(PriorityQueue<T>::elements.begin() + index);
        return el;

    }

}

template <class T>
bool PriorityQueue<T>::isEmpty() {
    return PriorityQueue<T>::elements.empty();
}

template <class T>
T PriorityQueue<T>::operator+=(T el) {
    PriorityQueue<T>::add(el);
    return el;
}