//
//  ADVRegisterViewController.h
//  apartmentshare
//
//  Created by Tope Abayomi on 22/02/2013.
//  Copyright (c) 2013 App Design Vault. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StackMob.h"

@interface ADVRegisterViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (nonatomic, strong) UITextField *userRegisterTextField;

@property (nonatomic, strong) UITextField *passwordRegisterTextField;

@property (nonatomic, strong) UITableView *loginTableView;

@property (nonatomic, strong) IBOutlet UIButton *signupButton;

-(IBAction)signUpUserPressed:(id)sender;

@end
