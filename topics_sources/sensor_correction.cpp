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

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1029/Firmware/msg/sensor_correction.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/sensor_correction.h>

constexpr char __orb_sensor_correction_fields[] = "uint64_t timestamp;float[3] gyro_offset_0;float[3] gyro_scale_0;float[3] gyro_offset_1;float[3] gyro_scale_1;float[3] gyro_offset_2;float[3] gyro_scale_2;float[3] accel_offset_0;float[3] accel_scale_0;float[3] accel_offset_1;float[3] accel_scale_1;float[3] accel_offset_2;float[3] accel_scale_2;float baro_offset_0;float baro_scale_0;float baro_offset_1;float baro_scale_1;float baro_offset_2;float baro_scale_2;uint8_t selected_gyro_instance;uint8_t selected_accel_instance;uint8_t selected_baro_instance;uint8_t[3] gyro_mapping;uint8_t[3] accel_mapping;uint8_t[3] baro_mapping;uint8_t[4] _padding0;";

ORB_DEFINE(sensor_correction, struct sensor_correction_s, 188,
    __orb_sensor_correction_fields);



void serialize_sensor_correction(const struct sensor_correction_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeFloatArray(input->gyro_offset_0, 3, microCDRWriter);
	serializeFloatArray(input->gyro_scale_0, 3, microCDRWriter);
	serializeFloatArray(input->gyro_offset_1, 3, microCDRWriter);
	serializeFloatArray(input->gyro_scale_1, 3, microCDRWriter);
	serializeFloatArray(input->gyro_offset_2, 3, microCDRWriter);
	serializeFloatArray(input->gyro_scale_2, 3, microCDRWriter);
	serializeFloatArray(input->accel_offset_0, 3, microCDRWriter);
	serializeFloatArray(input->accel_scale_0, 3, microCDRWriter);
	serializeFloatArray(input->accel_offset_1, 3, microCDRWriter);
	serializeFloatArray(input->accel_scale_1, 3, microCDRWriter);
	serializeFloatArray(input->accel_offset_2, 3, microCDRWriter);
	serializeFloatArray(input->accel_scale_2, 3, microCDRWriter);
	serializeFloat(input->baro_offset_0, microCDRWriter);
	serializeFloat(input->baro_scale_0, microCDRWriter);
	serializeFloat(input->baro_offset_1, microCDRWriter);
	serializeFloat(input->baro_scale_1, microCDRWriter);
	serializeFloat(input->baro_offset_2, microCDRWriter);
	serializeFloat(input->baro_scale_2, microCDRWriter);
	serializeUnsignedChar(input->selected_gyro_instance, microCDRWriter);
	serializeUnsignedChar(input->selected_accel_instance, microCDRWriter);
	serializeUnsignedChar(input->selected_baro_instance, microCDRWriter);
	serializeUnsignedCharArray(input->gyro_mapping, 3, microCDRWriter);
	serializeUnsignedCharArray(input->accel_mapping, 3, microCDRWriter);
	serializeUnsignedCharArray(input->baro_mapping, 3, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_sensor_correction(struct sensor_correction_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeFloat(&output->gyro_offset_0[0], microCDRReader);
	deserializeFloat(&output->gyro_offset_0[1], microCDRReader);
	deserializeFloat(&output->gyro_offset_0[2], microCDRReader);
	deserializeFloat(&output->gyro_scale_0[0], microCDRReader);
	deserializeFloat(&output->gyro_scale_0[1], microCDRReader);
	deserializeFloat(&output->gyro_scale_0[2], microCDRReader);
	deserializeFloat(&output->gyro_offset_1[0], microCDRReader);
	deserializeFloat(&output->gyro_offset_1[1], microCDRReader);
	deserializeFloat(&output->gyro_offset_1[2], microCDRReader);
	deserializeFloat(&output->gyro_scale_1[0], microCDRReader);
	deserializeFloat(&output->gyro_scale_1[1], microCDRReader);
	deserializeFloat(&output->gyro_scale_1[2], microCDRReader);
	deserializeFloat(&output->gyro_offset_2[0], microCDRReader);
	deserializeFloat(&output->gyro_offset_2[1], microCDRReader);
	deserializeFloat(&output->gyro_offset_2[2], microCDRReader);
	deserializeFloat(&output->gyro_scale_2[0], microCDRReader);
	deserializeFloat(&output->gyro_scale_2[1], microCDRReader);
	deserializeFloat(&output->gyro_scale_2[2], microCDRReader);
	deserializeFloat(&output->accel_offset_0[0], microCDRReader);
	deserializeFloat(&output->accel_offset_0[1], microCDRReader);
	deserializeFloat(&output->accel_offset_0[2], microCDRReader);
	deserializeFloat(&output->accel_scale_0[0], microCDRReader);
	deserializeFloat(&output->accel_scale_0[1], microCDRReader);
	deserializeFloat(&output->accel_scale_0[2], microCDRReader);
	deserializeFloat(&output->accel_offset_1[0], microCDRReader);
	deserializeFloat(&output->accel_offset_1[1], microCDRReader);
	deserializeFloat(&output->accel_offset_1[2], microCDRReader);
	deserializeFloat(&output->accel_scale_1[0], microCDRReader);
	deserializeFloat(&output->accel_scale_1[1], microCDRReader);
	deserializeFloat(&output->accel_scale_1[2], microCDRReader);
	deserializeFloat(&output->accel_offset_2[0], microCDRReader);
	deserializeFloat(&output->accel_offset_2[1], microCDRReader);
	deserializeFloat(&output->accel_offset_2[2], microCDRReader);
	deserializeFloat(&output->accel_scale_2[0], microCDRReader);
	deserializeFloat(&output->accel_scale_2[1], microCDRReader);
	deserializeFloat(&output->accel_scale_2[2], microCDRReader);
	deserializeFloat(&output->baro_offset_0, microCDRReader);
	deserializeFloat(&output->baro_scale_0, microCDRReader);
	deserializeFloat(&output->baro_offset_1, microCDRReader);
	deserializeFloat(&output->baro_scale_1, microCDRReader);
	deserializeFloat(&output->baro_offset_2, microCDRReader);
	deserializeFloat(&output->baro_scale_2, microCDRReader);
	deserializeUnsignedChar(&output->selected_gyro_instance, microCDRReader);
	deserializeUnsignedChar(&output->selected_accel_instance, microCDRReader);
	deserializeUnsignedChar(&output->selected_baro_instance, microCDRReader);
	deserializeUnsignedChar(&output->gyro_mapping[0], microCDRReader);
	deserializeUnsignedChar(&output->gyro_mapping[1], microCDRReader);
	deserializeUnsignedChar(&output->gyro_mapping[2], microCDRReader);
	deserializeUnsignedChar(&output->accel_mapping[0], microCDRReader);
	deserializeUnsignedChar(&output->accel_mapping[1], microCDRReader);
	deserializeUnsignedChar(&output->accel_mapping[2], microCDRReader);
	deserializeUnsignedChar(&output->baro_mapping[0], microCDRReader);
	deserializeUnsignedChar(&output->baro_mapping[1], microCDRReader);
	deserializeUnsignedChar(&output->baro_mapping[2], microCDRReader);

}