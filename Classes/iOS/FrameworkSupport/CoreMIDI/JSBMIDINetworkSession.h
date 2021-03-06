#import <CoreMIDI/MIDIServices.h>
#import <Foundation/Foundation.h>

@import CoreMIDI;
@import JavaScriptCore;

@protocol JSBNSObject;

@protocol JSBMIDINetworkSession <JSExport, JSBNSObject>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) NSUInteger port;
@property (nonatomic, readonly, retain) NSString *netServiceDomain;
@property (nonatomic, getter = isEnabled) BOOL enabled;
@property (nonatomic, readonly, retain) NSString *address;
@property (nonatomic, readonly) NSString *networkName;
@property (nonatomic) MIDINetworkConnectionPolicy connectionPolicy;
@property (nonatomic, readonly) NSUInteger networkPort;
@property (nonatomic, retain, readonly) MIDINetworkHost *host;
@property (nonatomic, readonly) NSString *localName;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly, retain) NSString *netServiceName;

+ (MIDINetworkSession *)defaultSession;

- (NSSet *)contacts;
- (BOOL)addContact:(MIDINetworkHost *)contact;
- (BOOL)removeContact:(MIDINetworkHost *)contact;
- (NSSet *)connections;
- (BOOL)addConnection:(MIDINetworkConnection *)connection;
- (BOOL)removeConnection:(MIDINetworkConnection *)connection;
- (id)sourceEndpoint;
- (id)destinationEndpoint;

#pragma clang diagnostic pop

@end
