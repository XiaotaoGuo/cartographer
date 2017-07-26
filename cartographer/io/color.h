/*
 * Copyright 2017 The Cartographer Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CARTOGRAPHER_IO_COLOR_H_
#define CARTOGRAPHER_IO_COLOR_H_

#include <array>

namespace cartographer {
namespace io {

// TODO(hrapp): Should probably be represented as floats.
using Color = std::array<uint8_t, 3>;

// A function for on-demand generation of a color palette, with every two
// direct successors having large contrast.
Color GetColor(int id);

}  // namespace io
}  // namespace cartographer

#endif  // CARTOGRAPHER_IO_COLOR_H_