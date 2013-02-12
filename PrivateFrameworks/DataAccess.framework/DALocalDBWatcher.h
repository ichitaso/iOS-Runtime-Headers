/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DALocalDBWatcher : NSObject {
    void *_abWatcher;
    struct CalDatabase { } *_calWatcher;
    struct __CFDictionary { } *_concernedABPartyToBlockMap;
    struct __CFDictionary { } *_concernedCalPartyToBlockMap;
    NSInteger _lastSavedABSequenceNumber;
    NSInteger _lastSavedCalSequenceNumber;
}

@property NSInteger lastSavedABSequenceNumber;
@property NSInteger lastSavedCalSequenceNumber;

+ (id)sharedDBWatcher;

- (void)_handleABChangeNotificationWithInfo:(id)arg1;
- (void)_handleCalChangeNotification;
- (void)dealloc;
- (id)init;
- (NSInteger)lastSavedABSequenceNumber;
- (NSInteger)lastSavedCalSequenceNumber;
- (void)noteABDBDirChanged;
- (void)noteCalDBDirChanged;
- (void)registerConcernedABParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)registerConcernedCalParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)removeConcernedABParty:(id)arg1;
- (void)removeConcernedCalParty:(id)arg1;
- (void)setLastSavedABSequenceNumber:(NSInteger)arg1;
- (void)setLastSavedCalSequenceNumber:(NSInteger)arg1;

@end