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

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1029/Firmware/msg/transponder_report.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/transponder_report.h>

constexpr char __orb_transponder_report_fields[] = "uint64_t timestamp;double lat;double lon;uint32_t ICAO_address;float altitude;float heading;float hor_velocity;float ver_velocity;uint16_t flags;uint16_t squawk;uint8_t altitude_type;char[9] callsign;uint8_t emitter_type;uint8_t tslc;uint8_t[4] _padding0;";

ORB_DEFINE(transponder_report, struct transponder_report_s, 60,
    __orb_transponder_report_fields);



void serialize_transponder_report(const struct transponder_report_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeDouble(input->lat, microCDRWriter);
	serializeDouble(input->lon, microCDRWriter);
	serializeUnsignedInt(input->ICAO_address, microCDRWriter);
	serializeFloat(input->altitude, microCDRWriter);
	serializeFloat(input->heading, microCDRWriter);
	serializeFloat(input->hor_velocity, microCDRWriter);
	serializeFloat(input->ver_velocity, microCDRWriter);
	serializeUnsignedShort(input->flags, microCDRWriter);
	serializeUnsignedShort(input->squawk, microCDRWriter);
	serializeUnsignedChar(input->altitude_type, microCDRWriter);
	serializeCharArray(input->callsign, 9, microCDRWriter);
	serializeUnsignedChar(input->emitter_type, microCDRWriter);
	serializeUnsignedChar(input->tslc, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_transponder_report(struct transponder_report_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeDouble(&output->lat, microCDRReader);
	deserializeDouble(&output->lon, microCDRReader);
	deserializeUnsignedInt(&output->ICAO_address, microCDRReader);
	deserializeFloat(&output->altitude, microCDRReader);
	deserializeFloat(&output->heading, microCDRReader);
	deserializeFloat(&output->hor_velocity, microCDRReader);
	deserializeFloat(&output->ver_velocity, microCDRReader);
	deserializeUnsignedShort(&output->flags, microCDRReader);
	deserializeUnsignedShort(&output->squawk, microCDRReader);
	deserializeUnsignedChar(&output->altitude_type, microCDRReader);
	deserializeChar(&output->callsign[0], microCDRReader);
	deserializeChar(&output->callsign[1], microCDRReader);
	deserializeChar(&output->callsign[2], microCDRReader);
	deserializeChar(&output->callsign[3], microCDRReader);
	deserializeChar(&output->callsign[4], microCDRReader);
	deserializeChar(&output->callsign[5], microCDRReader);
	deserializeChar(&output->callsign[6], microCDRReader);
	deserializeChar(&output->callsign[7], microCDRReader);
	deserializeChar(&output->callsign[8], microCDRReader);
	deserializeUnsignedChar(&output->emitter_type, microCDRReader);
	deserializeUnsignedChar(&output->tslc, microCDRReader);

}