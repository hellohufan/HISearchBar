//
//  HIViewController.m
//  HISearchBar
//
//  Created by hellohufan on 05/18/2020.
//  Copyright (c) 2020 hellohufan. All rights reserved.
//

#import "HIViewController.h"
#import "HISearchBar.h"

@interface HIViewController ()

@end

@implementation HIViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self setSeaatchBar];
}

- (void)setSeaatchBar{
    HISearchBar *searchBarCode = [[HISearchBar alloc] initWithFrame:CGRectMake(10, 120, 320, 44)];
    searchBarCode.placeholder = @"this is a placeholder";
    searchBarCode.placeholderColor = [UIColor purpleColor];
    searchBarCode.backgroundColor = [UIColor yellowColor];
    UIView *view = [[UIView alloc]initWithFrame:CGRectMake(0, 0, 320, 50)];
    view.backgroundColor = [UIColor redColor];
    searchBarCode.inputAccessoryView =view;
    [searchBarCode.cancelButton setTitle:@"取消" forState:UIControlStateNormal];
    [self.view addSubview:searchBarCode];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


-(BOOL)searchBarShouldBeginEditing:(HISearchBar *)searchBar{
    NSLog(@"%s: Line-%d", __func__, __LINE__);
    return YES;

}
- (void)searchBarTextDidBeginEditing:(HISearchBar *)searchBar{
    NSLog(@"%s: Line-%d", __func__, __LINE__);

}
- (BOOL)searchBarShouldEndEditing:(HISearchBar *)searchBar{
    NSLog(@"%s: Line-%d", __func__, __LINE__);
    return YES;
}
- (void)searchBarTextDidEndEditing:(HISearchBar *)searchBar{
    NSLog(@"%s: Line-%d", __func__, __LINE__);
    
}
- (void)searchBar:(HISearchBar *)searchBar textDidChange:(NSString *)searchText{
    NSLog(@"%s: Line-%d", __func__, __LINE__);
    
}
- (BOOL)searchBar:(HISearchBar *)searchBar shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text{
    NSLog(@"%s: Line-%d", __func__, __LINE__);
    return YES;

}
- (void)searchBarSearchButtonClicked:(HISearchBar *)searchBar{
    NSLog(@"%s: Line-%d", __func__, __LINE__);
    
}
- (void)searchBarCancelButtonClicked:(HISearchBar *)searchBar{
    NSLog(@"%s: Line-%d", __func__, __LINE__);
    
}

@end
