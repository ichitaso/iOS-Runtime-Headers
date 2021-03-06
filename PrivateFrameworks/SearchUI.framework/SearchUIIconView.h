/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIIconView : UIView {
    NSLayoutConstraint *_bottomConstraint;
    SearchUITableViewCell *_cell;
    UIButton *_iconButton;
    UILabel *_label;
    <SearchUIResult> *_result;
}

@property (retain) NSLayoutConstraint *bottomConstraint;
@property (retain) SearchUITableViewCell *cell;
@property (retain) UIButton *iconButton;
@property (retain) UILabel *label;
@property (retain) <SearchUIResult> *result;

- (void).cxx_destruct;
- (id)bottomConstraint;
- (id)cell;
- (id)iconButton;
- (void)iconButtonPressed;
- (id)initWithStyle:(unsigned int)arg1 cell:(id)arg2;
- (id)label;
- (id)result;
- (void)setBottomConstraint:(id)arg1;
- (void)setCell:(id)arg1;
- (void)setIconButton:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setResult:(id)arg1;
- (void)updateWithResult:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
