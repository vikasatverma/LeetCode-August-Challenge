class MyHashSet {
public:
    /** Initialize your data structure here. */
    vector<bool> v= vector(1000001,false);
    MyHashSet() {
    }
    
    void add(int key) {
        v[key] =true;
    }
    
    void remove(int key) {
        v[key] =false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return v[key];
    }
};
