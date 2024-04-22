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

    // empty vector to store vector after binary search
    std::vector<ParkingCitation> searched_vector;
    std::vector<ParkingCitation> merge_vector = inVector; // for merge sort
    std::vector<ParkingCitation> quick_vector = inVector; // for quick sort
    double mergeTime = 0.0;
    double quickTime = 0.0;
    
    if (inputplateNumber != "") {
        mergeSort(merge_vector, "plate_number", mergeTime);
        quickSort(quick_vector, "plate_number", quickTime);
        std::string converted = msclr::interop::marshal_as<std::string>(inputplateNumber);
        binarySearch(0, converted, merge_vector, searched_vector);
        merge_vector = searched_vector;
        searched_vector.clear();
    }
    if (inputstate != "") {
        mergeSort(merge_vector, "state", mergeTime);
        quickSort(quick_vector, "state", quickTime);
        std::string converted = msclr::interop::marshal_as<std::string>(inputstate);
        binarySearch(1, converted, merge_vector, searched_vector);
        merge_vector = searched_vector;
        searched_vector.clear();
    }
    // continue with this logic for all the attributes (basically just saying if it is "", we don't sort by it)
    if (inputcarMake != "") {
        mergeSort(merge_vector, "car_make", mergeTime);
        quickSort(quick_vector, "car_make", quickTime);
        std::string converted = msclr::interop::marshal_as<std::string>(inputcarMake);
        binarySearch(2, converted, merge_vector, searched_vector);
        merge_vector = searched_vector;
        searched_vector.clear();
    }
    if (inputcarStyle != "") {
        mergeSort(merge_vector, "car_style", mergeTime);
        quickSort(quick_vector, "car_style", quickTime);
        std::string converted = msclr::interop::marshal_as<std::string>(inputcarStyle);
        binarySearch(3, converted, merge_vector, searched_vector);
        merge_vector = searched_vector;
        searched_vector.clear();
    }
    if (inputcolor != "") {
        mergeSort(merge_vector, "car_color", mergeTime);
        quickSort(quick_vector, "car_color", quickTime);
        std::string converted = msclr::interop::marshal_as<std::string>(inputcolor);
        binarySearch(4, converted, merge_vector, searched_vector);
        merge_vector = searched_vector;
        searched_vector.clear();
    }
    if (inputLocation != "") {
        mergeSort(merge_vector, "location", mergeTime);
        quickSort(quick_vector, "location", quickTime);
        std::string converted = msclr::interop::marshal_as<std::string>(inputLocation);
        binarySearch(5, converted, merge_vector, searched_vector);
        merge_vector = searched_vector;
        searched_vector.clear();
    }
    if (inputViolation != "") {
        mergeSort(merge_vector, "violation", mergeTime);
        quickSort(quick_vector, "violation", quickTime);
        std::string converted = msclr::interop::marshal_as<std::string>(inputViolation);
        binarySearch(6, converted, merge_vector, searched_vector);
        merge_vector = searched_vector;
        searched_vector.clear();
    }
    // continue with this logic for all the attributes (basically just saying if it is "", we don't sort by it)
    if (inputFine != "") {
        mergeSort(merge_vector, "fine", mergeTime);
        quickSort(quick_vector, "fine", quickTime);
        std::string converted = msclr::interop::marshal_as<std::string>(inputFine);
        binarySearch(7, converted, merge_vector, searched_vector);
        merge_vector = searched_vector;
        searched_vector.clear();
    }
    if (inputYear != "") {
        mergeSort(merge_vector, "year", mergeTime);
        quickSort(quick_vector, "year", quickTime);
        std::string converted = msclr::interop::marshal_as<std::string>(inputYear);
        binarySearch(8, converted, merge_vector, searched_vector);
        merge_vector = searched_vector;
        searched_vector.clear();
    }
    if (inputMonth != "") {
        mergeSort(merge_vector, "month", mergeTime);
        quickSort(quick_vector, "month", quickTime);
        std::string converted = msclr::interop::marshal_as<std::string>(inputMonth);
        binarySearch(9, converted, merge_vector, searched_vector);
        merge_vector = searched_vector;
        searched_vector.clear();
    }
    if (inputDay != "") {
        mergeSort(merge_vector, "day", mergeTime);
        quickSort(quick_vector, "day", quickTime);
        std::string converted = msclr::interop::marshal_as<std::string>(inputDay);
        binarySearch(10, converted, merge_vector, searched_vector);
        merge_vector = searched_vector;
        searched_vector.clear();
       // int convertedInputDay = Convert::ToInt32(inputDay);
    }
    if (inputHour != "") {
        mergeSort(merge_vector, "time_hour", mergeTime);
        quickSort(quick_vector, "time_hour", quickTime);
        std::string converted = msclr::interop::marshal_as<std::string>(inputHour);
        binarySearch(11, converted, merge_vector, searched_vector);
        merge_vector = searched_vector;
        searched_vector.clear();
       // int convertedInputHour = Convert::ToInt32(inputHour);
    }
    if (inputMinute != "") {
        mergeSort(merge_vector, "time_minute", mergeTime);
        quickSort(quick_vector, "time_minute", quickTime);
        std::string converted = msclr::interop::marshal_as<std::string>(inputMinute);
        binarySearch(12, converted, merge_vector, searched_vector);
        merge_vector = searched_vector;
        searched_vector.clear();
       // int convertedInputMinute = Convert::ToInt32(inputMinute);
    }
    

    List<double>^ resultList = gcnew List<double>();
    resultList->Add((double) merge_vector.size());
    resultList->Add(mergeTime); // merge sort time
    resultList->Add(quickTime); // quick sort time
    // at the end here, do the calculations for the total amount and return a .NET List container in the order: [amount that match attribute (double), merge time (double), quick time (double)]
    return resultList;
}