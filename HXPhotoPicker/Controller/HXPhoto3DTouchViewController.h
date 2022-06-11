//
//  HXPhoto3DTouchViewController.h
//  HXPhotoPickerExample
//
//  Created by Silence on 2017/9/25.
//  Copyright © 2017年 Silence. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HXPhotoTools.h"

@interface HXPhoto3DTouchViewController : UIViewController
@property (strong, nonatomic) HXPhotoModel *model;
@property (strong, nonatomic) UIImage *image;
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) NSIndexPath *indexPath;

@property (copy, nonatomic) NSArray<id<UIPreviewActionItem>> *(^ previewActionItemsBlock)(void);
@property (copy, nonatomic) void (^downloadImageComplete)(HXPhoto3DTouchViewController *vc, HXPhotoModel *model);
@end

