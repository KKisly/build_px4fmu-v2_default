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

/* Auto-generated by genmsg_cpp from file /home/intrepid/src1029/Firmware/msg/tecs_status.msg */


#include <px4_config.h>
#include <drivers/drv_orb_dev.h>
#include <microcdr/microCdr.h>
#include <uORB/topics/tecs_status.h>

constexpr char __orb_tecs_status_fields[] = "uint64_t timestamp;float altitudeSp;float altitude_filtered;float flightPathAngleSp;float flightPathAngle;float flightPathAngleFiltered;float airspeedSp;float airspeed_filtered;float airspeedDerivativeSp;float airspeedDerivative;float totalEnergyError;float energyDistributionError;float totalEnergyRateError;float energyDistributionRateError;float throttle_integ;float pitch_integ;uint8_t mode;uint8_t[3] _padding0;";

ORB_DEFINE(tecs_status, struct tecs_status_s, 69,
    __orb_tecs_status_fields);



void serialize_tecs_status(const struct tecs_status_s *input, char *output, uint32_t *length, struct microCDR *microCDRWriter)
{
    if (nullptr == input || nullptr == output || nullptr == length || nullptr == microCDRWriter) return;

    resetStaticMicroCDRForSerialize(microCDRWriter);

	serializeFloat(input->altitudeSp, microCDRWriter);
	serializeFloat(input->altitude_filtered, microCDRWriter);
	serializeFloat(input->flightPathAngleSp, microCDRWriter);
	serializeFloat(input->flightPathAngle, microCDRWriter);
	serializeFloat(input->flightPathAngleFiltered, microCDRWriter);
	serializeFloat(input->airspeedSp, microCDRWriter);
	serializeFloat(input->airspeed_filtered, microCDRWriter);
	serializeFloat(input->airspeedDerivativeSp, microCDRWriter);
	serializeFloat(input->airspeedDerivative, microCDRWriter);
	serializeFloat(input->totalEnergyError, microCDRWriter);
	serializeFloat(input->energyDistributionError, microCDRWriter);
	serializeFloat(input->totalEnergyRateError, microCDRWriter);
	serializeFloat(input->energyDistributionRateError, microCDRWriter);
	serializeFloat(input->throttle_integ, microCDRWriter);
	serializeFloat(input->pitch_integ, microCDRWriter);
	serializeUnsignedChar(input->mode, microCDRWriter);


    (*length) = microCDRWriter->m_microBuffer->m_serializedBuffer;
}

void deserialize_tecs_status(struct tecs_status_s *output, char *input, struct microCDR *microCDRReader)
{
    if (nullptr == output || nullptr == input || nullptr == microCDRReader) return;

    resetStaticMicroCDRForDeserialize(microCDRReader);

	deserializeFloat(&output->altitudeSp, microCDRReader);
	deserializeFloat(&output->altitude_filtered, microCDRReader);
	deserializeFloat(&output->flightPathAngleSp, microCDRReader);
	deserializeFloat(&output->flightPathAngle, microCDRReader);
	deserializeFloat(&output->flightPathAngleFiltered, microCDRReader);
	deserializeFloat(&output->airspeedSp, microCDRReader);
	deserializeFloat(&output->airspeed_filtered, microCDRReader);
	deserializeFloat(&output->airspeedDerivativeSp, microCDRReader);
	deserializeFloat(&output->airspeedDerivative, microCDRReader);
	deserializeFloat(&output->totalEnergyError, microCDRReader);
	deserializeFloat(&output->energyDistributionError, microCDRReader);
	deserializeFloat(&output->totalEnergyRateError, microCDRReader);
	deserializeFloat(&output->energyDistributionRateError, microCDRReader);
	deserializeFloat(&output->throttle_integ, microCDRReader);
	deserializeFloat(&output->pitch_integ, microCDRReader);
	deserializeUnsignedChar(&output->mode, microCDRReader);

}