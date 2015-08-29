//
//  _   _         ______    _ _ _   _             _ _ _
// | \ | |       |  ____|  | (_) | (_)           | | | |
// |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
// | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
// | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
// |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                           __/ |
//                                          |___/
// 
// This file is auto-generated. Do not edit manually
// 
// Copyright 2013 Automatak LLC
// 
// Automatak LLC (www.automatak.com) licenses this file
// to you under the the Apache License Version 2.0 (the "License"):
// 
// http://www.apache.org/licenses/LICENSE-2.0.html
//

#include "opendnp3/gen/KeyChangeMethod.h"

namespace opendnp3 {

uint8_t KeyChangeMethodToType(KeyChangeMethod arg)
{
  return static_cast<uint8_t>(arg);
}
KeyChangeMethod KeyChangeMethodFromType(uint8_t arg)
{
  switch(arg)
  {
    case(0x3):
      return KeyChangeMethod::AES_128_SHA1_HMAC;
    case(0x4):
      return KeyChangeMethod::AES_256_SHA256_HMAC;
    case(0x5):
      return KeyChangeMethod::AES_256_AES_GMAC;
    case(0x43):
      return KeyChangeMethod::RSA_1024_DSA_SHA1_HMAC_SHA1;
    case(0x44):
      return KeyChangeMethod::RSA_2048_DSA_SHA256_HMAC_SHA256;
    case(0x45):
      return KeyChangeMethod::RSA_3072_DSA_SHA256_HMAC_SHA256;
    case(0x46):
      return KeyChangeMethod::RSA_2048_DSA_SHA256_AES_GMAC;
    case(0x47):
      return KeyChangeMethod::RSA_3072_DSA_SHA256_AES_GMAC;
    default:
      return KeyChangeMethod::UNDEFINED;
  }
}
char const* KeyChangeMethodToString(KeyChangeMethod arg)
{
  switch(arg)
  {
    case(KeyChangeMethod::AES_128_SHA1_HMAC):
      return "AES_128_SHA1_HMAC";
    case(KeyChangeMethod::AES_256_SHA256_HMAC):
      return "AES_256_SHA256_HMAC";
    case(KeyChangeMethod::AES_256_AES_GMAC):
      return "AES_256_AES_GMAC";
    case(KeyChangeMethod::RSA_1024_DSA_SHA1_HMAC_SHA1):
      return "RSA_1024_DSA_SHA1_HMAC_SHA1";
    case(KeyChangeMethod::RSA_2048_DSA_SHA256_HMAC_SHA256):
      return "RSA_2048_DSA_SHA256_HMAC_SHA256";
    case(KeyChangeMethod::RSA_3072_DSA_SHA256_HMAC_SHA256):
      return "RSA_3072_DSA_SHA256_HMAC_SHA256";
    case(KeyChangeMethod::RSA_2048_DSA_SHA256_AES_GMAC):
      return "RSA_2048_DSA_SHA256_AES_GMAC";
    case(KeyChangeMethod::RSA_3072_DSA_SHA256_AES_GMAC):
      return "RSA_3072_DSA_SHA256_AES_GMAC";
    default:
      return "UNDEFINED";
  }
}

}
