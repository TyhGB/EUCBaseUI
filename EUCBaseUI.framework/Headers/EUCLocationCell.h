//
//  EUCLocationCell.h
//  EUCIMManager
//
//  Created by 栀枯大湿的MBP on 2017/9/5.
//  Copyright © 2017年 BBDTEK. All rights reserved.
//

#import "EUCBaseCell.h"
#import "EUCLocationDetailModel.h"

@interface EUCLocationCell : EUCBaseCell

@property (nonatomic, strong) EUCLocationDetailModel *locationModel;

//@property (nonatomic, strong) BMKPoiInfo* poi;
@property (weak, nonatomic) IBOutlet UILabel *firstLabel;
@property (weak, nonatomic) IBOutlet UIImageView *chooseImageV;
@end
