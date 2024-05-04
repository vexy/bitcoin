// Copyright (c) 2011-2020 The Vincoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef VINCOIN_QT_VINCOINADDRESSVALIDATOR_H
#define VINCOIN_QT_VINCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class VincoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit VincoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Vincoin address widget validator, checks for a valid vincoin address.
 */
class VincoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit VincoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // VINCOIN_QT_VINCOINADDRESSVALIDATOR_H
