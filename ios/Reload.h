
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNReloadSpec.h"

@interface Reload : NSObject <NativeReloadSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Reload : NSObject <RCTBridgeModule>
#endif

@end
