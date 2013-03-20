Core Data with multiple managed object contexts
====================
[Talk][ss] for [Houston iPhone Developer Meetup][ml]
[ml]: http://www.meetup.com/Houston-iPhone-Developers-Meetup/events/105167792/
[ss]: http://www.slideshare.net/xzolian/core-data-with-multiple-managed-object-contexts

> When using Core Data for persisting app data multiple managed object contexts (MOC) are often required to avoid blocking UI. Typically you would create a background MOC and listen for changes on the main MOC, merging changes as necessary. With iOS 5, MOCs now have parent context and the ability to set concurrency types. These new features greatly simplify dealing with Core Data on background queues. During this presentation Matt will cover the pros and cons of this new method of dealing with Core Data.


Branches  
--------
parent-context: Nested managed object context with async writer  
notification-context: Multiple managed objectcontext, legacy notification method  
blocking: Single managed object context  


This code was generated for demonstration purposes and is not a good example of how you should structure a Core Data based app. DON'T PUT YOU MODEL CREATION CODE IN YOUR CONTROLLER! 
