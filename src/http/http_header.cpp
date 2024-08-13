#include "web/http/http_header.h"

#include <map>
#include <sstream>

namespace Web::Http {
Header::Header(Type type) : header_type(type) {}

std::string_view to_string(Header::Type type)
{
    switch (type) {
        case Header::Type::Accept: return "accept";
        case Header::Type::AcceptCh: return "accept-ch";
        case Header::Type::AcceptCharset: return "accept-charset";
        case Header::Type::AcceptEncoding: return "accept-encoding";
        case Header::Type::AcceptLanguage: return "accept-language";
        case Header::Type::AcceptPatch: return "accept-patch";
        case Header::Type::AcceptPost: return "accept-post";
        case Header::Type::AcceptRanges: return "accept-ranges";
        case Header::Type::AccessControlAllowCredentials:
            return "access-control-allow-credentials";
        case Header::Type::AccessControlAllowHeaders:
            return "access-control-allow-headers";
        case Header::Type::AccessControlAllowMethods:
            return "access-control-allow-methods";
        case Header::Type::AccessControlAllowOrigin:
            return "access-control-allow-origin";
        case Header::Type::AccessControlExposeHeaders:
            return "access-control-expose-headers";
        case Header::Type::AccessControlMaxAge: return "access-control-max-age";
        case Header::Type::AccessControlRequestHeaders:
            return "access-control-request-headers";
        case Header::Type::AccessControlRequestMethod:
            return "access-control-request-method";
        case Header::Type::Age: return "age";
        case Header::Type::Allow: return "allow";
        case Header::Type::AltSvc: return "alt-svc";
        case Header::Type::AltUsed: return "alt-used";
        case Header::Type::AttributionReportingEligible:
            return "attribution-reporting-eligible";
        case Header::Type::AttributionReportingRegisterSource:
            return "attribution-reporting-register-source";
        case Header::Type::AttributionReportingRegisterTrigger:
            return "attribution-reporting-register-trigger";
        case Header::Type::Authorization: return "authorization";
        case Header::Type::CacheControl: return "cache-control";
        case Header::Type::ClearSiteData: return "clear-site-data";
        case Header::Type::Connection: return "connection";
        case Header::Type::ContentDigest: return "content-digest";
        case Header::Type::ContentDisposition: return "content-disposition";
        case Header::Type::ContentEncoding: return "content-encoding";
        case Header::Type::ContentLanguage: return "content-language";
        case Header::Type::ContentLength: return "content-length";
        case Header::Type::ContentLocation: return "content-location";
        case Header::Type::ContentRange: return "content-range";
        case Header::Type::ContentSecurityPolicy:
            return "content-security-policy";
        case Header::Type::ContentSecurityPolicyReportOnly:
            return "content-security-policy-report-only";
        case Header::Type::ContentType: return "content-type";
        case Header::Type::Cookie: return "cookie";
        case Header::Type::CriticalCh: return "critical-ch";
        case Header::Type::CrossOriginEmbedderPolicy:
            return "cross-origin-embedder-policy";
        case Header::Type::CrossOriginOpenerPolicy:
            return "cross-origin-opener-policy";
        case Header::Type::CrossOriginResourcePolicy:
            return "cross-origin-resource-policy";
        case Header::Type::Date: return "date";
        case Header::Type::DeviceMemory: return "device-memory";
        case Header::Type::Downlink: return "downlink";
        case Header::Type::EarlyData: return "early-data";
        case Header::Type::Ect: return "ect";
        case Header::Type::ETag: return "etag";
        case Header::Type::Expect: return "expect";
        case Header::Type::ExpectCt: return "expect-ct";
        case Header::Type::Expires: return "expires";
        case Header::Type::Forwarded: return "forwarded";
        case Header::Type::From: return "from";
        case Header::Type::Host: return "host";
        case Header::Type::IfMatch: return "if-match";
        case Header::Type::IfModifiedSince: return "if-modified-since";
        case Header::Type::IfNoneMatch: return "if-none-match";
        case Header::Type::IfRange: return "if-range";
        case Header::Type::IfUnmodifiedSince: return "if-unmodified-since";
        case Header::Type::KeepAlive: return "keep-alive";
        case Header::Type::LastModified: return "last-modified";
        case Header::Type::Link: return "link";
        case Header::Type::Location: return "location";
        case Header::Type::MaxForwards: return "max-forwards";
        case Header::Type::Nel: return "nel";
        case Header::Type::NoVarySearch: return "no-vary-search";
        case Header::Type::ObserveBrowsingTopics:
            return "observe-browsing-topics";
        case Header::Type::Origin: return "origin";
        case Header::Type::OriginAgentCluster: return "origin-agent-cluster";
        case Header::Type::PermissionsPolicy: return "permissions-policy";
        case Header::Type::Priority: return "priority";
        case Header::Type::ProxyAuthenticate: return "proxy-authenticate";
        case Header::Type::ProxyAuthorization: return "proxy-authorization";
        case Header::Type::Range: return "range";
        case Header::Type::Referer: return "referer";
        case Header::Type::ReferrerPolicy: return "referrer-policy";
        case Header::Type::ReportingEndpoints: return "reporting-endpoints";
        case Header::Type::ReprDigest: return "repr-digest";
        case Header::Type::RetryAfter: return "retry-after";
        case Header::Type::Rtt: return "rtt";
        case Header::Type::SaveData: return "save-data";
        case Header::Type::Sec_BrowsingTopics: return "sec-browsing-topics";
        case Header::Type::Sec_Ch_PrefersColorScheme:
            return "sec-ch-prefers-color-scheme";
        case Header::Type::Sec_Ch_PrefersReducedMotion:
            return "Sec-ch-prefers-reduced-motion";
        case Header::Type::Sec_Ch_PrefersReducedTransparency:
            return "Sec-ch-prefers-reduced-transparency";
        case Header::Type::Sec_Ch_Ua: return "sec-ch-ua";
        case Header::Type::Sec_Ch_Ua_Arch: return "sec-ch-ua-arch";
        case Header::Type::Sec_Ch_Ua_Bitness: return "sec-ch-ua-bitness";
        case Header::Type::Sec_Ch_Ua_FullVersionList:
            return "sec-ch-ua-full-version-list";
        case Header::Type::Sec_Ch_Ua_Mobile: return "sec-ch-ua-mobile";
        case Header::Type::Sec_Ch_Ua_Model: return "sec-ch-ua-model";
        case Header::Type::Sec_Ch_Ua_Platform: return "sec-ch-ua-platform";
        case Header::Type::Sec_Ch_Ua_PlatformVersion:
            return "sec-ch-ua-platform-version";
        case Header::Type::Sec_FetchDest: return "sec-Fetch-dest";
        case Header::Type::Sec_FetchMode: return "sec-fetch-mode";
        case Header::Type::Sec_FetchSite: return "sec-fetch-site";
        case Header::Type::Sec_FetchUser: return "sec-fetch-user";
        case Header::Type::Sec_Gpc: return "sec-gpc";
        case Header::Type::Sec_Purpose: return "sec-purpose";
        case Header::Type::Sec_WebSocketAccept: return "sec-websocket-accept";
        case Header::Type::Server: return "server";
        case Header::Type::ServerTiming: return "server-timing";
        case Header::Type::ServiceWorkerNavigationPreload:
            return "service-worker-navigation-preload";
        case Header::Type::SetCookie: return "set-cookie";
        case Header::Type::SetLogin: return "set-login";
        case Header::Type::SourceMap: return "sourcemap";
        case Header::Type::SpeculationRules: return "speculation-rules";
        case Header::Type::StrictTransportSecurity:
            return "strict-transport-security";
        case Header::Type::SupportsLoadingMode: return "supports-loading-mode";
        case Header::Type::Te: return "te";
        case Header::Type::TimingAllowOrigin: return "timing-allow-origin";
        case Header::Type::Trailer: return "trailer";
        case Header::Type::TransferEncoding: return "transfer-encoding";
        case Header::Type::Upgrade: return "upgrade";
        case Header::Type::UpgradeInsecureRequests:
            return "upgrade-insecure-requests";
        case Header::Type::UserAgent: return "user-agent";
        case Header::Type::Vary: return "vary";
        case Header::Type::Via: return "via";
        case Header::Type::WantContentDigest: return "want-content-digest";
        case Header::Type::WantReprDigest: return "want-repr-digest";
        case Header::Type::WwwAuthenticate: return "www-authenticate";
        case Header::Type::X_ContentTypeOptions:
            return "x-content-type-options";
        case Header::Type::X_DnsPrefetchControl:
            return "x-dns-prefetch-control";
        case Header::Type::X_ForwardedFor: return "x-forwarded-for";
        case Header::Type::X_ForwardedHost: return "x-forwarded-host";
        case Header::Type::X_ForwardedProto: return "x-forwarded-proto"; ;
        case Header::Type::X_FrameOptions: return "x-frame-options";
        case Header::Type::X_XssProtection: return "x-xss-protection";
    }
    return "";
}

static const std::vector<std::pair<std::string, Header::Type>>
    header_type_map_data = {
        {"accept", Header::Type::Accept},
        {"accept-ch", Header::Type::AcceptCh},
        {"accept-charset", Header::Type::AcceptCharset},
        {"accept-encoding", Header::Type::AcceptEncoding},
        {"accept-language", Header::Type::AcceptLanguage},
        {"accept-patch", Header::Type::AcceptPatch},
        {"accept-post", Header::Type::AcceptPost},
        {"accept-ranges", Header::Type::AcceptRanges},
        {"access-control-allow-credentials",
         Header::Type::AccessControlAllowCredentials},
        {"access-control-allow-headers",
         Header::Type::AccessControlAllowHeaders},
        {"access-control-allow-methods",
         Header::Type::AccessControlAllowMethods},
        {"access-control-allow-origin", Header::Type::AccessControlAllowOrigin},
        {"access-control-expose-headers",
         Header::Type::AccessControlExposeHeaders},
        {"access-control-max-age", Header::Type::AccessControlMaxAge},
        {"access-control-request-headers",
         Header::Type::AccessControlRequestHeaders},
        {"access-control-request-method",
         Header::Type::AccessControlRequestMethod},
        {"age", Header::Type::Age},
        {"allow", Header::Type::Allow},
        {"alt-svc", Header::Type::AltSvc},
        {"alt-used", Header::Type::AltUsed},
        {"attribution-reporting-eligible",
         Header::Type::AttributionReportingEligible},
        {"attribution-reporting-register-source",
         Header::Type::AttributionReportingRegisterSource},
        {"attribution-reporting-register-trigger",
         Header::Type::AttributionReportingRegisterTrigger},
        {"authorization", Header::Type::Authorization},
        {"cache-control", Header::Type::CacheControl},
        {"clear-site-data", Header::Type::ClearSiteData},
        {"connection", Header::Type::Connection},
        {"content-digest", Header::Type::ContentDigest},
        {"content-disposition", Header::Type::ContentDisposition},
        {"content-encoding", Header::Type::ContentEncoding},
        {"content-language", Header::Type::ContentLanguage},
        {"content-length", Header::Type::ContentLength},
        {"content-location", Header::Type::ContentLocation},
        {"content-range", Header::Type::ContentRange},
        {"content-security-policy", Header::Type::ContentSecurityPolicy},
        {"content-security-policy-report-only",
         Header::Type::ContentSecurityPolicyReportOnly},
        {"content-type", Header::Type::ContentType},
        {"cookie", Header::Type::Cookie},
        {"critical-ch", Header::Type::CriticalCh},
        {"cross-origin-embedder-policy",
         Header::Type::CrossOriginEmbedderPolicy},
        {"cross-origin-opener-policy", Header::Type::CrossOriginOpenerPolicy},
        {"cross-origin-resource-policy",
         Header::Type::CrossOriginResourcePolicy},
        {"date", Header::Type::Date},
        {"device-memory", Header::Type::DeviceMemory},
        {"downlink", Header::Type::Downlink},
        {"early-data", Header::Type::EarlyData},
        {"ect", Header::Type::Ect},
        {"etag", Header::Type::ETag},
        {"expect", Header::Type::Expect},
        {"expect-ct", Header::Type::ExpectCt},
        {"expires", Header::Type::Expires},
        {"forwarded", Header::Type::Forwarded},
        {"from", Header::Type::From},
        {"host", Header::Type::Host},
        {"if-match", Header::Type::IfMatch},
        {"if-modified-since", Header::Type::IfModifiedSince},
        {"if-none-match", Header::Type::IfNoneMatch},
        {"if-range", Header::Type::IfRange},
        {"if-unmodified-since", Header::Type::IfUnmodifiedSince},
        {"keep-alive", Header::Type::KeepAlive},
        {"last-modified", Header::Type::LastModified},
        {"link", Header::Type::Link},
        {"location", Header::Type::Location},
        {"max-forwards", Header::Type::MaxForwards},
        {"nel", Header::Type::Nel},
        {"no-vary-search", Header::Type::NoVarySearch},
        {"observe-browsing-topics", Header::Type::ObserveBrowsingTopics},
        {"origin", Header::Type::Origin},
        {"origin-agent-cluster", Header::Type::OriginAgentCluster},
        {"permissions-policy", Header::Type::PermissionsPolicy},
        {"priority", Header::Type::Priority},
        {"proxy-authenticate", Header::Type::ProxyAuthenticate},
        {"proxy-authorization", Header::Type::ProxyAuthorization},
        {"range", Header::Type::Range},
        {"referer", Header::Type::Referer},
        {"referrer-policy", Header::Type::ReferrerPolicy},
        {"reporting-endpoints", Header::Type::ReportingEndpoints},
        {"repr-digest", Header::Type::ReprDigest},
        {"retry-after", Header::Type::RetryAfter},
        {"rtt", Header::Type::Rtt},
        {"save-data", Header::Type::SaveData},
        {"sec-browsing-topics", Header::Type::Sec_BrowsingTopics},
        {"sec-ch-prefers-color-scheme",
         Header::Type::Sec_Ch_PrefersColorScheme},
        {"Sec-ch-prefers-reduced-motion",
         Header::Type::Sec_Ch_PrefersReducedMotion},
        {"Sec-ch-prefers-reduced-transparency",
         Header::Type::Sec_Ch_PrefersReducedTransparency},
        {"sec-ch-ua", Header::Type::Sec_Ch_Ua},
        {"sec-ch-ua-arch", Header::Type::Sec_Ch_Ua_Arch},
        {"sec-ch-ua-bitness", Header::Type::Sec_Ch_Ua_Bitness},
        {"sec-ch-ua-full-version-list",
         Header::Type::Sec_Ch_Ua_FullVersionList},
        {"sec-ch-ua-mobile", Header::Type::Sec_Ch_Ua_Mobile},
        {"sec-ch-ua-model", Header::Type::Sec_Ch_Ua_Model},
        {"sec-ch-ua-platform", Header::Type::Sec_Ch_Ua_Platform},
        {"sec-ch-ua-platform-version", Header::Type::Sec_Ch_Ua_PlatformVersion},
        {"sec-Fetch-dest", Header::Type::Sec_FetchDest},
        {"sec-fetch-mode", Header::Type::Sec_FetchMode},
        {"sec-fetch-site", Header::Type::Sec_FetchSite},
        {"sec-fetch-user", Header::Type::Sec_FetchUser},
        {"sec-gpc", Header::Type::Sec_Gpc},
        {"sec-purpose", Header::Type::Sec_Purpose},
        {"sec-websocket-accept", Header::Type::Sec_WebSocketAccept},
        {"server", Header::Type::Server},
        {"server-timing", Header::Type::ServerTiming},
        {"service-worker-navigation-preload",
         Header::Type::ServiceWorkerNavigationPreload},
        {"set-cookie", Header::Type::SetCookie},
        {"set-login", Header::Type::SetLogin},
        {"sourcemap", Header::Type::SourceMap},
        {"speculation-rules", Header::Type::SpeculationRules},
        {"strict-transport-security", Header::Type::StrictTransportSecurity},
        {"supports-loading-mode", Header::Type::SupportsLoadingMode},
        {"te", Header::Type::Te},
        {"timing-allow-origin", Header::Type::TimingAllowOrigin},
        {"trailer", Header::Type::Trailer},
        {"transfer-encoding", Header::Type::TransferEncoding},
        {"upgrade", Header::Type::Upgrade},
        {"upgrade-insecure-requests", Header::Type::UpgradeInsecureRequests},
        {"user-agent", Header::Type::UserAgent},
        {"vary", Header::Type::Vary},
        {"via", Header::Type::Via},
        {"want-content-digest", Header::Type::WantContentDigest},
        {"want-repr-digest", Header::Type::WantReprDigest},
        {"www-authenticate", Header::Type::WwwAuthenticate},
        {"x-content-type-options", Header::Type::X_ContentTypeOptions},
        {"x-dns-prefetch-control", Header::Type::X_DnsPrefetchControl},
        {"x-forwarded-for", Header::Type::X_ForwardedFor},
        {"x-forwarded-host", Header::Type::X_ForwardedHost},
        {"x-forwarded-proto", Header::Type::X_ForwardedProto},
        {"x-frame-options", Header::Type::X_FrameOptions},
        {"x-xss-protection", Header::Type::X_XssProtection},
};

std::optional<Header::Type> Web::Http::to_header_type(std::string_view str)
{
    static const std::map<std::string, Header::Type, std::less<>>
        header_type_map(
            header_type_map_data.begin(), header_type_map_data.end());

    if (auto it = header_type_map.find(str); it != header_type_map.end()) {
        return it->second;
    }
    return std::nullopt;
}

Accept::Accept() : Header(Header::Type::Accept) {}

std::string Accept::to_string() const
{
    std::stringstream ss;
    const char *sep = "";
    for (const Type &type : this->types) {
        ss << sep << Media::to_string(type.media_type);
        if (type.weight < 1000) {
            if (type.weight == 0) {
                ss << ";q=0";
            } else if (type.weight % 100 == 0) {
                ss << std::format(";q=0.{}", type.weight / 100);
            } else if (type.weight % 10 == 0) {
                ss << std::format(
                    ";q=0.{}{}", type.weight / 100, (type.weight % 100) / 10);
            } else {
                ss << std::format(
                    ";q=0.{}{}{}",
                    type.weight / 100,
                    (type.weight % 100) / 10,
                    type.weight % 10);
            }
        }
        sep = ", ";
    }
    return ss.str();
}

Allow::Allow() : Header(Header::Type::Allow), methods(bitmask_all<Method>) {}

std::string Allow::to_string() const
{
    return to_list_string(methods);
}

ContentLength::ContentLength() : Header(Header::Type::ContentLength), length(0)
{}

std::string ContentLength::to_string() const
{
    return std::format("{}", this->length);
}

ContentType::ContentType()
    : Header(Header::Type::ContentType),
      media_type(Media::Type::Any)
{}

std::string ContentType::to_string() const
{
    std::stringstream ss;
    ss << Media::to_string(this->media_type);
    if (this->charset.length() > 0) {
        ss << std::format(";charset={}", this->charset);
    }
    if (this->boundary.length() > 0) {
        ss << std::format(";boundary={}", this->boundary);
    }
    return ss.str();
}

Host::Host() : Header(Header::Type::Host) {}

std::string Host::to_string() const
{
    return this->host;
}
}  // namespace Web::Http