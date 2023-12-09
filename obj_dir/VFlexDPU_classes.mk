# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VFlexDPU.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VFlexDPU \
	VFlexDPU__1 \
	VFlexDPU__2 \
	VFlexDPU_PathFinder \
	VFlexDPU_PathFinder__1 \
	VFlexDPU_PathFinder__2 \
	VFlexDPU_PathFinder__3 \
	VFlexDPU_PathFinder__4 \
	VFlexDPU_PathFinder__5 \
	VFlexDPU_PathFinder__6 \
	VFlexDPU_PathFinder__7 \
	VFlexDPU_PathFinder__8 \
	VFlexDPU_PathFinder__9 \
	VFlexDPU_PathFinder__10 \
	VFlexDPU_PathFinder__11 \
	VFlexDPU_PathFinder__12 \
	VFlexDPU_PathFinder__13 \
	VFlexDPU_PathFinder__14 \
	VFlexDPU_PathFinder__15 \
	VFlexDPU_PathFinder__16 \
	VFlexDPU_PathFinder__17 \
	VFlexDPU_PathFinder__18 \
	VFlexDPU_PathFinder__19 \
	VFlexDPU_flexdpecom4 \
	VFlexDPU_flexdpecom4__1 \
	VFlexDPU_flexdpecom4__2 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VFlexDPU__Slow \
	VFlexDPU__1__Slow \
	VFlexDPU_PathFinder__Slow \
	VFlexDPU_PathFinder__1__Slow \
	VFlexDPU_PathFinder__2__Slow \
	VFlexDPU_PathFinder__3__Slow \
	VFlexDPU_PathFinder__4__Slow \
	VFlexDPU_PathFinder__5__Slow \
	VFlexDPU_PathFinder__6__Slow \
	VFlexDPU_PathFinder__7__Slow \
	VFlexDPU_PathFinder__8__Slow \
	VFlexDPU_flexdpecom4__Slow \
	VFlexDPU_flexdpecom4__1__Slow \
	VFlexDPU_flexdpecom4__2__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VFlexDPU__Trace \
	VFlexDPU__Trace__1 \
	VFlexDPU__Trace__2 \
	VFlexDPU__Trace__3 \
	VFlexDPU__Trace__4 \
	VFlexDPU__Trace__5 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VFlexDPU__Syms \
	VFlexDPU__Trace__Slow \
	VFlexDPU__Trace__1__Slow \
	VFlexDPU__Trace__2__Slow \
	VFlexDPU__Trace__3__Slow \
	VFlexDPU__Trace__4__Slow \
	VFlexDPU__Trace__5__Slow \
	VFlexDPU__Trace__6__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
