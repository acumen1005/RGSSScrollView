//
//  UIScrollView+RGScroll.h
//  RGUIKit
//
//  Created by renge on 2019/8/24.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIScrollView(RGInset)

- (void)rg_setAdditionalContentInset:(UIEdgeInsets)inset safeArea:(UIEdgeInsets)safeArea;

- (CGFloat)rg_topOffsetY;
- (CGFloat)rg_bottomOffsetY;

- (BOOL)rg_isTop;
- (BOOL)rg_isBottom;

- (BOOL)rg_isReachTop;
- (BOOL)rg_isReachBottom;

- (void)rg_scrollViewToLimit:(BOOL)animated;

- (void)rg_scrollViewToTop:(BOOL)animated;
- (void)rg_scrollViewToBottom:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
