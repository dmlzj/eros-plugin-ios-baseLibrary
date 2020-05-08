//
//  UIWebView+BMExtend.h
//  Pods
//
//  Created by XHY on 2017/6/30.
//
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#define K_WebView_FontSize @"K_WebView_FontSize"

@interface WKWebView (BMExtend)

/** 根据当前字体缩放级别调整字体 */
- (void)checkCurrentFontSize;

@end
