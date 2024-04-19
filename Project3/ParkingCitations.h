#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

// struct to store individual parking citations and attributes
struct ParkingCitation {
	// citation attributes
	std::string number_plate;
	std::string state;
	std::string car_make;
	std::string car_style;
	std::string car_color;
	std::string location;
	std::string violation;
	float fine;
	int year;
	int month;
	int day;
	int time_hour;
	int time_minute;

	ParkingCitation();
	ParkingCitation(std::string number_plate, std::string state, std::string car_make, std::string car_style, std::string car_color, std::string location, std::string violation, float fine, int year, int month, int day, int time_hour, int time_minute);
};

ParkingCitation::ParkingCitation() {
	number_plate = "";
	state = "";
	car_make = "";
	car_style = "";
	car_color = "";
	location = "";
	violation = "";
	fine = 0.0;
	year = 0;
	month = 0;
	day = 0;
	time_hour = 0;
	time_minute = 0;
}

ParkingCitation::ParkingCitation(std::string number_plate, std::string state, std::string car_make, std::string car_style, std::string car_color, std::string location, std::string violation, float fine, int year, int month, int day, int time_hour, int time_minute) {
	this->number_plate = number_plate;
	this->state = state;
	this->car_make = car_make;
	this->car_style = car_style;
	this->car_color = car_color;
	this->location = location;
	this->violation = violation;
	this->fine = fine;
	this->year = year;
	this->month = month;
	this->day = day;
	this->time_hour = time_hour;
	this->time_minute = time_minute;
}

// class to store vector of citations, read in from csv file, and search
class ParkingCitations {
private:
	// stores individual citations
	std::vector<ParkingCitation> citations;
	
public:
	ParkingCitations();
	void readFile();
	std::vector<ParkingCitation> binarySearch(int option, std::string parameter, std::vector<ParkingCitation>& sorted, std::vector<ParkingCitation>& searched);
	std::vector<ParkingCitation> getCitations();
};

ParkingCitations::ParkingCitations() {
	citations = {};
}

// read in csv file and store in vector
void ParkingCitations::readFile() {
	std::ifstream file;
	file.open("parking_citations.csv");

	if (file.is_open()) {
		std::string read_number_plate = "";
		std::string read_state = "";
		std::string read_car_make = "";
		std::string read_car_style = "";
		std::string read_car_color = "";
		std::string read_location = "";
		std::string read_violation = "";
		float read_fine = 0.0;
		int read_year = 0;
		int read_month = 0;
		int read_day = 0;
		int read_time_hour = 0;
		int read_time_minute = 0;

		// skip first line
		std::string first_line;
		std::getline(file, first_line);
		std::string line;
		std::string data;
		std::string temp;

		int column = 0;
		
		// read line by line
		while (file.is_open()) {
			std::getline(file, line);
			std::istringstream s(line);

			while (std::getline(s, data, ',')) {
				if (column == 0) {
					read_number_plate = data.substr(1, data.length() - 2);
				}

				else if (column == 1) {
					read_state = data.substr(1, data.length() - 2);
				}

				else if (column == 2) {
					read_car_make = data.substr(1, data.length() - 2);
				}

				else if (column == 3) {
					read_car_style = data.substr(1, data.length() - 2);
				}

				else if (column == 4) {
					read_car_color = data.substr(1, data.length() - 2);
				}

				else if (column == 5) {
					read_location = data.substr(1, data.length() - 2);
				}

				else if (column == 6) {
					read_violation = data.substr(1, data.length() - 2);
				}

				else if (column == 7) {
					read_fine = std::stof(data.substr(1, data.length() - 2));
				}

				else if (column == 8) {
					read_year = std::stoi(data.substr(1, data.length() - 2));
				}

				else if (column == 9) {
					read_month = std::stoi(data.substr(1, data.length() - 2));
				}

				else if (column == 10) {
					read_day = std::stoi(data.substr(1, data.length() - 2));
				}

				else if (column == 11) {
					read_time_hour = std::stoi(data.substr(1, data.length() - 2));
				}

				else if (column == 12) {
					read_time_minute = std::stoi(data.substr(1, data.length() - 2));
					column = -1;

					// add parking citation to vector container
					ParkingCitation citation(read_number_plate, read_state, read_car_make, read_car_style, read_car_color, read_location, read_violation, read_fine, read_year, read_month, read_day, read_time_hour, read_time_minute);
					citations.push_back(citation);
				}

				column++;
			}
		}
		
		file.close();
	}
}

