#include <iostream>
#include <vector>
#include <string>
#include "ParkingCitations.h"
using namespace std;

bool comparison(ParkingCitation& citation1, ParkingCitation& citation2, string& attribute) {
	if (attribute == "number_plate") {
		return citation1.number_plate < citation2.number_plate;
	}
	else if (attribute == "state") {
		return citation1.state < citation2.state;
	}
	else if (attribute == "car_make") {
		return citation1.car_make < citation2.car_make;
	}
	else if (attribute == "car_style") {
		return citation1.car_style < citation2.car_style;
	}
	else if (attribute == "car_color") {
		return citation1.car_color < citation2.car_color;
	}
	else if (attribute == "car_location") {
		return citation1.location < citation2.location;
	}
	else if (attribute == "violation") {
		return citation1.violation < citation2.violation;
	}
	else if (attribute == "fine") {
		return citation1.fine < citation2.fine;
	}
	else if (attribute == "year") {
		return citation1.year < citation2.year;
	}
	else if (attribute == "month") {
		return citation1.month < citation2.month;
	}
	else if (attribute == "day") {
		return citation1.day < citation2.day;
	}
	else if (attribute == "time_hour") {
		return citation1.time_hour < citation2.time_hour;
	}
	else if (attribute == "time_minute") {
		return citation1.time_minute < citation2.time_minute;
	}
	// default if there is a problem
	return citation1.number_plate < citation2.number_plate;
}

// merge sort
void merge(vector<ParkingCitation>& input, int left, int right, string attribute) {

  int middle = left + (right - left) / 2;

  int left_size = middle - left + 1;
  int right_size = right - middle;

  vector<ParkingCitation> left_vect(left_size), right_vect(right_size);

  for(int i = 0; i < left_size; i ++){
    left_vect[i] = input[left + i];
  }
  for(int i = 0; i < right_size; i ++){
    right_vect[i] = input[middle + 1 + i];
  }

  int left_index = 0, right_index = 0, input_index = left;
  while(left_index < left_size && right_index < right_size){
    if(comparison(left_vect[left_index], right_vect[right_index], attribute)){
      input[input_index] = left_vect[left_index];
      left_index ++;
    }
    else{
      input[input_index] = right_vect[right_index];
      right_index ++;
    }
    input_index ++;
  }

  while(left_index < left_size){
    input[input_index] = left_vect[left_index];
    left_index ++;
    input_index ++;
  }

  while(right_index < right_size){
    input[input_index] = right_vect[right_index];
    right_index ++;
    input_index ++;
  }
  
}

template <typename t>
void mergeSort(vector<t>& input, int left, int right, string attribute){
  if(left < right){
    int middle = left + (right - left) / 2;

    mergeSort(input, left, middle, attribute);
    mergeSort(input, middle + 1, right, attribute);

    merge(input, left, right, attribute);
  }
}

template <typename t>
int partition(vector<t>& input, int low, int high){
  t pivot = input[high];
  int index = low - 1;

  for(int j = low; j < high; j ++){
    if(input[j] < pivot){
      index ++;
      swap(input[index], input[j]);
    }
  }
  swap(input[index + 1], input[high]);
  return index + 1;
}

// quick sort
template <typename t>
void quickSort(vector<t>& input, int low, int high){
  if(low < high){
    int temp = partition(input, low, high);

    quickSort(input, low, temp - 1);
    quickSort(input, temp + 1, high);
  }
}

void quickSort(vector<string>& input){
  quickSort(input, 0, (int) input.size() - 1);
}

void quickSort(vector<int>& input){
  quickSort(input, 0, (int) input.size() - 1);
}

void quickSort(vector<float>& input){
  quickSort(input, 0, (int) input.size() - 1);
}

void quickSort(vector<double>& input){
  quickSort(input, 0, (int) input.size() - 1);
}

