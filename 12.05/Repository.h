#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
class Repository {
private:
    vector<T*> _items;

public:
    Repository() {}
    ~Repository() {
        for (int i = 0; i < _items.size(); ++i) {
            delete _items[i];
        }
    }

    void add(T* obj) {
        _items.push_back(obj);
    }

    int size() const {
        return _items.size();
    }

    T* findIf(const string& id) const {
        for (int i = 0; i < (int)_items.size(); ++i) {
            if (_items[i]->GetId() == id) return _items[i];
        }
        return nullptr;
    }

    typename vector<T*>::const_iterator begin() const {
        return _items.begin();
    }

    typename vector<T*>::const_iterator end() const {
        return _items.end();
    }
};

#endif //REPOSITORY_H
