//
//  UIDevice+XMUtils.h
//  https://github.com/kangzubin/UIDeviceUtils
//
//  Created by kangzubin on 2018/9/20.
//  Copyright © 2018 KANGZUBIN. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIDevice (XMUtils)

/**
 获取硬件平台编码（Device Model）

 @return 硬件平台编码，如 iPhone3,1、iPad7,4 等
 */
+ (NSString *)platform;

/**
 获取设备型号

 @return 设备型号，如 iPhone 7、iPhone X、iPad Pro 10.5-inch 等
 */
+ (NSString *)platformString;

/**
 获取设备型号

 @return 设备型号，返回结果与 platformString 一致（只查询一次然后缓存）
 */
+ (NSString *)deviceName;

@end
