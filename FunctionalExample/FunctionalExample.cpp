#include "FunctionalExample.h"

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> SquareElements(const std::vector<int>& input) {
    std::vector<int> result;
    std::transform(input.begin(), input.end(), std::back_inserter(result),
        [](int x) { return x * x; });
    return result;
}
