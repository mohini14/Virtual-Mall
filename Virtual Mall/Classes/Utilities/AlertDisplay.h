//
//  AlertDisplay.h
//  Virtual Mall
//
//  Created by Mohini Sindhu  on 14/03/17.
//  Copyright © 2017 mindfire. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Define.h"

#define kAppName @"VIRTUAL MALL"
#define kOkMessage @"OK"

@interface AlertDisplay : NSObject

+ (void)showAlertPopupWithTitle:(NSString *)message forView:(UIViewController *)view;

@end
