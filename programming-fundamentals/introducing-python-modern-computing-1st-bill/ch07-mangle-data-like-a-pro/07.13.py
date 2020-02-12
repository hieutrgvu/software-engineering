# 7.13 The bytes in gif define a one-pixel transparent GIF file, one of the
# most common graphics file formats. A legal GIF starts with the string GIF89a.
# Does gif match this?

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

import binascii
hex_str = '47494638396101000100800000000000ffffff21f9' \
    + '0401000000002c000000000100010000020144003b'
gif = binascii.unhexlify(hex_str)
print(gif[:6] == b'GIF89a')
print(gif)
