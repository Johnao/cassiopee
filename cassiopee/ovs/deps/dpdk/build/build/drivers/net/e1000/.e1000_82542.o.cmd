cmd_e1000_82542.o = aarch64-linux-gnu-gcc -Wp,-MD,./.e1000_82542.o.d.tmp   -pthread  -march=armv8-a+crc+crypto -DRTE_MACHINE_CPUFLAG_NEON -DRTE_MACHINE_CPUFLAG_CRC32 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PMULL -DRTE_MACHINE_CPUFLAG_SHA1 -DRTE_MACHINE_CPUFLAG_SHA2  -I/home/johnao/ovs/deps/dpdk/build/include -include /home/johnao/ovs/deps/dpdk/build/include/rte_config.h -D_GNU_SOURCE -O3 -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Wdeprecated -Wimplicit-fallthrough=2 -Wno-format-truncation -DALLOW_EXPERIMENTAL_API -Wno-uninitialized -Wno-unused-parameter -Wno-unused-variable -Wno-misleading-indentation -Wno-implicit-fallthrough  -isystem /home/johnao/include -o e1000_82542.o -c /home/johnao/ovs/deps/dpdk/drivers/net/e1000/base/e1000_82542.c 
