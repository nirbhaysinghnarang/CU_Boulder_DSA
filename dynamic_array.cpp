#include <iostream>
using namespace std;

#define INITIAL_LIMIT 10
template <class T>


class Dynamic_Array{
  T* array;
  int min_cap = INITIAL_LIMIT;
  int growth_factor = 2;
  int size;

  //functions of a dynamic array
  // 1. add to array
  // 2. pop from array

  public:
    Dynamic_Array(){
      array = new T[min_cap];
      size = 0;
    }
    void append(T element){
      if(size==min_cap){
          resize();
      }
      array[size] = element;
      size++;
    }
    void resize(){
      min_cap*=growth_factor;
      T *temp = new T[min_cap];
      copy(temp);
      delete [] array;
      array = temp;
    }
    void copy(T temp[]) {
        for(int i = 0; i < size; i++) {
            temp[i] = array[i];
        }
    }
    int get_size(){
      return size;
    }
    T get(const int pos) const {
      return array[pos];
    }
    void deleteAt(int pos) {
        if(pos<0 or pos>size){
          cout << "Invalid index.";
        }
        assert(0 <= pos && pos < size);
        size--;
        for (int i = pos; i < size; i++) {
            array[i] = array[i + 1];
        }
    }
    ~Dynamic_Array() {
        delete[] array;
    }
    void insertAt(int element, int pos) {
        assert(0 <= pos && pos <= size);
        if(size == min_cap) {
            resize();
        }
        for(int i = size; i > pos; i--) {
            array[i] = array[i-1];
        }
        size++;
        array[pos] = element;
    }
    void display() {
        cout << "[";
        for (int i = 0; i < size - 1; i++) {
            cout << array[i] << " ";
        }
        if (size) {
            cout << array[size - 1];
        }
        cout << "]\n";
    }
};

int main(){
    Dynamic_Array<int> dynArr;
    dynArr.append(3);
    dynArr.append(4);
    dynArr.append(5);
    dynArr.append(4);
    dynArr.append(33);
    dynArr.append(3);
    dynArr.deleteAt(0);
    dynArr.display();

}
