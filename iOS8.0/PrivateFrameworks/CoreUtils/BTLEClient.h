//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBCentralManagerDelegate.h"

@class CBCentralManager, CBPeripheral, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface BTLEClient : NSObject <CBCentralManagerDelegate>
{
    struct LogCategory *_ucat;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_accessoryInfo;
    CDUnknownBlockType _connectHandler;
    CDUnknownBlockType _disconnectHandler;
    CBCentralManager *_centralManager;
    CBPeripheral *_peripheral;
    BOOL _connectPending;
    NSMutableArray *_transactionQueue;
}

@property(copy) CDUnknownBlockType disconnectHandler; // @synthesize disconnectHandler=_disconnectHandler;
@property(copy) CDUnknownBlockType connectHandler; // @synthesize connectHandler=_connectHandler;
@property(copy) NSDictionary *accessoryInfo; // @synthesize accessoryInfo=_accessoryInfo;
@property struct LogCategory *logCategory; // @synthesize logCategory=_ucat;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_queue;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_processTransactions;
- (void)writeData:(id)arg1 requestCharacteristic:(id)arg2 responseCharacteristic:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (void)writeData:(id)arg1 characteristic:(id)arg2 writeHandler:(CDUnknownBlockType)arg3;
- (void)readDataForCharacteristic:(id)arg1 readHandler:(CDUnknownBlockType)arg2;
- (void)_disconnect;
- (void)disconnect;
- (void)_connect2;
- (void)_connect;
- (void)connect;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

