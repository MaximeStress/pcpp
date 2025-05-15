import std;

int main() {
    int d = 123'234'56;
    int uni;
    int ni {7};
    float myFloat { 3.14f };
    int i3 { static_cast<int>(myFloat) };
    std::println("Number: {}, {}, {}, {}, " 
        "Hello", d, uni, ni, myFloat);

    std::println("Int:");
    std::println("Max: {}", std::numeric_limits<int>::max());
    std::println("Min: {}", std::numeric_limits<int>::min());
    std::println("Lowest: {}", std::numeric_limits<int>::lowest());
    std::println("Float:");
    std::println("Max: {}", std::numeric_limits<float>::max());
    std::println("Min: {}", std::numeric_limits<float>::min());
    std::println("Lowest: {}", std::numeric_limits<float>::lowest());
    return 0;
}