/* Copyright (c) 2015 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLPlusDomainsMedia.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google+ Domains API (plusDomains/v1)
// Description:
//   The Google+ API enables developers to build on top of the Google+ platform.
// Documentation:
//   https://developers.google.com/+/domains/
// Classes:
//   GTLPlusDomainsMedia (0 custom class methods, 18 custom properties)
//   GTLPlusDomainsMediaAuthor (0 custom class methods, 4 custom properties)
//   GTLPlusDomainsMediaExif (0 custom class methods, 1 custom properties)
//   GTLPlusDomainsMediaAuthorImage (0 custom class methods, 1 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLPlusDomainsMediaAuthor;
@class GTLPlusDomainsMediaAuthorImage;
@class GTLPlusDomainsMediaExif;
@class GTLPlusDomainsVideostream;

// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsMedia
//

@interface GTLPlusDomainsMedia : GTLObject

// The person who uploaded this media.
@property (nonatomic, retain) GTLPlusDomainsMediaAuthor *author;

// The display name for this media.
@property (nonatomic, copy) NSString *displayName;

// ETag of this response for caching purposes.
@property (nonatomic, copy) NSString *ETag;

// Exif information of the media item.
@property (nonatomic, retain) GTLPlusDomainsMediaExif *exif;

// The height in pixels of the original image.
@property (nonatomic, retain) NSNumber *height;  // unsignedIntValue

// ID of this media, which is generated by the API.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// The type of resource.
@property (nonatomic, copy) NSString *kind;

// The time at which this media was originally created in UTC. Formatted as an
// RFC 3339 timestamp that matches this example: 2010-11-25T14:30:27.655Z
@property (nonatomic, retain) GTLDateTime *mediaCreatedTime;

// The URL of this photo or video's still image.
@property (nonatomic, copy) NSString *mediaUrl;

// The time at which this media was uploaded. Formatted as an RFC 3339
// timestamp.
@property (nonatomic, retain) GTLDateTime *published;

// The size in bytes of this video.
@property (nonatomic, retain) NSNumber *sizeBytes;  // longLongValue

// The list of video streams for this video. There might be several different
// streams available for a single video, either Flash or MPEG, of various sizes
@property (nonatomic, retain) NSArray *streams;  // of GTLPlusDomainsVideostream

// A description, or caption, for this media.
@property (nonatomic, copy) NSString *summary;

// The time at which this media was last updated. This includes changes to media
// metadata. Formatted as an RFC 3339 timestamp.
@property (nonatomic, retain) GTLDateTime *updated;

// The URL for the page that hosts this media.
@property (nonatomic, copy) NSString *url;

// The duration in milliseconds of this video.
@property (nonatomic, retain) NSNumber *videoDuration;  // longLongValue

// The encoding status of this video. Possible values are:
// - "UPLOADING" - Not all the video bytes have been received.
// - "PENDING" - Video not yet processed.
// - "FAILED" - Video processing failed.
// - "READY" - A single video stream is playable.
// - "FINAL" - All video streams are playable.
@property (nonatomic, copy) NSString *videoStatus;

// The width in pixels of the original image.
@property (nonatomic, retain) NSNumber *width;  // unsignedIntValue

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsMediaAuthor
//

@interface GTLPlusDomainsMediaAuthor : GTLObject

// The author's name.
@property (nonatomic, copy) NSString *displayName;

// ID of the author.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// The author's Google profile image.
@property (nonatomic, retain) GTLPlusDomainsMediaAuthorImage *image;

// A link to the author's Google profile.
@property (nonatomic, copy) NSString *url;

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsMediaExif
//

@interface GTLPlusDomainsMediaExif : GTLObject

// The time the media was captured. Formatted as an RFC 3339 timestamp.
@property (nonatomic, retain) GTLDateTime *time;

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsMediaAuthorImage
//

@interface GTLPlusDomainsMediaAuthorImage : GTLObject

// The URL of the author's profile photo. To resize the image and crop it to a
// square, append the query string ?sz=x, where x is the dimension in pixels of
// each side.
@property (nonatomic, copy) NSString *url;

@end
