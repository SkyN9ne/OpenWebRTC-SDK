//
//  Copyright (c) 2017 Intel Corporation. All rights reserved.
//
#import "talk/oms/sdk/include/objc/OMS/OMSExternalOutput.h"
#include "talk/oms/sdk/include/cpp/oms/conference/externaloutput.h"
@interface OMSExternalAudioOutputOptions (Internal)
- (oms::conference::ExternalAudioOutputOptions)nativeOptions;
@end
@interface OMSExternalVideoOutputOptions (Internal)
- (oms::conference::ExternalVideoOutputOptions)nativeOptions;
@end
@interface OMSExternalOutputOptions (Internal)
- (oms::conference::ExternalOutputOptions)nativeOptions;
@end
@interface OMSExternalOutputAck (Interface)
-(instancetype)initWithNativeAck:(const oms::conference::ExternalOutputAck&)nativeAck;
@end
