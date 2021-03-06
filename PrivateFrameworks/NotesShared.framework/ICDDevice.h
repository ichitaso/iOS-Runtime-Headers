/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDDevice : NSManagedObject

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) ICPerson *person;
@property (nonatomic) BOOL sharingExtensionDevice;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)currentDeviceInContext:(id)arg1;
+ (id)deviceWithUUIDCreatingIfNecessary:(id)arg1 context:(id)arg2;
+ (id)deviceWithUUIDCreatingIfNecessary:(id)arg1 sharingExtensionDevice:(BOOL)arg2 context:(id)arg3;
+ (id)entity:(id)arg1 withUUIDCreatingIfNecessary:(id)arg2 context:(id)arg3;
+ (void)initialize;
+ (id)sharingExtensionDeviceUUID;

- (void)setUuid:(id)arg1;
- (id)uuid;

@end
