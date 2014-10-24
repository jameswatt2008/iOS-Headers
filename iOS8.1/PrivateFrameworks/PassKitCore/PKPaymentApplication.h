//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface PKPaymentApplication : NSObject <NSSecureCoding>
{
    BOOL _supportsContactlessPayment;
    BOOL _supportsInAppPayment;
    NSString *_dpanIdentifier;
    NSString *_dpanSuffix;
    NSString *_applicationIdentifier;
    NSString *_secureElementIdentifier;
    int _state;
    int _paymentNetworkIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int paymentNetworkIdentifier; // @synthesize paymentNetworkIdentifier=_paymentNetworkIdentifier;
@property(nonatomic) BOOL supportsInAppPayment; // @synthesize supportsInAppPayment=_supportsInAppPayment;
@property(nonatomic) BOOL supportsContactlessPayment; // @synthesize supportsContactlessPayment=_supportsContactlessPayment;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(copy, nonatomic, setter=setDPANSuffix:) NSString *dpanSuffix; // @synthesize dpanSuffix=_dpanSuffix;
@property(copy, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
@property(readonly, nonatomic) NSString *stateAsString;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToPaymentApplication:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithPaymentApplicationDictionary:(id)arg1;

@end
