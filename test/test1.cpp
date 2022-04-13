// Copyright Takatoshi Kondo 2022
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#define BOOST_TEST_MODULE mqtt_client_cpp_test
#include <boost/test/unit_test.hpp>

#include <foo.hpp>

BOOST_AUTO_TEST_SUITE(test1)

BOOST_AUTO_TEST_CASE( case1 ) {
    BOOST_TEST(foo(1, 2) == 1);
}

BOOST_AUTO_TEST_SUITE_END()
