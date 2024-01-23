#include "FunctionalExample.h"

#include <iostream>
#include <vector>
#include <algorithm>

/// <summary>
/// <para>
///     ���� �迭 �޾Ƽ� �����ϴ� �Լ�
/// </para>
/// </summary>
/// <param name="input">
///     Ÿ���� ������ �����ϴ� ���� ���� �迭�� vector�̸�
///     ���� �����ʹ� �����ϵ� �Լ� ������ ������� ����.
/// </param>
/// <returns>
///     ���ٽ��� ���� �����ϸ� ������� ���� ���� �迭 vector
/// </returns>
std::vector<int> SquareElements(const std::vector<int>& input) {
    std::vector<int> result;
    std::transform(input.begin(), input.end(), std::back_inserter(result),
        [](int x) { return x * x; });
    return result;
}
