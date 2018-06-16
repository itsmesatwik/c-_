template<typename T, typename U>

class Person {
private:
    T height;
    U weight;
    static int numOfPeople;
    Person(T h, U w);
    void GetData();
};