// take in one parameter and its corresponding category, search through sorted vector for matches, add and return to searched vector
std::vector<ParkingCitation> ParkingCitations::binarySearch(int option, std::string parameter, std::vector<ParkingCitation>& sorted, std::vector<ParkingCitation>& searched) {
	int left_index = 0;
	int right_index = sorted.size() - 1;
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

			else {
				return searched;
			}
		}

		// search and compare state
		else if (option == 1) {
			if (sorted[middle_index].state == parameter) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			if (sorted[middle_index].state < parameter) {
				left_index = middle_index + 1;
			}

			if (sorted[middle_index].state > parameter) {
				right_index = middle_index - 1;
			}

			else {
				return searched;
			}
		}
		
		// search and compare car make
		else if (option == 2) {
			if (sorted[middle_index].car_make == parameter) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			if (sorted[middle_index].car_make < parameter) {
				left_index = middle_index + 1;
			}

			if (sorted[middle_index].car_make > parameter) {
				right_index = middle_index - 1;
			}

			else {
				return searched;
			}
		}

		// search and compare car style
		else if (option == 3) {
			if (sorted[middle_index].car_style == parameter) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			if (sorted[middle_index].car_style < parameter) {
				left_index = middle_index + 1;
			}

			if (sorted[middle_index].car_style > parameter) {
				right_index = middle_index - 1;
			}

			else {
				return searched;
			}
		}

		// search and compare car color
		else if (option == 4) {
			if (sorted[middle_index].car_color == parameter) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			if (sorted[middle_index].car_color < parameter) {
				left_index = middle_index + 1;
			}

			if (sorted[middle_index].car_color > parameter) {
				right_index = middle_index - 1;
			}

			else {
				return searched;
			}
		}

		// search and compare location
		else if (option == 5) {
			if (sorted[middle_index].location == parameter) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			if (sorted[middle_index].location < parameter) {
				left_index = middle_index + 1;
			}

			if (sorted[middle_index].location > parameter) {
				right_index = middle_index - 1;
			}

			else {
				return searched;
			}
		}

		// search and compare violation
		else if (option == 6) {
			if (sorted[middle_index].violation == parameter) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			if (sorted[middle_index].violation < parameter) {
				left_index = middle_index + 1;
			}

			if (sorted[middle_index].violation > parameter) {
				right_index = middle_index - 1;
			}

			else {
				return searched;
			}
		}

		// search and compare fine
		else if (option == 7) {
			if (sorted[middle_index].fine == std::stof(parameter)) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			if (sorted[middle_index].fine < std::stof(parameter)) {
				left_index = middle_index + 1;
			}

			if (sorted[middle_index].fine > std::stof(parameter)) {
				right_index = middle_index - 1;
			}

			else {
				return searched;
			}
		}

		// search and compare year
		else if (option == 8) {
			if (sorted[middle_index].year == std::stoi(parameter)) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			if (sorted[middle_index].year < std::stoi(parameter)) {
				left_index = middle_index + 1;
			}

			if (sorted[middle_index].year > std::stoi(parameter)) {
				right_index = middle_index - 1;
			}

			else {
				return searched;
			}
		}

		// search and compare month
		else if (option == 9) {
			if (sorted[middle_index].month == std::stoi(parameter)) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			if (sorted[middle_index].month < std::stoi(parameter)) {
				left_index = middle_index + 1;
			}

			if (sorted[middle_index].month > std::stoi(parameter)) {
				right_index = middle_index - 1;
			}

			else {
				return searched;
			}
		}

		// search and compare day
		else if (option == 10) {
			if (sorted[middle_index].day == std::stoi(parameter)) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			if (sorted[middle_index].day < std::stoi(parameter)) {
				left_index = middle_index + 1;
			}

			if (sorted[middle_index].day > std::stoi(parameter)) {
				right_index = middle_index - 1;
			}

			else {
				return searched;
			}
		}

		// search and compare time hour
		else if (option == 11) {
			if (sorted[middle_index].time_hour == std::stoi(parameter)) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			if (sorted[middle_index].time_hour < std::stoi(parameter)) {
				left_index = middle_index + 1;
			}

			if (sorted[middle_index].time_hour > std::stoi(parameter)) {
				right_index = middle_index - 1;
			}

			else {
				return searched;
			}
		}

		// search and compare time minute
		else if (option == 12) {
			if (sorted[middle_index].time_minute == std::stoi(parameter)) {
				searched.push_back(sorted[middle_index]);
				sorted.erase(sorted.begin() + middle_index);
				binarySearch(option, parameter, sorted, searched);
			}

			if (sorted[middle_index].time_minute < std::stoi(parameter)) {
				left_index = middle_index + 1;
			}

			if (sorted[middle_index].time_minute > std::stoi(parameter)) {
				right_index = middle_index - 1;
			}

			else {
				return searched;
			}
		}
	}
}

// return vector of parking citations
std::vector<ParkingCitation> ParkingCitations::getCitations() {
	return citations;
}