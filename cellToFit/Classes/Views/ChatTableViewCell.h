//
//  ChatTableViewCell.h
//  cellToFit
//
//  Created by 邓西亮 on 16/8/16.
//  Copyright © 2016年 dxl. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ChatDataSoure;

@interface ChatTableViewCell : UITableViewCell

@property (nonatomic, strong) ChatDataSoure *model;

@end