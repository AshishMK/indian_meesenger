//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/library/actor-cocoa-base/build/java/im/actor/model/entity/compat/content/ObsoleteAbsContent.java
//

#ifndef _ImActorModelEntityCompatContentObsoleteAbsContent_H_
#define _ImActorModelEntityCompatContentObsoleteAbsContent_H_

#include "J2ObjC_header.h"
#include "im/actor/model/droidkit/bser/BserObject.h"

@class APMessage;
@class IOSByteArray;
@class ImActorModelEntityCompatContentObsoleteContentTypeEnum;

@interface ImActorModelEntityCompatContentObsoleteAbsContent : BSBserObject

#pragma mark Public

- (instancetype)init;

+ (APMessage *)contentFromBytesWithByteArray:(IOSByteArray *)data;

- (APMessage *)toApiMessage;

#pragma mark Protected

+ (ImActorModelEntityCompatContentObsoleteContentTypeEnum *)typeFromValueWithInt:(jint)val;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelEntityCompatContentObsoleteAbsContent)

FOUNDATION_EXPORT APMessage *ImActorModelEntityCompatContentObsoleteAbsContent_contentFromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT ImActorModelEntityCompatContentObsoleteContentTypeEnum *ImActorModelEntityCompatContentObsoleteAbsContent_typeFromValueWithInt_(jint val);

FOUNDATION_EXPORT void ImActorModelEntityCompatContentObsoleteAbsContent_init(ImActorModelEntityCompatContentObsoleteAbsContent *self);

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelEntityCompatContentObsoleteAbsContent)

#endif // _ImActorModelEntityCompatContentObsoleteAbsContent_H_
