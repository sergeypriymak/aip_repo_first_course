#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int m;
    std::cin >> m;
    std::vector<int> b(m);
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }

    std::vector<int> result(n + m);
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            result[k] = a[i];
            i++;
        } else {
            result[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        result[k] = a[i];
        i++;
        k++;
    }

    while (j < m) {
        result[k] = b[j];
        j++;
        k++;
    }

    for (int i = 0; i < n + m; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
