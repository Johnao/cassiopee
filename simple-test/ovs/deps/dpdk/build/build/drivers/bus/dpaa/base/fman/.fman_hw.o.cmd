cmd_base/fman/fman_hw.o = aarch64-linux-gnu-gcc -Wp,-MD,base/fman/.fman_hw.o.d.tmp  -I/home/johnao/ovs/deps/dpdk/drivers/bus/dpaa  -pthread  -march=armv8-a+crc+crypto -DRTE_MACHINE_CPUFLAG_NEON -DRTE_MACHINE_CPUFLAG_CRC32 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PMULL -DRTE_MACHINE_CPUFLAG_SHA1 -DRTE_MACHINE_CPUFLAG_SHA2  -I/home/johnao/ovs/deps/dpdk/build/include -include /home/johnao/ovs/deps/dpdk/build/include/rte_config.h -D_GNU_SOURCE -DALLOW_EXPERIMENTAL_API -O3 -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Wdeprecated -Wimplicit-fallthrough=2 -Wno-format-truncation -Wno-pointer-arith -Wno-cast-qual -I/home/johnao/ovs/deps/dpdk/drivers/bus/dpaa/ -I/home/johnao/ovs/deps/dpdk/drivers/bus/dpaa/include -I/home/johnao/ovs/deps/dpdk/drivers/bus/dpaa/base/qbman -I/home/johnao/ovs/deps/dpdk/lib/librte_eal/linuxapp/eal -I/home/johnao/ovs/deps/dpdk/lib/librte_eal/common/include   -isystem /home/johnao/include -o base/fman/fman_hw.o -c /home/johnao/ovs/deps/dpdk/drivers/bus/dpaa/base/fman/fman_hw.c 
