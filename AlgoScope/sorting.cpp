#include "sorting.h"

#include <chrono>
#include <thread>

using namespace std;

void bubbleSort(std::vector<int>& arr) {
	int size = arr.size();
	while (true) {
		bool swapped = false;
		for (int i = 0; i < size - 1; i++) {
			this_thread::sleep_for(chrono::seconds(1));
			if (arr[i] > arr[i + 1]) {
				std::swap(arr[i], arr[i + 1]);
				swapped = true;
			}
		}
		if (!swapped) {
			break;
		}
	}
}