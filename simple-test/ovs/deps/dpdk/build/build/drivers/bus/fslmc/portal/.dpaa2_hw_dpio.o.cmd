cmd_portal/dpaa2_hw_dpio.o = aarch64-linux-gnu-gcc -Wp,-MD,portal/.dpaa2_hw_dpio.o.d.tmp   -pthread  -march=armv8-a+crc+crypto -DRTE_MACHINE_CPUFLAG_NEON -DRTE_MACHINE_CPUFLAG_CRC32 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PMULL -DRTE_MACHINE_CPUFLAG_SHA1 -DRTE_MACHINE_CPUFLAG_SHA2  -I/home/johnao/ovs/deps/dpdk/build/include -include /home/johnao/ovs/deps/dpdk/build/include/rte_config.h -D_GNU_SOURCE -DALLOW_EXPERIMENTAL_API -O3 -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings -Wdeprecated -Wimplicit-fallthrough=2 -Wno-format-truncation -I/home/johnao/ovs/deps/dpdk/drivers/bus/fslmc -I/home/johnao/ovs/deps/dpdk/drivers/bus/fslmc/mc -I/home/johnao/ovs/deps/dpdk/drivers/bus/fslmc/qbman/include -I/home/johnao/ovs/deps/dpdk/lib/librte_eal/common   -isystem /home/johnao/include -o portal/dpaa2_hw_dpio.o -c /home/johnao/ovs/deps/dpdk/drivers/bus/fslmc/portal/dpaa2_hw_dpio.c 
