# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTop.mk for the caller.

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
	VTop \
	VTop__1 \
	VTop__2 \
	VTop_PathFinder \
	VTop_PathFinder__1 \
	VTop_PathFinder__2 \
	VTop_PathFinder__3 \
	VTop_PathFinder__4 \
	VTop_PathFinder__5 \
	VTop_PathFinder__6 \
	VTop_PathFinder__7 \
	VTop_PathFinder__8 \
	VTop_PathFinder__9 \
	VTop_PathFinder__10 \
	VTop_PathFinder__11 \
	VTop_PathFinder__12 \
	VTop_PathFinder__13 \
	VTop_PathFinder__14 \
	VTop_PathFinder__15 \
	VTop_PathFinder__16 \
	VTop_flexdpecom4 \
	VTop_flexdpecom4__1 \
	VTop_flexdpecom4__2 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VTop__Slow \
	VTop__1__Slow \
	VTop_PathFinder__Slow \
	VTop_PathFinder__1__Slow \
	VTop_PathFinder__2__Slow \
	VTop_PathFinder__3__Slow \
	VTop_PathFinder__4__Slow \
	VTop_PathFinder__5__Slow \
	VTop_PathFinder__6__Slow \
	VTop_PathFinder__7__Slow \
	VTop_PathFinder__8__Slow \
	VTop_PathFinder__9__Slow \
	VTop_flexdpecom4__Slow \
	VTop_flexdpecom4__1__Slow \
	VTop_flexdpecom4__2__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VTop__Trace \
	VTop__Trace__1 \
	VTop__Trace__2 \
	VTop__Trace__3 \
	VTop__Trace__4 \
	VTop__Trace__5 \
	VTop__Trace__6 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTop__Syms \
	VTop__Trace__Slow \
	VTop__Trace__1__Slow \
	VTop__Trace__2__Slow \
	VTop__Trace__3__Slow \
	VTop__Trace__4__Slow \
	VTop__Trace__5__Slow \
	VTop__Trace__6__Slow \
	VTop__Trace__7__Slow \
	VTop__Trace__8__Slow \
	VTop__Trace__9__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
