/* Keystore file for wolfBoot, automatically generated. Do not edit.  */
/*
 * This file has been generated and contains the public keys
 * used by wolfBoot to verify the updates.
 */
#include <stdint.h>
#include "wolfboot/wolfboot.h"
#ifdef WOLFBOOT_NO_SIGN
	#define NUM_PUBKEYS 0
#else

#if (KEYSTORE_PUBKEY_SIZE != KEYSTORE_PUBKEY_SIZE_ECC256)
	#error Key algorithm mismatch. Remove old keys via 'make distclean'
#else
#define NUM_PUBKEYS 1
const struct keystore_slot PubKeys[NUM_PUBKEYS] = {

	 /* Key associated to file 'wolfboot_signing_private_key.der' */
	{
		.slot_id = 0,
		.key_type = AUTH_KEY_ECC256,
		.part_id_mask = KEY_VERIFY_ALL,
		.pubkey_size = KEYSTORE_PUBKEY_SIZE_ECC256,
		.pubkey = {
			
			0x36, 0x9c, 0xba, 0x02, 0x72, 0x09, 0xd7, 0x1f,
			0xb2, 0x3d, 0xb9, 0x8d, 0x14, 0x15, 0x1c, 0xd8,
			0xbb, 0x29, 0x80, 0x9b, 0x1a, 0xd7, 0x78, 0xf0,
			0x46, 0xdc, 0x60, 0x1f, 0x0e, 0xcb, 0xea, 0x6e,
			0xdc, 0x26, 0xa6, 0x05, 0x73, 0x28, 0x6a, 0x5f,
			0x49, 0xe4, 0x51, 0x2f, 0xf2, 0xe6, 0x81, 0x1e,
			0x0f, 0x30, 0x56, 0x5a, 0xeb, 0x2c, 0x52, 0x77,
			0x08, 0xbc, 0x45, 0x9e, 0xd3, 0xfb, 0xd6, 0xfa
		},
	},


};

int keystore_num_pubkeys(void)
{
    return NUM_PUBKEYS;
}

uint8_t *keystore_get_buffer(int id)
{
    if (id >= keystore_num_pubkeys())
        return (uint8_t *)0;
    return (uint8_t *)PubKeys[id].pubkey;
}

int keystore_get_size(int id)
{
    if (id >= keystore_num_pubkeys())
        return -1;
    return (int)PubKeys[id].pubkey_size;
}

uint32_t keystore_get_mask(int id)
{
    if (id >= keystore_num_pubkeys())
        return -1;
    return (int)PubKeys[id].part_id_mask;
}

#endif /* Keystore public key size check */
#endif /* WOLFBOOT_NO_SIGN */
