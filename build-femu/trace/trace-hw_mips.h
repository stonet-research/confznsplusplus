/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_HW_MIPS_GENERATED_TRACERS_H
#define TRACE_HW_MIPS_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_GT64120_READ_EVENT;
extern TraceEvent _TRACE_GT64120_WRITE_EVENT;
extern TraceEvent _TRACE_GT64120_READ_INTREG_EVENT;
extern TraceEvent _TRACE_GT64120_WRITE_INTREG_EVENT;
extern TraceEvent _TRACE_GT64120_ISD_REMAP_EVENT;
extern uint16_t _TRACE_GT64120_READ_DSTATE;
extern uint16_t _TRACE_GT64120_WRITE_DSTATE;
extern uint16_t _TRACE_GT64120_READ_INTREG_DSTATE;
extern uint16_t _TRACE_GT64120_WRITE_INTREG_DSTATE;
extern uint16_t _TRACE_GT64120_ISD_REMAP_DSTATE;
#define TRACE_GT64120_READ_ENABLED 1
#define TRACE_GT64120_WRITE_ENABLED 1
#define TRACE_GT64120_READ_INTREG_ENABLED 1
#define TRACE_GT64120_WRITE_INTREG_ENABLED 1
#define TRACE_GT64120_ISD_REMAP_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_GT64120_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_GT64120_READ) || \
    false)

static inline void _nocheck__trace_gt64120_read(uint64_t addr, uint64_t value)
{
    if (trace_event_get_state(TRACE_GT64120_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 2 "/home/inhoinno/FEMU/hw/mips/trace-events"
            qemu_log("%d@%zu.%06zu:gt64120_read " "gt64120 read 0x%03"PRIx64" value:0x%08" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 43 "trace/trace-hw_mips.h"
        } else {
#line 2 "/home/inhoinno/FEMU/hw/mips/trace-events"
            qemu_log("gt64120_read " "gt64120 read 0x%03"PRIx64" value:0x%08" PRIx64 "\n", addr, value);
#line 47 "trace/trace-hw_mips.h"
        }
    }
}

static inline void trace_gt64120_read(uint64_t addr, uint64_t value)
{
    if (true) {
        _nocheck__trace_gt64120_read(addr, value);
    }
}

#define TRACE_GT64120_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_GT64120_WRITE) || \
    false)

static inline void _nocheck__trace_gt64120_write(uint64_t addr, uint64_t value)
{
    if (trace_event_get_state(TRACE_GT64120_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 3 "/home/inhoinno/FEMU/hw/mips/trace-events"
            qemu_log("%d@%zu.%06zu:gt64120_write " "gt64120 write 0x%03"PRIx64" value:0x%08" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , addr, value);
#line 74 "trace/trace-hw_mips.h"
        } else {
#line 3 "/home/inhoinno/FEMU/hw/mips/trace-events"
            qemu_log("gt64120_write " "gt64120 write 0x%03"PRIx64" value:0x%08" PRIx64 "\n", addr, value);
#line 78 "trace/trace-hw_mips.h"
        }
    }
}

static inline void trace_gt64120_write(uint64_t addr, uint64_t value)
{
    if (true) {
        _nocheck__trace_gt64120_write(addr, value);
    }
}

#define TRACE_GT64120_READ_INTREG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_GT64120_READ_INTREG) || \
    false)

static inline void _nocheck__trace_gt64120_read_intreg(const char * regname, unsigned size, uint64_t value)
{
    if (trace_event_get_state(TRACE_GT64120_READ_INTREG) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "/home/inhoinno/FEMU/hw/mips/trace-events"
            qemu_log("%d@%zu.%06zu:gt64120_read_intreg " "gt64120 read %s size:%u value:0x%08" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , regname, size, value);
#line 105 "trace/trace-hw_mips.h"
        } else {
#line 4 "/home/inhoinno/FEMU/hw/mips/trace-events"
            qemu_log("gt64120_read_intreg " "gt64120 read %s size:%u value:0x%08" PRIx64 "\n", regname, size, value);
#line 109 "trace/trace-hw_mips.h"
        }
    }
}

static inline void trace_gt64120_read_intreg(const char * regname, unsigned size, uint64_t value)
{
    if (true) {
        _nocheck__trace_gt64120_read_intreg(regname, size, value);
    }
}

#define TRACE_GT64120_WRITE_INTREG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_GT64120_WRITE_INTREG) || \
    false)

static inline void _nocheck__trace_gt64120_write_intreg(const char * regname, unsigned size, uint64_t value)
{
    if (trace_event_get_state(TRACE_GT64120_WRITE_INTREG) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "/home/inhoinno/FEMU/hw/mips/trace-events"
            qemu_log("%d@%zu.%06zu:gt64120_write_intreg " "gt64120 write %s size:%u value:0x%08" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , regname, size, value);
#line 136 "trace/trace-hw_mips.h"
        } else {
#line 5 "/home/inhoinno/FEMU/hw/mips/trace-events"
            qemu_log("gt64120_write_intreg " "gt64120 write %s size:%u value:0x%08" PRIx64 "\n", regname, size, value);
#line 140 "trace/trace-hw_mips.h"
        }
    }
}

static inline void trace_gt64120_write_intreg(const char * regname, unsigned size, uint64_t value)
{
    if (true) {
        _nocheck__trace_gt64120_write_intreg(regname, size, value);
    }
}

#define TRACE_GT64120_ISD_REMAP_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_GT64120_ISD_REMAP) || \
    false)

static inline void _nocheck__trace_gt64120_isd_remap(uint64_t from_length, uint64_t from_addr, uint64_t to_length, uint64_t to_addr)
{
    if (trace_event_get_state(TRACE_GT64120_ISD_REMAP) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "/home/inhoinno/FEMU/hw/mips/trace-events"
            qemu_log("%d@%zu.%06zu:gt64120_isd_remap " "ISD: 0x%08" PRIx64 "@0x%08" PRIx64 " -> 0x%08" PRIx64 "@0x%08" PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , from_length, from_addr, to_length, to_addr);
#line 167 "trace/trace-hw_mips.h"
        } else {
#line 6 "/home/inhoinno/FEMU/hw/mips/trace-events"
            qemu_log("gt64120_isd_remap " "ISD: 0x%08" PRIx64 "@0x%08" PRIx64 " -> 0x%08" PRIx64 "@0x%08" PRIx64 "\n", from_length, from_addr, to_length, to_addr);
#line 171 "trace/trace-hw_mips.h"
        }
    }
}

static inline void trace_gt64120_isd_remap(uint64_t from_length, uint64_t from_addr, uint64_t to_length, uint64_t to_addr)
{
    if (true) {
        _nocheck__trace_gt64120_isd_remap(from_length, from_addr, to_length, to_addr);
    }
}
#endif /* TRACE_HW_MIPS_GENERATED_TRACERS_H */
