#ifndef MERGEABLEHEAPS_LEFTIST_H
#define MERGEABLEHEAPS_LEFTIST_H

#include "classical_heap.h"
#include "nodes/leftist_heap_node.h"

namespace heaps {
    template<class Key=int>
    class LeftistHeap : public ClassicalHeap<Key, LeftistHeapNode<Key>> {
        using Base = ClassicalHeap<Key, LeftistHeapNode<Key>>;
    public:
        explicit LeftistHeap(Key key);
    };

    template<class Key>
    LeftistHeap<Key>::LeftistHeap(Key key) {
        Base::size = 1;
        Base::root = new LeftistHeapNode<Key>(key, nullptr, nullptr, 0);
    }
} // namespace heaps

#endif //MERGEABLEHEAPS_LEFTIST_H