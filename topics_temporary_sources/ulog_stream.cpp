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

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1029/Firmware/msg/ulog_stream.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/ulog_stream.h>

constexpr char __orb_ulog_stream_fields[] = "uint64_t timestamp;uint16_t sequence;uint8_t length;uint8_t first_message_offset;uint8_t flags;uint8_t[249] data;uint8_t[2] _padding0;";

ORB_DEFINE(ulog_stream, struct ulog_stream_s, 262,
    __orb_ulog_stream_fields);



void serialize_ulog_stream(const struct ulog_stream_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeUnsignedShort(input->sequence, microCDRWriter);
	serializeUnsignedChar(input->length, microCDRWriter);
	serializeUnsignedChar(input->first_message_offset, microCDRWriter);
	serializeUnsignedChar(input->flags, microCDRWriter);
	serializeUnsignedCharArray(input->data, 249, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_ulog_stream(struct ulog_stream_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeUnsignedShort(&output->sequence, microCDRReader);
	deserializeUnsignedChar(&output->length, microCDRReader);
	deserializeUnsignedChar(&output->first_message_offset, microCDRReader);
	deserializeUnsignedChar(&output->flags, microCDRReader);
	deserializeUnsignedChar(&output->data[0], microCDRReader);
	deserializeUnsignedChar(&output->data[1], microCDRReader);
	deserializeUnsignedChar(&output->data[2], microCDRReader);
	deserializeUnsignedChar(&output->data[3], microCDRReader);
	deserializeUnsignedChar(&output->data[4], microCDRReader);
	deserializeUnsignedChar(&output->data[5], microCDRReader);
	deserializeUnsignedChar(&output->data[6], microCDRReader);
	deserializeUnsignedChar(&output->data[7], microCDRReader);
	deserializeUnsignedChar(&output->data[8], microCDRReader);
	deserializeUnsignedChar(&output->data[9], microCDRReader);
	deserializeUnsignedChar(&output->data[10], microCDRReader);
	deserializeUnsignedChar(&output->data[11], microCDRReader);
	deserializeUnsignedChar(&output->data[12], microCDRReader);
	deserializeUnsignedChar(&output->data[13], microCDRReader);
	deserializeUnsignedChar(&output->data[14], microCDRReader);
	deserializeUnsignedChar(&output->data[15], microCDRReader);
	deserializeUnsignedChar(&output->data[16], microCDRReader);
	deserializeUnsignedChar(&output->data[17], microCDRReader);
	deserializeUnsignedChar(&output->data[18], microCDRReader);
	deserializeUnsignedChar(&output->data[19], microCDRReader);
	deserializeUnsignedChar(&output->data[20], microCDRReader);
	deserializeUnsignedChar(&output->data[21], microCDRReader);
	deserializeUnsignedChar(&output->data[22], microCDRReader);
	deserializeUnsignedChar(&output->data[23], microCDRReader);
	deserializeUnsignedChar(&output->data[24], microCDRReader);
	deserializeUnsignedChar(&output->data[25], microCDRReader);
	deserializeUnsignedChar(&output->data[26], microCDRReader);
	deserializeUnsignedChar(&output->data[27], microCDRReader);
	deserializeUnsignedChar(&output->data[28], microCDRReader);
	deserializeUnsignedChar(&output->data[29], microCDRReader);
	deserializeUnsignedChar(&output->data[30], microCDRReader);
	deserializeUnsignedChar(&output->data[31], microCDRReader);
	deserializeUnsignedChar(&output->data[32], microCDRReader);
	deserializeUnsignedChar(&output->data[33], microCDRReader);
	deserializeUnsignedChar(&output->data[34], microCDRReader);
	deserializeUnsignedChar(&output->data[35], microCDRReader);
	deserializeUnsignedChar(&output->data[36], microCDRReader);
	deserializeUnsignedChar(&output->data[37], microCDRReader);
	deserializeUnsignedChar(&output->data[38], microCDRReader);
	deserializeUnsignedChar(&output->data[39], microCDRReader);
	deserializeUnsignedChar(&output->data[40], microCDRReader);
	deserializeUnsignedChar(&output->data[41], microCDRReader);
	deserializeUnsignedChar(&output->data[42], microCDRReader);
	deserializeUnsignedChar(&output->data[43], microCDRReader);
	deserializeUnsignedChar(&output->data[44], microCDRReader);
	deserializeUnsignedChar(&output->data[45], microCDRReader);
	deserializeUnsignedChar(&output->data[46], microCDRReader);
	deserializeUnsignedChar(&output->data[47], microCDRReader);
	deserializeUnsignedChar(&output->data[48], microCDRReader);
	deserializeUnsignedChar(&output->data[49], microCDRReader);
	deserializeUnsignedChar(&output->data[50], microCDRReader);
	deserializeUnsignedChar(&output->data[51], microCDRReader);
	deserializeUnsignedChar(&output->data[52], microCDRReader);
	deserializeUnsignedChar(&output->data[53], microCDRReader);
	deserializeUnsignedChar(&output->data[54], microCDRReader);
	deserializeUnsignedChar(&output->data[55], microCDRReader);
	deserializeUnsignedChar(&output->data[56], microCDRReader);
	deserializeUnsignedChar(&output->data[57], microCDRReader);
	deserializeUnsignedChar(&output->data[58], microCDRReader);
	deserializeUnsignedChar(&output->data[59], microCDRReader);
	deserializeUnsignedChar(&output->data[60], microCDRReader);
	deserializeUnsignedChar(&output->data[61], microCDRReader);
	deserializeUnsignedChar(&output->data[62], microCDRReader);
	deserializeUnsignedChar(&output->data[63], microCDRReader);
	deserializeUnsignedChar(&output->data[64], microCDRReader);
	deserializeUnsignedChar(&output->data[65], microCDRReader);
	deserializeUnsignedChar(&output->data[66], microCDRReader);
	deserializeUnsignedChar(&output->data[67], microCDRReader);
	deserializeUnsignedChar(&output->data[68], microCDRReader);
	deserializeUnsignedChar(&output->data[69], microCDRReader);
	deserializeUnsignedChar(&output->data[70], microCDRReader);
	deserializeUnsignedChar(&output->data[71], microCDRReader);
	deserializeUnsignedChar(&output->data[72], microCDRReader);
	deserializeUnsignedChar(&output->data[73], microCDRReader);
	deserializeUnsignedChar(&output->data[74], microCDRReader);
	deserializeUnsignedChar(&output->data[75], microCDRReader);
	deserializeUnsignedChar(&output->data[76], microCDRReader);
	deserializeUnsignedChar(&output->data[77], microCDRReader);
	deserializeUnsignedChar(&output->data[78], microCDRReader);
	deserializeUnsignedChar(&output->data[79], microCDRReader);
	deserializeUnsignedChar(&output->data[80], microCDRReader);
	deserializeUnsignedChar(&output->data[81], microCDRReader);
	deserializeUnsignedChar(&output->data[82], microCDRReader);
	deserializeUnsignedChar(&output->data[83], microCDRReader);
	deserializeUnsignedChar(&output->data[84], microCDRReader);
	deserializeUnsignedChar(&output->data[85], microCDRReader);
	deserializeUnsignedChar(&output->data[86], microCDRReader);
	deserializeUnsignedChar(&output->data[87], microCDRReader);
	deserializeUnsignedChar(&output->data[88], microCDRReader);
	deserializeUnsignedChar(&output->data[89], microCDRReader);
	deserializeUnsignedChar(&output->data[90], microCDRReader);
	deserializeUnsignedChar(&output->data[91], microCDRReader);
	deserializeUnsignedChar(&output->data[92], microCDRReader);
	deserializeUnsignedChar(&output->data[93], microCDRReader);
	deserializeUnsignedChar(&output->data[94], microCDRReader);
	deserializeUnsignedChar(&output->data[95], microCDRReader);
	deserializeUnsignedChar(&output->data[96], microCDRReader);
	deserializeUnsignedChar(&output->data[97], microCDRReader);
	deserializeUnsignedChar(&output->data[98], microCDRReader);
	deserializeUnsignedChar(&output->data[99], microCDRReader);
	deserializeUnsignedChar(&output->data[100], microCDRReader);
	deserializeUnsignedChar(&output->data[101], microCDRReader);
	deserializeUnsignedChar(&output->data[102], microCDRReader);
	deserializeUnsignedChar(&output->data[103], microCDRReader);
	deserializeUnsignedChar(&output->data[104], microCDRReader);
	deserializeUnsignedChar(&output->data[105], microCDRReader);
	deserializeUnsignedChar(&output->data[106], microCDRReader);
	deserializeUnsignedChar(&output->data[107], microCDRReader);
	deserializeUnsignedChar(&output->data[108], microCDRReader);
	deserializeUnsignedChar(&output->data[109], microCDRReader);
	deserializeUnsignedChar(&output->data[110], microCDRReader);
	deserializeUnsignedChar(&output->data[111], microCDRReader);
	deserializeUnsignedChar(&output->data[112], microCDRReader);
	deserializeUnsignedChar(&output->data[113], microCDRReader);
	deserializeUnsignedChar(&output->data[114], microCDRReader);
	deserializeUnsignedChar(&output->data[115], microCDRReader);
	deserializeUnsignedChar(&output->data[116], microCDRReader);
	deserializeUnsignedChar(&output->data[117], microCDRReader);
	deserializeUnsignedChar(&output->data[118], microCDRReader);
	deserializeUnsignedChar(&output->data[119], microCDRReader);
	deserializeUnsignedChar(&output->data[120], microCDRReader);
	deserializeUnsignedChar(&output->data[121], microCDRReader);
	deserializeUnsignedChar(&output->data[122], microCDRReader);
	deserializeUnsignedChar(&output->data[123], microCDRReader);
	deserializeUnsignedChar(&output->data[124], microCDRReader);
	deserializeUnsignedChar(&output->data[125], microCDRReader);
	deserializeUnsignedChar(&output->data[126], microCDRReader);
	deserializeUnsignedChar(&output->data[127], microCDRReader);
	deserializeUnsignedChar(&output->data[128], microCDRReader);
	deserializeUnsignedChar(&output->data[129], microCDRReader);
	deserializeUnsignedChar(&output->data[130], microCDRReader);
	deserializeUnsignedChar(&output->data[131], microCDRReader);
	deserializeUnsignedChar(&output->data[132], microCDRReader);
	deserializeUnsignedChar(&output->data[133], microCDRReader);
	deserializeUnsignedChar(&output->data[134], microCDRReader);
	deserializeUnsignedChar(&output->data[135], microCDRReader);
	deserializeUnsignedChar(&output->data[136], microCDRReader);
	deserializeUnsignedChar(&output->data[137], microCDRReader);
	deserializeUnsignedChar(&output->data[138], microCDRReader);
	deserializeUnsignedChar(&output->data[139], microCDRReader);
	deserializeUnsignedChar(&output->data[140], microCDRReader);
	deserializeUnsignedChar(&output->data[141], microCDRReader);
	deserializeUnsignedChar(&output->data[142], microCDRReader);
	deserializeUnsignedChar(&output->data[143], microCDRReader);
	deserializeUnsignedChar(&output->data[144], microCDRReader);
	deserializeUnsignedChar(&output->data[145], microCDRReader);
	deserializeUnsignedChar(&output->data[146], microCDRReader);
	deserializeUnsignedChar(&output->data[147], microCDRReader);
	deserializeUnsignedChar(&output->data[148], microCDRReader);
	deserializeUnsignedChar(&output->data[149], microCDRReader);
	deserializeUnsignedChar(&output->data[150], microCDRReader);
	deserializeUnsignedChar(&output->data[151], microCDRReader);
	deserializeUnsignedChar(&output->data[152], microCDRReader);
	deserializeUnsignedChar(&output->data[153], microCDRReader);
	deserializeUnsignedChar(&output->data[154], microCDRReader);
	deserializeUnsignedChar(&output->data[155], microCDRReader);
	deserializeUnsignedChar(&output->data[156], microCDRReader);
	deserializeUnsignedChar(&output->data[157], microCDRReader);
	deserializeUnsignedChar(&output->data[158], microCDRReader);
	deserializeUnsignedChar(&output->data[159], microCDRReader);
	deserializeUnsignedChar(&output->data[160], microCDRReader);
	deserializeUnsignedChar(&output->data[161], microCDRReader);
	deserializeUnsignedChar(&output->data[162], microCDRReader);
	deserializeUnsignedChar(&output->data[163], microCDRReader);
	deserializeUnsignedChar(&output->data[164], microCDRReader);
	deserializeUnsignedChar(&output->data[165], microCDRReader);
	deserializeUnsignedChar(&output->data[166], microCDRReader);
	deserializeUnsignedChar(&output->data[167], microCDRReader);
	deserializeUnsignedChar(&output->data[168], microCDRReader);
	deserializeUnsignedChar(&output->data[169], microCDRReader);
	deserializeUnsignedChar(&output->data[170], microCDRReader);
	deserializeUnsignedChar(&output->data[171], microCDRReader);
	deserializeUnsignedChar(&output->data[172], microCDRReader);
	deserializeUnsignedChar(&output->data[173], microCDRReader);
	deserializeUnsignedChar(&output->data[174], microCDRReader);
	deserializeUnsignedChar(&output->data[175], microCDRReader);
	deserializeUnsignedChar(&output->data[176], microCDRReader);
	deserializeUnsignedChar(&output->data[177], microCDRReader);
	deserializeUnsignedChar(&output->data[178], microCDRReader);
	deserializeUnsignedChar(&output->data[179], microCDRReader);
	deserializeUnsignedChar(&output->data[180], microCDRReader);
	deserializeUnsignedChar(&output->data[181], microCDRReader);
	deserializeUnsignedChar(&output->data[182], microCDRReader);
	deserializeUnsignedChar(&output->data[183], microCDRReader);
	deserializeUnsignedChar(&output->data[184], microCDRReader);
	deserializeUnsignedChar(&output->data[185], microCDRReader);
	deserializeUnsignedChar(&output->data[186], microCDRReader);
	deserializeUnsignedChar(&output->data[187], microCDRReader);
	deserializeUnsignedChar(&output->data[188], microCDRReader);
	deserializeUnsignedChar(&output->data[189], microCDRReader);
	deserializeUnsignedChar(&output->data[190], microCDRReader);
	deserializeUnsignedChar(&output->data[191], microCDRReader);
	deserializeUnsignedChar(&output->data[192], microCDRReader);
	deserializeUnsignedChar(&output->data[193], microCDRReader);
	deserializeUnsignedChar(&output->data[194], microCDRReader);
	deserializeUnsignedChar(&output->data[195], microCDRReader);
	deserializeUnsignedChar(&output->data[196], microCDRReader);
	deserializeUnsignedChar(&output->data[197], microCDRReader);
	deserializeUnsignedChar(&output->data[198], microCDRReader);
	deserializeUnsignedChar(&output->data[199], microCDRReader);
	deserializeUnsignedChar(&output->data[200], microCDRReader);
	deserializeUnsignedChar(&output->data[201], microCDRReader);
	deserializeUnsignedChar(&output->data[202], microCDRReader);
	deserializeUnsignedChar(&output->data[203], microCDRReader);
	deserializeUnsignedChar(&output->data[204], microCDRReader);
	deserializeUnsignedChar(&output->data[205], microCDRReader);
	deserializeUnsignedChar(&output->data[206], microCDRReader);
	deserializeUnsignedChar(&output->data[207], microCDRReader);
	deserializeUnsignedChar(&output->data[208], microCDRReader);
	deserializeUnsignedChar(&output->data[209], microCDRReader);
	deserializeUnsignedChar(&output->data[210], microCDRReader);
	deserializeUnsignedChar(&output->data[211], microCDRReader);
	deserializeUnsignedChar(&output->data[212], microCDRReader);
	deserializeUnsignedChar(&output->data[213], microCDRReader);
	deserializeUnsignedChar(&output->data[214], microCDRReader);
	deserializeUnsignedChar(&output->data[215], microCDRReader);
	deserializeUnsignedChar(&output->data[216], microCDRReader);
	deserializeUnsignedChar(&output->data[217], microCDRReader);
	deserializeUnsignedChar(&output->data[218], microCDRReader);
	deserializeUnsignedChar(&output->data[219], microCDRReader);
	deserializeUnsignedChar(&output->data[220], microCDRReader);
	deserializeUnsignedChar(&output->data[221], microCDRReader);
	deserializeUnsignedChar(&output->data[222], microCDRReader);
	deserializeUnsignedChar(&output->data[223], microCDRReader);
	deserializeUnsignedChar(&output->data[224], microCDRReader);
	deserializeUnsignedChar(&output->data[225], microCDRReader);
	deserializeUnsignedChar(&output->data[226], microCDRReader);
	deserializeUnsignedChar(&output->data[227], microCDRReader);
	deserializeUnsignedChar(&output->data[228], microCDRReader);
	deserializeUnsignedChar(&output->data[229], microCDRReader);
	deserializeUnsignedChar(&output->data[230], microCDRReader);
	deserializeUnsignedChar(&output->data[231], microCDRReader);
	deserializeUnsignedChar(&output->data[232], microCDRReader);
	deserializeUnsignedChar(&output->data[233], microCDRReader);
	deserializeUnsignedChar(&output->data[234], microCDRReader);
	deserializeUnsignedChar(&output->data[235], microCDRReader);
	deserializeUnsignedChar(&output->data[236], microCDRReader);
	deserializeUnsignedChar(&output->data[237], microCDRReader);
	deserializeUnsignedChar(&output->data[238], microCDRReader);
	deserializeUnsignedChar(&output->data[239], microCDRReader);
	deserializeUnsignedChar(&output->data[240], microCDRReader);
	deserializeUnsignedChar(&output->data[241], microCDRReader);
	deserializeUnsignedChar(&output->data[242], microCDRReader);
	deserializeUnsignedChar(&output->data[243], microCDRReader);
	deserializeUnsignedChar(&output->data[244], microCDRReader);
	deserializeUnsignedChar(&output->data[245], microCDRReader);
	deserializeUnsignedChar(&output->data[246], microCDRReader);
	deserializeUnsignedChar(&output->data[247], microCDRReader);
	deserializeUnsignedChar(&output->data[248], microCDRReader);

}