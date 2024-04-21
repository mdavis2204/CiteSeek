#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "ParkingCitations.h"
#include "Sorting.h"
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace msclr::interop;

List<double>^ MultiSort(vector<ParkingCitation> inVector, String^ inputplateNumber, String^ inputstate, String^ inputcarMake, String^ inputcarStyle, String^ inputcolor, String^ inputLocation,
    String^ inputViolation, String^ inputFine, String^inputYear, String^ inputMonth, String^ inputDay, String^ inputHour, String^ inputMinute) {

    std::string plateNumber = marshal_as<std::string>(inputplateNumber);
    std::string state = marshal_as<std::string>(inputstate);
    std::string carMake = marshal_as<std::string>(inputcarMake);
    std::string carStyle = marshal_as<std::string>(inputcarStyle);
    std::string color = marshal_as<std::string>(inputcolor);
    std::string location = marshal_as<std::string>(inputLocation);
    std::string violation = marshal_as<std::string>(inputViolation);
    float fine = std::stof(marshal_as<std::string>(inputFine));
    int year = std::stoi(marshal_as<std::string>(inputYear));
    int month = std::stoi(marshal_as<std::string>(inputMonth));
    int day = std::stoi(marshal_as<std::string>(inputDay));
    int hour = std::stoi(marshal_as<std::string>(inputHour));
    int minute = std::stoi(marshal_as<std::string>(inputMinute));

    // empty vector to store vector after binary search
    std::vector<ParkingCitation> searched_vector = inVector;
    if (inputplateNumber != "") {
        // call merge sort
        // call quick sort
        // only need to use one of their results for the "insert sorted vector"
        // binarySearch(0, inputplateNumber, [insert sorted vector], searched_vector);
    }
    if (inputstate != "") {
         // call merge sort
         // call quick sort
         // only need to use one of their results for the "insert sorted vector"
         // binarySearch(1, inputstate, [insert sorted vector], searched_vector);
    }
    // continue with this logic for all the attributes (basically just saying if it is "", we don't sort by it)
    if (inputcarMake != "") {
        // ...
        // binarySearch(2, inputcarMake, [insert sorted vector], searched_vector);
    }
    if (inputcarStyle != "") {
        // binarySearch(3, inputcarStyle, [insert sorted vector], searched_vector);
    }
    if (inputcolor != "") {
        // binarySearch(4, inputcolor, [insert sorted vector], searched_vector);
    }
    if (inputLocation != "") {
        // binarySearch(5, inputLocation, [insert sorted vector], searched_vector);
    }
    if (inputViolation != "") {
        // binarySearch(6, inputViolation, [insert sorted vector], searched_vector);
    }
    // continue with this logic for all the attributes (basically just saying if it is "", we don't sort by it)
    if (inputFine != "") {
        float convertedInputFine = Convert::ToSingle(inputFine);
        // binarySearch(7, convertedInputFine, [insert sorted vector], searched_vector);
    }
    if (inputYear != "") {
        int convertedInputYear = Convert::ToInt32(inputYear);
        // binarySearch(8, convertedInputYear, [insert sorted vector], searched_vector);
    }
    if (inputMonth != "") {
        int convertedInputMonth = Convert::ToInt32(inputMonth);
        // binarySearch(9, convertedInputMonth, [insert sorted vector], searched_vector);
    }
    if (inputDay != "") {
        int convertedInputDay = Convert::ToInt32(inputDay);
        // binarySearch(10, convertedInputDay, [insert sorted vector], searched_vector);
    }
    if (inputHour != "") {
        int convertedInputHour = Convert::ToInt32(inputHour);
        // binarySearch(11, convertedInputHour, [insert sorted vector], searched_vector);
    }
    if (inputMinute != "") {
        int convertedInputMinute = Convert::ToInt32(inputMinute);
        // binarySearch(12, convertedInputMinute, [insert sorted vector], searched_vector);
    }
    
    List<double>^ resultList = gcnew List<double>();
    // I can do this part - Nick. *** ALL I NEED FROM YOU BOTH IS YOUR SORTS AND SEARCH IMPLEMENTED, A FINAL VECTOR THAT HAS BEEN SORTED ACCORDING TO ALL ATTRIBUTES, AND THE TWO SORT TIMES *** 
    // at the end here, do the calculations for the total amount and return a .NET List container in the order: [amount that match attribute (float), merge time (float), quick time (float)]
    return resultList;
}