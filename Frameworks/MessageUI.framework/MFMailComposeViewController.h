/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */



@interface MFMailComposeViewController : UINavigationController 
{
    id _internal;
}

@property <MFMailComposeViewControllerDelegate> *mailComposeDelegate;

+ (BOOL)hasAutosavedMessage;
+ (void)removeAutosavedMessage;
+ (BOOL)canSendMail;

- (void)autosaveImmediately;
- (void)setMailComposeDelegate:(id)arg1;
- (void)recoverAutosavedMessage;
- (void)setSubject:(id)arg1;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)resume;
- (BOOL)isDirty;
- (id)initWithURL:(id)arg1;
- (void)setKeyboardVisible:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (id)view;
- (void)suspend;
- (void)dealloc;
- (id)initWithComposition:(id)arg1 contentSize:(struct CGSize { float x1; float x2; })arg2 mailComposeControllerOptions:(NSUInteger)arg3;
- (id)_rootViewController;
- (id)mailComposeDelegate;
- (void)setAutorotationDelegate:(id)arg1;
- (id)_mailComposeController;
- (id)_mailComposeView;
- (void)_setCompositionContext:(id)arg1;
- (void)setInitialTitle:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)autosaveImmediatelyWithBundleIdentifier:(id)arg1;
- (NSInteger)resolution;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)setToRecipients:(id)arg1;
- (id)initWithComposition:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForAttachmentWithIdentifier:(id)arg1;
- (void)setContentVisible:(BOOL)arg1;

@end