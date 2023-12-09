# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VMatrix.mk for the caller.

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
	VMatrix \
	VMatrix__1 \
	VMatrix__2 \
	VMatrix__3 \
	VMatrix_PathFinder \
	VMatrix_PathFinder__1 \
	VMatrix_PathFinder__2 \
	VMatrix_PathFinder__3 \
	VMatrix_PathFinder__4 \
	VMatrix_PathFinder__5 \
	VMatrix_PathFinder__6 \
	VMatrix_PathFinder__7 \
	VMatrix_PathFinder__8 \
	VMatrix_PathFinder__9 \
	VMatrix_PathFinder__10 \
	VMatrix_PathFinder__11 \
	VMatrix_PathFinder__12 \
	VMatrix_PathFinder__13 \
	VMatrix_PathFinder__14 \
	VMatrix_PathFinder__15 \
	VMatrix_PathFinder__16 \
	VMatrix_PathFinder__17 \
	VMatrix_PathFinder__18 \
	VMatrix_PathFinder__19 \
	VMatrix_PathFinder__20 \
	VMatrix_PathFinder__21 \
	VMatrix_flexdpecom4 \
	VMatrix_flexdpecom4__1 \
	VMatrix_stationary \
	VMatrix_stationary__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VMatrix__Slow \
	VMatrix__1__Slow \
	VMatrix_PathFinder__Slow \
	VMatrix_PathFinder__1__Slow \
	VMatrix_PathFinder__2__Slow \
	VMatrix_PathFinder__3__Slow \
	VMatrix_PathFinder__4__Slow \
	VMatrix_PathFinder__5__Slow \
	VMatrix_PathFinder__6__Slow \
	VMatrix_PathFinder__7__Slow \
	VMatrix_PathFinder__8__Slow \
	VMatrix_flexdpecom4__Slow \
	VMatrix_flexdpecom4__1__Slow \
	VMatrix_stationary__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VMatrix__Trace \
	VMatrix__Trace__1 \
	VMatrix__Trace__2 \
	VMatrix__Trace__3 \
	VMatrix__Trace__4 \
	VMatrix__Trace__5 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VMatrix__Syms \
	VMatrix__Trace__Slow \
	VMatrix__Trace__1__Slow \
	VMatrix__Trace__2__Slow \
	VMatrix__Trace__3__Slow \
	VMatrix__Trace__4__Slow \
	VMatrix__Trace__5__Slow \
	VMatrix__Trace__6__Slow \
	VMatrix__Trace__7__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
