//
//  Man.h
//
//  Created by longminxiang on 13-10-10.
//  Copyright (c) 2013年 longminxiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Man : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) int age;
@property (nonatomic, assign) double money;
@property (nonatomic, assign) BOOL gfs;
@property (nonatomic, strong) NSMutableArray *housess;
@property (nonatomic, copy) NSDate *brithday;

@end

@interface House : NSObject

@property (nonatomic, assign) int ownerIndex;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) int value;

@end

@interface Houses : NSObject

@property (nonatomic, assign) int ownerIndex;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) int value;
@property (nonatomic, assign) int value1;
@property (nonatomic, assign) int value2;
@property (nonatomic, assign) int value3;
@property (nonatomic, copy) NSDate *date;

@property (nonatomic, strong) House *house;

@property (nonatomic, strong) Man *man;

@end