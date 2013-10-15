
LDFLAGS= -L/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.8.sdk/usr/lib
c++filt: c++filt.c
	cc $(LDFLAGS) -o $@ $< -lc++abi
