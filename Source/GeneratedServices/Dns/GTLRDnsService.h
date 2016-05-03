// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud DNS API (dns/v1)
// Description:
//   Configures and serves authoritative DNS records.
// Documentation:
//   https://developers.google.com/cloud-dns

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View and manage your data across Google Cloud Platform
 *  services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeDnsCloudPlatform;
/**
 *  Authorization scope: View your data across Google Cloud Platform services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform.read-only"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeDnsCloudPlatformReadOnly;
/**
 *  Authorization scope: View your DNS records hosted by Google Cloud DNS
 *
 *  Value "https://www.googleapis.com/auth/ndev.clouddns.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeDnsNdevClouddnsReadonly;
/**
 *  Authorization scope: View and manage your DNS records hosted by Google Cloud
 *  DNS
 *
 *  Value "https://www.googleapis.com/auth/ndev.clouddns.readwrite"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeDnsNdevClouddnsReadwrite;

// ----------------------------------------------------------------------------
//   GTLRDnsService
//

/**
 *  Service for executing Google Cloud DNS API queries.
 *
 *  Configures and serves authoritative DNS records.
 */
@interface GTLRDnsService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRDnsQuery.h. The query can the be sent with GTLRService's execute methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END