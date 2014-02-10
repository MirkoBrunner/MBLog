//
//  Macros.h
//
//  Created by Mirko Brunner on 25.10.13.
//  Copyright (c) 2013 Mirko Brunner. All rights reserved.
//
//  mirko.brunner@googlmail.com
//

// This macro is build to work with the cocoa framework only.

#ifdef NSLog 

  #define MBLogF() NSLog(@"%s", __FUNCTION__)
  
  #define MBLogInt(i) NSLog(@"%s %i", __FUNCTION__, i)
  
  #define MBLogFloat(f) NSLog(@"%s %f", __FUNCTION__, f)
  
  #define MBLogFrame(frame) NSLog(@"%s x: %f y: %f w: %f h: %f",__FUNCTION__,frame.origin.x,frame.origin.y,frame.size.width,frame.size.height)
  #define MBLogSize(size) NSLog(@"%s w: %f h: %f",__FUNCTION__,size.width,size.height)
  #define MBLogPos(frame) NSLog(@"%s x: %f y: %f",__FUNCTION__,frame.origin.x,frame.origin.y)
  #define MBLogRange(range) NSLog(@"%s location: %i length: %i",__FUNCTION__,range.location,range.length)
  #define MBLogPoint(p) NSLog(@"%s x: %f y: %f",__FUNCTION__,p.x,p.y)
  
  #define MBLogIndexPath(indexPath) NSLog(@"%s section: %i index: %i",__FUNCTION__,indexPath.section,indexPath.row)
  #define MBLogCoordinates(coord) NSLog(@"%s latitude: %f longitude: %f",__FUNCTION__,coord.latitude,coord.longitude)
  
  #define MBLogObj(o) NSLog(@"%s %@", __FUNCTION__, o)
  
  #define MBLogError(e) NSLog(@"%s %@", __FUNCTION__, [e description])
  
  #define MBLogNotImpl() NSLog(@"%s nicht implmementiert", __FUNCTION__);

#elseif

// ToDo: implement logs with printf() !

#endif
