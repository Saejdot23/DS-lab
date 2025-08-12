#include <iostream>
using namespace std;

int main() {
    cout << "Menu driven program begins here \n";

    int arr = 0;
    int* array = nullptr;  // pointer to hold dynamic array
    int m1 = 0;

    do {
        cout << "\n1.CREATE ARRAY\n";
        cout << "2.INSERT ELEMENT\n";
        cout << "3.DELETE ELEMENT\n";
        cout << "4.DISPLAY ARRAY\n";
        cout << "5.EXIT\n";
        cin >> m1;

        switch (m1) {
            case 1:
                // If array already exists, delete it first to avoid memory leak
                if (array != nullptr) {
                    delete[] array;
                }
                cout << "Enter the size of the array: ";
                cin >> arr;
                array = new int[arr];  // allocate new array dynamically
                cout << "Array of size " << arr << " created.\n";
                break;

            case 2:
                if (array == nullptr) {
                    cout << "Create the array first (option 1)!\n";
                    break;
                }
                cout << "Enter " << arr << " elements:\n";
                for (int l = 0; l < arr; l++) {
                    cin >> array[l];
                }
                break;

            case 3:
                if (array == nullptr) {
                    cout << "Create the array first (option 1)!\n";
                    break;
                }
                if (arr == 0) {
                    cout << "Array is empty.\n";
                    break;
                }
                int index;
                cout << "Enter the index of the element to delete (0 to " << arr-1 << "): ";
                cin >> index;
                if (index < 0 || index >= arr) {
                    cout << "Invalid index!\n";
                    break;
                }
                // Shift elements left to delete
                for (int loop = index; loop < arr - 1; loop++) {
                    array[loop] = array[loop + 1];
                }
                arr = arr - 1;  // reduce size by 1
                cout << "Element at index " << index << " deleted.\n";
                break;

            case 4:
                if (array == nullptr || arr == 0) {
                    cout << "Array is empty or not created yet.\n";
                    break;
                }
                cout << "Displaying array elements: ";
                for (int t = 0; t < arr; t++) {
                    cout << array[t] << " ";
                }
                cout << endl;
                break;

            case 5:
                cout << "You've exited the program\n";
                break;

            default:
                cout << "Invalid option, try again.\n";
        }

    } while (m1 != 5);

    // Clean up dynamically allocated memory before program ends
    if (array != nullptr) {
        delete[] array;
    }

    return 0;
}