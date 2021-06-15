//Stacks - reference CLRS Chapter 10.
#include <iostream>
template <class T>

class Stack{
  int size;
  T* array;
  int UPPER_LIMIT = 100;
  int GROWTH_FACTOR = 100;
  int top;
  public:
    Stack(){
      size = 0;
      array = new T[UPPER_LIMIT];
      top = 0;
    }
    ~Stack(){
      delete [] array;
    }
    void copy(T temp[]){
      for(int i=0;i<size;i++){
        temp[i] = array[i];
      }
    }
    void resize(){
      UPPER_LIMIT*=GROWTH_FACTOR;
      T *temp = new T[UPPER_LIMIT];
      copy(temp);
      delete [] array;
      array = temp;
      top = array[size-1];
    }
    void push(T element){
      if(size==UPPER_LIMIT){resize();}
      array[size] =  element;
      top++;
      size++;
    }
    bool is_empty(){
      return (top==0);
    }
    void pop(){
      if(is_empty()){
        std::cout<<"stack underflow error\n";
      }else{
        top--;
        size--;
    }
  }
  void display(){
    std::cout << "[";
    for (int i = 0; i < size - 1; i++) {
       std::cout << array[i] << ", ";
    }
    if (size) {
        std::cout << array[size - 1];
    }
    std::cout << "]\n";
  }
};



int main(){
  Stack<int> myStack;
  myStack.push(10);
  myStack.push(20);
  myStack.push(30);
  myStack.display();
  myStack.pop();
  myStack.push(40);
  myStack.display();
  myStack.pop();
  myStack.display();
  return 0;
}
