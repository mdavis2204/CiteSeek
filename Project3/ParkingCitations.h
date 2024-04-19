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

// return vector of parking citations
std::vector<ParkingCitation> ParkingCitations::getCitations() {
	return citations;
}
