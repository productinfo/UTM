//
// Copyright © 2020 osy. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import "UTMQemuConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

@interface UTMQemuConfiguration (System)

@property (nonatomic, nullable, copy) NSString *systemArchitecture;
@property (nonatomic, nullable, copy) NSString *systemCPU;
@property (nonatomic, nullable, readonly) NSArray<NSString *> *systemCPUFlags;
@property (nonatomic, nullable, copy) NSNumber *systemMemory;
@property (nonatomic, nullable, copy) NSNumber *systemCPUCount;
@property (nonatomic, nullable, copy) NSString *systemTarget;
@property (nonatomic, nullable, copy) NSString *systemBootDevice;
@property (nonatomic) BOOL systemBootUefi;
@property (nonatomic) BOOL systemRngEnabled;
@property (nonatomic, nullable, copy) NSNumber *systemJitCacheSize;
@property (nonatomic, assign) BOOL systemForceMulticore;
@property (nonatomic, nullable, copy) NSString *systemUUID;
@property (nonatomic, nullable, copy) NSString *systemMachineProperties;
@property (nonatomic, nullable, readonly) NSArray<NSString *> *systemArguments;
@property (nonatomic, readonly) NSInteger countArguments;
@property (nonatomic, assign) BOOL useHypervisor;
@property (nonatomic, readonly) BOOL isTargetArchitectureMatchHost;
@property (nonatomic, readonly) BOOL defaultUseHypervisor;

- (void)migrateSystemConfigurationIfNecessary;

- (NSInteger)newArgument:(NSString *)argument;
- (nullable NSString *)argumentForIndex:(NSInteger)index;
- (void)moveArgumentIndex:(NSInteger)index to:(NSInteger)newIndex;
- (void)updateArgumentAtIndex:(NSInteger)index withValue:(NSString*)argument;
- (void)removeArgumentAtIndex:(NSInteger)index;

- (NSInteger)newCPUFlag:(NSString *)CPUFlag;
- (void)removeCPUFlag:(NSString *)CPUFlag;

@end

NS_ASSUME_NONNULL_END
