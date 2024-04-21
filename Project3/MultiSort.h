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
    if (inputplateNumber != "") {
       // mergeSort(merge_vector, 0, (int) inVector.size() - 1, "plate_number");
        // call quick sort
        // only need to use one of their results for the "insert sorted vector"
        // binarySearch(0, inputplateNumber, [insert sorted vector], searched_vector);
    }
    if (inputstate != "") {
       // mergeSort(merge_vector, 0, (int) inVector.size() - 1, "state");
         // call quick sort
         // only need to use one of their results for the "insert sorted vector"
         // binarySearch(1, inputstate, [insert sorted vector], searched_vector);
    }
    // continue with this logic for all the attributes (basically just saying if it is "", we don't sort by it)
    if (inputcarMake != "") {
        mergeSort(merge_vector, 0, (int) inVector.size() - 1, "car_make");
        // binarySearch(2, inputcarMake, [insert sorted vector], searched_vector);
    }
    if (inputcarStyle != "") {
        mergeSort(merge_vector, 0, (int) inVector.size() - 1, "car_style");
        // binarySearch(3, inputcarStyle, [insert sorted vector], searched_vector);
    }
    if (inputcolor != "") {
        mergeSort(merge_vector, 0, (int) inVector.size() - 1, "car_color");
        // binarySearch(4, inputcolor, [insert sorted vector], searched_vector);
    }
    if (inputLocation != "") {
        mergeSort(merge_vector, 0, (int) inVector.size() - 1, "location");
        // binarySearch(5, inputLocation, [insert sorted vector], searched_vector);
    }
    if (inputViolation != "") {
       mergeSort(merge_vector, 0, (int) inVector.size() - 1, "violation");
        // binarySearch(6, inputViolation, [insert sorted vector], searched_vector);
    }
    // continue with this logic for all the attributes (basically just saying if it is "", we don't sort by it)
    if (inputFine != "") {
        mergeSort(merge_vector, 0, (int) inVector.size() - 1, "fine");
        std::string converted = msclr::interop::marshal_as<std::string>(inputFine);
        merge_vector = binarySearch(7, converted, merge_vector, searched_vector);
    }
    if (inputYear != "") {
       // mergeSort(merge_vector, 0, (int) inVector.size() - 1, "year");
      //  int convertedInputYear = Convert::ToInt32(inputYear);
        // binarySearch(8, convertedInputYear, [insert sorted vector], searched_vector);
    }
    if (inputMonth != "") {
       // mergeSort(merge_vector, 0, (int) inVector.size() - 1, "month");
       // int convertedInputMonth = Convert::ToInt32(inputMonth);
        // binarySearch(9, convertedInputMonth, [insert sorted vector], searched_vector);
    }
    if (inputDay != "") {
       // mergeSort(merge_vector, 0, (int) inVector.size() - 1, "day");
       // int convertedInputDay = Convert::ToInt32(inputDay);
        // binarySearch(10, convertedInputDay, [insert sorted vector], searched_vector);
    }
    if (inputHour != "") {
      //  mergeSort(merge_vector, 0, (int) inVector.size() - 1, "time_hour");
       // int convertedInputHour = Convert::ToInt32(inputHour);
        // binarySearch(11, convertedInputHour, [insert sorted vector], searched_vector);
    }
    if (inputMinute != "") {
       // mergeSort(merge_vector, 0, (int) inVector.size() - 1, "time_minute");
       // int convertedInputMinute = Convert::ToInt32(inputMinute);
        // binarySearch(12, convertedInputMinute, [insert sorted vector], searched_vector);
    }
    

    List<double>^ resultList = gcnew List<double>();
    resultList->Add((double) merge_vector.size());
    resultList->Add(1.0); // merge sort time
    resultList->Add(1.0); // quick sort time
    // I can do this part - Nick. *** ALL I NEED FROM YOU BOTH IS YOUR SORTS AND SEARCH IMPLEMENTED, A FINAL VECTOR THAT HAS BEEN SORTED ACCORDING TO ALL ATTRIBUTES, AND THE TWO SORT TIMES *** 
    // at the end here, do the calculations for the total amount and return a .NET List container in the order: [amount that match attribute (double), merge time (double), quick time (double)]
    return resultList;
}