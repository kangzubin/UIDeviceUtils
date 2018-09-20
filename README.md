UIDeviceUtils
=============

Category to get the iOS Device Name.

## Usage

Import header file
```ojbc
#import "UIDevice+XMUtils.h"
```

To get the platform identfier, eg: `iPhone3,1`, `iPad7,4`

```objc
NSString *platform = [UIDevice platform];
```

To get the platform name, eg: `iPhone 7`, `iPhone X`, `iPad Pro 10.5-inch`
```objc
NSString *platformString = [UIDevice platformString];
```

To get the iOS device name, the same as `platformString`
```objc
NSString *deviceName = [UIDevice deviceName];
```

## Reference
* http://theiphonewiki.com/wiki/Models
* https://github.com/fahrulazmi/UIDeviceHardware