

template<typename Iterator, typename Value>
Iterator find(Iterator first, Iterator last, const Value& v) {
    for (; first != last, first++) {
        if (*first == v) {
            return first;
        }
    }
}