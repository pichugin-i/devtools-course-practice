// Copyright 2022 Pichugin Ilya

#include <gtest/gtest.h>
#include "include/sort_selection.h"

TEST(SelectionSort, Throw_NO) {
  int Arr[] = {2, 5, 1, 8};
  ASSERT_NO_THROW(SortSelection(Arr, 4));
}

TEST(SelectionSort, Sort_OKAY) {
  int Arr[] = {2, 5, 1, 8};

  int Arr_res[] = {1, 2, 5, 8};
  SortSelection res(Arr, 4);

  res.Sort();

  ASSERT_EQ(res.Ex(Arr_res, 4), 1);
}
