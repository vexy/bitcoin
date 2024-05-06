// Copyright (c) 2023 Vincoin Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "logprintf.h"

#include <clang-tidy/ClangTidyModule.h>
#include <clang-tidy/ClangTidyModuleRegistry.h>

class VincoinModule final : public clang::tidy::ClangTidyModule
{
public:
    void addCheckFactories(clang::tidy::ClangTidyCheckFactories& CheckFactories) override
    {
        CheckFactories.registerCheck<vincoin::LogPrintfCheck>("vincoin-unterminated-logprintf");
    }
};

static clang::tidy::ClangTidyModuleRegistry::Add<VincoinModule>
    X("vincoin-module", "Adds vincoin checks.");

volatile int VincoinModuleAnchorSource = 0;
