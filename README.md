# FlakeChain v0.4.0-alpha.3

<img alt="FlakeChain Master Branch Build Status" src="https://travis-ci.org/flakechain/flake-core.svg?branch=master" />

###### FlakeChain is Monero git trunk fork with Ecosystem and REST API to Blockchain

![Frosty Flush v0.3.0.1](./assets/frosty-flush.png)

### Installation from Brew (unstable)

#### Add Flakechain Keg

```bash
brew tap flakechain/flake-core
```

#### Install latest release

```bash
brew install -v flake-core
```

## Changelog

 - tweaked PoW to block DoS attacks from ASICs
 - added input ordering to prevent wallet inference
 - increased minimum ring size from 5 to 7
 - subaddress support added, with addresses starting with a prefix of 8
 - added multisig support
 - added support for SunOS / Solaris
 - initial support for Ledger Nano S hardware wallet
 - added seed encryption by password
 - securely erase keys from memory, for most cases, when no longer in use
 - initial Bulletproofs implementation live on testnet
 - added accounts, tags, and labels, via subaddresses
 - added initial, quite rough support for 0MQ
 - added some mitigations for privacy-threatening key reusing forks
 - added a new network, stagenet, which mirrors mainnet's features
 - added SSL support for light wallet API
 - added CORS support to the RPC stack
 - added a --generate-from-spend-key flag to the CLI wallet
 - added a --disable-dns-checkpoints flag to the daemon
 - massive improvements to build hardening
 - added native fuzz testing for user input
 - added the ability to limit inbound connections
 - enabled "fluffy blocks" by default
 - added a --max-txpool-size mempool size limit flag
 - allow a remote node to temporarily process RPC requests during IBD
 - added a relay_tx command to the RPC wallet
 - allow for spend key retrieval via RPC wallet call
 - made libraries use position independent code
 - improvements made to Docker image
 - added a sweep_single command to the CLI wallet
 - made RPC error codes more specific
 - improved stack trace printing, and noted stack trace lib in output
 - split and refactored wallet_api from wallet code
 - added priority arguments to sweep_all and donate CLI wallet commands
 - added a --do-not-relay option to the CLI wallet
 - made the hashchain unit tests work again
 - added tests for subaddress expansion
 - added RingCT performance tests
 - added package installation instructions for Void Linux
 - made changes to ensure no sensitive data is logged accidentally
 - added a Croatian mnemonic word list
 - added a Lojban mnemonic word list
 - added a Swedish CLI translation
 - added stoffu's GPG key to the source code
 - added an timeoue for connections which don't complete a handshake
 - moved test building to the end of the CMake build process
 - as always, loads of bug fixes and performance improvements

## Description

FlakeChain is a private, secure, untraceable, decentralised digital currency. You are your bank, you control your funds, 
and nobody can trace your transfers unless you allow them to do so.

## Community

- [Github](https://github.com/flakechain)
- [Discord](https://discordapp.com/invite/NqgvVYT)
- [Telegram](https://t.me/flakechain)
- [BitcoinTalk](https://bitcointalk.org/index.php?topic=4453691)
- [Twitter](https://twitter.com/flakechain)

## Markets

- [StocksExchange](https://app.stocks.exchange/en/basic-trade/pair/BTC/XSF/1D)
- [MapleChange](https://maplechange.com/markets/xsfbtc?markets=all&column=name&order=asc&unit=volume&pinned=true)

## Building from source

### Prerequisite

To build and launch FlakeChain on POSIX compatible OS you need first setup required libraries and tools:

##### Ubuntu 18.04

> You may need to install `sudo` with following command

```bash
$ apt install sudo
``` 

Open terminal session and run following commands or execute [requirements-ubuntu.sh](./bin/requirements-ubuntu.sh) file.

```bash
# update apt on fresh system and install git to clone source
$ sudo apt update && apt upgrade
# install dependencies
$ sudo apt install \
    git-core \
    build-essential \
    cmake \
    libboost-all-dev \
    miniupnpc \
    libunbound-dev \
    graphviz \
    doxygen \
    libunwind8-dev \
    pkg-config \
    libssl-dev \
    libcurl4-openssl-dev \
    libgtest-dev \
    libreadline-dev \
    libminiupnpc-dev \
    libzmq3-dev
    
# getting the source
$ git clone --recursive https://github.com/flakechain/flake-core.git
```

or

```bash
$ sudo apt update && apt upgrade && apt install git-core
$ git clone --recursive https://github.com/flakechain/flake-core.git
$ cd flake-core
$ sudo sh ./bin/requirements-ubuntu.sh
```

##### Another Distributives

> Just use your package manager and/or naming convention to install list of required software from previous APT command.

### Getting The Source

```bash
$ git clone --recursive https://github.com/flakechain/flake-core.git
```

Or clone Submodules later (Project was cloned earlier)

```bash
$ cd flake-core && git submodule init && git submodule update
```

You can pull latest stable source from @flakechain/flake-core master branch.
If you are interested in experimental feature just checkout it's [feature-branch](https://github.com/flakechain/flake-core/branches) after cloning
or download source archives from [Releases](https://github.com/flakechain/flake-core/releases) and for sure you can
pull any commit using

```bash
# checkout branch smart-contracts-feature
git checkout smart-contracts-feature
# checkout commit
git checkout 61eea839786149e587f939bcdb1c40009638845f   
```

### Building

Just run `make` command from project root folder to launch Makefile wrapper for CMake or run standard CMake building flow

```bash
$ make
```

or

```bash
$ mkdir build && cd build && cmake .. && make
```

Wait until it finish compile and link tasks.

![Flakechain](./assets/v0.4.0/icon@1024.png)

## Copyright

&copy; 2018 FlakeChain contributors

&copy; 2014-2018 Monero contributors

&copy; ~ 2014 Cryptonote contributors