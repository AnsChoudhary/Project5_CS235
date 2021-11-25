#ifndef IT_COMPARATOR
#define IT_COMPARATOR

template <class ItemType>
struct LessThan
{
    bool operator()(const ItemType& a, const ItemType& b) const {
        return a < b;
    }
};

template <class ItemType>
struct GreaterThan
{
    bool operator()(const ItemType& a, const ItemType& b) const {
        return a > b;
    }
};

#endif // !IT_COMPARATOR


