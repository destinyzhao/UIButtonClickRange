//
//  ViewController.m
//  UIButtonClickRange
//
//  Created by Destiny on 2018/9/6.
//  Copyright © 2018年 Destiny. All rights reserved.
//

#import "ViewController.h"
#import "UIButton+ClickRange.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UIButton *button;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.button.hitScale = 5;
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)btnAction:(UIButton *)sender {
    NSLog(@"按钮被点击了");
}


@end
