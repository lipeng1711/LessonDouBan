//
//  MovieDetailRequest.h
//  LessonDouBan
//
//  Created by CLT on 16/6/28.
//  Copyright © 2016年 yaxin.guo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MovieDetailRequest : NSObject

- (void)movieDetailRequestWithParameter:(NSDictionary *)parameter success:(SuccessResponse)success failure:(FailureResponse)failure;

@end
