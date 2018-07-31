# FlakeChain v0.3.0-alpha   

###### FlakeChain is Monero v12 (Cryptonote v7) fork with Rich Ecosystem and Application Development Platform included

## Description


FlakeChain is a private, secure, untraceable, decentralised digital currency. You are your bank, you control your funds, 
and nobody can trace your transfers unless you allow them to do so.

## Building from source

### Prerequisite

#### Ubuntu/Linux/Unix

To build and launch FlakeChain on POSIX compatible OS you need first setup required libraries and tools:

##### Ubuntu

```shell
$ apt install libboost-dev-all libzmq-dev ... # TODO
```

##### Another Distro

> Just use your package manager and/or naming convention to install list of required software from previous APT command.

### Getting The Source

```shell
$ git clone --recursive https://github.com/flakechain/flake-core.git
```

Or clone Git Submodules later (clned already)

```shell
$ git clone https://github.com/flakechain/flake-core.git && cd flake-core && git submodules init && git submodules update
```

You can pull latest stable source from @flakechain/flake-core master branch.
If you are interested in experimental feature just checkout it's (!feature-branch)[https://github.com/flakechain/flake-core/branches] after cloning
or download source archives from (!Releases)[https://github.com/flakechain/flake-core/releases] and for sure you can
pull any commit using

```shell
# checkout branch
git checkout smart-contracts

# checkout commit
git checkout 61eea839786149e587f939bcdb1c40009638845f   
```

### Building

Just run `make` command from project root folder to launch Makefile wrapper for CMake or run standard CMake building flow

```shell
$ mkdir build && cd build && cmake .. && make
```

Wait until it finish compile and link tasks.


## Copyright

&copy; 2018 FlakeChain contributors

&copy; 2014-2018 Monero contributors

&copy; before 2014 Cryptonote contributors