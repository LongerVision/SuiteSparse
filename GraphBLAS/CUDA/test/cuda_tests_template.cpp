// SPDX-License-Identifier: Apache-2.0

// Test AxB_dot3_cuda kernels 
// Using data generators and test classes, cover
// all 12 cases for the masked GEMM ( C, M, A, B) in GraphBLAS
// Tests Semirings, data types and a range of data input sizes and shapes
// Connects to the jitFactory for launches.

#include <cassert>
#include <cmath>
#include <random>
#include <algorithm>
#include <cstdint>
#include "jitTestFactory.hpp"
#include "../GB_cuda_buckets.h"

//Test instances and groupings

