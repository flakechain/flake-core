./snowflaked \
    --disable-dns-checkpoints \
    --db-sync-mode fast:async:10000 \
    --rpc-bind-ip 0.0.0.0 \
    --restricted-rpc \
    --confirm-external-bind
