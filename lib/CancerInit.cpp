//===----------------------------------------------------------------------===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "CancerInit.h"

#include "Dialect/Basicpy/IR/BasicpyDialect.h"
#include "Dialect/Numpy/IR/NumpyDialect.h"

void mlir::CANCER::registerAllDialects(mlir::DialectRegistry &registry) {
  // clang-format off
  registry.insert<Basicpy::BasicpyDialect>();
  registry.insert<Numpy::NumpyDialect>();
  // clang-format on
}
