//
//  GLContainerView.h
//  01-多滤镜处理
//
//  Created by CC老师 on 2018/3/5.
//  Copyright © 2018年 CC老师. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface GLContainerView : UIView

//图片
@property (nonatomic, strong) UIImage *image;
//色温值
@property (nonatomic, assign) CGFloat  colorTempValue;
//饱和度
@property (nonatomic, assign) CGFloat  saturationValue;

@end
