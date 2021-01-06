typedef struct {
    int exist;
    
} MyHashSet;

/** Initialize your data structure here. */

MyHashSet* myHashSetCreate() {
    MyHashSet *hashSet = malloc(sizeof(MyHashSet) * 1000001);
    return hashSet;
}

void myHashSetAdd(MyHashSet* obj, int key) {
  obj[key].exist = 1;
}

void myHashSetRemove(MyHashSet* obj, int key) {
  obj[key].exist = 0;
}

/** Returns true if this set contains the specified element */
bool myHashSetContains(MyHashSet* obj, int key) {
  return obj[key].exist == 1;
}

void myHashSetFree(MyHashSet* obj) {
    free(obj);
}

/**
 * All values will be in the range of [0, 1000000].
 * The number of operations will be in the range of [1, 10000].
 * Please do not use the built-in HashSet library.

 * Your MyHashSet struct will be instantiated and called as such:
 * MyHashSet* obj = myHashSetCreate();
 * myHashSetAdd(obj, key);
 
 * myHashSetRemove(obj, key);
 
 * bool param_3 = myHashSetContains(obj, key);
 
 * myHashSetFree(obj);
*/