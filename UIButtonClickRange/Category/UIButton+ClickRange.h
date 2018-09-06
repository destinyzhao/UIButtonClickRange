//
//  UIButton+ClickRange.h
//  UIButtonClickRange
//
//  Created by Destiny on 2018/9/6.
//  Copyright © 2018年 Destiny. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (ClickRange)

/**
自定义响应边界 UIEdgeInsetsMake(-3, -4, -5, -6). 表示扩大
例如： self.btn.hitEdgeInsets = UIEdgeInsetsMake(-3, -4, -5, -6);
*/
@property(nonatomic, assign) UIEdgeInsets hitEdgeInsets;
/**
 自定义响应边界 自定义的边界的范围 范围扩大3.0
 例如：self.btn.hitScale = 3.0;
 */
@property(nonatomic, assign) CGFloat hitScale;
/*
 自定义响应边界 自定义的宽度的范围 范围扩大3.0
 例如：self.btn.hitWidthScale = 3.0;
 */
@property(nonatomic, assign) CGFloat hitWidthScale;

/*
 自定义响应边界 自定义的高度的范围 范围扩大3.0
 例如：self.btn.hitHeightScale = 3.0;
 */
@property(nonatomic, assign) CGFloat hitHeightScale;

@end
