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

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1029/Firmware/msg/vehicle_local_position_setpoint.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/vehicle_local_position_setpoint.h>

constexpr char __orb_vehicle_local_position_setpoint_fields[] = "uint64_t timestamp;float x;float y;float z;float yaw;float vx;float vy;float vz;float acc_x;float acc_y;float acc_z;";

ORB_DEFINE(vehicle_local_position_setpoint, struct vehicle_local_position_setpoint_s, 48,
    __orb_vehicle_local_position_setpoint_fields);



void serialize_vehicle_local_position_setpoint(const struct vehicle_local_position_setpoint_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeFloat(input->x, microCDRWriter);
	serializeFloat(input->y, microCDRWriter);
	serializeFloat(input->z, microCDRWriter);
	serializeFloat(input->yaw, microCDRWriter);
	serializeFloat(input->vx, microCDRWriter);
	serializeFloat(input->vy, microCDRWriter);
	serializeFloat(input->vz, microCDRWriter);
	serializeFloat(input->acc_x, microCDRWriter);
	serializeFloat(input->acc_y, microCDRWriter);
	serializeFloat(input->acc_z, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_vehicle_local_position_setpoint(struct vehicle_local_position_setpoint_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeFloat(&output->x, microCDRReader);
	deserializeFloat(&output->y, microCDRReader);
	deserializeFloat(&output->z, microCDRReader);
	deserializeFloat(&output->yaw, microCDRReader);
	deserializeFloat(&output->vx, microCDRReader);
	deserializeFloat(&output->vy, microCDRReader);
	deserializeFloat(&output->vz, microCDRReader);
	deserializeFloat(&output->acc_x, microCDRReader);
	deserializeFloat(&output->acc_y, microCDRReader);
	deserializeFloat(&output->acc_z, microCDRReader);

}