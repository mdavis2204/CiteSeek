#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename t>
void merge(vector<t>& input, int left, int right){
  int middle = left + (right - left) / 2;

  int left_size = middle - left + 1;
  int right_size = right - middle;

  vector<t> left_vect(left_size), right_vect(right_size);

  for(int i = 0; i < left_size; i ++){
    left_vect[i] = input[left + i];
  }
  for(int i = 0; i < right_size; i ++){
    right_vect[i] = input[middle + 1 + i];
  }

  int left_index = 0, right_index = 0, input_index = left;
  while(left_index < left_size and right_index < right_size){
    if(left_vect[left_index] <= right_vect[right_index]){
      input[input_index] = left_vect[left_index];
      left_index ++;
    }
    else{
      input[input_index] = right_vect[right_index];
      right_index ++;
    }
    input_index ++;
  }

  while(right_index < right_size){
    input[input_index] = right_vect[right_index];
    right_index ++;
    input_index ++;
  }
  
}

template <typename t>
void mergeSort(vector<t>& input, int left, int right){
  if(left < right){
    int middle = left + (right - left) / 2;

    mergeSort(input, left, middle);
    mergeSort(input, middle + 1, right);

    merge(input, left, right);
  }
}


void mergeSort(vector<string>& input){
  mergeSort(input, 0, input.size() - 1);
}

void mergeSort(vector<int>& input){
  mergeSort(input, 0, input.size() - 1);
}

void mergeSort(vector<float>& input){
  mergeSort(input, 0, input.size() - 1);
}

void mergeSort(vector<double>& input){
  mergeSort(input, 0, input.size() - 1);
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

template <typename t>
void quickSort(vector<t>& input, int low, int high){
  if(low < high){
    int temp = partition(input, low, high);

    quickSort(input, low, temp - 1);
    quickSort(input, temp + 1, high);
  }
}

void quickSort(vector<string>& input){
  quickSort(input, 0, input.size() - 1);
}

void quickSort(vector<int>& input){
  quickSort(input, 0, input.size() - 1);
}

void quickSort(vector<float>& input){
  quickSort(input, 0, input.size() - 1);
}

void quickSort(vector<double>& input){
  quickSort(input, 0, input.size() - 1);
}
