/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed in accordance with the terms specified in
 *  the LICENSE file found in the root directory of this source tree.
 */

#include <osquery/flags.h>

namespace osquery {

/**
 * The Auditd/OpenBSM subsystem may have a performance impact on the system.
 *
 * This flag controls Auditd on Linux and OpenBSM on macOS.
 */
FLAG(bool,
     disable_audit,
     true,
     "Disable receiving events from the audit subsystem");

FLAG(bool,
     audit_allow_sockets,
     false,
     "Allow the audit publisher to install socket-related rules");

} // namespace osquery
