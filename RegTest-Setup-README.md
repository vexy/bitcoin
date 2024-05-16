The following README file provides instructions for starting and running Vincoin in **RegTest** mode. Also, after successfully setting up a node, some basic commands are presented to manipulate your vincoin node.


### Generate config file:
From vincoin root folder run: _./contrib/devtools/gen-bitcoin-gen.sh_

### Copy generated config file to .vitcoin folder
_cp share/examples/vitcoin.conf ~/.vitcoin_

### Generate login credentials for a JSON-RPC user using rpcauth.py script
 _/share/rpcauth.py [-h] username [password]_. Username for authentication, password can be left empty. This generates rpcauth for example 

 **Example input:** _./rpcauth.py -h filip_regtest_ 
 
 **Example expected ouput:** _rpcauth=filip_regtest:82aae96a2b7e950b0c6746ca1f555d46$1241ad692b6f62309085241875eecafe398b70197e810634e4ea5fee6d8a8598, rpcpassword=s2vNzpBcc8vtLSVHzVhe_CmzCRZAFDOTPcM5GctCpaY_

### Configuration settings in bitcoin.conf:
_daemon=1_

_chain=regtest_

_server=1_

_fallbackfee=SOME_SMALL_VALUE_ (_Optional_)

**Generated rpc auth values:**

rpcauth=filip_regtest:82aae96a2b7e950b0c6746ca1f555d46$1241ad692b6f62309085241875eecafe398b70197e810634e4ea5fee6d8a8598

rpcpassword=s2vNzpBcc8vtLSVHzVhe_CmzCRZAFDOTPcM5GctCpaY

rpcuser=filip_regtest


****************************

### Runing vincoind (if the values are set in vitcoin.config as done in the previous step, no need to pass any arguments during startup)
./vitcoind

### Create wallet
./vitcoin-cli createwallet WALLET_NAME (and other optional arguments)

### Check and get ballance
./vitcoin-cli getbalance

### Get new address
./vitcoin-cli getnewaddress


### Generate new blocks with address
./vitcoin-cli generatetoaddress NUMBER_OF_BLOCS ADDRESS_GENERATOR 

**Example:** ./vitcoin-cli generatetoaddress 1 bcrt1qe04kccrachhxrmz9r23ahc8qz2zwrgrq7ae3ue

### Send to address
./vitcoin-cli sendtoaddress AMOUNT_FOR_SENDING ADDRESS_FOR_SENDING

### Stop 
./vitcoin-cli stop
