/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <XPCKit/XPCServiceListenerDelegate.h>

@protocol XPCNSServiceListenerDelegate;
@class XPCServiceListener, NSString;

@interface XPCNSServiceListener : NSObject <XPCServiceListenerDelegate> {

	XPCServiceListener* _serviceListener;
	id<XPCNSServiceListenerDelegate> _delegate;

}

@property (nonatomic,retain,readonly) NSString * serviceName; 
@property (nonatomic,readonly) id<XPCNSServiceListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)serviceName;
-(id<XPCNSServiceListenerDelegate>)delegate;
-(void)start;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(BOOL)XPCServiceListener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)XPCServiceListener:(id)arg1 didReceiveNewConnection:(id)arg2 ;
@end

