cmd_rte_pci.o = aarch64-linux-gnu-gcc -Wp,-MD,./.rte_pci.o.d.tmp  -I/home/johnao/ovs/deps/dpdk/lib/librte_pci  -pthread  -march=armv8-a+crc+crypto -DRTE_MACHINE_CPUFLAG_NEON -DRTE_MACHINE_CPUFLAG_CRC32 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PMULL -DRTE_MACHINE_CPUFLAG_SHA1 -DRTE_MACHINE_CPUFLAG_SHA2  -I/home/johnao/ovs/deps/dpdk/build/include -include /home/johnao/ovs/deps/dpdk/build/include/rte_config.h -D_GNU_SOURCE -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Wdeprecated -Wimplicit-fallthrough=2 -Wno-format-truncation -O3   -isystem /home/johnao/include -o rte_pci.o -c /home/johnao/ovs/deps/dpdk/lib/librte_pci/rte_pci.c 
