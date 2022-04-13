# Copyright Takatoshi Kondo 2022
#
# Distributed under the Boost Software License, Version 1.0.
# (See accompanying file LICENSE_1_0.txt or copy at
# http://www.boost.org/LICENSE_1_0.txt)

CMAKE_MINIMUM_REQUIRED (VERSION 3.13.0)
PROJECT (foo_iface)

FIND_PACKAGE (Boost 1.67.0 REQUIRED COMPONENTS unit_test_framework)
ENABLE_TESTING ()
INCLUDE_DIRECTORIES (include)
ADD_SUBDIRECTORY (test)
