// Copyright (c) 2020 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "core/common/prng.h"
#include "core/common/rand_utils.h"

namespace aby3 {

using block = common::block;

const block g_zero_block = common::g_zero_block;

using PseudorandomNumberGenerator = common::PseudorandomNumberGenerator;

inline block block_from_dev_urandom() { return common::block_from_dev_urandom(); }

inline bool equals(const block &lhs, const block &rhs) {
  return common::equals(lhs, rhs);
}

} // namespace aby3
