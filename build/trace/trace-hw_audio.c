/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-hw_audio.h"

uint16_t _TRACE_CS4231_MEM_READL_DREG_DSTATE;
uint16_t _TRACE_CS4231_MEM_READL_REG_DSTATE;
uint16_t _TRACE_CS4231_MEM_WRITEL_REG_DSTATE;
uint16_t _TRACE_CS4231_MEM_WRITEL_DREG_DSTATE;
uint16_t _TRACE_HDA_AUDIO_RUNNING_DSTATE;
uint16_t _TRACE_HDA_AUDIO_FORMAT_DSTATE;
uint16_t _TRACE_HDA_AUDIO_ADJUST_DSTATE;
uint16_t _TRACE_HDA_AUDIO_OVERRUN_DSTATE;
TraceEvent _TRACE_CS4231_MEM_READL_DREG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cs4231_mem_readl_dreg",
    .sstate = TRACE_CS4231_MEM_READL_DREG_ENABLED,
    .dstate = &_TRACE_CS4231_MEM_READL_DREG_DSTATE 
};
TraceEvent _TRACE_CS4231_MEM_READL_REG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cs4231_mem_readl_reg",
    .sstate = TRACE_CS4231_MEM_READL_REG_ENABLED,
    .dstate = &_TRACE_CS4231_MEM_READL_REG_DSTATE 
};
TraceEvent _TRACE_CS4231_MEM_WRITEL_REG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cs4231_mem_writel_reg",
    .sstate = TRACE_CS4231_MEM_WRITEL_REG_ENABLED,
    .dstate = &_TRACE_CS4231_MEM_WRITEL_REG_DSTATE 
};
TraceEvent _TRACE_CS4231_MEM_WRITEL_DREG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cs4231_mem_writel_dreg",
    .sstate = TRACE_CS4231_MEM_WRITEL_DREG_ENABLED,
    .dstate = &_TRACE_CS4231_MEM_WRITEL_DREG_DSTATE 
};
TraceEvent _TRACE_HDA_AUDIO_RUNNING_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "hda_audio_running",
    .sstate = TRACE_HDA_AUDIO_RUNNING_ENABLED,
    .dstate = &_TRACE_HDA_AUDIO_RUNNING_DSTATE 
};
TraceEvent _TRACE_HDA_AUDIO_FORMAT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "hda_audio_format",
    .sstate = TRACE_HDA_AUDIO_FORMAT_ENABLED,
    .dstate = &_TRACE_HDA_AUDIO_FORMAT_DSTATE 
};
TraceEvent _TRACE_HDA_AUDIO_ADJUST_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "hda_audio_adjust",
    .sstate = TRACE_HDA_AUDIO_ADJUST_ENABLED,
    .dstate = &_TRACE_HDA_AUDIO_ADJUST_DSTATE 
};
TraceEvent _TRACE_HDA_AUDIO_OVERRUN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "hda_audio_overrun",
    .sstate = TRACE_HDA_AUDIO_OVERRUN_ENABLED,
    .dstate = &_TRACE_HDA_AUDIO_OVERRUN_DSTATE 
};
TraceEvent *hw_audio_trace_events[] = {
    &_TRACE_CS4231_MEM_READL_DREG_EVENT,
    &_TRACE_CS4231_MEM_READL_REG_EVENT,
    &_TRACE_CS4231_MEM_WRITEL_REG_EVENT,
    &_TRACE_CS4231_MEM_WRITEL_DREG_EVENT,
    &_TRACE_HDA_AUDIO_RUNNING_EVENT,
    &_TRACE_HDA_AUDIO_FORMAT_EVENT,
    &_TRACE_HDA_AUDIO_ADJUST_EVENT,
    &_TRACE_HDA_AUDIO_OVERRUN_EVENT,
  NULL,
};

static void trace_hw_audio_register_events(void)
{
    trace_event_register_group(hw_audio_trace_events);
}
trace_init(trace_hw_audio_register_events)
