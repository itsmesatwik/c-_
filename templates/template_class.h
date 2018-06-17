template<typename T, typename U>
class Person {
private:
    T height;
    U weight;
    static int numOfPeople;
public:
    Person(T h, U w);
    void getData();
};
template<typename T, typename U> int Person<T,U>::numOfPeople;


