cmd_ecore_l2.o = aarch64-linux-gnu-gcc -Wp,-MD,./.ecore_l2.o.d.tmp   -pthread  -march=armv8-a+crc+crypto -DRTE_MACHINE_CPUFLAG_NEON -DRTE_MACHINE_CPUFLAG_CRC32 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PMULL -DRTE_MACHINE_CPUFLAG_SHA1 -DRTE_MACHINE_CPUFLAG_SHA2  -I/home/johnao/ovs/deps/dpdk/build/include -include /home/johnao/ovs/deps/dpdk/build/include/rte_config.h -D_GNU_SOURCE -O3 -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Wdeprecated -Wimplicit-fallthrough=2 -Wno-format-truncation -Wno-unused-parameter -Wno-sign-compare -Wno-missing-prototypes -Wno-cast-qual -Wno-unused-function -Wno-unused-variable -Wno-strict-aliasing -Wno-missing-prototypes -Wno-unused-value -Wno-format-nonliteral -Wno-unused-but-set-variable -Wno-missing-declarations -Wno-maybe-uninitialized -Wno-strict-prototypes -Wno-shift-negative-value -Wno-implicit-fallthrough  -isystem /home/johnao/include -o ecore_l2.o -c /home/johnao/ovs/deps/dpdk/drivers/net/qede/base/ecore_l2.c 
