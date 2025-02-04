/*
 * Copyright (c) 2021 SAP SE. All rights reserved.
 * Copyright (c) 2021, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 *
 */

#ifndef OS_LINUX_MALLOCTRACE_MALLOCTRACE_HPP
#define OS_LINUX_MALLOCTRACE_MALLOCTRACE_HPP

#include "memory/allStatic.hpp"
#include "utilities/globalDefinitions.hpp"

#ifdef __GLIBC__

class outputStream;

namespace sap {

class MallocTracer : public AllStatic {
public:
  static bool enable(bool use_backtrace = false);
  static void disable();
  static void reset();
  static void reset_deltas();
  static void print(outputStream* st, bool all);
  static void print_on_error(outputStream* st);
};

}

#endif // __GLIBC__

#endif // OS_LINUX_MALLOCTRACE_MALLOCTRACE_HPP
