#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::pop() {
	// modify method here
	stack_a.pop();
}

template <typename T>
const T& CP::stack<T>::top() {
	// modify method here
	return stack_a.top();
}

template <typename T>
const T& CP::stack<T>::bottom() {
	// write your code here
	
}

template <typename T>
void CP::stack<T>::push_bottom(const T& element) {
	// write your code here

}

template <typename T>
void CP::stack<T>::pop_bottom() {
	// write your code here

}
#endif