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

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1029/Firmware/msg/vehicle_command_ack.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/vehicle_command_ack.h>

constexpr char __orb_vehicle_command_ack_fields[] = "uint64_t timestamp;int32_t result_param2;uint16_t command;uint8_t result;uint8_t from_external;uint8_t result_param1;uint8_t target_system;uint8_t target_component;uint8_t[5] _padding0;";

ORB_DEFINE(vehicle_command_ack, struct vehicle_command_ack_s, 19,
    __orb_vehicle_command_ack_fields);



void serialize_vehicle_command_ack(const struct vehicle_command_ack_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeInt(input->result_param2, microCDRWriter);
	serializeUnsignedShort(input->command, microCDRWriter);
	serializeUnsignedChar(input->result, microCDRWriter);
	serializeUnsignedChar(input->from_external, microCDRWriter);
	serializeUnsignedChar(input->result_param1, microCDRWriter);
	serializeUnsignedChar(input->target_system, microCDRWriter);
	serializeUnsignedChar(input->target_component, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_vehicle_command_ack(struct vehicle_command_ack_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeInt(&output->result_param2, microCDRReader);
	deserializeUnsignedShort(&output->command, microCDRReader);
	deserializeUnsignedChar(&output->result, microCDRReader);
	deserializeUnsignedChar(&output->from_external, microCDRReader);
	deserializeUnsignedChar(&output->result_param1, microCDRReader);
	deserializeUnsignedChar(&output->target_system, microCDRReader);
	deserializeUnsignedChar(&output->target_component, microCDRReader);

}