//===- CancerDialect.cpp - Cancer dialect ---------------*- C++ -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "mlir/IR/Builders.h"
#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/OpImplementation.h"

#include "Cancer/CancerDialect.h"
#include "Cancer/CancerOps.h"

using namespace mlir;
using namespace mlir::cancer;

//===----------------------------------------------------------------------===//
// Cancer dialect.
//===----------------------------------------------------------------------===//

void CancerDialect::initialize() {
  addOperations<
#define GET_OP_LIST
#include "Cancer/CancerOps.cpp.inc"
      >();
}
