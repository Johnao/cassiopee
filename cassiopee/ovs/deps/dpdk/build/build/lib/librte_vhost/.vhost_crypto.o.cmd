cmd_vhost_crypto.o = aarch64-linux-gnu-gcc -Wp,-MD,./.vhost_crypto.o.d.tmp   -pthread  -march=armv8-a+crc+crypto -DRTE_MACHINE_CPUFLAG_NEON -DRTE_MACHINE_CPUFLAG_CRC32 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PMULL -DRTE_MACHINE_CPUFLAG_SHA1 -DRTE_MACHINE_CPUFLAG_SHA2  -I/home/johnao/ovs/deps/dpdk/build/include -include /home/johnao/ovs/deps/dpdk/build/include/rte_config.h -D_GNU_SOURCE -DALLOW_EXPERIMENTAL_API -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Wdeprecated -Wimplicit-fallthrough=2 -Wno-format-truncation -I/home/johnao/ovs/deps/dpdk/lib/librte_vhost -O3 -D_FILE_OFFSET_BITS=64 -I vhost_user -fno-strict-aliasing   -isystem /home/johnao/include -o vhost_crypto.o -c /home/johnao/ovs/deps/dpdk/lib/librte_vhost/vhost_crypto.c 
