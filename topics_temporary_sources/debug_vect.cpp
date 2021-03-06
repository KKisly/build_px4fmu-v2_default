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

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1029/Firmware/msg/debug_vect.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/debug_vect.h>

constexpr char __orb_debug_vect_fields[] = "uint64_t timestamp;uint64_t timestamp_us;float x;float y;float z;char[10] name;uint8_t[2] _padding0;";

ORB_DEFINE(debug_vect, struct debug_vect_s, 38,
    __orb_debug_vect_fields);



void serialize_debug_vect(const struct debug_vect_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeUnsignedLong(input->timestamp_us, microCDRWriter);
	serializeFloat(input->x, microCDRWriter);
	serializeFloat(input->y, microCDRWriter);
	serializeFloat(input->z, microCDRWriter);
	serializeCharArray(input->name, 10, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_debug_vect(struct debug_vect_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeUnsignedLong(&output->timestamp_us, microCDRReader);
	deserializeFloat(&output->x, microCDRReader);
	deserializeFloat(&output->y, microCDRReader);
	deserializeFloat(&output->z, microCDRReader);
	deserializeChar(&output->name[0], microCDRReader);
	deserializeChar(&output->name[1], microCDRReader);
	deserializeChar(&output->name[2], microCDRReader);
	deserializeChar(&output->name[3], microCDRReader);
	deserializeChar(&output->name[4], microCDRReader);
	deserializeChar(&output->name[5], microCDRReader);
	deserializeChar(&output->name[6], microCDRReader);
	deserializeChar(&output->name[7], microCDRReader);
	deserializeChar(&output->name[8], microCDRReader);
	deserializeChar(&output->name[9], microCDRReader);

}