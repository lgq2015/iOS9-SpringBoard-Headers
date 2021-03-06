/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVOutputContextInternal, NSString;

@interface AVOutputContext : NSObject <NSSecureCoding> {

	AVOutputContextInternal* _outputContext;

}

@property (nonatomic,readonly) NSString * deviceName; 
+(id)outputContext;
+(OpaqueFigEndpointPickerRef)copySystemVideoPicker;
+(id)sharedSystemAudioContext;
+(id)sharedSystemScreenContext;
+(void)resetOutputDeviceForAllOutputContexts;
+(BOOL)outputContextExistsWithRemoteOutputDevice;
+(BOOL)supportsSecureCoding;
-(id)_weakReference;
-(id)initWithContextUUID:(id)arg1 ;
-(id)contextUUID;
-(void)_removeFigEndpointPickerNotifications;
-(void)_addFigEndpointPickerNotifications;
-(void)_handlePickerServerConnectionDiedNotification;
-(id)initWithFeature:(unsigned long long)arg1 options:(id)arg2 ;
-(int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1 options:(id)arg2 ;
-(id)outputDevice;
-(int)applicationProcessID;
-(void)setApplicationProcessID:(int)arg1 ;
-(BOOL)setOutputDevice:(id)arg1 forFeatures:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)deviceName;
-(void)finalize;
@end

