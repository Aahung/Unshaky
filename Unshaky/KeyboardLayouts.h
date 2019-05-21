//
//  KeyboardLayouts.h
//  Unshaky
//
//  Created by Xinhong LIU on 5/8/19.
//  Copyright © 2019 Nested Error. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define KL_US "U.S."
#define KL_RU "Russian (experimental)"
#define KL_ABC_QWERTZ "ABC - QWERTZ (experimental)"
#define KL_ABC_AZERTY "ABC - AZERTY (experimental)"

@interface KeyboardLayouts : NSObject

+ (instancetype)shared;
+ (NSArray<NSString *> *)availableKeyboardLayouts;
- (instancetype)init;
- (NSDictionary<NSNumber *, NSString *> *)keyCodeToString;
- (void)setKeyboardLayout:(NSString *)keyboardLayout;

@end

NS_ASSUME_NONNULL_END
