//
//  TextLimitTool.h
//  TextLimit
//
//  Created by slowdony on 2018/1/21.
//  Copyright © 2018年 slowdony. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface TextLimitTool : NSObject

/**
 判断是否有表情
 */
+ (BOOL)isContainsEmoji:(NSString *)string;

/**
 删除emoji表情
 */
+ (NSString *)deleteEmoji:(NSString *)text;

/**
 判断是否有特殊字符
 */
+ (BOOL)isContainsSpecialCharacters:(NSString *)string;

/**
 汉字，数字，英文，括号，下划线，横杠，空格(只能输入这些)
 */
+(NSString *)filterCharactors:(NSString *)string;

/**
 根据正在过滤特殊字符
 */
+ (NSString *)filterCharactor:(NSString *)string withRegex:(NSString *)regexStr;

/**
 除去特殊字符并限制字数的textFiled
 */
+ (void)restrictionInputTextFieldMaskSpecialCharacter:(UITextField *)textField maxNumber:(NSInteger)maxNumber;

/**
 textFiled限制字数
 */
+ (void)restrictionInputTextField:(UITextField *)textField maxNumber:(NSInteger)maxNumber;

/**
 除去特殊字符并限制字数的TextView
 */
+ (void)restrictionInputTextViewMaskSpecialCharacter:(UITextView *)textView maxNumber:(NSInteger)maxNumber;

/**
 textView限制字数
 */
+ (void)restrictionInputTextView:(UITextView *)textView maxNumber:(NSInteger)maxNumber;

/**
 判断textFiled文本长度是否超出最大限制
 */
+ (NSInteger)isTextField:(UITextField *)textField beyondLimitCount:(NSInteger)limitCount;

/**
 判断textView文本长度是否超出最大限制
 */
+ (NSInteger)isTextView:(UITextView *)textView beyondLimitCount:(NSInteger)limitCount;

/**
 判断文本长度是否超出最大限制，英文占1个字符，中文占2个字符
 */
+ (NSInteger)isText:(NSString *)text lengthBeyondLimitCount:(NSInteger)limitCount;

/**
 防止原生emoji表情被截断
 */
+ (NSString *)subStringWith:(NSString *)string index:(NSInteger)index;
+ (NSString *)subStringWith:(NSString *)string index:(NSInteger)index hasToast:(BOOL)hasToast;

@end
