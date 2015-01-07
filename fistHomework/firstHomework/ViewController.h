//
//  ViewController.h
//  firstHomework
//
//  Created by William McDuff on 2015-01-05.
//  Copyright (c) 2015 William McDuff. All rights reserved.
//

#import <UIKit/UIKit.h>


// Create 3 VCs

//  View Controller 1
//   - 2 buttons (one will clear textfields, one will log all textifelds)

//  - 3  textfields (username, email, password)

//   - password field should look like one by hiding the text with dots (look in the right panel)

//  - email field should use email keyboard (also in right panel)




// View Controller 2

// - 4 buttojns with differnt color backgrounds
//  - each button changes the main VC's background color

// Add constraints

// Make the buttons on view controller 4 circles with no text


@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *username;

@property (weak, nonatomic) IBOutlet UITextField *email;

@property (weak, nonatomic) IBOutlet UITextField *password;

@property (weak, nonatomic) IBOutlet UIButton *logIn;

@property (weak, nonatomic) IBOutlet UIButton *clear;

@end

