# 7.12 Use unhexlify to convert this hex string (combined from two strings to
# fit on a page) to a bytes variable called gif:
#
# '47494638396101000100800000000000ffffff21f9' +
# '0401000000002c000000000100010000020144003b'

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

import binascii
hex_str = '47494638396101000100800000000000ffffff21f9' \
    + '0401000000002c000000000100010000020144003b'
gif = binascii.unhexlify(hex_str)
print(type(gif))
print(gif)
