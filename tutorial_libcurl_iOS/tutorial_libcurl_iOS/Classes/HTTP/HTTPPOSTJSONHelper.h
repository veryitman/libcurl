//
//  HTTPPOSTJSONHelper.h
//  tutorial_libcurl_iOS
//
//  Created by mark.zhang on 2019/3/8.
//  Copyright © 2019 veryitman. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HTTPPOSTJSONHelper : NSObject

int http_post_callback(const char *url, const char *data);

@end

NS_ASSUME_NONNULL_END
