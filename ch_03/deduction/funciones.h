#pragma once

#include <iostream>
#include <utility>

using std::cout;
using std::endl;

template<typename T>
void func(const T& arg)
{
    cout << "Constant lvalue ref func" << endl;
}


template<typename T>
void func(T& arg)
{
  arg += arg;
    cout << "lvalue ref func" << endl;
}

template<typename T>
void func(T&& arg)
{
    cout << "Rvalue ref func" << endl;
}

template<typename T>
T maximo(T&& arg1, T&& arg2)
{
  return arg1 >= arg2 ? arg1 : arg2;
}

template<typename T>
void perfect_forward(T&& arg)
{
  func(std::forward<T>(arg));
}


