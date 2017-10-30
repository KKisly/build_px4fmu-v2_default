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

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1029/Firmware/msg/optical_flow.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/optical_flow.h>

constexpr char __orb_optical_flow_fields[] = "uint64_t timestamp;float pixel_flow_x_integral;float pixel_flow_y_integral;float gyro_x_rate_integral;float gyro_y_rate_integral;float gyro_z_rate_integral;float ground_distance_m;uint32_t integration_timespan;uint32_t time_since_last_sonar_update;uint16_t frame_count_since_last_readout;int16_t gyro_temperature;uint8_t sensor_id;uint8_t quality;uint8_t[2] _padding0;";

ORB_DEFINE(optical_flow, struct optical_flow_s, 46,
    __orb_optical_flow_fields);



void serialize_optical_flow(const struct optical_flow_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeFloat(input->pixel_flow_x_integral, microCDRWriter);
	serializeFloat(input->pixel_flow_y_integral, microCDRWriter);
	serializeFloat(input->gyro_x_rate_integral, microCDRWriter);
	serializeFloat(input->gyro_y_rate_integral, microCDRWriter);
	serializeFloat(input->gyro_z_rate_integral, microCDRWriter);
	serializeFloat(input->ground_distance_m, microCDRWriter);
	serializeUnsignedInt(input->integration_timespan, microCDRWriter);
	serializeUnsignedInt(input->time_since_last_sonar_update, microCDRWriter);
	serializeUnsignedShort(input->frame_count_since_last_readout, microCDRWriter);
	serializeShort(input->gyro_temperature, microCDRWriter);
	serializeUnsignedChar(input->sensor_id, microCDRWriter);
	serializeUnsignedChar(input->quality, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_optical_flow(struct optical_flow_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeFloat(&output->pixel_flow_x_integral, microCDRReader);
	deserializeFloat(&output->pixel_flow_y_integral, microCDRReader);
	deserializeFloat(&output->gyro_x_rate_integral, microCDRReader);
	deserializeFloat(&output->gyro_y_rate_integral, microCDRReader);
	deserializeFloat(&output->gyro_z_rate_integral, microCDRReader);
	deserializeFloat(&output->ground_distance_m, microCDRReader);
	deserializeUnsignedInt(&output->integration_timespan, microCDRReader);
	deserializeUnsignedInt(&output->time_since_last_sonar_update, microCDRReader);
	deserializeUnsignedShort(&output->frame_count_since_last_readout, microCDRReader);
	deserializeShort(&output->gyro_temperature, microCDRReader);
	deserializeUnsignedChar(&output->sensor_id, microCDRReader);
	deserializeUnsignedChar(&output->quality, microCDRReader);

}