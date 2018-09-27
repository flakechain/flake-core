//
// Created by 0xA01 on 7/31/18.
//
#pragma once

#define FLAKE_RELEASE_NAME                              ("Hurting Heat")

#define FLAKE_UNLOCK_WINDOW                             (10)

#define FLAKE_TRANSACTION_VERSION                       (3)
#define FLAKE_BLOCK_MINOR_VERSION                       (7)
#define FLAKE_BLOCK_MAJOR_VERSION                       (7)

#define FLAKE_MONEY_SUPPLY                              (-1ull)
#define FLAKE_FINAL_SUBSIDY_PER_MINUTE                  (300000000000ull)

#define P2P_SUPPORT_FLAG_TROUBLESOME_BLOCKS             0x02

#define FLAKE_NAME                                      "snowflake"
#define FLAKE_TRUSTED_PUBKEY                            ("0000000000000000000000000000000000000000000000000000000000000000")

#define FLAKE_PUBLIC_ADDRESS_BASE58_PREFIX              (151)
#define FLAKE_PUBLIC_INTEGRATED_ADDRESS_BASE58_PREFIX   (30614)
#define FLAKE_PUBLIC_SUBADDRESS_BASE58_PREFIX           (31382)

#define FLAKE_TESTNET_ADDRESS_BASE58_PREFIX             (4)
#define FLAKE_TESTNET_INTEGRATED_ADDRESS_BASE58_PREFIX  (8)
#define FLAKE_TESTNET_SUBADDRESS_BASE58_PREFIX          (16)

#define FLAKE_P2P_DEFAULT_PORT                          (12560)
#define FLAKE_RPC_DEFAULT_PORT                          (12561)
#define FLAKE_ZMQ_RPC_DEFAULT_PORT                      (12562)

                                                        // snowflakenetwork
#define FLAKE_NETWORK_ID                                {0x72, 0x6e, 0x6f, 0x77, 0x66, 0x6c, 0x61, 0x6b, 0x65, 0x6e, 0x65, 0x74, 0x77, 0x6f, 0x72, 0x6b}
#define FLAKE_TESTNET_NETWORK_ID                        {0x72, 0x6e, 0x6f, 0x77, 0x66, 0x6c, 0x61, 0x6b, 0x65, 0x6e, 0x65, 0x74, 0x77, 0x6f, 0x72, 0x6a}
#define FLAKE_GENESIS_TX                                ("010a01ff0001ffffffffffff0f029b2e4c0281c0b02e7c53291a94d1d0cbff8883f8024f5142ee494ffbbd0880712101fbbddd38f518e908093781c1fd42242e426e77aa7fec4665e6dec8c7e3638fa8")
#define FLAKE_TESTNET_GENESIS_TX                        ("010a01ff0001ffffffffffff0f029b2e4c0281c0b02e7c53291a94d1d0cbff8883f8024f5142ee494ffbbd08807121011c1c0997b205111e1949dae5bdba64c3c841d57941e08df5b5036a70f3407f44")
#define FLAKE_GENESIS_NONCE                             (2018)
// as we started in April 2018
#define FLAKE_LAUNCH_TIMESTAMP                          (1522320222)

#define FLAKE8_BLOCK                                    (100000)
#define FLAKE8_TIMESTAMP                                (0)

#define MAINTAINER_WALLET                               ("SFvqS4mHVutZdd8NqTNz53LRg8s5Uh9o5ZC6PvXsR1ij1Ft8eEjWqnV2CzC7fggMwf2MBv5B7zHDNTNFiJyohz1L1nxZMMMot")