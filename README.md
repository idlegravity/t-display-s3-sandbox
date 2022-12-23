# t-display-s3-sandbox

A simple project demonstrating the configuration of the LILYGO T-Display-S3 in PlatformIO.

## Notes

I haven't had any luck getting the TFT screen working with the standard version of tft_eSPI using only build flags (as I was able to do with the previous T-Display). Thus this project includes the modified eft_eSPI from https://github.com/Xinyuan-LilyGO/T-Display-S3/tree/main/lib in the /lib folder to be statically linked into the binary.