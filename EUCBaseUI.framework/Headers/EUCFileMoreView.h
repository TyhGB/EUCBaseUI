//
//  EUCFileMoreView.h
//  EUCIMManager
//
//  Created by 肖乐 on 2017/5/3.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//  暂时没用

#import "EUCBaseView.h"
#import "EUCMessageToolBoxModel.h"

typedef void (^CellClickBlock)(EUCMessageToolBoxFunctionType functionType);

@interface EUCFileMoreView : EUCBaseView

// 描述（文件名+文件大小）
@property (nonatomic, copy) NSString *descStr;
// 回调
@property (nonatomic, copy) CellClickBlock clickBlock;

@property (nonatomic, strong) NSArray <EUCMessageToolBoxModel *>*descArray;
// 能否下载
@property (nonatomic, assign, getter=showDownload) BOOL isShowDownload;

- (void)showInView:(UIView *)moreSuperView;

@end
