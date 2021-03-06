/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SGRecordId, SGName, NSArray;

@interface SGContact : NSObject <NSCopying, NSSecureCoding> {

	SGRecordId* _recordId;
	SGName* _name;
	NSArray* _emailAddresses;
	NSArray* _phones;
	NSArray* _postalAddresses;

}

@property (nonatomic,readonly) SGRecordId * recordId;                  //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,readonly) SGName * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * emailAddresses;               //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * phones;                       //@synthesize phones=_phones - In the implementation block
@property (nonatomic,readonly) NSArray * postalAddresses;              //@synthesize postalAddresses=_postalAddresses - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contactWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 ;
-(NSArray *)postalAddresses;
-(void)setPostalAddresses:(NSArray *)arg1 ;
-(NSArray *)emailAddresses;
-(id)addresses;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(SGName *)arg1 ;
-(SGName *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cnContact;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(id)detailForRecordId:(id)arg1 ;
-(id)initWithId:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 phones:(id)arg4 postalAddresses:(id)arg5 ;
-(BOOL)isEqualToContact:(id)arg1 ;
-(BOOL)hasNonTrivialInfo;
-(BOOL)containsSuggestions;
-(SGRecordId *)recordId;
-(NSArray *)phones;
-(void)setPhones:(NSArray *)arg1 ;
-(unsigned long long)richness;
@end

