
/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under both the Apache 2.0 license (found in the
 *  LICENSE file in the root directory of this source tree) and the GPLv2 (found
 *  in the COPYING file in the root directory of this source tree).
 *  You may select, at your option, one of the above-listed licenses.
 */

// Sanity check integration test for memory_error_info
// Spec file: specs/posix/memory_error_info.table

#include <osquery/tests/integration/tables/helper.h>

namespace osquery {
namespace table_tests {

class memoryErrorInfo : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};

TEST_F(memoryErrorInfo, test_sanity) {
  // 1. Query data
  auto const data = execute_query("select * from memory_error_info");
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {"handle", NormalType}
  //      {"error_type", NormalType}
  //      {"error_granularity", NormalType}
  //      {"error_operation", NormalType}
  //      {"vendor_syndrome", NormalType}
  //      {"memory_array_error_address", NormalType}
  //      {"device_error_address", NormalType}
  //      {"error_resolution", NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}

} // namespace table_tests
} // namespace osquery
