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

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1029/Firmware/msg/rc_channels.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/rc_channels.h>

constexpr char __orb_rc_channels_fields[] = "uint64_t timestamp;uint64_t timestamp_last_valid;float[18] channels;uint32_t frame_drop_count;uint8_t channel_count;int8_t[26] function;uint8_t rssi;bool signal_lost;uint8_t[7] _padding0;";

ORB_DEFINE(rc_channels, struct rc_channels_s, 121,
    __orb_rc_channels_fields);



void serialize_rc_channels(const struct rc_channels_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeUnsignedLong(input->timestamp_last_valid, microCDRWriter);
	serializeFloatArray(input->channels, 18, microCDRWriter);
	serializeUnsignedInt(input->frame_drop_count, microCDRWriter);
	serializeUnsignedChar(input->channel_count, microCDRWriter);
	serializeSignedCharArray(input->function, 26, microCDRWriter);
	serializeUnsignedChar(input->rssi, microCDRWriter);
	serializeBool(input->signal_lost, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_rc_channels(struct rc_channels_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeUnsignedLong(&output->timestamp_last_valid, microCDRReader);
	deserializeFloat(&output->channels[0], microCDRReader);
	deserializeFloat(&output->channels[1], microCDRReader);
	deserializeFloat(&output->channels[2], microCDRReader);
	deserializeFloat(&output->channels[3], microCDRReader);
	deserializeFloat(&output->channels[4], microCDRReader);
	deserializeFloat(&output->channels[5], microCDRReader);
	deserializeFloat(&output->channels[6], microCDRReader);
	deserializeFloat(&output->channels[7], microCDRReader);
	deserializeFloat(&output->channels[8], microCDRReader);
	deserializeFloat(&output->channels[9], microCDRReader);
	deserializeFloat(&output->channels[10], microCDRReader);
	deserializeFloat(&output->channels[11], microCDRReader);
	deserializeFloat(&output->channels[12], microCDRReader);
	deserializeFloat(&output->channels[13], microCDRReader);
	deserializeFloat(&output->channels[14], microCDRReader);
	deserializeFloat(&output->channels[15], microCDRReader);
	deserializeFloat(&output->channels[16], microCDRReader);
	deserializeFloat(&output->channels[17], microCDRReader);
	deserializeUnsignedInt(&output->frame_drop_count, microCDRReader);
	deserializeUnsignedChar(&output->channel_count, microCDRReader);
	deserializeSignedChar(&output->function[0], microCDRReader);
	deserializeSignedChar(&output->function[1], microCDRReader);
	deserializeSignedChar(&output->function[2], microCDRReader);
	deserializeSignedChar(&output->function[3], microCDRReader);
	deserializeSignedChar(&output->function[4], microCDRReader);
	deserializeSignedChar(&output->function[5], microCDRReader);
	deserializeSignedChar(&output->function[6], microCDRReader);
	deserializeSignedChar(&output->function[7], microCDRReader);
	deserializeSignedChar(&output->function[8], microCDRReader);
	deserializeSignedChar(&output->function[9], microCDRReader);
	deserializeSignedChar(&output->function[10], microCDRReader);
	deserializeSignedChar(&output->function[11], microCDRReader);
	deserializeSignedChar(&output->function[12], microCDRReader);
	deserializeSignedChar(&output->function[13], microCDRReader);
	deserializeSignedChar(&output->function[14], microCDRReader);
	deserializeSignedChar(&output->function[15], microCDRReader);
	deserializeSignedChar(&output->function[16], microCDRReader);
	deserializeSignedChar(&output->function[17], microCDRReader);
	deserializeSignedChar(&output->function[18], microCDRReader);
	deserializeSignedChar(&output->function[19], microCDRReader);
	deserializeSignedChar(&output->function[20], microCDRReader);
	deserializeSignedChar(&output->function[21], microCDRReader);
	deserializeSignedChar(&output->function[22], microCDRReader);
	deserializeSignedChar(&output->function[23], microCDRReader);
	deserializeSignedChar(&output->function[24], microCDRReader);
	deserializeSignedChar(&output->function[25], microCDRReader);
	deserializeUnsignedChar(&output->rssi, microCDRReader);
	deserializeBool(&output->signal_lost, microCDRReader);

}