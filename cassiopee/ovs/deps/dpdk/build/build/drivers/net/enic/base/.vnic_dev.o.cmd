cmd_base/vnic_dev.o = aarch64-linux-gnu-gcc -Wp,-MD,base/.vnic_dev.o.d.tmp   -pthread  -march=armv8-a+crc+crypto -DRTE_MACHINE_CPUFLAG_NEON -DRTE_MACHINE_CPUFLAG_CRC32 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PMULL -DRTE_MACHINE_CPUFLAG_SHA1 -DRTE_MACHINE_CPUFLAG_SHA2  -I/home/johnao/ovs/deps/dpdk/build/include -include /home/johnao/ovs/deps/dpdk/build/include/rte_config.h -D_GNU_SOURCE -I/home/johnao/ovs/deps/dpdk/drivers/net/enic/base/ -I/home/johnao/ovs/deps/dpdk/drivers/net/enic -O3 -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Wdeprecated -Wimplicit-fallthrough=2 -Wno-format-truncation -Wno-strict-aliasing   -isystem /home/johnao/include -o base/vnic_dev.o -c /home/johnao/ovs/deps/dpdk/drivers/net/enic/base/vnic_dev.c 
