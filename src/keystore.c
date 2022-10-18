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
			
			0x35, 0x04, 0x78, 0x27, 0x9b, 0x6e, 0xd1, 0x08,
			0xb5, 0x62, 0x43, 0x66, 0x48, 0x29, 0x6b, 0xc7,
			0xb2, 0x3b, 0x2d, 0x3e, 0x82, 0xe5, 0x77, 0x6c,
			0xb5, 0x6b, 0x90, 0x04, 0x4b, 0xbc, 0x4a, 0x26,
			0x30, 0xf3, 0xcc, 0xca, 0x55, 0xfb, 0xa3, 0x4b,
			0x33, 0x65, 0xd6, 0x97, 0xd6, 0x8e, 0x81, 0x50,
			0xe3, 0xb1, 0xb2, 0x78, 0x4a, 0x2d, 0xa9, 0xa8,
			0xb5, 0x12, 0xb8, 0x39, 0xdb, 0xf5, 0xe6, 0x19
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
