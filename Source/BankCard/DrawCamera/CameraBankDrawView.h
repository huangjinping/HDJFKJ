//
//  CameraDrawView.h
//
//  Created by Magel on 10-12-20.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kTimeInterval	0.2f

#define kLength 40
#define ScanValue 10
//#define kVerticalMargin ([[UIScreen mainScreen] bounds].size.height-KWidth*1.58)*0.5
@interface CameraDrawView : UIView {
    id delegate;
    UIColor *boundColor;
    BOOL beat;
    CGSize preSize;
}
/**
 *  是否是正面
 */
@property (nonatomic,assign) BOOL IsPositive;
@property (nonatomic,assign) BOOL IsBankCard;

@property (nonatomic, retain) id delegate;
@property(nonatomic,assign)CGPoint  beginPoint;
@property(nonatomic,assign)CGPoint endPoint;
@property(nonatomic,strong)UILabel *lable;
@property (nonatomic,assign) CGRect ImageDrawViewFrame;

-(CGPoint)getBeginPoint;
-(CGPoint)getEndPoint;
-(void)showLineUP:(BOOL)up right:(BOOL)right bottom:(BOOL)bottom left:(BOOL)left;
-(void)SetPreSize:(CGSize)size;
-(void)showText:(NSString *)text;
@end
