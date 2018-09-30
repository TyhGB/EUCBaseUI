//
//  NSDate+EUC.h
//  EUCIMManager
//
//  Created by  ZhuHong on 2016/12/31.
//  Copyright © 2016年 BBDTEK. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (EUC)

/**
 *  判断某个时间是否为今年
 */
- (BOOL)isThisYear;
/**
 *  判断某个时间是否为昨天
 */
- (BOOL)isYesterday;
/**
 *  判断某个时间是否为今天
 */
- (BOOL)isToday;
/**
 *  判断是否为最近3天
 */
- (BOOL)isNearDay;

//日历起始日期
- (instancetype)beginningOfDay:(NSCalendar *)calendar;
//一个月的第一天
- (instancetype)firstDateOfMonth:(NSCalendar *)calendar;
//某个月的最后一天
- (instancetype)lastDateOfMonth:(NSCalendar *)calendar;
//返回某一天的日期
- (instancetype)dateWithDay:(NSUInteger)day calendar:(NSCalendar *)calendar;

//TODO 判断某个日期是否在当前月，判断某个日期是否在当前星期
//某个日期是否在当前月
- (BOOL)isThisMonth;
//某个日期是否在当前星期
- (BOOL)isThisWeek;

//转成yyyy-MM-dd模式
- (NSDate *)convertDefaultDate;

@end
