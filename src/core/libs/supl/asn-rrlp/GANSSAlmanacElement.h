/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef	_GANSSAlmanacElement_H_
#define	_GANSSAlmanacElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Almanac-KeplerianSet.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GANSSAlmanacElement_PR {
	GANSSAlmanacElement_PR_NOTHING,	/* No components present */
	GANSSAlmanacElement_PR_keplerianAlmanacSet,
	/* Extensions may appear below */
	
} GANSSAlmanacElement_PR;

/* GANSSAlmanacElement */
typedef struct GANSSAlmanacElement {
	GANSSAlmanacElement_PR present;
	union GANSSAlmanacElement_u {
		Almanac_KeplerianSet_t	 keplerianAlmanacSet;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSAlmanacElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSAlmanacElement;

#ifdef __cplusplus
}
#endif

#endif	/* _GANSSAlmanacElement_H_ */
#include <asn_internal.h>
