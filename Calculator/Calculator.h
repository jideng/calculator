//
//  Calculator.h
//  Sample
//
//  Created by user on 2016. 8. 23..
//  Copyright © 2016년 LDCC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Calculator : NSObject

@property (nonatomic, assign) double accumulator;
// 위 property로 getter, setter 함수 대체 가능
// atomic 은 lock 을 걸기 때문에 느리지만
// nonatomic 은 멀티쓰레드의 경우 safety 가 보장되지 않는다.

// 누산기 메서드
//- (void)    setAccumulator: (double) value;
//- (double)  accumulator;
- (void)    clear;

// 산술 연산 메서드
- (void)    add:        (double) value;
- (void)    subtract:   (double) value;
- (void)    mutiply:    (double) value;
- (void)    divide:     (double) value;

@end
