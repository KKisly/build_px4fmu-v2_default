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

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1029/Firmware/msg/distance_sensor.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/distance_sensor.h>

constexpr char __orb_distance_sensor_fields[] = "uint64_t timestamp;float min_distance;float max_distance;float current_distance;float covariance;uint8_t type;uint8_t id;uint8_t orientation;uint8_t[5] _padding0;";

ORB_DEFINE(distance_sensor, struct distance_sensor_s, 27,
    __orb_distance_sensor_fields);



void serialize_distance_sensor(const struct distance_sensor_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeFloat(input->min_distance, microCDRWriter);
	serializeFloat(input->max_distance, microCDRWriter);
	serializeFloat(input->current_distance, microCDRWriter);
	serializeFloat(input->covariance, microCDRWriter);
	serializeUnsignedChar(input->type, microCDRWriter);
	serializeUnsignedChar(input->id, microCDRWriter);
	serializeUnsignedChar(input->orientation, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_distance_sensor(struct distance_sensor_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeFloat(&output->min_distance, microCDRReader);
	deserializeFloat(&output->max_distance, microCDRReader);
	deserializeFloat(&output->current_distance, microCDRReader);
	deserializeFloat(&output->covariance, microCDRReader);
	deserializeUnsignedChar(&output->type, microCDRReader);
	deserializeUnsignedChar(&output->id, microCDRReader);
	deserializeUnsignedChar(&output->orientation, microCDRReader);

}