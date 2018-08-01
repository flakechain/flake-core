# FlakeChain v0.3.0-alpha   

###### FlakeChain is Monero v12 (Cryptonote v7) fork with Rich Ecosystem and Application Development Platform included

![Flakechain](./assets/flake512x512.png)

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

## Copyright

&copy; 2018 FlakeChain contributors

&copy; 2014-2018 Monero contributors

&copy; ~ 2014 Cryptonote contributors