//
//  NSNotificationCenter+Safe.h
//
//  Created by liusong on 2018/6/27.
//  Copyright © 2018年 liusong. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 //同一那么 同一对象 添加多次 方法也会调用多次
 当一个对象添加了notification之后，如果dealloc的时候，仍然持有notification，就会出现NSNotification类型的crash。
 
 iOS9之后专门针对于这种情况做了处理，所以在iOS9之后，即使开发者没有移除observer，Notification crash也不会再产生了
 */
@interface NSNotificationCenter (Safe)

@end