// take in one parameter and its corresponding category, search through inputted sorted vector for matches, add to empty searched vector and return
// referenced https://www.geeksforgeeks.org/binary-search/
std::vector<ParkingCitation> binarySearch(int option, std::string parameter, std::vector<ParkingCitation>& sorted, std::vector<ParkingCitation>& searched) {
	int left_index = 0;
	int right_index = (int) sorted.size() - 1;
	int middle_index;

	while (left_index <= right_index) {
		middle_index = (left_index + (right_index - left_index)) / 2;

		// search and compare number plate
		if (option == 0) {
			if (sorted[middle_index].number_plate == parameter) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			else if (sorted[middle_index].number_plate < parameter) {
				left_index = middle_index + 1;
			}

			else if (sorted[middle_index].number_plate > parameter) {
				right_index = middle_index - 1;
			}
		}

		// search and compare state
		else if (option == 1) {
			if (sorted[middle_index].state == parameter) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			else if (sorted[middle_index].state < parameter) {
				left_index = middle_index + 1;
			}

			else if (sorted[middle_index].state > parameter) {
				right_index = middle_index - 1;
			}
		}

		// search and compare car make
		else if (option == 2) {
			if (sorted[middle_index].car_make == parameter) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			else if (sorted[middle_index].car_make < parameter) {
				left_index = middle_index + 1;
			}

			else if (sorted[middle_index].car_make > parameter) {
				right_index = middle_index - 1;
			}
		}

		// search and compare car style
		else if (option == 3) {
			if (sorted[middle_index].car_style == parameter) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			else if (sorted[middle_index].car_style < parameter) {
				left_index = middle_index + 1;
			}

			else if (sorted[middle_index].car_style > parameter) {
				right_index = middle_index - 1;
			}
		}

		// search and compare car color
		else if (option == 4) {
			if (sorted[middle_index].car_color == parameter) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			else if (sorted[middle_index].car_color < parameter) {
				left_index = middle_index + 1;
			}

			else if (sorted[middle_index].car_color > parameter) {
				right_index = middle_index - 1;
			}
		}

		// search and compare location
		else if (option == 5) {
			if (sorted[middle_index].location == parameter) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			else if (sorted[middle_index].location < parameter) {
				left_index = middle_index + 1;
			}

			else if (sorted[middle_index].location > parameter) {
				right_index = middle_index - 1;
			}
		}

		// search and compare violation
		else if (option == 6) {
			if (sorted[middle_index].violation == parameter) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			else if (sorted[middle_index].violation < parameter) {
				left_index = middle_index + 1;
			}

			else if (sorted[middle_index].violation > parameter) {
				right_index = middle_index - 1;
			}
		}

		// search and compare fine
		else if (option == 7) {
			if (sorted[middle_index].fine == std::stof(parameter)) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			else if (sorted[middle_index].fine < std::stof(parameter)) {
				left_index = middle_index + 1;
			}

			else if (sorted[middle_index].fine > std::stof(parameter)) {
				right_index = middle_index - 1;
			}
		}

		// search and compare year
		else if (option == 8) {
			if (sorted[middle_index].year == std::stoi(parameter)) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			else if (sorted[middle_index].year < std::stoi(parameter)) {
				left_index = middle_index + 1;
			}

			else if (sorted[middle_index].year > std::stoi(parameter)) {
				right_index = middle_index - 1;
			}
		}

		// search and compare month
		else if (option == 9) {
			if (sorted[middle_index].month == std::stoi(parameter)) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			else if (sorted[middle_index].month < std::stoi(parameter)) {
				left_index = middle_index + 1;
			}

			else if (sorted[middle_index].month > std::stoi(parameter)) {
				right_index = middle_index - 1;
			}
		}

		// search and compare day
		else if (option == 10) {
			if (sorted[middle_index].day == std::stoi(parameter)) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			else if (sorted[middle_index].day < std::stoi(parameter)) {
				left_index = middle_index + 1;
			}

			else if (sorted[middle_index].day > std::stoi(parameter)) {
				right_index = middle_index - 1;
			}
		}

		// search and compare time hour
		else if (option == 11) {
			if (sorted[middle_index].time_hour == std::stoi(parameter)) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			else if (sorted[middle_index].time_hour < std::stoi(parameter)) {
				left_index = middle_index + 1;
			}

			else if (sorted[middle_index].time_hour > std::stoi(parameter)) {
				right_index = middle_index - 1;
			}
		}

		// search and compare time minute
		else if (option == 12) {
			if (sorted[middle_index].time_minute == std::stoi(parameter)) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			else if (sorted[middle_index].time_minute < std::stoi(parameter)) {
				left_index = middle_index + 1;
			}

			else if (sorted[middle_index].time_minute > std::stoi(parameter)) {
				right_index = middle_index - 1;
			}
		}
	}
	return searched;
}
