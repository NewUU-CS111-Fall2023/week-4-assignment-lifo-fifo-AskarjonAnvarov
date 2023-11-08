/*
 * Author: Asqarjon Anvarov
 * Date: 08.11.2023
 * Name: Task 5
 */


#include <iostream>

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        std::cout << "Move disk 1 from " << source << " to " << destination << std::endl;
        return;
    }

    // Move n-1 disks from source to auxiliary peg using the destination peg as an auxiliary.
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination peg.
    std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;

    // Move the n-1 disks from auxiliary peg to destination peg using the source peg as an auxiliary.
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;
    std::cout << "Enter the number of disks: ";
    std::cin >> n;

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
