#include "FunctionalExample.h"

#include <iostream>
#include <vector>
#include <algorithm>

/// <summary>
/// <para>
///     가변 배열 받아서 제곱하는 함수
/// </para>
/// </summary>
/// <param name="input">
///     타입은 정수를 저장하는 가변 길이 배열인 vector이며
///     원본 데이터는 참조하되 함수 내에서 변경되지 않음.
/// </param>
/// <returns>
///     람다식을 통해 제곱하며 만들어진 가변 길이 배열 vector
/// </returns>
std::vector<int> SquareElements(const std::vector<int>& input) {
    std::vector<int> result;
    std::transform(input.begin(), input.end(), std::back_inserter(result),
        [](int x) { return x * x; });
    return result;
}
