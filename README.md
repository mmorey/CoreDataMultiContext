Core Data with multiple managed object contexts
====================
Presentation for [Houston iPhone Developer Meetup][ml]
[ml]: http://www.meetup.com/Houston-iPhone-Developers-Meetup/events/105167792/

When using Core Data for persisting app data multiple managed object contexts (MOC) are often required to avoid blocking UI. Typically you would create a background MOC and listen for changes on the main MOC, merging changes as necessary. With iOS 5, MOCs now have parent context and the ability to set concurrency types. These new features greatly simplify dealing with Core Data on background queues. During this presentation Matt will cover the pros and cons of this new method of dealing with Core Data.


