//
//  HISearchBar.h
//  HISearchBar
//
//  Created by IVAN on 15/5/3.
//  Copyright (c) 2015年 IVAN. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSUInteger, HISearchBarIconAlign) {
    HISearchBarIconAlignLeft,
    HISearchBarIconAlignCenter
};
@class HISearchBar;
@protocol HISearchBarDelegate <UIBarPositioningDelegate>

@optional

-(BOOL)searchBarShouldBeginEditing:(HISearchBar *)searchBar;                      // return NO to not become first responder
- (void)searchBarTextDidBeginEditing:(HISearchBar *)searchBar;                     // called when text starts editing
- (BOOL)searchBarShouldEndEditing:(HISearchBar *)searchBar;                        // return NO to not resign first responder
- (void)searchBarTextDidEndEditing:(HISearchBar *)searchBar;                       // called when text ends editing
- (void)searchBar:(HISearchBar *)searchBar textDidChange:(NSString *)searchText;   // called when text changes (including clear)
- (BOOL)searchBar:(HISearchBar *)searchBar shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text; // called before text changes

- (void)searchBarSearchButtonClicked:(HISearchBar *)searchBar;                     // called when keyboard search button pressed
- (void)searchBarCancelButtonClicked:(HISearchBar *)searchBar;                     // called when cancel button pressed
// called when cancel button pressed
@end


@interface HISearchBar : UIView<UITextInputTraits>

@property(nonatomic,assign) id<HISearchBarDelegate> delegate;              // weak reference. default is nil
@property(nonatomic,copy)   NSString               *text;                  // current/starting search text
@property(nonatomic,retain) UIColor                *textColor;
@property(nonatomic,retain) UIFont                 *textFont;
@property(nonatomic,copy)   NSString               *placeholder;           // default is nil
@property(nonatomic,retain) UIColor                *placeholderColor;
@property(nonatomic,retain) UIImage                *iconImage;
@property(nonatomic,retain) UIImage                *backgroundImage;

@property(nonatomic,retain) UIButton *cancelButton; //lazy


@property(nonatomic,assign) UITextBorderStyle       textBorderStyle;
@property(nonatomic)        UIKeyboardType          keyboardType;
@property(nonatomic)        HISearchBarIconAlign    iconAlign;     //text aligh model


@property (nonatomic, readwrite, retain) UIView *inputAccessoryView;
@property (nonatomic, readwrite, retain) UIView *inputView;

-(BOOL)resignFirstResponder;
-(void)setAutoCapitalizationMode:(UITextAutocapitalizationType)type;
@end


