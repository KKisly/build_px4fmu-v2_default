/****************************************************************************
 *
 *   Copyright (C) 2013-2016 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1029/Firmware/msg/actuator_armed.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/actuator_armed.h>

constexpr char __orb_actuator_armed_fields[] = "uint64_t timestamp;bool armed;bool prearmed;bool ready_to_arm;bool lockdown;bool manual_lockdown;bool force_failsafe;bool in_esc_calibration_mode;bool soft_stop;";

ORB_DEFINE(actuator_armed, struct actuator_armed_s, 16,
    __orb_actuator_armed_fields);



void serialize_actuator_armed(const struct actuator_armed_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeBool(input->armed, microCDRWriter);
	serializeBool(input->prearmed, microCDRWriter);
	serializeBool(input->ready_to_arm, microCDRWriter);
	serializeBool(input->lockdown, microCDRWriter);
	serializeBool(input->manual_lockdown, microCDRWriter);
	serializeBool(input->force_failsafe, microCDRWriter);
	serializeBool(input->in_esc_calibration_mode, microCDRWriter);
	serializeBool(input->soft_stop, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_actuator_armed(struct actuator_armed_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeBool(&output->armed, microCDRReader);
	deserializeBool(&output->prearmed, microCDRReader);
	deserializeBool(&output->ready_to_arm, microCDRReader);
	deserializeBool(&output->lockdown, microCDRReader);
	deserializeBool(&output->manual_lockdown, microCDRReader);
	deserializeBool(&output->force_failsafe, microCDRReader);
	deserializeBool(&output->in_esc_calibration_mode, microCDRReader);
	deserializeBool(&output->soft_stop, microCDRReader);

}