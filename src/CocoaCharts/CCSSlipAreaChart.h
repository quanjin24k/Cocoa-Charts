//
//  CCSSlipAreaChart.h
//  Cocoa-Charts
//
//  Created by limc on 13-10-27.
//  Copyright 2011 limc.cn All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import "CCSSlipLineChart.h"

/*!
 CCSAreaChart
 
 普通面积图，以X轴为底边绘制面积
 */
@interface CCSSlipAreaChart : CCSSlipLineChart {
    CCFloat _areaAlpha;
    
    CCFloat _lastClose;
    
    BOOL _enableZoom;
    BOOL _enableSlip;
}

/*!
 @abstract
 面积填充部分的透明度
 */
@property(assign, nonatomic) CCFloat areaAlpha;

@property(assign,nonatomic) CCFloat lastClose;

@property(assign,nonatomic) BOOL enableZoom;
@property(assign,nonatomic) BOOL enableSlip;

/** 绘制截止时间 */
@property(copy,nonatomic)   NSString *closingDate;

@end
