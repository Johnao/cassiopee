cmd_eal_common_launch.o = aarch64-linux-gnu-gcc -Wp,-MD,./.eal_common_launch.o.d.tmp   -pthread  -march=armv8-a+crc+crypto -DRTE_MACHINE_CPUFLAG_NEON -DRTE_MACHINE_CPUFLAG_CRC32 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PMULL -DRTE_MACHINE_CPUFLAG_SHA1 -DRTE_MACHINE_CPUFLAG_SHA2  -I/home/johnao/ovs/deps/dpdk/build/include -include /home/johnao/ovs/deps/dpdk/build/include/rte_config.h -D_GNU_SOURCE -DALLOW_EXPERIMENTAL_API -I/home/johnao/ovs/deps/dpdk/lib/librte_eal/linuxapp/eal/include -I/home/johnao/ovs/deps/dpdk/lib/librte_eal/common -I/home/johnao/ovs/deps/dpdk/lib/librte_eal/common/include -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Wdeprecated -Wimplicit-fallthrough=2 -Wno-format-truncation -O3   -isystem /home/johnao/include -o eal_common_launch.o -c /home/johnao/ovs/deps/dpdk/lib/librte_eal/common/eal_common_launch.c 
