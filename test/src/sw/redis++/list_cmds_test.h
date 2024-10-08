/**************************************************************************
   Copyright (c) 2017 sewenew

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
 *************************************************************************/

#ifndef SEWENEW_REDISPLUSPLUS_TEST_LIST_CMDS_TEST_H
#define SEWENEW_REDISPLUSPLUS_TEST_LIST_CMDS_TEST_H

#include <sw/redis++/redis++.h>

namespace sw {

namespace redis {

namespace test {

template <typename RedisInstance>
class ListCmdTest {
public:
    explicit ListCmdTest(RedisInstance &instance) : _redis(instance) {}

    void run();

private:
    void _test_lpoppush();

    void _test_rpoppush();

    void _test_list();

    void _test_blocking();

    void _test_lmove();

    void _test_blmove();

    void _test_lmpop();

    RedisInstance &_redis;
};

}

}

}

#include "list_cmds_test.hpp"

#endif // end SEWENEW_REDISPLUSPLUS_TEST_LIST_CMDS_TEST_H
