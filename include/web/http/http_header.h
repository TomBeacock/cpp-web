#pragma once

#include "web/http/http_types.h"
#include "web/media/media_type.h"

#include <types/types.h>

#include <chrono>
#include <optional>
#include <string>
#include <vector>

namespace Web::Http {

class Header {
  public:
    enum class Type {
        Accept,
        AcceptCh,
        AcceptCharset,
        AcceptEncoding,
        AcceptLanguage,
        AcceptPatch,
        AcceptPost,
        AcceptRanges,
        AccessControlAllowCredentials,
        AccessControlAllowHeaders,
        AccessControlAllowMethods,
        AccessControlAllowOrigin,
        AccessControlExposeHeaders,
        AccessControlMaxAge,
        AccessControlRequestHeaders,
        AccessControlRequestMethod,
        Age,
        Allow,
        AltSvc,
        AltUsed,
        AttributionReportingEligible,
        AttributionReportingRegisterSource,
        AttributionReportingRegisterTrigger,
        Authorization,
        CacheControl,
        ClearSiteData,
        Connection,
        ContentDigest,
        ContentDisposition,
        ContentEncoding,
        ContentLanguage,
        ContentLength,
        ContentLocation,
        ContentRange,
        ContentSecurityPolicy,
        ContentSecurityPolicyReportOnly,
        ContentType,
        Cookie,
        CriticalCh,
        CrossOriginEmbedderPolicy,
        CrossOriginOpenerPolicy,
        CrossOriginResourcePolicy,
        Date,
        DeviceMemory,
        Downlink,
        EarlyData,
        Ect,
        ETag,
        Expect,
        ExpectCt,
        Expires,
        Forwarded,
        From,
        Host,
        IfMatch,
        IfModifiedSince,
        IfNoneMatch,
        IfRange,
        IfUnmodifiedSince,
        KeepAlive,
        LastModified,
        Link,
        Location,
        MaxForwards,
        Nel,
        NoVarySearch,
        ObserveBrowsingTopics,
        Origin,
        OriginAgentCluster,
        PermissionsPolicy,
        Priority,
        ProxyAuthenticate,
        ProxyAuthorization,
        Range,
        Referer,
        ReferrerPolicy,
        ReportingEndpoints,
        ReprDigest,
        RetryAfter,
        Rtt,
        SaveData,
        Sec_BrowsingTopics,
        Sec_Ch_PrefersColorScheme,
        Sec_Ch_PrefersReducedMotion,
        Sec_Ch_PrefersReducedTransparency,
        Sec_Ch_Ua,
        Sec_Ch_Ua_Arch,
        Sec_Ch_Ua_Bitness,
        Sec_Ch_Ua_FullVersionList,
        Sec_Ch_Ua_Mobile,
        Sec_Ch_Ua_Model,
        Sec_Ch_Ua_Platform,
        Sec_Ch_Ua_PlatformVersion,
        Sec_FetchDest,
        Sec_FetchMode,
        Sec_FetchSite,
        Sec_FetchUser,
        Sec_Gpc,
        Sec_Purpose,
        Sec_WebSocketAccept,
        Server,
        ServerTiming,
        ServiceWorkerNavigationPreload,
        SetCookie,
        SetLogin,
        SourceMap,
        SpeculationRules,
        StrictTransportSecurity,
        SupportsLoadingMode,
        Te,
        TimingAllowOrigin,
        Trailer,
        TransferEncoding,
        Upgrade,
        UpgradeInsecureRequests,
        UserAgent,
        Vary,
        Via,
        WantContentDigest,
        WantReprDigest,
        WwwAuthenticate,
        X_ContentTypeOptions,
        X_DnsPrefetchControl,
        X_ForwardedFor,
        X_ForwardedHost,
        X_ForwardedProto,
        X_FrameOptions,
        X_XssProtection,
    };

    inline Type get_header_type() const;

    virtual std::string to_string() const = 0;

  protected:
    Header(Type type);

  private:
    Type header_type;
};

std::string_view to_string(Header::Type type);
std::optional<Header::Type> to_header_type(std::string_view str);

struct Accept : public Header {
    static constexpr auto header_type = Header::Type::Accept;

    struct Type {
        Media::Type media_type;
        Nat16 weight;
    };
    std::vector<Type> types;

    Accept();

    virtual std::string to_string() const override;
};

struct Allow : public Header {
    static constexpr auto header_type = Header::Type::Allow;

    Method methods;

    Allow();

    virtual std::string to_string() const override;
};

struct ContentLength : public Header {
    static constexpr auto header_type = Header::Type::ContentLength;

    Nat length;

    ContentLength();

    virtual std::string to_string() const override;
};

struct ContentType : public Header {
    static constexpr auto header_type = Header::Type::ContentType;

    Media::Type media_type;
    std::string charset;
    std::string boundary;

    ContentType();

    virtual std::string to_string() const override;
};

struct Date : public Header {
    static constexpr auto header_type = Header::Type::Date;

    std::chrono::utc_seconds time;

    Date();

    virtual std::string to_string() const override;
};

struct Host : public Header {
    static constexpr auto header_type = Header::Type::Host;

    std::string host;

    Host();

    virtual std::string to_string() const override;
};

inline Header::Type Header::get_header_type() const
{
    return this->header_type;
}
}  // namespace Web::Http