#include <iostream>
#include "Sales_item.h"

int q1_4() {
    std::cout << "enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "the product of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
    return 0;
}

int q1_5() {
    return 0;
}

int q1_9() {
    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        val++;
    }
    std::cout << "sum of 50-100 inclusive is " << sum << std::endl;
}

int q1_10() {
    int val = 10;
    while (val >= 0) {
        std::cout << val;
        std::cout << " ";
        val--;
    }
    std::cout << std::endl;
}

int q1_11() {
    int start = 0, end = 0;
    std::cout << "enter two num" << std::endl;
    std::cin >> start >> end;
    if (start <= end) {
        while (start <= end) {
            std::cout << start;
            std::cout << " ";
            start++;
        }
    } else {
        std::cout << "error";
    }
    std::cout << std::endl;
}

int q1_12() {
    int sum = 0;
    for (int i = -100; i <= 100; i++) {
        sum += i;
    }
    std::cout << sum << std::endl;
}

int q1_16() {
    int sum = 0;
    for (int val = 0; std::cin >> val;) {
        sum += val;
        std::cout << sum << std::endl;
    }

}

int q1_18() {
    int currVal = 0, val = 0;
    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val == currVal) {
                ++cnt;
            } else {
                std::cout << currVal << "occurs" << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}

int q1_20() {
    for (Sales_item item; std::cin >> item; std::cout << item << std::endl) {

    }
    return 0;
}

int q1_21() {
    Sales_item item_1;
    Sales_item item_2;
    std::cin >> item_1;
    std::cout << item_1 << std::endl;
    std::cin >> item_2;
    std::cout << item_2 << std::endl;
    std::cout << "sum of sale items: " << item_1 + item_2 << std::endl;
    return 0;
}

int q1_22() {
    Sales_item sum_item;
    std::cin >> sum_item;
    std::cout << sum_item << std::endl;
    for (Sales_item item; std::cin >> item; std::cout << item << std::endl) {
        sum_item += item;
    }
    std::cout << "sum of sale items: " << sum_item << std::endl;
    return 0;
}

int q2_8(){
    std::cout << 2 << "\115\012";
    std::cout << 2 << "\t\115\012";
    return 0;
}







int main() {
//    q1_12();
//    q1_16();
//    q1_18();
//    q1_20();

    return 0;
}
