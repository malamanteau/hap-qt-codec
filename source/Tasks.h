//
//  Tasks.h
//  Hap Codec
//
//  Created by Tom Butterworth on 09/05/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

typedef void (*HapCodecTaskWorkFunction)(void *context);

void HapCodecTasksWillStart();
void HapCodecTasksWillStop();
unsigned int HapCodecTasksNewGroup();
void HapCodecTasksAddTask(HapCodecTaskWorkFunction task, unsigned int group, void *context);
void HapCodecTasksWaitForGroupToComplete(unsigned int group);