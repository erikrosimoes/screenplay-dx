cmd_/root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/os/linux/../../os/linux/rt_symb.o := /opt/mips-4.3/bin//mipsel-linux-gcc -Wp,-MD,/root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/os/linux/../../os/linux/.rt_symb.o.d  -nostdinc -isystem /opt/mips-4.3/bin/../lib/gcc/mips-linux-gnu/4.3.2/include -D__KERNEL__ -Iinclude  -include include/linux/autoconf.h -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -O2  -mabi=32 -G 0 -mno-abicalls -fno-pic -pipe -msoft-float -ffreestanding -EL -UMIPSEB -U_MIPSEB -U__MIPSEB -U__MIPSEB__ -UMIPSEL -U_MIPSEL -U__MIPSEL -U__MIPSEL__ -DMIPSEL -D_MIPSEL -D__MIPSEL -D__MIPSEL__ -march=mips32r2 -Wa,-mips32r2 -Wa,--trap -Iinclude/asm-mips/mach-tango3 -DEM86XX_CHIP=EM86XX_CHIPID_TANGO3 -DEM86XX_REVISION=3 -DCPU_REMAP_SPACE=0x4000000UL  -mtune=24kf -Iinclude/asm-mips/mach-generic -fomit-frame-pointer  -fno-stack-protector -Wdeclaration-after-statement -Wno-pointer-sign -D__KERNEL__ -I/root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/../../../../src/libs/3_8_0/linux_kernel_2.6.22.19//include -I/root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/../../../../src/libs/3_8_0/linux_kernel_2.6.22.19//include/asm/gcc -I/root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/../../../../src/libs/3_8_0/linux_kernel_2.6.22.19//include/asm-mips/mach-tango3 -I/root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/../../../../src/libs/3_8_0/linux_kernel_2.6.22.19//include/asm-mips/mach-generic -I/root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -O2  -mabi=32 -G 0 -mno-abicalls -fno-pic -pipe -msoft-float -ffreestanding  -march=mips32r2 -Wa,-mips32r2 -Wa,--trap -DMODULE -DAGGREGATION_SUPPORT -DPIGGYBACK_SUPPORT -DWMM_SUPPORT  -DLINUX -Wall -Wstrict-prototypes -Wno-trigraphs  -DSYSTEM_LOG_SUPPORT  -DRT28xx_MODE=STA -DCHIPSET=3070 -DRESOURCE_PRE_ALLOC -DCONFIG_STA_SUPPORT -DDBG -DADHOC_WPA2PSK_SUPPORT -DWSC_STA_SUPPORT -DDOT11_N_SUPPORT -DDOT11N_DRAFT3 -DSTATS_COUNT_SUPPORT -DOS_ABL_SUPPORT -DOS_ABL_FUNC_SUPPORT -DOS_ABL_OS_PCI_SUPPORT -DOS_ABL_OS_USB_SUPPORT -DOS_ABL_OS_AP_SUPPORT -DOS_ABL_OS_STA_SUPPORT -DEXPORT_SYMTAB -DRTMP_MAC_USB -DRT30xx -DRT3070 -DRTMP_USB_SUPPORT -DRTMP_TIMER_TASK_SUPPORT -DRTMP_RF_RW_SUPPORT -DRTMP_EFUSE_SUPPORT -DSPECIFIC_VCORECAL_SUPPORT   -DMODULE -mlong-calls -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(rt_symb)"  -D"KBUILD_MODNAME=KBUILD_STR(rt3070sta)" -c -o /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/os/linux/../../os/linux/.tmp_rt_symb.o /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/os/linux/../../os/linux/rt_symb.c

