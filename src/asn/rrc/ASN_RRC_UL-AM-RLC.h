/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_UL_AM_RLC_H_
#define	_ASN_RRC_UL_AM_RLC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_RRC_SN-FieldLengthAM.h"
#include "ASN_RRC_T-PollRetransmit.h"
#include "ASN_RRC_PollPDU.h"
#include "ASN_RRC_PollByte.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_UL_AM_RLC__maxRetxThreshold {
	ASN_RRC_UL_AM_RLC__maxRetxThreshold_t1	= 0,
	ASN_RRC_UL_AM_RLC__maxRetxThreshold_t2	= 1,
	ASN_RRC_UL_AM_RLC__maxRetxThreshold_t3	= 2,
	ASN_RRC_UL_AM_RLC__maxRetxThreshold_t4	= 3,
	ASN_RRC_UL_AM_RLC__maxRetxThreshold_t6	= 4,
	ASN_RRC_UL_AM_RLC__maxRetxThreshold_t8	= 5,
	ASN_RRC_UL_AM_RLC__maxRetxThreshold_t16	= 6,
	ASN_RRC_UL_AM_RLC__maxRetxThreshold_t32	= 7
} e_ASN_RRC_UL_AM_RLC__maxRetxThreshold;

/* ASN_RRC_UL-AM-RLC */
typedef struct ASN_RRC_UL_AM_RLC {
	ASN_RRC_SN_FieldLengthAM_t	*sn_FieldLength;	/* OPTIONAL */
	ASN_RRC_T_PollRetransmit_t	 t_PollRetransmit;
	ASN_RRC_PollPDU_t	 pollPDU;
	ASN_RRC_PollByte_t	 pollByte;
	long	 maxRetxThreshold;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_UL_AM_RLC_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_maxRetxThreshold_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_UL_AM_RLC;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_UL_AM_RLC_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_UL_AM_RLC_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_UL_AM_RLC_H_ */
#include <asn_internal.h>