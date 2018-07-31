//
// Created by 0xA01 on 7/31/18.
//
#pragma once

#define FLAKE_TRANSACTION_VERSION                       (3)
#define FLAKE_BLOCK_MINOR_VERSION                       (7)
#define FLAKE_BLOCK_MAJOR_VERSION                       (8)

#define FLAKE_MONEY_SUPPLY                              (10000000000000000000ull)
#define FLAKE_FINAL_SUBSIDY_PER_MINUTE                  (300000000000ull)

#define P2P_SUPPORT_FLAG_TROUBLESOME_BLOCKS             0x02

#define FLAKE_NAME                                      ("flakechain")
#define FLAKE_TRUSTED_PUBKEY                            ("0000000000000000000000000000000000000000000000000000000000000000")

#define FLAKE_PUBLIC_ADDRESS_BASE58_PREFIX              (151)
#define FLAKE_PUBLIC_INTEGRATED_ADDRESS_BASE58_PREFIX   (30614)
#define FLAKE_PUBLIC_SUBADDRESS_BASE58_PREFIX           (31382)

#define FLAKE_P2P_DEFAULT_PORT                          (12560)
#define FLAKE_RPC_DEFAULT_PORT                          (12561)
#define FLAKE_ZMQ_RPC_DEFAULT_PORT                      (12562)

// snowflakenetwork
#define FLAKE_NETWORK_ID                                {0x72, 0x6e, 0x6f, 0x77, 0x66, 0x6c, 0x61, 0x6b, 0x65, 0x6e, 0x65, 0x74, 0x77, 0x6f, 0x72, 0x6b}
#define FLAKE_GENESIS_TX                                ("010a01ff0001ffffffffffff0f029b2e4c0281c0b02e7c53291a94d1d0cbff8883f8024f5142ee494ffbbd0880712101fbbddd38f518e908093781c1fd42242e426e77aa7fec4665e6dec8c7e3638fa8")
// as we started in April 2018
#define FLAKE_GENESIS_NONCE                             (2018)