deps_/root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/os/linux/../../os/linux/rt_symb.o := \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/os/linux/../../os/linux/rt_symb.c \
  include/linux/module.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/module/unload.h) \
    $(wildcard include/config/kallsyms.h) \
    $(wildcard include/config/sysfs.h) \
  include/linux/spinlock.h \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
  include/linux/thread_info.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbd.h) \
    $(wildcard include/config/lsf.h) \
    $(wildcard include/config/resources/64bit.h) \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/enable/must/check.h) \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/forced/inlining.h) \
  include/linux/compiler-gcc.h \
  include/asm/posix_types.h \
  include/asm/sgidefs.h \
  include/asm/types.h \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/64bit/phys/addr.h) \
    $(wildcard include/config/64bit.h) \
  include/linux/bitops.h \
  include/asm/bitops.h \
    $(wildcard include/config/cpu/mipsr2.h) \
    $(wildcard include/config/cpu/mips32.h) \
    $(wildcard include/config/cpu/mips64.h) \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
    $(wildcard include/config/x86.h) \
  include/asm/irqflags.h \
    $(wildcard include/config/mips/mt/smtc.h) \
    $(wildcard include/config/irq/cpu.h) \
    $(wildcard include/config/mips/mt/smtc/instant/replay.h) \
  include/asm/hazards.h \
    $(wildcard include/config/cpu/mipsr1.h) \
    $(wildcard include/config/cpu/r10000.h) \
    $(wildcard include/config/cpu/rm9000.h) \
    $(wildcard include/config/cpu/sb1.h) \
  include/asm/cpu-features.h \
    $(wildcard include/config/32bit.h) \
    $(wildcard include/config/cpu/mipsr2/irq/vi.h) \
    $(wildcard include/config/cpu/mipsr2/irq/ei.h) \
  include/asm/cpu.h \
  include/asm/cpu-info.h \
    $(wildcard include/config/sgi/ip27.h) \
    $(wildcard include/config/mips/mt.h) \
  include/asm/cache.h \
    $(wildcard include/config/mips/l1/cache/shift.h) \
  include/asm-mips/mach-generic/kmalloc.h \
    $(wildcard include/config/dma/coherent.h) \
  include/asm-mips/mach-generic/cpu-feature-overrides.h \
  include/asm/barrier.h \
    $(wildcard include/config/cpu/has/sync.h) \
    $(wildcard include/config/tango2.h) \
    $(wildcard include/config/tango3.h) \
    $(wildcard include/config/cpu/has/wb.h) \
    $(wildcard include/config/weak/ordering.h) \
  include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/printk.h) \
  include/asm/break.h \
  include/asm-generic/bug.h \
    $(wildcard include/config/debug/bugverbose.h) \
  include/asm/byteorder.h \
    $(wildcard include/config/cpu/mips64/r2.h) \
  include/linux/byteorder/little_endian.h \
  include/linux/byteorder/swab.h \
  include/linux/byteorder/generic.h \
  include/asm/war.h \
    $(wildcard include/config/sgi/ip22.h) \
    $(wildcard include/config/sni/rm.h) \
    $(wildcard include/config/cpu/r5432.h) \
    $(wildcard include/config/sb1/pass/1/workarounds.h) \
    $(wildcard include/config/sb1/pass/2/workarounds.h) \
    $(wildcard include/config/mips/malta.h) \
    $(wildcard include/config/mips/atlas.h) \
    $(wildcard include/config/mips/sead.h) \
    $(wildcard include/config/cpu/tx49xx.h) \
    $(wildcard include/config/momenco/jaguar/atx.h) \
    $(wildcard include/config/pmc/yosemite.h) \
    $(wildcard include/config/basler/excite.h) \
    $(wildcard include/config/momenco/ocelot.h) \
    $(wildcard include/config/momenco/ocelot/3.h) \
    $(wildcard include/config/momenco/ocelot/c.h) \
    $(wildcard include/config/sgi/ip32.h) \
    $(wildcard include/config/wr/ppmc.h) \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/ffz.h \
  include/asm-generic/bitops/find.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/ext2-non-atomic.h \
  include/asm-generic/bitops/le.h \
  include/asm-generic/bitops/ext2-atomic.h \
  include/asm-generic/bitops/minix.h \
  include/asm/thread_info.h \
    $(wildcard include/config/page/size/4kb.h) \
    $(wildcard include/config/page/size/8kb.h) \
    $(wildcard include/config/page/size/16kb.h) \
    $(wildcard include/config/page/size/64kb.h) \
    $(wildcard include/config/debug/stack/usage.h) \
  include/asm/processor.h \
    $(wildcard include/config/mips/mt/fpaff.h) \
    $(wildcard include/config/cpu/has/prefetch.h) \
  include/linux/cpumask.h \
    $(wildcard include/config/hotplug/cpu.h) \
  include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/spinlock/sleep.h) \
    $(wildcard include/config/numa.h) \
  /opt/mips-4.3/bin/../lib/gcc/mips-linux-gnu/4.3.2/include/stdarg.h \
  include/linux/linkage.h \
  include/asm/linkage.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  include/linux/bitmap.h \
  include/linux/string.h \
  include/asm/string.h \
    $(wildcard include/config/cpu/r3000.h) \
  include/asm/cachectl.h \
  include/asm/mipsregs.h \
    $(wildcard include/config/cpu/vr41xx.h) \
  include/asm/prefetch.h \
  include/asm/system.h \
  include/asm/addrspace.h \
    $(wildcard include/config/cpu/r4300.h) \
    $(wildcard include/config/cpu/r4x00.h) \
    $(wildcard include/config/cpu/r5000.h) \
    $(wildcard include/config/cpu/rm7000.h) \
    $(wildcard include/config/cpu/nevada.h) \
    $(wildcard include/config/cpu/r8000.h) \
    $(wildcard include/config/cpu/sb1a.h) \
  include/asm/dsp.h \
  include/linux/stringify.h \
  include/linux/bottom_half.h \
  include/linux/spinlock_types.h \
  include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/generic/hardirqs.h) \
    $(wildcard include/config/prove/locking.h) \
  include/linux/spinlock_types_up.h \
  include/linux/spinlock_up.h \
  include/linux/spinlock_api_up.h \
  include/asm/atomic.h \
  include/asm-generic/atomic.h \
  include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  include/linux/poison.h \
  include/linux/prefetch.h \
  include/linux/stat.h \
  include/asm/stat.h \
  include/linux/time.h \
  include/linux/seqlock.h \
  include/linux/cache.h \
  include/linux/kmod.h \
    $(wildcard include/config/kmod.h) \
  include/linux/errno.h \
  include/asm/errno.h \
  include/asm-generic/errno-base.h \
  include/linux/elf.h \
  include/linux/auxvec.h \
  include/asm/auxvec.h \
  include/linux/elf-em.h \
  include/asm/elf.h \
    $(wildcard include/config/mips32/n32.h) \
    $(wildcard include/config/mips32/o32.h) \
    $(wildcard include/config/mips32/compat.h) \
  include/linux/kobject.h \
    $(wildcard include/config/hotplug.h) \
  include/linux/sysfs.h \
  include/linux/kref.h \
  include/linux/wait.h \
  include/asm/current.h \
  include/linux/moduleparam.h \
  include/linux/init.h \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/acpi/hotplug/memory.h) \
  include/asm/local.h \
  include/linux/percpu.h \
  include/linux/slab.h \
    $(wildcard include/config/slab/debug.h) \
    $(wildcard include/config/slab.h) \
    $(wildcard include/config/slub.h) \
    $(wildcard include/config/debug/slab.h) \
  include/linux/gfp.h \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/zone/dma32.h) \
  include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/arch/populates/node/map.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/have/memory/present.h) \
    $(wildcard include/config/need/node/memmap/size.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/sparsemem.h) \
    $(wildcard include/config/have/arch/early/pfn/to/nid.h) \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/nodes/span/other/nodes.h) \
    $(wildcard include/config/holes/in/zone.h) \
  include/linux/numa.h \
    $(wildcard include/config/nodes/shift.h) \
  include/linux/nodemask.h \
  include/asm/page.h \
    $(wildcard include/config/build/elf64.h) \
  include/asm-mips/mach-tango3/spaces.h \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/linux/pfn.h \
  include/asm/io.h \
    $(wildcard include/config/dma/noncoherent.h) \
  include/asm-generic/iomap.h \
  include/asm/pgtable-bits.h \
    $(wildcard include/config/cpu/mips32/r1.h) \
    $(wildcard include/config/cpu/tx39xx.h) \
    $(wildcard include/config/mips/uncached.h) \
  include/asm-mips/mach-generic/ioremap.h \
  include/asm-mips/mach-generic/mangle-port.h \
    $(wildcard include/config/swap/io/space.h) \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/out/of/line/pfn/to/page.h) \
  include/asm-generic/page.h \
  include/linux/memory_hotplug.h \
    $(wildcard include/config/have/arch/nodedata/extension.h) \
  include/linux/notifier.h \
  include/linux/mutex.h \
    $(wildcard include/config/debug/mutexes.h) \
  include/linux/rwsem.h \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  include/linux/rwsem-spinlock.h \
  include/linux/srcu.h \
  include/linux/topology.h \
    $(wildcard include/config/sched/smt.h) \
    $(wildcard include/config/sched/mc.h) \
  include/linux/smp.h \
  include/asm/topology.h \
  include/asm-mips/mach-generic/topology.h \
  include/asm-generic/topology.h \
  include/linux/slab_def.h \
  include/linux/kmalloc_sizes.h \
  include/asm/percpu.h \
  include/asm-generic/percpu.h \
  include/asm/module.h \
    $(wildcard include/config/cpu/mips32/r2.h) \
    $(wildcard include/config/cpu/mips64/r1.h) \
    $(wildcard include/config/cpu/r6000.h) \
  include/asm/uaccess.h \
    $(wildcard include/config/cpu/daddi/workarounds.h) \
    $(wildcard include/config/tangox.h) \
  include/asm-generic/uaccess.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rt_config.h \
    $(wildcard include/config/h//.h) \
    $(wildcard include/config/sta/support.h) \
    $(wildcard include/config/ap/support.h) \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rtmp_comm.h \
    $(wildcard include/config/opmode/on/ap.h) \
    $(wildcard include/config/opmode/on/sta.h) \
    $(wildcard include/config/if/opmode/on/ap.h) \
    $(wildcard include/config/if/opmode/on/sta.h) \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rtmp_type.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rtmp_os.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/os/rt_drv.h \
    $(wildcard include/config/pm.h) \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/os/rt_linux_cmm.h \
  include/linux/ctype.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/link_list.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rtmp_cmd.h \
    $(wildcard include/config/apsta/mixed/support.h) \
    $(wildcard include/config/init.h) \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/iface/iface_util.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rtmp_def.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/oid.h \
    $(wildcard include/config/status.h) \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rtmp_chip.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/chip/rt3070.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/chip/mac_usb.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rtmp_type.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/chip/rtmp_mac.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/chip/rtmp_phy.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rtmp_iface.h \
    $(wildcard include/config/.h) \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/iface/rtmp_usb.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rtusb_io.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/wpa_cmm.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/dot11i_wpa.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rtmp_dot11.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/chip/rt30xx.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rtmp_timer.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/mlme.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rtmp_dot11.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/crypt_md5.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/crypt_sha2.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/crypt_hmac.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rt_config.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/crypt_aes.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/crypt_arc4.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rtmp.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/spectrum_def.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/wsc.h \
    $(wildcard include/config/req.h) \
    $(wildcard include/config/methods.h) \
    $(wildcard include/config/methods/usba.h) \
    $(wildcard include/config/methods/ethernet.h) \
    $(wildcard include/config/methods/label.h) \
    $(wildcard include/config/methods/display.h) \
    $(wildcard include/config/methods/ent.h) \
    $(wildcard include/config/methods/int.h) \
    $(wildcard include/config/methods/nfci.h) \
    $(wildcard include/config/methods/pbc.h) \
    $(wildcard include/config/methods/keypad.h) \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/ap.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/wpa.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/dfs.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/chlist.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/spectrum.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rt_os_util.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/eeprom.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rtmp_mcu.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/rt_os_net.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/chip/chip_id.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/crypt_biginteger.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/crypt_dh.h \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/wsc_tlv.h \
    $(wildcard include/config/error.h) \
    $(wildcard include/config/fail.h) \
  /root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/include/sta_cfg.h \

/root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/os/linux/../../os/linux/rt_symb.o: $(deps_/root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/os/linux/../../os/linux/rt_symb.o)

$(deps_/root/projects/SMP/GPL-1.02.24/core_repos/src/libs/2011_0107_RT3070_RT3370_Linux_STA_v2.5.0.1_DPA/MODULE/os/linux/../../os/linux/rt_symb.o):
