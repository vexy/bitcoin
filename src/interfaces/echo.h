// Copyright (c) 2021 The Vincoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef VINCOIN_INTERFACES_ECHO_H
#define VINCOIN_INTERFACES_ECHO_H

#include <memory>
#include <string>

namespace interfaces {
//! Simple string echoing interface for testing.
class Echo
{
public:
    virtual ~Echo() {}

    //! Echo provided string.
    virtual std::string echo(const std::string& echo) = 0;
};

//! Return implementation of Echo interface.
std::unique_ptr<Echo> MakeEcho();
} // namespace interfaces

#endif // VINCOIN_INTERFACES_ECHO_H
