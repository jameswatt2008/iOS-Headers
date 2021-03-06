//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BBObserverServerProxy, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface BBObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct {
        unsigned int addBulletinPlayLightsAndSirens:1;
        unsigned int addBulletin:1;
        unsigned int modifyBulletin:1;
        unsigned int modifyBulletinDEPRECATED:1;
        unsigned int removeBulletin:1;
        unsigned int removeBulletinFinal:1;
        unsigned int sectionOrderRule:1;
        unsigned int sectionOrder:1;
        unsigned int sectionOrderDefault:1;
        unsigned int sectionInfo:1;
        unsigned int sectionInfoDefault:1;
        unsigned int sectionParameters:1;
        unsigned int fetchImage:1;
        unsigned int fetchSize:1;
        unsigned int sizeConstraints:1;
        unsigned int multiSizeConstraints:1;
        unsigned int imageForThumbData:1;
        unsigned int sizeForThumbSize:1;
        unsigned int purgeReferences:1;
        unsigned int alertBehaviorOverrides:1;
        unsigned int alertBehaviorOverrideState:1;
        unsigned int invalidatedBulletinIDs:1;
        unsigned int serverConnectionChanged:1;
        unsigned int serverReceivedResponse:1;
    } _delegateFlags;
    NSMutableDictionary *_bulletinLifeAssertions;
    NSMutableDictionary *_sectionParameters;
    NSMutableDictionary *_attachmentInfoByBulletinID;
    NSMutableDictionary *_remainingFeedsByBulletinID;
    unsigned int _numberOfBulletinFetchesUnderway;
    NSMutableSet *_sectionIDsWithUpdatesUnderway;
    NSMutableDictionary *_bulletinUpdateQueuesBySectionID;
    BBObserverServerProxy *_serverProxy;
    BOOL _isGateway;
    id <BBObserverDelegate> _delegate;
    unsigned int _observerFeed;
    NSString *_gatewayName;
    unsigned int _gatewayPriority;
}

+ (void)initialize;
@property(readonly, nonatomic) unsigned int gatewayPriority; // @synthesize gatewayPriority=_gatewayPriority;
@property(readonly, copy, nonatomic) NSString *gatewayName; // @synthesize gatewayName=_gatewayName;
@property(nonatomic) unsigned int observerFeed; // @synthesize observerFeed=_observerFeed;
@property(nonatomic) id <BBObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (void)noteAlertBehaviorOverrideStateChanged:(id)arg1;
- (void)noteAlertBehaviorOverridesChanged:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
- (void)updateSectionInfo:(id)arg1 inCategory:(int)arg2;
- (void)updateSectionOrder:(id)arg1 forCategory:(int)arg2;
- (void)updateSectionOrderRule:(id)arg1;
- (void)updateBulletin:(id)arg1 forFeeds:(unsigned int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_dequeueBulletinUpdateIfPossibleForSection:(id)arg1;
- (void)_noteCompletedBulletinFetch;
- (void)_performBulletinFetch:(CDUnknownBlockType)arg1;
- (void)_noteCompletedBulletinUpdateForSection:(id)arg1;
- (void)_performOrEnqueueBulletinUpdate:(CDUnknownBlockType)arg1 forSection:(id)arg2;
- (void)serverProxy:(id)arg1 connectionStateDidChange:(BOOL)arg2;
- (void)_registerBulletin:(id)arg1 withTransactionID:(unsigned int)arg2;
- (id)_lifeAssertionForBulletinID:(id)arg1;
- (void)assertionExpired:(id)arg1 transactionID:(unsigned int)arg2;
- (void)_preFetchAttachmentInfoIfNecessaryForBulletins:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_preFetchAttachmentInfoIfNecessaryForBulletin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_getAttachmentSizesIfPossibleForBulletins:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_getAttachmentSizesIfPossibleForBulletin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_getAttachmentImagesIfPossibleForBulletins:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_getAttachmentImagesIfPossibleForBulletin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_fetchAndProcessImageForBulletinID:(id)arg1 withKey:(id)arg2 constraints:(id)arg3 attachmentType:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_reasonableConstraintsForAttachmentType:(int)arg1;
- (BOOL)_attachmentSizesFetchedForBulletinID:(id)arg1;
- (BOOL)_attachmentImagesFetchedForBulletinID:(id)arg1;
- (void)_noteAttachmentSizesFetchedForBulletinID:(id)arg1;
- (void)_noteAttachmentImagesFetchedForBulletinID:(id)arg1;
- (void)_setAttachmentSize:(struct CGSize)arg1 forKey:(id)arg2 forBulletinID:(id)arg3;
- (void)_setAttachmentImage:(id)arg1 forKey:(id)arg2 forBulletinID:(id)arg3;
- (struct CGSize)attachmentSizeForKey:(id)arg1 forBulletinID:(id)arg2;
- (id)attachmentImageForKey:(id)arg1 forBulletinID:(id)arg2;
- (id)_attachmentInfoForBulletinID:(id)arg1 create:(BOOL)arg2;
- (void)getParametersForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)parametersForSectionID:(id)arg1;
- (void)_getParametersIfNecessaryForSectionIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_getParametersIfNecessaryForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeed:(unsigned int)arg3;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2;
- (void)clearBulletins:(id)arg1 inSection:(id)arg2;
- (void)clearSection:(id)arg1;
- (void)sendResponse:(id)arg1;
- (void)getBulletinsForPublisherBulletinIDs:(id)arg1 sectionID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getAttachmentImageForBulletin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getPrivilegedAddressBookGroupRecordIDAndNameWithCompletion:(CDUnknownBlockType)arg1;
- (void)getPrivilegedSenderTypesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAlertBehaviorOverridesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSortDescriptorsForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestFutureBulletinsForSectionID:(id)arg1;
- (void)requestTodayBulletinsForSectionID:(id)arg1;
- (void)requestListBulletinsForSectionID:(id)arg1;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (void)getSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSectionInfoForCategory:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getSectionOrderRuleWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)isValid;
- (void)_invalidate;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 asGateway:(id)arg2 priority:(unsigned int)arg3;
- (id)initWithQueue:(id)arg1 forGateway:(id)arg2;
- (void)_commonInit:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

