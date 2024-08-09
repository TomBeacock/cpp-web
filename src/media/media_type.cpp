#include "web/media/media_type.h"

#include <format>
#include <map>

namespace Web::Media {
std::string_view to_string(Type type)
{
    switch (type) {
        case Type::Any: return "*/*";
        case Type::Application_Any: return "application/*";
        case Type::Application_1dInterleavedParityfec:
            return "application/1d-interleaved-parityfec";
        case Type::Application_3gpdashQoeReportXml:
            return "application/3gpdash-qoe-report+xml";
        case Type::Application_3gppHalJson: return "application/3gppHal+json";
        case Type::Application_3gppHalFormsJson:
            return "application/3gppHalForms+json";
        case Type::Application_3gppImsXml: return "application/3gpp-ims+xml";
        case Type::Application_A2L: return "application/A2L";
        case Type::Application_AceGroupcommCbor:
            return "application/ace-groupcomm+cbor";
        case Type::Application_AceCbor: return "application/ace+cbor";
        case Type::Application_AceJson: return "application/ace+json";
        case Type::Application_Activemessage:
            return "application/activemessage";
        case Type::Application_ActivityJson: return "application/activity+json";
        case Type::Application_AifCbor: return "application/aif+cbor";
        case Type::Application_AifJson: return "application/aif+json";
        case Type::Application_AltoCdniJson:
            return "application/alto-cdni+json";
        case Type::Application_AltoCdnifilterJson:
            return "application/alto-cdnifilter+json";
        case Type::Application_AltoCostmapJson:
            return "application/alto-costmap+json";
        case Type::Application_AltoCostmapfilterJson:
            return "application/alto-costmapfilter+json";
        case Type::Application_AltoDirectoryJson:
            return "application/alto-directory+json";
        case Type::Application_AltoEndpointpropJson:
            return "application/alto-endpointprop+json";
        case Type::Application_AltoEndpointpropparamsJson:
            return "application/alto-endpointpropparams+json";
        case Type::Application_AltoEndpointcostJson:
            return "application/alto-endpointcost+json";
        case Type::Application_AltoEndpointcostparamsJson:
            return "application/alto-endpointcostparams+json";
        case Type::Application_AltoErrorJson:
            return "application/alto-error+json";
        case Type::Application_AltoNetworkmapfilterJson:
            return "application/alto-networkmapfilter+json";
        case Type::Application_AltoNetworkmapJson:
            return "application/alto-networkmap+json";
        case Type::Application_AltoPropmapJson:
            return "application/alto-propmap+json";
        case Type::Application_AltoPropmapparamsJson:
            return "application/alto-propmapparams+json";
        case Type::Application_AltoTipsJson:
            return "application/alto-tips+json";
        case Type::Application_AltoTipsparamsJson:
            return "application/alto-tipsparams+json";
        case Type::Application_AltoUpdatestreamcontrolJson:
            return "application/alto-updatestreamcontrol+json";
        case Type::Application_AltoUpdatestreamparamsJson:
            return "application/alto-updatestreamparams+json";
        case Type::Application_AML: return "application/AML";
        case Type::Application_AndrewInset: return "application/andrew-inset";
        case Type::Application_Applefile: return "application/applefile";
        case Type::Application_AtJwt: return "application/at+jwt";
        case Type::Application_ATF: return "application/ATF";
        case Type::Application_ATFX: return "application/ATFX";
        case Type::Application_AtomXml: return "application/atom+xml";
        case Type::Application_AtomcatXml: return "application/atomcat+xml";
        case Type::Application_AtomdeletedXml:
            return "application/atomdeleted+xml";
        case Type::Application_Atomicmail: return "application/atomicmail";
        case Type::Application_AtomsvcXml: return "application/atomsvc+xml";
        case Type::Application_AtscDwdXml: return "application/atsc-dwd+xml";
        case Type::Application_AtscDynamicEventMessage:
            return "application/atsc-dynamic-event-message";
        case Type::Application_AtscHeldXml: return "application/atsc-held+xml";
        case Type::Application_AtscRdtJson: return "application/atsc-rdt+json";
        case Type::Application_AtscRsatXml: return "application/atsc-rsat+xml";
        case Type::Application_ATXML: return "application/ATXML";
        case Type::Application_AuthPolicyXml:
            return "application/auth-policy+xml";
        case Type::Application_AutomationmlAmlXml:
            return "application/automationml-aml+xml";
        case Type::Application_AutomationmlAmlxZip:
            return "application/automationml-amlx+zip";
        case Type::Application_BacnetXddZip:
            return "application/bacnet-xdd+zip";
        case Type::Application_BatchSMTP: return "application/batch-SMTP";
        case Type::Application_BeepXml: return "application/beep+xml";
        case Type::Application_Bufr: return "application/bufr";
        case Type::Application_C2pa: return "application/c2pa";
        case Type::Application_CalendarJson: return "application/calendar+json";
        case Type::Application_CalendarXml: return "application/calendar+xml";
        case Type::Application_CallCompletion:
            return "application/call-completion";
        case Type::Application_CALS1840: return "application/CALS-1840";
        case Type::Application_CaptiveJson: return "application/captive+json";
        case Type::Application_Cbor: return "application/cbor";
        case Type::Application_CborSeq: return "application/cbor-seq";
        case Type::Application_Cccex: return "application/cccex";
        case Type::Application_CcmpXml: return "application/ccmp+xml";
        case Type::Application_CcxmlXml: return "application/ccxml+xml";
        case Type::Application_CdaXml: return "application/cda+xml";
        case Type::Application_CDFXXML: return "application/CDFX+XML";
        case Type::Application_CdmiCapability:
            return "application/cdmi-capability";
        case Type::Application_CdmiContainer:
            return "application/cdmi-container";
        case Type::Application_CdmiDomain: return "application/cdmi-domain";
        case Type::Application_CdmiObject: return "application/cdmi-object";
        case Type::Application_CdmiQueue: return "application/cdmi-queue";
        case Type::Application_Cdni: return "application/cdni";
        case Type::Application_CEA: return "application/CEA";
        case Type::Application_Cea2018Xml: return "application/cea-2018+xml";
        case Type::Application_CellmlXml: return "application/cellml+xml";
        case Type::Application_Cfw: return "application/cfw";
        case Type::Application_CidEdhocCborSeq:
            return "application/cid-edhoc+cbor-seq";
        case Type::Application_CityJson: return "application/city+json";
        case Type::Application_Clr: return "application/clr";
        case Type::Application_ClueInfoXml: return "application/clue_info+xml";
        case Type::Application_ClueXml: return "application/clue+xml";
        case Type::Application_Cms: return "application/cms";
        case Type::Application_CnrpXml: return "application/cnrp+xml";
        case Type::Application_CoapGroupJson:
            return "application/coap-group+json";
        case Type::Application_CoapPayload: return "application/coap-payload";
        case Type::Application_Commonground: return "application/commonground";
        case Type::Application_ConciseProblemDetailsCbor:
            return "application/concise-problem-details+cbor";
        case Type::Application_ConferenceInfoXml:
            return "application/conference-info+xml";
        case Type::Application_CplXml: return "application/cpl+xml";
        case Type::Application_Cose: return "application/cose";
        case Type::Application_CoseKey: return "application/cose-key";
        case Type::Application_CoseKeySet: return "application/cose-key-set";
        case Type::Application_CoseX509: return "application/cose-x509";
        case Type::Application_Csrattrs: return "application/csrattrs";
        case Type::Application_CstaXml: return "application/csta+xml";
        case Type::Application_CSTAdataXml: return "application/CSTAdata+xml";
        case Type::Application_CsvmJson: return "application/csvm+json";
        case Type::Application_Cwl: return "application/cwl";
        case Type::Application_CwlJson: return "application/cwl+json";
        case Type::Application_CwlYaml: return "application/cwl+yaml";
        case Type::Application_Cwt: return "application/cwt";
        case Type::Application_Cybercash: return "application/cybercash";
        case Type::Application_DashXml: return "application/dash+xml";
        case Type::Application_DashPatchXml:
            return "application/dash-patch+xml";
        case Type::Application_Dashdelta: return "application/dashdelta";
        case Type::Application_DavmountXml: return "application/davmount+xml";
        case Type::Application_DcaRft: return "application/dca-rft";
        case Type::Application_DCD: return "application/DCD";
        case Type::Application_DecDx: return "application/dec-dx";
        case Type::Application_DialogInfoXml:
            return "application/dialog-info+xml";
        case Type::Application_Dicom: return "application/dicom";
        case Type::Application_DicomJson: return "application/dicom+json";
        case Type::Application_DicomXml: return "application/dicom+xml";
        case Type::Application_DII: return "application/DII";
        case Type::Application_DIT: return "application/DIT";
        case Type::Application_Dns: return "application/dns";
        case Type::Application_DnsJson: return "application/dns+json";
        case Type::Application_DnsMessage: return "application/dns-message";
        case Type::Application_DotsCbor: return "application/dots+cbor";
        case Type::Application_DpopJwt: return "application/dpop+jwt";
        case Type::Application_DskppXml: return "application/dskpp+xml";
        case Type::Application_DsscDer: return "application/dssc+der";
        case Type::Application_DsscXml: return "application/dssc+xml";
        case Type::Application_Dvcs: return "application/dvcs";
        case Type::Application_Ecmascript: return "application/ecmascript";
        case Type::Application_EdhocCborSeq:
            return "application/edhoc+cbor-seq";
        case Type::Application_EDIConsent: return "application/EDI-consent";
        case Type::Application_EDIFACT: return "application/EDIFACT";
        case Type::Application_EDIX12: return "application/EDI-X12";
        case Type::Application_Efi: return "application/efi";
        case Type::Application_ElmJson: return "application/elm+json";
        case Type::Application_ElmXml: return "application/elm+xml";
        case Type::Application_EmergencyCallDataCapXml:
            return "application/EmergencyCallData.cap+xml";
        case Type::Application_EmergencyCallDataCommentXml:
            return "application/EmergencyCallData.Comment+xml";
        case Type::Application_EmergencyCallDataControlXml:
            return "application/EmergencyCallData.Control+xml";
        case Type::Application_EmergencyCallDataDeviceInfoXml:
            return "application/EmergencyCallData.DeviceInfo+xml";
        case Type::Application_EmergencyCallDataECallMSD:
            return "application/EmergencyCallData.eCall.MSD";
        case Type::Application_EmergencyCallDataLegacyESNJson:
            return "application/EmergencyCallData.LegacyESN+json";
        case Type::Application_EmergencyCallDataProviderInfoXml:
            return "application/EmergencyCallData.ProviderInfo+xml";
        case Type::Application_EmergencyCallDataServiceInfoXml:
            return "application/EmergencyCallData.ServiceInfo+xml";
        case Type::Application_EmergencyCallDataSubscriberInfoXml:
            return "application/EmergencyCallData.SubscriberInfo+xml";
        case Type::Application_EmergencyCallDataVEDSXml:
            return "application/EmergencyCallData.VEDS+xml";
        case Type::Application_EmmaXml: return "application/emma+xml";
        case Type::Application_EmotionmlXml: return "application/emotionml+xml";
        case Type::Application_Encaprtp: return "application/encaprtp";
        case Type::Application_EppXml: return "application/epp+xml";
        case Type::Application_EpubZip: return "application/epub+zip";
        case Type::Application_Eshop: return "application/eshop";
        case Type::Application_Example: return "application/example";
        case Type::Application_Exi: return "application/exi";
        case Type::Application_ExpectCtReportJson:
            return "application/expect-ct-report+json";
        case Type::Application_Express: return "application/express";
        case Type::Application_Fastinfoset: return "application/fastinfoset";
        case Type::Application_Fastsoap: return "application/fastsoap";
        case Type::Application_Fdf: return "application/fdf";
        case Type::Application_FdtXml: return "application/fdt+xml";
        case Type::Application_FhirJson: return "application/fhir+json";
        case Type::Application_FhirXml: return "application/fhir+xml";
        case Type::Application_Fits: return "application/fits";
        case Type::Application_Flexfec: return "application/flexfec";
        case Type::Application_FontSfnt: return "application/font-sfnt";
        case Type::Application_FontTdpfr: return "application/font-tdpfr";
        case Type::Application_FontWoff: return "application/font-woff";
        case Type::Application_FrameworkAttributesXml:
            return "application/framework-attributes+xml";
        case Type::Application_GeoJson: return "application/geo+json";
        case Type::Application_GeoJsonSeq: return "application/geo+json-seq";
        case Type::Application_GeopackageSqlite3:
            return "application/geopackage+sqlite3";
        case Type::Application_GeoxacmlJson: return "application/geoxacml+json";
        case Type::Application_GeoxacmlXml: return "application/geoxacml+xml";
        case Type::Application_GltfBuffer: return "application/gltf-buffer";
        case Type::Application_GmlXml: return "application/gml+xml";
        case Type::Application_GnapBindingJws:
            return "application/gnap-binding-jws";
        case Type::Application_GnapBindingJwsd:
            return "application/gnap-binding-jwsd";
        case Type::Application_GnapBindingRotationJws:
            return "application/gnap-binding-rotation-jws";
        case Type::Application_GnapBindingRotationJwsd:
            return "application/gnap-binding-rotation-jwsd";
        case Type::Application_Grib: return "application/grib";
        case Type::Application_Gzip: return "application/gzip";
        case Type::Application_H224: return "application/H224";
        case Type::Application_HeldXml: return "application/held+xml";
        case Type::Application_Hl7v2Xml: return "application/hl7v2+xml";
        case Type::Application_Http: return "application/http";
        case Type::Application_Hyperstudio: return "application/hyperstudio";
        case Type::Application_IbeKeyRequestXml:
            return "application/ibe-key-request+xml";
        case Type::Application_IbePkgReplyXml:
            return "application/ibe-pkg-reply+xml";
        case Type::Application_IbePpData: return "application/ibe-pp-data";
        case Type::Application_Iges: return "application/iges";
        case Type::Application_ImIscomposingXml:
            return "application/im-iscomposing+xml";
        case Type::Application_Index: return "application/index";
        case Type::Application_IndexCmd: return "application/index.cmd";
        case Type::Application_IndexObj: return "application/index.obj";
        case Type::Application_IndexResponse:
            return "application/index.response";
        case Type::Application_IndexVnd: return "application/index.vnd";
        case Type::Application_InkmlXml: return "application/inkml+xml";
        case Type::Application_IOTP: return "application/IOTP";
        case Type::Application_Ipfix: return "application/ipfix";
        case Type::Application_Ipp: return "application/ipp";
        case Type::Application_ISUP: return "application/ISUP";
        case Type::Application_ItsXml: return "application/its+xml";
        case Type::Application_JavaArchive: return "application/java-archive";
        case Type::Application_Javascript: return "application/javascript";
        case Type::Application_Jf2feedJson: return "application/jf2feed+json";
        case Type::Application_Jose: return "application/jose";
        case Type::Application_JoseJson: return "application/jose+json";
        case Type::Application_JrdJson: return "application/jrd+json";
        case Type::Application_JscalendarJson:
            return "application/jscalendar+json";
        case Type::Application_JscontactJson:
            return "application/jscontact+json";
        case Type::Application_Json: return "application/json";
        case Type::Application_JsonPatchJson:
            return "application/json-patch+json";
        case Type::Application_JsonSeq: return "application/json-seq";
        case Type::Application_Jsonpath: return "application/jsonpath";
        case Type::Application_JwkJson: return "application/jwk+json";
        case Type::Application_JwkSetJson: return "application/jwk-set+json";
        case Type::Application_Jwt: return "application/jwt";
        case Type::Application_KpmlRequestXml:
            return "application/kpml-request+xml";
        case Type::Application_KpmlResponseXml:
            return "application/kpml-response+xml";
        case Type::Application_LdJson: return "application/ld+json";
        case Type::Application_LgrXml: return "application/lgr+xml";
        case Type::Application_LinkFormat: return "application/link-format";
        case Type::Application_Linkset: return "application/linkset";
        case Type::Application_LinksetJson: return "application/linkset+json";
        case Type::Application_LoadControlXml:
            return "application/load-control+xml";
        case Type::Application_LogoutJwt: return "application/logout+jwt";
        case Type::Application_LostXml: return "application/lost+xml";
        case Type::Application_LostsyncXml: return "application/lostsync+xml";
        case Type::Application_LpfZip: return "application/lpf+zip";
        case Type::Application_LXF: return "application/LXF";
        case Type::Application_MacBinhex40: return "application/mac-binhex40";
        case Type::Application_Macwriteii: return "application/macwriteii";
        case Type::Application_MadsXml: return "application/mads+xml";
        case Type::Application_ManifestJson: return "application/manifest+json";
        case Type::Application_Marc: return "application/marc";
        case Type::Application_MarcxmlXml: return "application/marcxml+xml";
        case Type::Application_Mathematica: return "application/mathematica";
        case Type::Application_MathmlXml: return "application/mathml+xml";
        case Type::Application_MathmlContentXml:
            return "application/mathml-content+xml";
        case Type::Application_MathmlPresentationXml:
            return "application/mathml-presentation+xml";
        case Type::Application_MbmsAssociatedProcedureDescriptionXml:
            return "application/mbms-associated-procedure-description+xml";
        case Type::Application_MbmsDeregisterXml:
            return "application/mbms-deregister+xml";
        case Type::Application_MbmsEnvelopeXml:
            return "application/mbms-envelope+xml";
        case Type::Application_MbmsMskResponseXml:
            return "application/mbms-msk-response+xml";
        case Type::Application_MbmsMskXml: return "application/mbms-msk+xml";
        case Type::Application_MbmsProtectionDescriptionXml:
            return "application/mbms-protection-description+xml";
        case Type::Application_MbmsReceptionReportXml:
            return "application/mbms-reception-report+xml";
        case Type::Application_MbmsRegisterResponseXml:
            return "application/mbms-register-response+xml";
        case Type::Application_MbmsRegisterXml:
            return "application/mbms-register+xml";
        case Type::Application_MbmsScheduleXml:
            return "application/mbms-schedule+xml";
        case Type::Application_MbmsUserServiceDescriptionXml:
            return "application/mbms-user-service-description+xml";
        case Type::Application_Mbox: return "application/mbox";
        case Type::Application_MediaControlXml:
            return "application/media_control+xml";
        case Type::Application_MediaPolicyDatasetXml:
            return "application/media-policy-dataset+xml";
        case Type::Application_MediaservercontrolXml:
            return "application/mediaservercontrol+xml";
        case Type::Application_MergePatchJson:
            return "application/merge-patch+json";
        case Type::Application_Metalink4Xml: return "application/metalink4+xml";
        case Type::Application_MetsXml: return "application/mets+xml";
        case Type::Application_MF4: return "application/MF4";
        case Type::Application_Mikey: return "application/mikey";
        case Type::Application_Mipc: return "application/mipc";
        case Type::Application_MissingBlocksCborSeq:
            return "application/missing-blocks+cbor-seq";
        case Type::Application_MmtAeiXml: return "application/mmt-aei+xml";
        case Type::Application_MmtUsdXml: return "application/mmt-usd+xml";
        case Type::Application_ModsXml: return "application/mods+xml";
        case Type::Application_MossKeys: return "application/moss-keys";
        case Type::Application_MossSignature:
            return "application/moss-signature";
        case Type::Application_MosskeyData: return "application/mosskey-data";
        case Type::Application_MosskeyRequest:
            return "application/mosskey-request";
        case Type::Application_Mp21: return "application/mp21";
        case Type::Application_Mp4: return "application/mp4";
        case Type::Application_Mpeg4Generic: return "application/mpeg4-generic";
        case Type::Application_Mpeg4Iod: return "application/mpeg4-iod";
        case Type::Application_Mpeg4IodXmt: return "application/mpeg4-iod-xmt";
        case Type::Application_MrbConsumerXml:
            return "application/mrb-consumer+xml";
        case Type::Application_MrbPublishXml:
            return "application/mrb-publish+xml";
        case Type::Application_MscIvrXml: return "application/msc-ivr+xml";
        case Type::Application_MscMixerXml: return "application/msc-mixer+xml";
        case Type::Application_Msword: return "application/msword";
        case Type::Application_MudJson: return "application/mud+json";
        case Type::Application_MultipartCore:
            return "application/multipart-core";
        case Type::Application_Mxf: return "application/mxf";
        case Type::Application_NQuads: return "application/n-quads";
        case Type::Application_NTriples: return "application/n-triples";
        case Type::Application_Nasdata: return "application/nasdata";
        case Type::Application_NewsCheckgroups:
            return "application/news-checkgroups";
        case Type::Application_NewsGroupinfo:
            return "application/news-groupinfo";
        case Type::Application_NewsTransmission:
            return "application/news-transmission";
        case Type::Application_NlsmlXml: return "application/nlsml+xml";
        case Type::Application_Node: return "application/node";
        case Type::Application_Nss: return "application/nss";
        case Type::Application_OauthAuthzReqJwt:
            return "application/oauth-authz-req+jwt";
        case Type::Application_ObliviousDnsMessage:
            return "application/oblivious-dns-message";
        case Type::Application_OcspRequest: return "application/ocsp-request";
        case Type::Application_OcspResponse: return "application/ocsp-response";
        case Type::Application_OctetStream: return "application/octet-stream";
        case Type::Application_ODA: return "application/ODA";
        case Type::Application_OdmXml: return "application/odm+xml";
        case Type::Application_ODX: return "application/ODX";
        case Type::Application_OebpsPackageXml:
            return "application/oebps-package+xml";
        case Type::Application_Ogg: return "application/ogg";
        case Type::Application_OhttpKeys: return "application/ohttp-keys";
        case Type::Application_OpcNodesetXml:
            return "application/opc-nodeset+xml";
        case Type::Application_Oscore: return "application/oscore";
        case Type::Application_Oxps: return "application/oxps";
        case Type::Application_P21: return "application/p21";
        case Type::Application_P21Zip: return "application/p21+zip";
        case Type::Application_P2pOverlayXml:
            return "application/p2p-overlay+xml";
        case Type::Application_Parityfec: return "application/parityfec";
        case Type::Application_Passport: return "application/passport";
        case Type::Application_PatchOpsErrorXml:
            return "application/patch-ops-error+xml";
        case Type::Application_Pdf: return "application/pdf";
        case Type::Application_PDX: return "application/PDX";
        case Type::Application_PemCertificateChain:
            return "application/pem-certificate-chain";
        case Type::Application_PgpEncrypted: return "application/pgp-encrypted";
        case Type::Application_PgpKeys: return "application/pgp-keys";
        case Type::Application_PgpSignature: return "application/pgp-signature";
        case Type::Application_PidfDiffXml: return "application/pidf-diff+xml";
        case Type::Application_PidfXml: return "application/pidf+xml";
        case Type::Application_Pkcs10: return "application/pkcs10";
        case Type::Application_Pkcs7Mime: return "application/pkcs7-mime";
        case Type::Application_Pkcs7Signature:
            return "application/pkcs7-signature";
        case Type::Application_Pkcs8: return "application/pkcs8";
        case Type::Application_Pkcs8Encrypted:
            return "application/pkcs8-encrypted";
        case Type::Application_Pkcs12: return "application/pkcs12";
        case Type::Application_PkixAttrCert:
            return "application/pkix-attr-cert";
        case Type::Application_PkixCert: return "application/pkix-cert";
        case Type::Application_PkixCrl: return "application/pkix-crl";
        case Type::Application_PkixPkipath: return "application/pkix-pkipath";
        case Type::Application_Pkixcmp: return "application/pkixcmp";
        case Type::Application_PlsXml: return "application/pls+xml";
        case Type::Application_PocSettingsXml:
            return "application/poc-settings+xml";
        case Type::Application_Postscript: return "application/postscript";
        case Type::Application_PpspTrackerJson:
            return "application/ppsp-tracker+json";
        case Type::Application_PrivateTokenIssuerDirectory:
            return "application/private-token-issuer-directory";
        case Type::Application_PrivateTokenRequest:
            return "application/private-token-request";
        case Type::Application_PrivateTokenResponse:
            return "application/private-token-response";
        case Type::Application_ProblemJson: return "application/problem+json";
        case Type::Application_ProblemXml: return "application/problem+xml";
        case Type::Application_ProvenanceXml:
            return "application/provenance+xml";
        case Type::Application_PrsAlvestrandTitraxSheet:
            return "application/prs.alvestrand.titrax-sheet";
        case Type::Application_PrsCww: return "application/prs.cww";
        case Type::Application_PrsCyn: return "application/prs.cyn";
        case Type::Application_PrsHpubZip: return "application/prs.hpub+zip";
        case Type::Application_PrsImpliedDocumentXml:
            return "application/prs.implied-document+xml";
        case Type::Application_PrsImpliedExecutable:
            return "application/prs.implied-executable";
        case Type::Application_PrsImpliedObjectJson:
            return "application/prs.implied-object+json";
        case Type::Application_PrsImpliedObjectJsonSeq:
            return "application/prs.implied-object+json-seq";
        case Type::Application_PrsImpliedObjectYaml:
            return "application/prs.implied-object+yaml";
        case Type::Application_PrsImpliedStructure:
            return "application/prs.implied-structure";
        case Type::Application_PrsNprend: return "application/prs.nprend";
        case Type::Application_PrsPlucker: return "application/prs.plucker";
        case Type::Application_PrsRdfXmlCrypt:
            return "application/prs.rdf-xml-crypt";
        case Type::Application_PrsVcfbzip2: return "application/prs.vcfbzip2";
        case Type::Application_PrsXsfXml: return "application/prs.xsf+xml";
        case Type::Application_PskcXml: return "application/pskc+xml";
        case Type::Application_PvdJson: return "application/pvd+json";
        case Type::Application_RdfXml: return "application/rdf+xml";
        case Type::Application_RouteApdXml: return "application/route-apd+xml";
        case Type::Application_RouteSTsidXml:
            return "application/route-s-tsid+xml";
        case Type::Application_RouteUsdXml: return "application/route-usd+xml";
        case Type::Application_QSIG: return "application/QSIG";
        case Type::Application_Raptorfec: return "application/raptorfec";
        case Type::Application_RdapJson: return "application/rdap+json";
        case Type::Application_ReginfoXml: return "application/reginfo+xml";
        case Type::Application_RelaxNgCompactSyntax:
            return "application/relax-ng-compact-syntax";
        case Type::Application_RemotePrinting:
            return "application/remote-printing";
        case Type::Application_ReputonJson: return "application/reputon+json";
        case Type::Application_ResourceListsDiffXml:
            return "application/resource-lists-diff+xml";
        case Type::Application_ResourceListsXml:
            return "application/resource-lists+xml";
        case Type::Application_RfcXml: return "application/rfc+xml";
        case Type::Application_Riscos: return "application/riscos";
        case Type::Application_RlmiXml: return "application/rlmi+xml";
        case Type::Application_RlsServicesXml:
            return "application/rls-services+xml";
        case Type::Application_RpkiChecklist:
            return "application/rpki-checklist";
        case Type::Application_RpkiGhostbusters:
            return "application/rpki-ghostbusters";
        case Type::Application_RpkiManifest: return "application/rpki-manifest";
        case Type::Application_RpkiPublication:
            return "application/rpki-publication";
        case Type::Application_RpkiRoa: return "application/rpki-roa";
        case Type::Application_RpkiSignedTal:
            return "application/rpki-signed-tal";
        case Type::Application_RpkiUpdown: return "application/rpki-updown";
        case Type::Application_Rtf: return "application/rtf";
        case Type::Application_Rtploopback: return "application/rtploopback";
        case Type::Application_Rtx: return "application/rtx";
        case Type::Application_SamlassertionXml:
            return "application/samlassertion+xml";
        case Type::Application_SamlmetadataXml:
            return "application/samlmetadata+xml";
        case Type::Application_SarifExternalPropertiesJson:
            return "application/sarif-external-properties+json";
        case Type::Application_SarifJson: return "application/sarif+json";
        case Type::Application_Sbe: return "application/sbe";
        case Type::Application_SbmlXml: return "application/sbml+xml";
        case Type::Application_ScaipXml: return "application/scaip+xml";
        case Type::Application_ScimJson: return "application/scim+json";
        case Type::Application_ScvpCvRequest:
            return "application/scvp-cv-request";
        case Type::Application_ScvpCvResponse:
            return "application/scvp-cv-response";
        case Type::Application_ScvpVpRequest:
            return "application/scvp-vp-request";
        case Type::Application_ScvpVpResponse:
            return "application/scvp-vp-response";
        case Type::Application_Sdp: return "application/sdp";
        case Type::Application_SeceventJwt: return "application/secevent+jwt";
        case Type::Application_SenmlEtchCbor:
            return "application/senml-etch+cbor";
        case Type::Application_SenmlEtchJson:
            return "application/senml-etch+json";
        case Type::Application_SenmlExi: return "application/senml-exi";
        case Type::Application_SenmlCbor: return "application/senml+cbor";
        case Type::Application_SenmlJson: return "application/senml+json";
        case Type::Application_SenmlXml: return "application/senml+xml";
        case Type::Application_SensmlExi: return "application/sensml-exi";
        case Type::Application_SensmlCbor: return "application/sensml+cbor";
        case Type::Application_SensmlJson: return "application/sensml+json";
        case Type::Application_SensmlXml: return "application/sensml+xml";
        case Type::Application_SepExi: return "application/sep-exi";
        case Type::Application_SepXml: return "application/sep+xml";
        case Type::Application_SessionInfo: return "application/session-info";
        case Type::Application_SetPayment: return "application/set-payment";
        case Type::Application_SetPaymentInitiation:
            return "application/set-payment-initiation";
        case Type::Application_SetRegistration:
            return "application/set-registration";
        case Type::Application_SetRegistrationInitiation:
            return "application/set-registration-initiation";
        case Type::Application_SGML: return "application/SGML";
        case Type::Application_SgmlOpenCatalog:
            return "application/sgml-open-catalog";
        case Type::Application_ShfXml: return "application/shf+xml";
        case Type::Application_Sieve: return "application/sieve";
        case Type::Application_SimpleFilterXml:
            return "application/simple-filter+xml";
        case Type::Application_SimpleMessageSummary:
            return "application/simple-message-summary";
        case Type::Application_SimpleSymbolContainer:
            return "application/simpleSymbolContainer";
        case Type::Application_Sipc: return "application/sipc";
        case Type::Application_Slate: return "application/slate";
        case Type::Application_Smil: return "application/smil";
        case Type::Application_SmilXml: return "application/smil+xml";
        case Type::Application_Smpte336m: return "application/smpte336m";
        case Type::Application_SoapFastinfoset:
            return "application/soap+fastinfoset";
        case Type::Application_SoapXml: return "application/soap+xml";
        case Type::Application_SparqlQuery: return "application/sparql-query";
        case Type::Application_SpdxJson: return "application/spdx+json";
        case Type::Application_SparqlResultsXml:
            return "application/sparql-results+xml";
        case Type::Application_SpiritsEventXml:
            return "application/spirits-event+xml";
        case Type::Application_Sql: return "application/sql";
        case Type::Application_Srgs: return "application/srgs";
        case Type::Application_SrgsXml: return "application/srgs+xml";
        case Type::Application_SruXml: return "application/sru+xml";
        case Type::Application_Sslkeylogfile:
            return "application/sslkeylogfile";
        case Type::Application_SsmlXml: return "application/ssml+xml";
        case Type::Application_ST211041: return "application/ST2110-41";
        case Type::Application_StixJson: return "application/stix+json";
        case Type::Application_Stratum: return "application/stratum";
        case Type::Application_SwidCbor: return "application/swid+cbor";
        case Type::Application_SwidXml: return "application/swid+xml";
        case Type::Application_TampApexUpdate:
            return "application/tamp-apex-update";
        case Type::Application_TampApexUpdateConfirm:
            return "application/tamp-apex-update-confirm";
        case Type::Application_TampCommunityUpdate:
            return "application/tamp-community-update";
        case Type::Application_TampCommunityUpdateConfirm:
            return "application/tamp-community-update-confirm";
        case Type::Application_TampError: return "application/tamp-error";
        case Type::Application_TampSequenceAdjust:
            return "application/tamp-sequence-adjust";
        case Type::Application_TampSequenceAdjustConfirm:
            return "application/tamp-sequence-adjust-confirm";
        case Type::Application_TampStatusQuery:
            return "application/tamp-status-query";
        case Type::Application_TampStatusResponse:
            return "application/tamp-status-response";
        case Type::Application_TampUpdate: return "application/tamp-update";
        case Type::Application_TampUpdateConfirm:
            return "application/tamp-update-confirm";
        case Type::Application_TaxiiJson: return "application/taxii+json";
        case Type::Application_TdJson: return "application/td+json";
        case Type::Application_TeiXml: return "application/tei+xml";
        case Type::Application_TETRAISI: return "application/TETRA_ISI";
        case Type::Application_ThraudXml: return "application/thraud+xml";
        case Type::Application_TimestampQuery:
            return "application/timestamp-query";
        case Type::Application_TimestampReply:
            return "application/timestamp-reply";
        case Type::Application_TimestampedData:
            return "application/timestamped-data";
        case Type::Application_TlsrptGzip: return "application/tlsrpt+gzip";
        case Type::Application_TlsrptJson: return "application/tlsrpt+json";
        case Type::Application_TmJson: return "application/tm+json";
        case Type::Application_Tnauthlist: return "application/tnauthlist";
        case Type::Application_TokenIntrospectionJwt:
            return "application/token-introspection+jwt";
        case Type::Application_TrickleIceSdpfrag:
            return "application/trickle-ice-sdpfrag";
        case Type::Application_Trig: return "application/trig";
        case Type::Application_TtmlXml: return "application/ttml+xml";
        case Type::Application_TveTrigger: return "application/tve-trigger";
        case Type::Application_Tzif: return "application/tzif";
        case Type::Application_TzifLeap: return "application/tzif-leap";
        case Type::Application_Ulpfec: return "application/ulpfec";
        case Type::Application_UrcGrpsheetXml:
            return "application/urc-grpsheet+xml";
        case Type::Application_UrcRessheetXml:
            return "application/urc-ressheet+xml";
        case Type::Application_UrcTargetdescXml:
            return "application/urc-targetdesc+xml";
        case Type::Application_UrcUisocketdescXml:
            return "application/urc-uisocketdesc+xml";
        case Type::Application_Vc: return "application/vc";
        case Type::Application_VcardJson: return "application/vcard+json";
        case Type::Application_VcardXml: return "application/vcard+xml";
        case Type::Application_Vemmi: return "application/vemmi";
        case Type::Application_Vnd1000mindsDecisionModelXml:
            return "application/vnd.1000minds.decision-model+xml";
        case Type::Application_Vnd1ob: return "application/vnd.1ob";
        case Type::Application_Vnd3gpp5gnas:
            return "application/vnd.3gpp.5gnas";
        case Type::Application_Vnd3gpp5gsa2x:
            return "application/vnd.3gpp.5gsa2x";
        case Type::Application_Vnd3gpp5gsa2xLocalServiceInformation:
            return "application/vnd.3gpp.5gsa2x-local-service-information";
        case Type::Application_Vnd3gppAccessTransferEventsXml:
            return "application/vnd.3gpp.access-transfer-events+xml";
        case Type::Application_Vnd3gppBsfXml:
            return "application/vnd.3gpp.bsf+xml";
        case Type::Application_Vnd3gppCrsXml:
            return "application/vnd.3gpp.crs+xml";
        case Type::Application_Vnd3gppCurrentLocationDiscoveryXml:
            return "application/vnd.3gpp.current-location-discovery+xml";
        case Type::Application_Vnd3gppGMOPXml:
            return "application/vnd.3gpp.GMOP+xml";
        case Type::Application_Vnd3gppGtpc: return "application/vnd.3gpp.gtpc";
        case Type::Application_Vnd3gppInterworkingData:
            return "application/vnd.3gpp.interworking-data";
        case Type::Application_Vnd3gppLpp: return "application/vnd.3gpp.lpp";
        case Type::Application_Vnd3gppMcSignallingEar:
            return "application/vnd.3gpp.mc-signalling-ear";
        case Type::Application_Vnd3gppMcdataAffiliationCommandXml:
            return "application/vnd.3gpp.mcdata-affiliation-command+xml";
        case Type::Application_Vnd3gppMcdataInfoXml:
            return "application/vnd.3gpp.mcdata-info+xml";
        case Type::Application_Vnd3gppMcdataMsgstoreCtrlRequestXml:
            return "application/vnd.3gpp.mcdata-msgstore-ctrl-request+xml";
        case Type::Application_Vnd3gppMcdataPayload:
            return "application/vnd.3gpp.mcdata-payload";
        case Type::Application_Vnd3gppMcdataRegroupXml:
            return "application/vnd.3gpp.mcdata-regroup+xml";
        case Type::Application_Vnd3gppMcdataServiceConfigXml:
            return "application/vnd.3gpp.mcdata-service-config+xml";
        case Type::Application_Vnd3gppMcdataSignalling:
            return "application/vnd.3gpp.mcdata-signalling";
        case Type::Application_Vnd3gppMcdataUeConfigXml:
            return "application/vnd.3gpp.mcdata-ue-config+xml";
        case Type::Application_Vnd3gppMcdataUserProfileXml:
            return "application/vnd.3gpp.mcdata-user-profile+xml";
        case Type::Application_Vnd3gppMcpttAffiliationCommandXml:
            return "application/vnd.3gpp.mcptt-affiliation-command+xml";
        case Type::Application_Vnd3gppMcpttFloorRequestXml:
            return "application/vnd.3gpp.mcptt-floor-request+xml";
        case Type::Application_Vnd3gppMcpttInfoXml:
            return "application/vnd.3gpp.mcptt-info+xml";
        case Type::Application_Vnd3gppMcpttLocationInfoXml:
            return "application/vnd.3gpp.mcptt-location-info+xml";
        case Type::Application_Vnd3gppMcpttMbmsUsageInfoXml:
            return "application/vnd.3gpp.mcptt-mbms-usage-info+xml";
        case Type::Application_Vnd3gppMcpttRegroupXml:
            return "application/vnd.3gpp.mcptt-regroup+xml";
        case Type::Application_Vnd3gppMcpttServiceConfigXml:
            return "application/vnd.3gpp.mcptt-service-config+xml";
        case Type::Application_Vnd3gppMcpttSignedXml:
            return "application/vnd.3gpp.mcptt-signed+xml";
        case Type::Application_Vnd3gppMcpttUeConfigXml:
            return "application/vnd.3gpp.mcptt-ue-config+xml";
        case Type::Application_Vnd3gppMcpttUeInitConfigXml:
            return "application/vnd.3gpp.mcptt-ue-init-config+xml";
        case Type::Application_Vnd3gppMcpttUserProfileXml:
            return "application/vnd.3gpp.mcptt-user-profile+xml";
        case Type::Application_Vnd3gppMcvideoAffiliationCommandXml:
            return "application/vnd.3gpp.mcvideo-affiliation-command+xml";
        case Type::Application_Vnd3gppMcvideoAffiliationInfoXml:
            return "application/vnd.3gpp.mcvideo-affiliation-info+xml";
        case Type::Application_Vnd3gppMcvideoInfoXml:
            return "application/vnd.3gpp.mcvideo-info+xml";
        case Type::Application_Vnd3gppMcvideoLocationInfoXml:
            return "application/vnd.3gpp.mcvideo-location-info+xml";
        case Type::Application_Vnd3gppMcvideoMbmsUsageInfoXml:
            return "application/vnd.3gpp.mcvideo-mbms-usage-info+xml";
        case Type::Application_Vnd3gppMcvideoRegroupXml:
            return "application/vnd.3gpp.mcvideo-regroup+xml";
        case Type::Application_Vnd3gppMcvideoServiceConfigXml:
            return "application/vnd.3gpp.mcvideo-service-config+xml";
        case Type::Application_Vnd3gppMcvideoTransmissionRequestXml:
            return "application/vnd.3gpp.mcvideo-transmission-request+xml";
        case Type::Application_Vnd3gppMcvideoUeConfigXml:
            return "application/vnd.3gpp.mcvideo-ue-config+xml";
        case Type::Application_Vnd3gppMcvideoUserProfileXml:
            return "application/vnd.3gpp.mcvideo-user-profile+xml";
        case Type::Application_Vnd3gppMidCallXml:
            return "application/vnd.3gpp.mid-call+xml";
        case Type::Application_Vnd3gppNgap: return "application/vnd.3gpp.ngap";
        case Type::Application_Vnd3gppPfcp: return "application/vnd.3gpp.pfcp";
        case Type::Application_Vnd3gppPicBwLarge:
            return "application/vnd.3gpp.pic-bw-large";
        case Type::Application_Vnd3gppPicBwSmall:
            return "application/vnd.3gpp.pic-bw-small";
        case Type::Application_Vnd3gppPicBwVar:
            return "application/vnd.3gpp.pic-bw-var";
        case Type::Application_Vnd3gppPinappInfoXml:
            return "application/vnd.3gpp.pinapp-info+xml";
        case Type::Application_Vnd3gppProsePc3aXml:
            return "application/vnd.3gpp-prose-pc3a+xml";
        case Type::Application_Vnd3gppProsePc3achXml:
            return "application/vnd.3gpp-prose-pc3ach+xml";
        case Type::Application_Vnd3gppProsePc3chXml:
            return "application/vnd.3gpp-prose-pc3ch+xml";
        case Type::Application_Vnd3gppProsePc8Xml:
            return "application/vnd.3gpp-prose-pc8+xml";
        case Type::Application_Vnd3gppProseXml:
            return "application/vnd.3gpp-prose+xml";
        case Type::Application_Vnd3gppS1ap: return "application/vnd.3gpp.s1ap";
        case Type::Application_Vnd3gppSealGroupDocXml:
            return "application/vnd.3gpp.seal-group-doc+xml";
        case Type::Application_Vnd3gppSealInfoXml:
            return "application/vnd.3gpp.seal-info+xml";
        case Type::Application_Vnd3gppSealLocationInfoXml:
            return "application/vnd.3gpp.seal-location-info+xml";
        case Type::Application_Vnd3gppSealMbmsUsageInfoXml:
            return "application/vnd.3gpp.seal-mbms-usage-info+xml";
        case Type::Application_Vnd3gppSealNetworkQoSManagementInfoXml:
            return "application/vnd.3gpp.seal-network-QoS-management-info+xml";
        case Type::Application_Vnd3gppSealUeConfigInfoXml:
            return "application/vnd.3gpp.seal-ue-config-info+xml";
        case Type::Application_Vnd3gppSealUnicastInfoXml:
            return "application/vnd.3gpp.seal-unicast-info+xml";
        case Type::Application_Vnd3gppSealUserProfileInfoXml:
            return "application/vnd.3gpp.seal-user-profile-info+xml";
        case Type::Application_Vnd3gppSms: return "application/vnd.3gpp.sms";
        case Type::Application_Vnd3gppSmsXml:
            return "application/vnd.3gpp.sms+xml";
        case Type::Application_Vnd3gppSrvccExtXml:
            return "application/vnd.3gpp.srvcc-ext+xml";
        case Type::Application_Vnd3gppSRVCCInfoXml:
            return "application/vnd.3gpp.SRVCC-info+xml";
        case Type::Application_Vnd3gppStateAndEventInfoXml:
            return "application/vnd.3gpp.state-and-event-info+xml";
        case Type::Application_Vnd3gppUssdXml:
            return "application/vnd.3gpp.ussd+xml";
        case Type::Application_Vnd3gppVaeInfoXml:
            return "application/vnd.3gpp.vae-info+xml";
        case Type::Application_Vnd3gppV2xLocalServiceInformation:
            return "application/vnd.3gpp-v2x-local-service-information";
        case Type::Application_Vnd3gpp2BcmcsinfoXml:
            return "application/vnd.3gpp2.bcmcsinfo+xml";
        case Type::Application_Vnd3gpp2Sms: return "application/vnd.3gpp2.sms";
        case Type::Application_Vnd3gpp2Tcap:
            return "application/vnd.3gpp2.tcap";
        case Type::Application_Vnd3gppV2x: return "application/vnd.3gpp.v2x";
        case Type::Application_Vnd3lightssoftwareImagescal:
            return "application/vnd.3lightssoftware.imagescal";
        case Type::Application_Vnd3MPostItNotes:
            return "application/vnd.3M.Post-it-Notes";
        case Type::Application_VndAccpacSimplyAso:
            return "application/vnd.accpac.simply.aso";
        case Type::Application_VndAccpacSimplyImp:
            return "application/vnd.accpac.simply.imp";
        case Type::Application_VndAcmAddressxferJson:
            return "application/vnd.acm.addressxfer+json";
        case Type::Application_VndAcmChatbotJson:
            return "application/vnd.acm.chatbot+json";
        case Type::Application_VndAcucobol: return "application/vnd.acucobol";
        case Type::Application_VndAcucorp: return "application/vnd.acucorp";
        case Type::Application_VndAdobeFlashMovie:
            return "application/vnd.adobe.flash.movie";
        case Type::Application_VndAdobeFormscentralFcdt:
            return "application/vnd.adobe.formscentral.fcdt";
        case Type::Application_VndAdobeFxp: return "application/vnd.adobe.fxp";
        case Type::Application_VndAdobePartialUpload:
            return "application/vnd.adobe.partial-upload";
        case Type::Application_VndAdobeXdpXml:
            return "application/vnd.adobe.xdp+xml";
        case Type::Application_VndAetherImp:
            return "application/vnd.aether.imp";
        case Type::Application_VndAfpcAfplinedata:
            return "application/vnd.afpc.afplinedata";
        case Type::Application_VndAfpcAfplinedataPagedef:
            return "application/vnd.afpc.afplinedata-pagedef";
        case Type::Application_VndAfpcCmocaCmresource:
            return "application/vnd.afpc.cmoca-cmresource";
        case Type::Application_VndAfpcFocaCharset:
            return "application/vnd.afpc.foca-charset";
        case Type::Application_VndAfpcFocaCodedfont:
            return "application/vnd.afpc.foca-codedfont";
        case Type::Application_VndAfpcFocaCodepage:
            return "application/vnd.afpc.foca-codepage";
        case Type::Application_VndAfpcModca:
            return "application/vnd.afpc.modca";
        case Type::Application_VndAfpcModcaCmtable:
            return "application/vnd.afpc.modca-cmtable";
        case Type::Application_VndAfpcModcaFormdef:
            return "application/vnd.afpc.modca-formdef";
        case Type::Application_VndAfpcModcaMediummap:
            return "application/vnd.afpc.modca-mediummap";
        case Type::Application_VndAfpcModcaObjectcontainer:
            return "application/vnd.afpc.modca-objectcontainer";
        case Type::Application_VndAfpcModcaOverlay:
            return "application/vnd.afpc.modca-overlay";
        case Type::Application_VndAfpcModcaPagesegment:
            return "application/vnd.afpc.modca-pagesegment";
        case Type::Application_VndAge: return "application/vnd.age";
        case Type::Application_VndAhBarcode:
            return "application/vnd.ah-barcode";
        case Type::Application_VndAheadSpace:
            return "application/vnd.ahead.space";
        case Type::Application_VndAirzipFilesecureAzf:
            return "application/vnd.airzip.filesecure.azf";
        case Type::Application_VndAirzipFilesecureAzs:
            return "application/vnd.airzip.filesecure.azs";
        case Type::Application_VndAmadeusJson:
            return "application/vnd.amadeus+json";
        case Type::Application_VndAmazonMobi8Ebook:
            return "application/vnd.amazon.mobi8-ebook";
        case Type::Application_VndAmericandynamicsAcc:
            return "application/vnd.americandynamics.acc";
        case Type::Application_VndAmigaAmi: return "application/vnd.amiga.ami";
        case Type::Application_VndAmundsenMazeXml:
            return "application/vnd.amundsen.maze+xml";
        case Type::Application_VndAndroidOta:
            return "application/vnd.android.ota";
        case Type::Application_VndAnki: return "application/vnd.anki";
        case Type::Application_VndAnserWebCertificateIssueInitiation:
            return "application/vnd.anser-web-certificate-issue-initiation";
        case Type::Application_VndAntixGameComponent:
            return "application/vnd.antix.game-component";
        case Type::Application_VndApacheArrowFile:
            return "application/vnd.apache.arrow.file";
        case Type::Application_VndApacheArrowStream:
            return "application/vnd.apache.arrow.stream";
        case Type::Application_VndApacheParquet:
            return "application/vnd.apache.parquet";
        case Type::Application_VndApacheThriftBinary:
            return "application/vnd.apache.thrift.binary";
        case Type::Application_VndApacheThriftCompact:
            return "application/vnd.apache.thrift.compact";
        case Type::Application_VndApacheThriftJson:
            return "application/vnd.apache.thrift.json";
        case Type::Application_VndApexlang: return "application/vnd.apexlang";
        case Type::Application_VndApiJson: return "application/vnd.api+json";
        case Type::Application_VndAplextorWarrpJson:
            return "application/vnd.aplextor.warrp+json";
        case Type::Application_VndApothekendeReservationJson:
            return "application/vnd.apothekende.reservation+json";
        case Type::Application_VndAppleInstallerXml:
            return "application/vnd.apple.installer+xml";
        case Type::Application_VndAppleKeynote:
            return "application/vnd.apple.keynote";
        case Type::Application_VndAppleMpegurl:
            return "application/vnd.apple.mpegurl";
        case Type::Application_VndAppleNumbers:
            return "application/vnd.apple.numbers";
        case Type::Application_VndApplePages:
            return "application/vnd.apple.pages";
        case Type::Application_VndArastraSwi:
            return "application/vnd.arastra.swi";
        case Type::Application_VndAristanetworksSwi:
            return "application/vnd.aristanetworks.swi";
        case Type::Application_VndArtisanJson:
            return "application/vnd.artisan+json";
        case Type::Application_VndArtsquare: return "application/vnd.artsquare";
        case Type::Application_VndAstraeaSoftwareIota:
            return "application/vnd.astraea-software.iota";
        case Type::Application_VndAudiograph:
            return "application/vnd.audiograph";
        case Type::Application_VndAutopackage:
            return "application/vnd.autopackage";
        case Type::Application_VndAvalonJson:
            return "application/vnd.avalon+json";
        case Type::Application_VndAvistarXml:
            return "application/vnd.avistar+xml";
        case Type::Application_VndBalsamiqBmmlXml:
            return "application/vnd.balsamiq.bmml+xml";
        case Type::Application_VndBananaAccounting:
            return "application/vnd.banana-accounting";
        case Type::Application_VndBbfUspError:
            return "application/vnd.bbf.usp.error";
        case Type::Application_VndBbfUspMsg:
            return "application/vnd.bbf.usp.msg";
        case Type::Application_VndBbfUspMsgJson:
            return "application/vnd.bbf.usp.msg+json";
        case Type::Application_VndBalsamiqBmpr:
            return "application/vnd.balsamiq.bmpr";
        case Type::Application_VndBekitzurStechJson:
            return "application/vnd.bekitzur-stech+json";
        case Type::Application_VndBelightsoftLhzdZip:
            return "application/vnd.belightsoft.lhzd+zip";
        case Type::Application_VndBelightsoftLhzlZip:
            return "application/vnd.belightsoft.lhzl+zip";
        case Type::Application_VndBintMedContent:
            return "application/vnd.bint.med-content";
        case Type::Application_VndBiopaxRdfXml:
            return "application/vnd.biopax.rdf+xml";
        case Type::Application_VndBlinkIdbValueWrapper:
            return "application/vnd.blink-idb-value-wrapper";
        case Type::Application_VndBlueiceMultipass:
            return "application/vnd.blueice.multipass";
        case Type::Application_VndBluetoothEpOob:
            return "application/vnd.bluetooth.ep.oob";
        case Type::Application_VndBluetoothLeOob:
            return "application/vnd.bluetooth.le.oob";
        case Type::Application_VndBmi: return "application/vnd.bmi";
        case Type::Application_VndBpf: return "application/vnd.bpf";
        case Type::Application_VndBpf3: return "application/vnd.bpf3";
        case Type::Application_VndBusinessobjects:
            return "application/vnd.businessobjects";
        case Type::Application_VndByuUapiJson:
            return "application/vnd.byu.uapi+json";
        case Type::Application_VndBzip3: return "application/vnd.bzip3";
        case Type::Application_VndC3vocScheduleXml:
            return "application/vnd.c3voc.schedule+xml";
        case Type::Application_VndCabJscript:
            return "application/vnd.cab-jscript";
        case Type::Application_VndCanonCpdl:
            return "application/vnd.canon-cpdl";
        case Type::Application_VndCanonLips:
            return "application/vnd.canon-lips";
        case Type::Application_VndCapasystemsPgJson:
            return "application/vnd.capasystems-pg+json";
        case Type::Application_VndCendioThinlincClientconf:
            return "application/vnd.cendio.thinlinc.clientconf";
        case Type::Application_VndCenturySystemsTcpStream:
            return "application/vnd.century-systems.tcp_stream";
        case Type::Application_VndChemdrawXml:
            return "application/vnd.chemdraw+xml";
        case Type::Application_VndChessPgn: return "application/vnd.chess-pgn";
        case Type::Application_VndChipnutsKaraokeMmd:
            return "application/vnd.chipnuts.karaoke-mmd";
        case Type::Application_VndCiedi: return "application/vnd.ciedi";
        case Type::Application_VndCinderella:
            return "application/vnd.cinderella";
        case Type::Application_VndCirpackIsdnExt:
            return "application/vnd.cirpack.isdn-ext";
        case Type::Application_VndCitationstylesStyleXml:
            return "application/vnd.citationstyles.style+xml";
        case Type::Application_VndClaymore: return "application/vnd.claymore";
        case Type::Application_VndCloantoRp9:
            return "application/vnd.cloanto.rp9";
        case Type::Application_VndClonkC4group:
            return "application/vnd.clonk.c4group";
        case Type::Application_VndCluetrustCartomobileConfig:
            return "application/vnd.cluetrust.cartomobile-config";
        case Type::Application_VndCluetrustCartomobileConfigPkg:
            return "application/vnd.cluetrust.cartomobile-config-pkg";
        case Type::Application_VndCncfHelmChartContentV1TarGzip:
            return "application/vnd.cncf.helm.chart.content.v1.tar+gzip";
        case Type::Application_VndCncfHelmChartProvenanceV1Prov:
            return "application/vnd.cncf.helm.chart.provenance.v1.prov";
        case Type::Application_VndCncfHelmConfigV1Json:
            return "application/vnd.cncf.helm.config.v1+json";
        case Type::Application_VndCoffeescript:
            return "application/vnd.coffeescript";
        case Type::Application_VndCollabioXodocumentsDocument:
            return "application/vnd.collabio.xodocuments.document";
        case Type::Application_VndCollabioXodocumentsDocumentTemplate:
            return "application/vnd.collabio.xodocuments.document-template";
        case Type::Application_VndCollabioXodocumentsPresentation:
            return "application/vnd.collabio.xodocuments.presentation";
        case Type::Application_VndCollabioXodocumentsPresentationTemplate:
            return "application/vnd.collabio.xodocuments.presentation-template";
        case Type::Application_VndCollabioXodocumentsSpreadsheet:
            return "application/vnd.collabio.xodocuments.spreadsheet";
        case Type::Application_VndCollabioXodocumentsSpreadsheetTemplate:
            return "application/vnd.collabio.xodocuments.spreadsheet-template";
        case Type::Application_VndCollectionDocJson:
            return "application/vnd.collection.doc+json";
        case Type::Application_VndCollectionJson:
            return "application/vnd.collection+json";
        case Type::Application_VndCollectionNextJson:
            return "application/vnd.collection.next+json";
        case Type::Application_VndComicbookRar:
            return "application/vnd.comicbook-rar";
        case Type::Application_VndComicbookZip:
            return "application/vnd.comicbook+zip";
        case Type::Application_VndCommerceBattelle:
            return "application/vnd.commerce-battelle";
        case Type::Application_VndCommonspace:
            return "application/vnd.commonspace";
        case Type::Application_VndCoreosIgnitionJson:
            return "application/vnd.coreos.ignition+json";
        case Type::Application_VndCosmocaller:
            return "application/vnd.cosmocaller";
        case Type::Application_VndContactCmsg:
            return "application/vnd.contact.cmsg";
        case Type::Application_VndCrickClicker:
            return "application/vnd.crick.clicker";
        case Type::Application_VndCrickClickerKeyboard:
            return "application/vnd.crick.clicker.keyboard";
        case Type::Application_VndCrickClickerPalette:
            return "application/vnd.crick.clicker.palette";
        case Type::Application_VndCrickClickerTemplate:
            return "application/vnd.crick.clicker.template";
        case Type::Application_VndCrickClickerWordbank:
            return "application/vnd.crick.clicker.wordbank";
        case Type::Application_VndCriticaltoolsWbsXml:
            return "application/vnd.criticaltools.wbs+xml";
        case Type::Application_VndCryptiiPipeJson:
            return "application/vnd.cryptii.pipe+json";
        case Type::Application_VndCryptoShadeFile:
            return "application/vnd.crypto-shade-file";
        case Type::Application_VndCryptomatorEncrypted:
            return "application/vnd.cryptomator.encrypted";
        case Type::Application_VndCryptomatorVault:
            return "application/vnd.cryptomator.vault";
        case Type::Application_VndCtcPosml: return "application/vnd.ctc-posml";
        case Type::Application_VndCtctWsXml:
            return "application/vnd.ctct.ws+xml";
        case Type::Application_VndCupsPdf: return "application/vnd.cups-pdf";
        case Type::Application_VndCupsPostscript:
            return "application/vnd.cups-postscript";
        case Type::Application_VndCupsPpd: return "application/vnd.cups-ppd";
        case Type::Application_VndCupsRaster:
            return "application/vnd.cups-raster";
        case Type::Application_VndCupsRaw: return "application/vnd.cups-raw";
        case Type::Application_VndCurl: return "application/vnd.curl";
        case Type::Application_VndCyanDeanRootXml:
            return "application/vnd.cyan.dean.root+xml";
        case Type::Application_VndCybank: return "application/vnd.cybank";
        case Type::Application_VndCyclonedxJson:
            return "application/vnd.cyclonedx+json";
        case Type::Application_VndCyclonedxXml:
            return "application/vnd.cyclonedx+xml";
        case Type::Application_VndD2lCoursepackage1p0Zip:
            return "application/vnd.d2l.coursepackage1p0+zip";
        case Type::Application_VndD3mDataset:
            return "application/vnd.d3m-dataset";
        case Type::Application_VndD3mProblem:
            return "application/vnd.d3m-problem";
        case Type::Application_VndDart: return "application/vnd.dart";
        case Type::Application_VndDataVisionRdz:
            return "application/vnd.data-vision.rdz";
        case Type::Application_VndDatalog: return "application/vnd.datalog";
        case Type::Application_VndDatapackageJson:
            return "application/vnd.datapackage+json";
        case Type::Application_VndDataresourceJson:
            return "application/vnd.dataresource+json";
        case Type::Application_VndDbf: return "application/vnd.dbf";
        case Type::Application_VndDebianBinaryPackage:
            return "application/vnd.debian.binary-package";
        case Type::Application_VndDeceData: return "application/vnd.dece.data";
        case Type::Application_VndDeceTtmlXml:
            return "application/vnd.dece.ttml+xml";
        case Type::Application_VndDeceUnspecified:
            return "application/vnd.dece.unspecified";
        case Type::Application_VndDeceZip: return "application/vnd.dece.zip";
        case Type::Application_VndDenovoFcselayoutLink:
            return "application/vnd.denovo.fcselayout-link";
        case Type::Application_VndDesmumeMovie:
            return "application/vnd.desmume.movie";
        case Type::Application_VndDirBiPlateDlNosuffix:
            return "application/vnd.dir-bi.plate-dl-nosuffix";
        case Type::Application_VndDmDelegationXml:
            return "application/vnd.dm.delegation+xml";
        case Type::Application_VndDna: return "application/vnd.dna";
        case Type::Application_VndDocumentJson:
            return "application/vnd.document+json";
        case Type::Application_VndDolbyMobile1:
            return "application/vnd.dolby.mobile.1";
        case Type::Application_VndDolbyMobile2:
            return "application/vnd.dolby.mobile.2";
        case Type::Application_VndDoremirScorecloudBinaryDocument:
            return "application/vnd.doremir.scorecloud-binary-document";
        case Type::Application_VndDpgraph: return "application/vnd.dpgraph";
        case Type::Application_VndDreamfactory:
            return "application/vnd.dreamfactory";
        case Type::Application_VndDriveJson:
            return "application/vnd.drive+json";
        case Type::Application_VndDtgLocal: return "application/vnd.dtg.local";
        case Type::Application_VndDtgLocalFlash:
            return "application/vnd.dtg.local.flash";
        case Type::Application_VndDtgLocalHtml:
            return "application/vnd.dtg.local.html";
        case Type::Application_VndDvbAit: return "application/vnd.dvb.ait";
        case Type::Application_VndDvbDvbislXml:
            return "application/vnd.dvb.dvbisl+xml";
        case Type::Application_VndDvbDvbj: return "application/vnd.dvb.dvbj";
        case Type::Application_VndDvbEsgcontainer:
            return "application/vnd.dvb.esgcontainer";
        case Type::Application_VndDvbIpdcdftnotifaccess:
            return "application/vnd.dvb.ipdcdftnotifaccess";
        case Type::Application_VndDvbIpdcesgaccess:
            return "application/vnd.dvb.ipdcesgaccess";
        case Type::Application_VndDvbIpdcesgaccess2:
            return "application/vnd.dvb.ipdcesgaccess2";
        case Type::Application_VndDvbIpdcesgpdd:
            return "application/vnd.dvb.ipdcesgpdd";
        case Type::Application_VndDvbIpdcroaming:
            return "application/vnd.dvb.ipdcroaming";
        case Type::Application_VndDvbIptvAlfecBase:
            return "application/vnd.dvb.iptv.alfec-base";
        case Type::Application_VndDvbIptvAlfecEnhancement:
            return "application/vnd.dvb.iptv.alfec-enhancement";
        case Type::Application_VndDvbNotifAggregateRootXml:
            return "application/vnd.dvb.notif-aggregate-root+xml";
        case Type::Application_VndDvbNotifContainerXml:
            return "application/vnd.dvb.notif-container+xml";
        case Type::Application_VndDvbNotifGenericXml:
            return "application/vnd.dvb.notif-generic+xml";
        case Type::Application_VndDvbNotifIaMsglistXml:
            return "application/vnd.dvb.notif-ia-msglist+xml";
        case Type::Application_VndDvbNotifIaRegistrationRequestXml:
            return "application/vnd.dvb.notif-ia-registration-request+xml";
        case Type::Application_VndDvbNotifIaRegistrationResponseXml:
            return "application/vnd.dvb.notif-ia-registration-response+xml";
        case Type::Application_VndDvbNotifInitXml:
            return "application/vnd.dvb.notif-init+xml";
        case Type::Application_VndDvbPfr: return "application/vnd.dvb.pfr";
        case Type::Application_VndDvbService:
            return "application/vnd.dvb.service";
        case Type::Application_VndDxr: return "application/vnd.dxr";
        case Type::Application_VndDynageo: return "application/vnd.dynageo";
        case Type::Application_VndDzr: return "application/vnd.dzr";
        case Type::Application_VndEasykaraokeCdgdownload:
            return "application/vnd.easykaraoke.cdgdownload";
        case Type::Application_VndEcipRlp: return "application/vnd.ecip.rlp";
        case Type::Application_VndEcdisUpdate:
            return "application/vnd.ecdis-update";
        case Type::Application_VndEclipseDittoJson:
            return "application/vnd.eclipse.ditto+json";
        case Type::Application_VndEcowinChart:
            return "application/vnd.ecowin.chart";
        case Type::Application_VndEcowinFilerequest:
            return "application/vnd.ecowin.filerequest";
        case Type::Application_VndEcowinFileupdate:
            return "application/vnd.ecowin.fileupdate";
        case Type::Application_VndEcowinSeries:
            return "application/vnd.ecowin.series";
        case Type::Application_VndEcowinSeriesrequest:
            return "application/vnd.ecowin.seriesrequest";
        case Type::Application_VndEcowinSeriesupdate:
            return "application/vnd.ecowin.seriesupdate";
        case Type::Application_VndEfiImg: return "application/vnd.efi.img";
        case Type::Application_VndEfiIso: return "application/vnd.efi.iso";
        case Type::Application_VndElnZip: return "application/vnd.eln+zip";
        case Type::Application_VndEmclientAccessrequestXml:
            return "application/vnd.emclient.accessrequest+xml";
        case Type::Application_VndEnliven: return "application/vnd.enliven";
        case Type::Application_VndEnphaseEnvoy:
            return "application/vnd.enphase.envoy";
        case Type::Application_VndEprintsDataXml:
            return "application/vnd.eprints.data+xml";
        case Type::Application_VndEpsonEsf: return "application/vnd.epson.esf";
        case Type::Application_VndEpsonMsf: return "application/vnd.epson.msf";
        case Type::Application_VndEpsonQuickanime:
            return "application/vnd.epson.quickanime";
        case Type::Application_VndEpsonSalt:
            return "application/vnd.epson.salt";
        case Type::Application_VndEpsonSsf: return "application/vnd.epson.ssf";
        case Type::Application_VndEricssonQuickcall:
            return "application/vnd.ericsson.quickcall";
        case Type::Application_VndErofs: return "application/vnd.erofs";
        case Type::Application_VndEspassEspassZip:
            return "application/vnd.espass-espass+zip";
        case Type::Application_VndEszigno3Xml:
            return "application/vnd.eszigno3+xml";
        case Type::Application_VndEtsiAocXml:
            return "application/vnd.etsi.aoc+xml";
        case Type::Application_VndEtsiAsicSZip:
            return "application/vnd.etsi.asic-s+zip";
        case Type::Application_VndEtsiAsicEZip:
            return "application/vnd.etsi.asic-e+zip";
        case Type::Application_VndEtsiCugXml:
            return "application/vnd.etsi.cug+xml";
        case Type::Application_VndEtsiIptvcommandXml:
            return "application/vnd.etsi.iptvcommand+xml";
        case Type::Application_VndEtsiIptvdiscoveryXml:
            return "application/vnd.etsi.iptvdiscovery+xml";
        case Type::Application_VndEtsiIptvprofileXml:
            return "application/vnd.etsi.iptvprofile+xml";
        case Type::Application_VndEtsiIptvsadBcXml:
            return "application/vnd.etsi.iptvsad-bc+xml";
        case Type::Application_VndEtsiIptvsadCodXml:
            return "application/vnd.etsi.iptvsad-cod+xml";
        case Type::Application_VndEtsiIptvsadNpvrXml:
            return "application/vnd.etsi.iptvsad-npvr+xml";
        case Type::Application_VndEtsiIptvserviceXml:
            return "application/vnd.etsi.iptvservice+xml";
        case Type::Application_VndEtsiIptvsyncXml:
            return "application/vnd.etsi.iptvsync+xml";
        case Type::Application_VndEtsiIptvueprofileXml:
            return "application/vnd.etsi.iptvueprofile+xml";
        case Type::Application_VndEtsiMcidXml:
            return "application/vnd.etsi.mcid+xml";
        case Type::Application_VndEtsiMheg5:
            return "application/vnd.etsi.mheg5";
        case Type::Application_VndEtsiOverloadControlPolicyDatasetXml:
            return "application/vnd.etsi.overload-control-policy-dataset+xml";
        case Type::Application_VndEtsiPstnXml:
            return "application/vnd.etsi.pstn+xml";
        case Type::Application_VndEtsiSciXml:
            return "application/vnd.etsi.sci+xml";
        case Type::Application_VndEtsiSimservsXml:
            return "application/vnd.etsi.simservs+xml";
        case Type::Application_VndEtsiTimestampToken:
            return "application/vnd.etsi.timestamp-token";
        case Type::Application_VndEtsiTslXml:
            return "application/vnd.etsi.tsl+xml";
        case Type::Application_VndEtsiTslDer:
            return "application/vnd.etsi.tsl.der";
        case Type::Application_VndEuKasparianCarJson:
            return "application/vnd.eu.kasparian.car+json";
        case Type::Application_VndEudoraData:
            return "application/vnd.eudora.data";
        case Type::Application_VndEvolvEcigProfile:
            return "application/vnd.evolv.ecig.profile";
        case Type::Application_VndEvolvEcigSettings:
            return "application/vnd.evolv.ecig.settings";
        case Type::Application_VndEvolvEcigTheme:
            return "application/vnd.evolv.ecig.theme";
        case Type::Application_VndExstreamEmpowerZip:
            return "application/vnd.exstream-empower+zip";
        case Type::Application_VndExstreamPackage:
            return "application/vnd.exstream-package";
        case Type::Application_VndEzpixAlbum:
            return "application/vnd.ezpix-album";
        case Type::Application_VndEzpixPackage:
            return "application/vnd.ezpix-package";
        case Type::Application_VndFSecureMobile:
            return "application/vnd.f-secure.mobile";
        case Type::Application_VndFastcopyDiskImage:
            return "application/vnd.fastcopy-disk-image";
        case Type::Application_VndFamilysearchGedcomZip:
            return "application/vnd.familysearch.gedcom+zip";
        case Type::Application_VndFdsnMseed:
            return "application/vnd.fdsn.mseed";
        case Type::Application_VndFdsnSeed: return "application/vnd.fdsn.seed";
        case Type::Application_VndFfsns: return "application/vnd.ffsns";
        case Type::Application_VndFiclabFlbZip:
            return "application/vnd.ficlab.flb+zip";
        case Type::Application_VndFilmitZfc:
            return "application/vnd.filmit.zfc";
        case Type::Application_VndFints: return "application/vnd.fints";
        case Type::Application_VndFiremonkeysCloudcell:
            return "application/vnd.firemonkeys.cloudcell";
        case Type::Application_VndFloGraphIt:
            return "application/vnd.FloGraphIt";
        case Type::Application_VndFluxtimeClip:
            return "application/vnd.fluxtime.clip";
        case Type::Application_VndFontFontforgeSfd:
            return "application/vnd.font-fontforge-sfd";
        case Type::Application_VndFramemaker:
            return "application/vnd.framemaker";
        case Type::Application_VndFreelogComic:
            return "application/vnd.freelog.comic";
        case Type::Application_VndFrogansFnc:
            return "application/vnd.frogans.fnc";
        case Type::Application_VndFrogansLtf:
            return "application/vnd.frogans.ltf";
        case Type::Application_VndFscWeblaunch:
            return "application/vnd.fsc.weblaunch";
        case Type::Application_VndFujifilmFbDocuworks:
            return "application/vnd.fujifilm.fb.docuworks";
        case Type::Application_VndFujifilmFbDocuworksBinder:
            return "application/vnd.fujifilm.fb.docuworks.binder";
        case Type::Application_VndFujifilmFbDocuworksContainer:
            return "application/vnd.fujifilm.fb.docuworks.container";
        case Type::Application_VndFujifilmFbJfiXml:
            return "application/vnd.fujifilm.fb.jfi+xml";
        case Type::Application_VndFujitsuOasys:
            return "application/vnd.fujitsu.oasys";
        case Type::Application_VndFujitsuOasys2:
            return "application/vnd.fujitsu.oasys2";
        case Type::Application_VndFujitsuOasys3:
            return "application/vnd.fujitsu.oasys3";
        case Type::Application_VndFujitsuOasysgp:
            return "application/vnd.fujitsu.oasysgp";
        case Type::Application_VndFujitsuOasysprs:
            return "application/vnd.fujitsu.oasysprs";
        case Type::Application_VndFujixeroxART4:
            return "application/vnd.fujixerox.ART4";
        case Type::Application_VndFujixeroxARTEX:
            return "application/vnd.fujixerox.ART-EX";
        case Type::Application_VndFujixeroxDdd:
            return "application/vnd.fujixerox.ddd";
        case Type::Application_VndFujixeroxDocuworks:
            return "application/vnd.fujixerox.docuworks";
        case Type::Application_VndFujixeroxDocuworksBinder:
            return "application/vnd.fujixerox.docuworks.binder";
        case Type::Application_VndFujixeroxDocuworksContainer:
            return "application/vnd.fujixerox.docuworks.container";
        case Type::Application_VndFujixeroxHBPL:
            return "application/vnd.fujixerox.HBPL";
        case Type::Application_VndFutMisnet:
            return "application/vnd.fut-misnet";
        case Type::Application_VndFutoinCbor:
            return "application/vnd.futoin+cbor";
        case Type::Application_VndFutoinJson:
            return "application/vnd.futoin+json";
        case Type::Application_VndFuzzysheet:
            return "application/vnd.fuzzysheet";
        case Type::Application_VndGa4ghPassportJwt:
            return "application/vnd.ga4gh.passport+jwt";
        case Type::Application_VndGenomatixTuxedo:
            return "application/vnd.genomatix.tuxedo";
        case Type::Application_VndGenozip: return "application/vnd.genozip";
        case Type::Application_VndGenticsGrdJson:
            return "application/vnd.gentics.grd+json";
        case Type::Application_VndGentooCatmetadataXml:
            return "application/vnd.gentoo.catmetadata+xml";
        case Type::Application_VndGentooEbuild:
            return "application/vnd.gentoo.ebuild";
        case Type::Application_VndGentooEclass:
            return "application/vnd.gentoo.eclass";
        case Type::Application_VndGentooGpkg:
            return "application/vnd.gentoo.gpkg";
        case Type::Application_VndGentooManifest:
            return "application/vnd.gentoo.manifest";
        case Type::Application_VndGentooXpak:
            return "application/vnd.gentoo.xpak";
        case Type::Application_VndGentooPkgmetadataXml:
            return "application/vnd.gentoo.pkgmetadata+xml";
        case Type::Application_VndGeoJson: return "application/vnd.geo+json";
        case Type::Application_VndGeocubeXml:
            return "application/vnd.geocube+xml";
        case Type::Application_VndGeogebraFile:
            return "application/vnd.geogebra.file";
        case Type::Application_VndGeogebraSlides:
            return "application/vnd.geogebra.slides";
        case Type::Application_VndGeogebraTool:
            return "application/vnd.geogebra.tool";
        case Type::Application_VndGeometryExplorer:
            return "application/vnd.geometry-explorer";
        case Type::Application_VndGeonext: return "application/vnd.geonext";
        case Type::Application_VndGeoplan: return "application/vnd.geoplan";
        case Type::Application_VndGeospace: return "application/vnd.geospace";
        case Type::Application_VndGerber: return "application/vnd.gerber";
        case Type::Application_VndGlobalplatformCardContentMgt:
            return "application/vnd.globalplatform.card-content-mgt";
        case Type::Application_VndGlobalplatformCardContentMgtResponse:
            return "application/vnd.globalplatform.card-content-mgt-response";
        case Type::Application_VndGmx: return "application/vnd.gmx";
        case Type::Application_VndGnuTalerExchangeJson:
            return "application/vnd.gnu.taler.exchange+json";
        case Type::Application_VndGnuTalerMerchantJson:
            return "application/vnd.gnu.taler.merchant+json";
        case Type::Application_VndGoogleEarthKmlXml:
            return "application/vnd.google-earth.kml+xml";
        case Type::Application_VndGoogleEarthKmz:
            return "application/vnd.google-earth.kmz";
        case Type::Application_VndGovSkEFormXml:
            return "application/vnd.gov.sk.e-form+xml";
        case Type::Application_VndGovSkEFormZip:
            return "application/vnd.gov.sk.e-form+zip";
        case Type::Application_VndGovSkXmldatacontainerXml:
            return "application/vnd.gov.sk.xmldatacontainer+xml";
        case Type::Application_VndGpxseeMapXml:
            return "application/vnd.gpxsee.map+xml";
        case Type::Application_VndGrafeq: return "application/vnd.grafeq";
        case Type::Application_VndGridmp: return "application/vnd.gridmp";
        case Type::Application_VndGrooveAccount:
            return "application/vnd.groove-account";
        case Type::Application_VndGrooveHelp:
            return "application/vnd.groove-help";
        case Type::Application_VndGrooveIdentityMessage:
            return "application/vnd.groove-identity-message";
        case Type::Application_VndGrooveInjector:
            return "application/vnd.groove-injector";
        case Type::Application_VndGrooveToolMessage:
            return "application/vnd.groove-tool-message";
        case Type::Application_VndGrooveToolTemplate:
            return "application/vnd.groove-tool-template";
        case Type::Application_VndGrooveVcard:
            return "application/vnd.groove-vcard";
        case Type::Application_VndHalJson: return "application/vnd.hal+json";
        case Type::Application_VndHalXml: return "application/vnd.hal+xml";
        case Type::Application_VndHandHeldEntertainmentXml:
            return "application/vnd.HandHeld-Entertainment+xml";
        case Type::Application_VndHbci: return "application/vnd.hbci";
        case Type::Application_VndHcJson: return "application/vnd.hc+json";
        case Type::Application_VndHclBireports:
            return "application/vnd.hcl-bireports";
        case Type::Application_VndHdt: return "application/vnd.hdt";
        case Type::Application_VndHerokuJson:
            return "application/vnd.heroku+json";
        case Type::Application_VndHheLessonPlayer:
            return "application/vnd.hhe.lesson-player";
        case Type::Application_VndHpHPGL: return "application/vnd.hp-HPGL";
        case Type::Application_VndHpHpid: return "application/vnd.hp-hpid";
        case Type::Application_VndHpHps: return "application/vnd.hp-hps";
        case Type::Application_VndHpJlyt: return "application/vnd.hp-jlyt";
        case Type::Application_VndHpPCL: return "application/vnd.hp-PCL";
        case Type::Application_VndHpPCLXL: return "application/vnd.hp-PCLXL";
        case Type::Application_VndHsl: return "application/vnd.hsl";
        case Type::Application_VndHttphone: return "application/vnd.httphone";
        case Type::Application_VndHydrostatixSofData:
            return "application/vnd.hydrostatix.sof-data";
        case Type::Application_VndHyperItemJson:
            return "application/vnd.hyper-item+json";
        case Type::Application_VndHyperJson:
            return "application/vnd.hyper+json";
        case Type::Application_VndHyperdriveJson:
            return "application/vnd.hyperdrive+json";
        case Type::Application_VndHzn3dCrossword:
            return "application/vnd.hzn-3d-crossword";
        case Type::Application_VndIbmAfplinedata:
            return "application/vnd.ibm.afplinedata";
        case Type::Application_VndIbmElectronicMedia:
            return "application/vnd.ibm.electronic-media";
        case Type::Application_VndIbmMiniPay:
            return "application/vnd.ibm.MiniPay";
        case Type::Application_VndIbmModcap:
            return "application/vnd.ibm.modcap";
        case Type::Application_VndIbmRightsManagement:
            return "application/vnd.ibm.rights-management";
        case Type::Application_VndIbmSecureContainer:
            return "application/vnd.ibm.secure-container";
        case Type::Application_VndIccprofile:
            return "application/vnd.iccprofile";
        case Type::Application_VndIeee1905: return "application/vnd.ieee.1905";
        case Type::Application_VndIgloader: return "application/vnd.igloader";
        case Type::Application_VndImagemeterFolderZip:
            return "application/vnd.imagemeter.folder+zip";
        case Type::Application_VndImagemeterImageZip:
            return "application/vnd.imagemeter.image+zip";
        case Type::Application_VndImmervisionIvp:
            return "application/vnd.immervision-ivp";
        case Type::Application_VndImmervisionIvu:
            return "application/vnd.immervision-ivu";
        case Type::Application_VndImsImsccv1p1:
            return "application/vnd.ims.imsccv1p1";
        case Type::Application_VndImsImsccv1p2:
            return "application/vnd.ims.imsccv1p2";
        case Type::Application_VndImsImsccv1p3:
            return "application/vnd.ims.imsccv1p3";
        case Type::Application_VndImsLisV2ResultJson:
            return "application/vnd.ims.lis.v2.result+json";
        case Type::Application_VndImsLtiV2ToolconsumerprofileJson:
            return "application/vnd.ims.lti.v2.toolconsumerprofile+json";
        case Type::Application_VndImsLtiV2ToolproxyIdJson:
            return "application/vnd.ims.lti.v2.toolproxy.id+json";
        case Type::Application_VndImsLtiV2ToolproxyJson:
            return "application/vnd.ims.lti.v2.toolproxy+json";
        case Type::Application_VndImsLtiV2ToolsettingsJson:
            return "application/vnd.ims.lti.v2.toolsettings+json";
        case Type::Application_VndImsLtiV2ToolsettingsSimpleJson:
            return "application/vnd.ims.lti.v2.toolsettings.simple+json";
        case Type::Application_VndInformedcontrolRmsXml:
            return "application/vnd.informedcontrol.rms+xml";
        case Type::Application_VndInfotechProject:
            return "application/vnd.infotech.project";
        case Type::Application_VndInfotechProjectXml:
            return "application/vnd.infotech.project+xml";
        case Type::Application_VndInformixVisionary:
            return "application/vnd.informix-visionary";
        case Type::Application_VndInnopathWampNotification:
            return "application/vnd.innopath.wamp.notification";
        case Type::Application_VndInsorsIgm:
            return "application/vnd.insors.igm";
        case Type::Application_VndInterconFormnet:
            return "application/vnd.intercon.formnet";
        case Type::Application_VndIntergeo: return "application/vnd.intergeo";
        case Type::Application_VndIntertrustDigibox:
            return "application/vnd.intertrust.digibox";
        case Type::Application_VndIntertrustNncp:
            return "application/vnd.intertrust.nncp";
        case Type::Application_VndIntuQbo: return "application/vnd.intu.qbo";
        case Type::Application_VndIntuQfx: return "application/vnd.intu.qfx";
        case Type::Application_VndIpfsIpnsRecord:
            return "application/vnd.ipfs.ipns-record";
        case Type::Application_VndIpldCar: return "application/vnd.ipld.car";
        case Type::Application_VndIpldDagCbor:
            return "application/vnd.ipld.dag-cbor";
        case Type::Application_VndIpldDagJson:
            return "application/vnd.ipld.dag-json";
        case Type::Application_VndIpldRaw: return "application/vnd.ipld.raw";
        case Type::Application_VndIptcG2CatalogitemXml:
            return "application/vnd.iptc.g2.catalogitem+xml";
        case Type::Application_VndIptcG2ConceptitemXml:
            return "application/vnd.iptc.g2.conceptitem+xml";
        case Type::Application_VndIptcG2KnowledgeitemXml:
            return "application/vnd.iptc.g2.knowledgeitem+xml";
        case Type::Application_VndIptcG2NewsitemXml:
            return "application/vnd.iptc.g2.newsitem+xml";
        case Type::Application_VndIptcG2NewsmessageXml:
            return "application/vnd.iptc.g2.newsmessage+xml";
        case Type::Application_VndIptcG2PackageitemXml:
            return "application/vnd.iptc.g2.packageitem+xml";
        case Type::Application_VndIptcG2PlanningitemXml:
            return "application/vnd.iptc.g2.planningitem+xml";
        case Type::Application_VndIpunpluggedRcprofile:
            return "application/vnd.ipunplugged.rcprofile";
        case Type::Application_VndIrepositoryPackageXml:
            return "application/vnd.irepository.package+xml";
        case Type::Application_VndIsXpr: return "application/vnd.is-xpr";
        case Type::Application_VndIsacFcs: return "application/vnd.isac.fcs";
        case Type::Application_VndJam: return "application/vnd.jam";
        case Type::Application_VndIso1178310Zip:
            return "application/vnd.iso11783-10+zip";
        case Type::Application_VndJapannetDirectoryService:
            return "application/vnd.japannet-directory-service";
        case Type::Application_VndJapannetJpnstoreWakeup:
            return "application/vnd.japannet-jpnstore-wakeup";
        case Type::Application_VndJapannetPaymentWakeup:
            return "application/vnd.japannet-payment-wakeup";
        case Type::Application_VndJapannetRegistration:
            return "application/vnd.japannet-registration";
        case Type::Application_VndJapannetRegistrationWakeup:
            return "application/vnd.japannet-registration-wakeup";
        case Type::Application_VndJapannetSetstoreWakeup:
            return "application/vnd.japannet-setstore-wakeup";
        case Type::Application_VndJapannetVerification:
            return "application/vnd.japannet-verification";
        case Type::Application_VndJapannetVerificationWakeup:
            return "application/vnd.japannet-verification-wakeup";
        case Type::Application_VndJcpJavameMidletRms:
            return "application/vnd.jcp.javame.midlet-rms";
        case Type::Application_VndJisp: return "application/vnd.jisp";
        case Type::Application_VndJoostJodaArchive:
            return "application/vnd.joost.joda-archive";
        case Type::Application_VndJskIsdnNgn:
            return "application/vnd.jsk.isdn-ngn";
        case Type::Application_VndKahootz: return "application/vnd.kahootz";
        case Type::Application_VndKdeKarbon:
            return "application/vnd.kde.karbon";
        case Type::Application_VndKdeKchart:
            return "application/vnd.kde.kchart";
        case Type::Application_VndKdeKformula:
            return "application/vnd.kde.kformula";
        case Type::Application_VndKdeKivio: return "application/vnd.kde.kivio";
        case Type::Application_VndKdeKontour:
            return "application/vnd.kde.kontour";
        case Type::Application_VndKdeKpresenter:
            return "application/vnd.kde.kpresenter";
        case Type::Application_VndKdeKspread:
            return "application/vnd.kde.kspread";
        case Type::Application_VndKdeKword: return "application/vnd.kde.kword";
        case Type::Application_VndKenameaapp:
            return "application/vnd.kenameaapp";
        case Type::Application_VndKidspiration:
            return "application/vnd.kidspiration";
        case Type::Application_VndKinar: return "application/vnd.Kinar";
        case Type::Application_VndKoan: return "application/vnd.koan";
        case Type::Application_VndKodakDescriptor:
            return "application/vnd.kodak-descriptor";
        case Type::Application_VndLas: return "application/vnd.las";
        case Type::Application_VndLasLasJson:
            return "application/vnd.las.las+json";
        case Type::Application_VndLasLasXml:
            return "application/vnd.las.las+xml";
        case Type::Application_VndLaszip: return "application/vnd.laszip";
        case Type::Application_VndLdevProductlicensing:
            return "application/vnd.ldev.productlicensing";
        case Type::Application_VndLeapJson: return "application/vnd.leap+json";
        case Type::Application_VndLibertyRequestXml:
            return "application/vnd.liberty-request+xml";
        case Type::Application_VndLlamagraphicsLifeBalanceDesktop:
            return "application/vnd.llamagraphics.life-balance.desktop";
        case Type::Application_VndLlamagraphicsLifeBalanceExchangeXml:
            return "application/vnd.llamagraphics.life-balance.exchange+xml";
        case Type::Application_VndLogipipeCircuitZip:
            return "application/vnd.logipipe.circuit+zip";
        case Type::Application_VndLoom: return "application/vnd.loom";
        case Type::Application_VndLotus123:
            return "application/vnd.lotus-1-2-3";
        case Type::Application_VndLotusApproach:
            return "application/vnd.lotus-approach";
        case Type::Application_VndLotusFreelance:
            return "application/vnd.lotus-freelance";
        case Type::Application_VndLotusNotes:
            return "application/vnd.lotus-notes";
        case Type::Application_VndLotusOrganizer:
            return "application/vnd.lotus-organizer";
        case Type::Application_VndLotusScreencam:
            return "application/vnd.lotus-screencam";
        case Type::Application_VndLotusWordpro:
            return "application/vnd.lotus-wordpro";
        case Type::Application_VndMacportsPortpkg:
            return "application/vnd.macports.portpkg";
        case Type::Application_VndMapboxVectorTile:
            return "application/vnd.mapbox-vector-tile";
        case Type::Application_VndMarlinDrmActiontokenXml:
            return "application/vnd.marlin.drm.actiontoken+xml";
        case Type::Application_VndMarlinDrmConftokenXml:
            return "application/vnd.marlin.drm.conftoken+xml";
        case Type::Application_VndMarlinDrmLicenseXml:
            return "application/vnd.marlin.drm.license+xml";
        case Type::Application_VndMarlinDrmMdcf:
            return "application/vnd.marlin.drm.mdcf";
        case Type::Application_VndMasonJson:
            return "application/vnd.mason+json";
        case Type::Application_VndMaxarArchive3tzZip:
            return "application/vnd.maxar.archive.3tz+zip";
        case Type::Application_VndMaxmindMaxmindDb:
            return "application/vnd.maxmind.maxmind-db";
        case Type::Application_VndMcd: return "application/vnd.mcd";
        case Type::Application_VndMdl: return "application/vnd.mdl";
        case Type::Application_VndMdlMbsdf: return "application/vnd.mdl-mbsdf";
        case Type::Application_VndMedcalcdata:
            return "application/vnd.medcalcdata";
        case Type::Application_VndMediastationCdkey:
            return "application/vnd.mediastation.cdkey";
        case Type::Application_VndMedicalholodeckRecordxr:
            return "application/vnd.medicalholodeck.recordxr";
        case Type::Application_VndMeridianSlingshot:
            return "application/vnd.meridian-slingshot";
        case Type::Application_VndMermaid: return "application/vnd.mermaid";
        case Type::Application_VndMFER: return "application/vnd.MFER";
        case Type::Application_VndMfmp: return "application/vnd.mfmp";
        case Type::Application_VndMicroJson:
            return "application/vnd.micro+json";
        case Type::Application_VndMicrografxFlo:
            return "application/vnd.micrografx.flo";
        case Type::Application_VndMicrografxIgx:
            return "application/vnd.micrografx.igx";
        case Type::Application_VndMicrosoftPortableExecutable:
            return "application/vnd.microsoft.portable-executable";
        case Type::Application_VndMicrosoftWindowsThumbnailCache:
            return "application/vnd.microsoft.windows.thumbnail-cache";
        case Type::Application_VndMieleJson:
            return "application/vnd.miele+json";
        case Type::Application_VndMif: return "application/vnd.mif";
        case Type::Application_VndMinisoftHp3000Save:
            return "application/vnd.minisoft-hp3000-save";
        case Type::Application_VndMitsubishiMistyGuardTrustweb:
            return "application/vnd.mitsubishi.misty-guard.trustweb";
        case Type::Application_VndMobiusDAF:
            return "application/vnd.Mobius.DAF";
        case Type::Application_VndMobiusDIS:
            return "application/vnd.Mobius.DIS";
        case Type::Application_VndMobiusMBK:
            return "application/vnd.Mobius.MBK";
        case Type::Application_VndMobiusMQY:
            return "application/vnd.Mobius.MQY";
        case Type::Application_VndMobiusMSL:
            return "application/vnd.Mobius.MSL";
        case Type::Application_VndMobiusPLC:
            return "application/vnd.Mobius.PLC";
        case Type::Application_VndMobiusTXF:
            return "application/vnd.Mobius.TXF";
        case Type::Application_VndModl: return "application/vnd.modl";
        case Type::Application_VndMophunApplication:
            return "application/vnd.mophun.application";
        case Type::Application_VndMophunCertificate:
            return "application/vnd.mophun.certificate";
        case Type::Application_VndMotorolaFlexsuite:
            return "application/vnd.motorola.flexsuite";
        case Type::Application_VndMotorolaFlexsuiteAdsi:
            return "application/vnd.motorola.flexsuite.adsi";
        case Type::Application_VndMotorolaFlexsuiteFis:
            return "application/vnd.motorola.flexsuite.fis";
        case Type::Application_VndMotorolaFlexsuiteGotap:
            return "application/vnd.motorola.flexsuite.gotap";
        case Type::Application_VndMotorolaFlexsuiteKmr:
            return "application/vnd.motorola.flexsuite.kmr";
        case Type::Application_VndMotorolaFlexsuiteTtc:
            return "application/vnd.motorola.flexsuite.ttc";
        case Type::Application_VndMotorolaFlexsuiteWem:
            return "application/vnd.motorola.flexsuite.wem";
        case Type::Application_VndMotorolaIprm:
            return "application/vnd.motorola.iprm";
        case Type::Application_VndMozillaXulXml:
            return "application/vnd.mozilla.xul+xml";
        case Type::Application_VndMsArtgalry:
            return "application/vnd.ms-artgalry";
        case Type::Application_VndMsAsf: return "application/vnd.ms-asf";
        case Type::Application_VndMsCabCompressed:
            return "application/vnd.ms-cab-compressed";
        case Type::Application_VndMs3mfdocument:
            return "application/vnd.ms-3mfdocument";
        case Type::Application_VndMsExcel: return "application/vnd.ms-excel";
        case Type::Application_VndMsExcelAddinMacroEnabled12:
            return "application/vnd.ms-excel.addin.macroEnabled.12";
        case Type::Application_VndMsExcelSheetBinaryMacroEnabled12:
            return "application/vnd.ms-excel.sheet.binary.macroEnabled.12";
        case Type::Application_VndMsExcelSheetMacroEnabled12:
            return "application/vnd.ms-excel.sheet.macroEnabled.12";
        case Type::Application_VndMsExcelTemplateMacroEnabled12:
            return "application/vnd.ms-excel.template.macroEnabled.12";
        case Type::Application_VndMsFontobject:
            return "application/vnd.ms-fontobject";
        case Type::Application_VndMsHtmlhelp:
            return "application/vnd.ms-htmlhelp";
        case Type::Application_VndMsIms: return "application/vnd.ms-ims";
        case Type::Application_VndMsLrm: return "application/vnd.ms-lrm";
        case Type::Application_VndMsOfficeActiveXXml:
            return "application/vnd.ms-office.activeX+xml";
        case Type::Application_VndMsOfficetheme:
            return "application/vnd.ms-officetheme";
        case Type::Application_VndMsPlayreadyInitiatorXml:
            return "application/vnd.ms-playready.initiator+xml";
        case Type::Application_VndMsPowerpoint:
            return "application/vnd.ms-powerpoint";
        case Type::Application_VndMsPowerpointAddinMacroEnabled12:
            return "application/vnd.ms-powerpoint.addin.macroEnabled.12";
        case Type::Application_VndMsPowerpointPresentationMacroEnabled12:
            return "application/vnd.ms-powerpoint.presentation.macroEnabled.12";
        case Type::Application_VndMsPowerpointSlideMacroEnabled12:
            return "application/vnd.ms-powerpoint.slide.macroEnabled.12";
        case Type::Application_VndMsPowerpointSlideshowMacroEnabled12:
            return "application/vnd.ms-powerpoint.slideshow.macroEnabled.12";
        case Type::Application_VndMsPowerpointTemplateMacroEnabled12:
            return "application/vnd.ms-powerpoint.template.macroEnabled.12";
        case Type::Application_VndMsPrintDeviceCapabilitiesXml:
            return "application/vnd.ms-PrintDeviceCapabilities+xml";
        case Type::Application_VndMsPrintSchemaTicketXml:
            return "application/vnd.ms-PrintSchemaTicket+xml";
        case Type::Application_VndMsProject:
            return "application/vnd.ms-project";
        case Type::Application_VndMsTnef: return "application/vnd.ms-tnef";
        case Type::Application_VndMsWindowsDevicepairing:
            return "application/vnd.ms-windows.devicepairing";
        case Type::Application_VndMsWindowsNwprintingOob:
            return "application/vnd.ms-windows.nwprinting.oob";
        case Type::Application_VndMsWindowsPrinterpairing:
            return "application/vnd.ms-windows.printerpairing";
        case Type::Application_VndMsWindowsWsdOob:
            return "application/vnd.ms-windows.wsd.oob";
        case Type::Application_VndMsWmdrmLicChlgReq:
            return "application/vnd.ms-wmdrm.lic-chlg-req";
        case Type::Application_VndMsWmdrmLicResp:
            return "application/vnd.ms-wmdrm.lic-resp";
        case Type::Application_VndMsWmdrmMeterChlgReq:
            return "application/vnd.ms-wmdrm.meter-chlg-req";
        case Type::Application_VndMsWmdrmMeterResp:
            return "application/vnd.ms-wmdrm.meter-resp";
        case Type::Application_VndMsWordDocumentMacroEnabled12:
            return "application/vnd.ms-word.document.macroEnabled.12";
        case Type::Application_VndMsWordTemplateMacroEnabled12:
            return "application/vnd.ms-word.template.macroEnabled.12";
        case Type::Application_VndMsWorks: return "application/vnd.ms-works";
        case Type::Application_VndMsWpl: return "application/vnd.ms-wpl";
        case Type::Application_VndMsXpsdocument:
            return "application/vnd.ms-xpsdocument";
        case Type::Application_VndMsaDiskImage:
            return "application/vnd.msa-disk-image";
        case Type::Application_VndMseq: return "application/vnd.mseq";
        case Type::Application_VndMsgpack: return "application/vnd.msgpack";
        case Type::Application_VndMsign: return "application/vnd.msign";
        case Type::Application_VndMultiadCreator:
            return "application/vnd.multiad.creator";
        case Type::Application_VndMultiadCreatorCif:
            return "application/vnd.multiad.creator.cif";
        case Type::Application_VndMusician: return "application/vnd.musician";
        case Type::Application_VndMusicNiff:
            return "application/vnd.music-niff";
        case Type::Application_VndMuveeStyle:
            return "application/vnd.muvee.style";
        case Type::Application_VndMynfc: return "application/vnd.mynfc";
        case Type::Application_VndNacamarYbridJson:
            return "application/vnd.nacamar.ybrid+json";
        case Type::Application_VndNatoBindingdataobjectCbor:
            return "application/vnd.nato.bindingdataobject+cbor";
        case Type::Application_VndNatoBindingdataobjectJson:
            return "application/vnd.nato.bindingdataobject+json";
        case Type::Application_VndNatoBindingdataobjectXml:
            return "application/vnd.nato.bindingdataobject+xml";
        case Type::Application_VndNatoOpenxmlformatsPackageIepdZip:
            return "application/vnd.nato.openxmlformats-package.iepd+zip";
        case Type::Application_VndNcdControl:
            return "application/vnd.ncd.control";
        case Type::Application_VndNcdReference:
            return "application/vnd.ncd.reference";
        case Type::Application_VndNearstInvJson:
            return "application/vnd.nearst.inv+json";
        case Type::Application_VndNebumindLine:
            return "application/vnd.nebumind.line";
        case Type::Application_VndNervana: return "application/vnd.nervana";
        case Type::Application_VndNetfpx: return "application/vnd.netfpx";
        case Type::Application_VndNeurolanguageNlu:
            return "application/vnd.neurolanguage.nlu";
        case Type::Application_VndNimn: return "application/vnd.nimn";
        case Type::Application_VndNintendoSnesRom:
            return "application/vnd.nintendo.snes.rom";
        case Type::Application_VndNintendoNitroRom:
            return "application/vnd.nintendo.nitro.rom";
        case Type::Application_VndNitf: return "application/vnd.nitf";
        case Type::Application_VndNoblenetDirectory:
            return "application/vnd.noblenet-directory";
        case Type::Application_VndNoblenetSealer:
            return "application/vnd.noblenet-sealer";
        case Type::Application_VndNoblenetWeb:
            return "application/vnd.noblenet-web";
        case Type::Application_VndNokiaCatalogs:
            return "application/vnd.nokia.catalogs";
        case Type::Application_VndNokiaConmlWbxml:
            return "application/vnd.nokia.conml+wbxml";
        case Type::Application_VndNokiaConmlXml:
            return "application/vnd.nokia.conml+xml";
        case Type::Application_VndNokiaIptvConfigXml:
            return "application/vnd.nokia.iptv.config+xml";
        case Type::Application_VndNokiaISDSRadioPresets:
            return "application/vnd.nokia.iSDS-radio-presets";
        case Type::Application_VndNokiaLandmarkWbxml:
            return "application/vnd.nokia.landmark+wbxml";
        case Type::Application_VndNokiaLandmarkXml:
            return "application/vnd.nokia.landmark+xml";
        case Type::Application_VndNokiaLandmarkcollectionXml:
            return "application/vnd.nokia.landmarkcollection+xml";
        case Type::Application_VndNokiaNcd: return "application/vnd.nokia.ncd";
        case Type::Application_VndNokiaNGageAcXml:
            return "application/vnd.nokia.n-gage.ac+xml";
        case Type::Application_VndNokiaNGageData:
            return "application/vnd.nokia.n-gage.data";
        case Type::Application_VndNokiaNGageSymbianInstall:
            return "application/vnd.nokia.n-gage.symbian.install";
        case Type::Application_VndNokiaPcdWbxml:
            return "application/vnd.nokia.pcd+wbxml";
        case Type::Application_VndNokiaPcdXml:
            return "application/vnd.nokia.pcd+xml";
        case Type::Application_VndNokiaRadioPreset:
            return "application/vnd.nokia.radio-preset";
        case Type::Application_VndNokiaRadioPresets:
            return "application/vnd.nokia.radio-presets";
        case Type::Application_VndNovadigmEDM:
            return "application/vnd.novadigm.EDM";
        case Type::Application_VndNovadigmEDX:
            return "application/vnd.novadigm.EDX";
        case Type::Application_VndNovadigmEXT:
            return "application/vnd.novadigm.EXT";
        case Type::Application_VndNttLocalContentShare:
            return "application/vnd.ntt-local.content-share";
        case Type::Application_VndNttLocalFileTransfer:
            return "application/vnd.ntt-local.file-transfer";
        case Type::Application_VndNttLocalOgwRemoteAccess:
            return "application/vnd.ntt-local.ogw_remote-access";
        case Type::Application_VndNttLocalSipTaRemote:
            return "application/vnd.ntt-local.sip-ta_remote";
        case Type::Application_VndNttLocalSipTaTcpStream:
            return "application/vnd.ntt-local.sip-ta_tcp_stream";
        case Type::Application_VndOaiWorkflows:
            return "application/vnd.oai.workflows";
        case Type::Application_VndOaiWorkflowsJson:
            return "application/vnd.oai.workflows+json";
        case Type::Application_VndOaiWorkflowsYaml:
            return "application/vnd.oai.workflows+yaml";
        case Type::Application_VndOasisOpendocumentBase:
            return "application/vnd.oasis.opendocument.base";
        case Type::Application_VndOasisOpendocumentChart:
            return "application/vnd.oasis.opendocument.chart";
        case Type::Application_VndOasisOpendocumentChartTemplate:
            return "application/vnd.oasis.opendocument.chart-template";
        case Type::Application_VndOasisOpendocumentDatabase:
            return "application/vnd.oasis.opendocument.database";
        case Type::Application_VndOasisOpendocumentFormula:
            return "application/vnd.oasis.opendocument.formula";
        case Type::Application_VndOasisOpendocumentFormulaTemplate:
            return "application/vnd.oasis.opendocument.formula-template";
        case Type::Application_VndOasisOpendocumentGraphics:
            return "application/vnd.oasis.opendocument.graphics";
        case Type::Application_VndOasisOpendocumentGraphicsTemplate:
            return "application/vnd.oasis.opendocument.graphics-template";
        case Type::Application_VndOasisOpendocumentImage:
            return "application/vnd.oasis.opendocument.image";
        case Type::Application_VndOasisOpendocumentImageTemplate:
            return "application/vnd.oasis.opendocument.image-template";
        case Type::Application_VndOasisOpendocumentPresentation:
            return "application/vnd.oasis.opendocument.presentation";
        case Type::Application_VndOasisOpendocumentPresentationTemplate:
            return "application/vnd.oasis.opendocument.presentation-template";
        case Type::Application_VndOasisOpendocumentSpreadsheet:
            return "application/vnd.oasis.opendocument.spreadsheet";
        case Type::Application_VndOasisOpendocumentSpreadsheetTemplate:
            return "application/vnd.oasis.opendocument.spreadsheet-template";
        case Type::Application_VndOasisOpendocumentText:
            return "application/vnd.oasis.opendocument.text";
        case Type::Application_VndOasisOpendocumentTextMaster:
            return "application/vnd.oasis.opendocument.text-master";
        case Type::Application_VndOasisOpendocumentTextMasterTemplate:
            return "application/vnd.oasis.opendocument.text-master-template";
        case Type::Application_VndOasisOpendocumentTextTemplate:
            return "application/vnd.oasis.opendocument.text-template";
        case Type::Application_VndOasisOpendocumentTextWeb:
            return "application/vnd.oasis.opendocument.text-web";
        case Type::Application_VndObn: return "application/vnd.obn";
        case Type::Application_VndOcfCbor: return "application/vnd.ocf+cbor";
        case Type::Application_VndOciImageManifestV1Json:
            return "application/vnd.oci.image.manifest.v1+json";
        case Type::Application_VndOftnL10nJson:
            return "application/vnd.oftn.l10n+json";
        case Type::Application_VndOipfContentaccessdownloadXml:
            return "application/vnd.oipf.contentaccessdownload+xml";
        case Type::Application_VndOipfContentaccessstreamingXml:
            return "application/vnd.oipf.contentaccessstreaming+xml";
        case Type::Application_VndOipfCspgHexbinary:
            return "application/vnd.oipf.cspg-hexbinary";
        case Type::Application_VndOipfDaeSvgXml:
            return "application/vnd.oipf.dae.svg+xml";
        case Type::Application_VndOipfDaeXhtmlXml:
            return "application/vnd.oipf.dae.xhtml+xml";
        case Type::Application_VndOipfMippvcontrolmessageXml:
            return "application/vnd.oipf.mippvcontrolmessage+xml";
        case Type::Application_VndOipfPaeGem:
            return "application/vnd.oipf.pae.gem";
        case Type::Application_VndOipfSpdiscoveryXml:
            return "application/vnd.oipf.spdiscovery+xml";
        case Type::Application_VndOipfSpdlistXml:
            return "application/vnd.oipf.spdlist+xml";
        case Type::Application_VndOipfUeprofileXml:
            return "application/vnd.oipf.ueprofile+xml";
        case Type::Application_VndOipfUserprofileXml:
            return "application/vnd.oipf.userprofile+xml";
        case Type::Application_VndOlpcSugar:
            return "application/vnd.olpc-sugar";
        case Type::Application_VndOmaBcastAssociatedProcedureParameterXml:
            return "application/"
                   "vnd.oma.bcast.associated-procedure-parameter+xml";
        case Type::Application_VndOmaBcastDrmTriggerXml:
            return "application/vnd.oma.bcast.drm-trigger+xml";
        case Type::Application_VndOmaBcastImdXml:
            return "application/vnd.oma.bcast.imd+xml";
        case Type::Application_VndOmaBcastLtkm:
            return "application/vnd.oma.bcast.ltkm";
        case Type::Application_VndOmaBcastNotificationXml:
            return "application/vnd.oma.bcast.notification+xml";
        case Type::Application_VndOmaBcastProvisioningtrigger:
            return "application/vnd.oma.bcast.provisioningtrigger";
        case Type::Application_VndOmaBcastSgboot:
            return "application/vnd.oma.bcast.sgboot";
        case Type::Application_VndOmaBcastSgddXml:
            return "application/vnd.oma.bcast.sgdd+xml";
        case Type::Application_VndOmaBcastSgdu:
            return "application/vnd.oma.bcast.sgdu";
        case Type::Application_VndOmaBcastSimpleSymbolContainer:
            return "application/vnd.oma.bcast.simple-symbol-container";
        case Type::Application_VndOmaBcastSmartcardTriggerXml:
            return "application/vnd.oma.bcast.smartcard-trigger+xml";
        case Type::Application_VndOmaBcastSprovXml:
            return "application/vnd.oma.bcast.sprov+xml";
        case Type::Application_VndOmaBcastStkm:
            return "application/vnd.oma.bcast.stkm";
        case Type::Application_VndOmaCabAddressBookXml:
            return "application/vnd.oma.cab-address-book+xml";
        case Type::Application_VndOmaCabFeatureHandlerXml:
            return "application/vnd.oma.cab-feature-handler+xml";
        case Type::Application_VndOmaCabPccXml:
            return "application/vnd.oma.cab-pcc+xml";
        case Type::Application_VndOmaCabSubsInviteXml:
            return "application/vnd.oma.cab-subs-invite+xml";
        case Type::Application_VndOmaCabUserPrefsXml:
            return "application/vnd.oma.cab-user-prefs+xml";
        case Type::Application_VndOmaDcd: return "application/vnd.oma.dcd";
        case Type::Application_VndOmaDcdc: return "application/vnd.oma.dcdc";
        case Type::Application_VndOmaDd2Xml:
            return "application/vnd.oma.dd2+xml";
        case Type::Application_VndOmaDrmRisdXml:
            return "application/vnd.oma.drm.risd+xml";
        case Type::Application_VndOmaGroupUsageListXml:
            return "application/vnd.oma.group-usage-list+xml";
        case Type::Application_VndOmaLwm2mCbor:
            return "application/vnd.oma.lwm2m+cbor";
        case Type::Application_VndOmaLwm2mJson:
            return "application/vnd.oma.lwm2m+json";
        case Type::Application_VndOmaLwm2mTlv:
            return "application/vnd.oma.lwm2m+tlv";
        case Type::Application_VndOmaPalXml:
            return "application/vnd.oma.pal+xml";
        case Type::Application_VndOmaPocDetailedProgressReportXml:
            return "application/vnd.oma.poc.detailed-progress-report+xml";
        case Type::Application_VndOmaPocFinalReportXml:
            return "application/vnd.oma.poc.final-report+xml";
        case Type::Application_VndOmaPocGroupsXml:
            return "application/vnd.oma.poc.groups+xml";
        case Type::Application_VndOmaPocInvocationDescriptorXml:
            return "application/vnd.oma.poc.invocation-descriptor+xml";
        case Type::Application_VndOmaPocOptimizedProgressReportXml:
            return "application/vnd.oma.poc.optimized-progress-report+xml";
        case Type::Application_VndOmaPush: return "application/vnd.oma.push";
        case Type::Application_VndOmaScidmMessagesXml:
            return "application/vnd.oma.scidm.messages+xml";
        case Type::Application_VndOmaXcapDirectoryXml:
            return "application/vnd.oma.xcap-directory+xml";
        case Type::Application_VndOmadsEmailXml:
            return "application/vnd.omads-email+xml";
        case Type::Application_VndOmadsFileXml:
            return "application/vnd.omads-file+xml";
        case Type::Application_VndOmadsFolderXml:
            return "application/vnd.omads-folder+xml";
        case Type::Application_VndOmalocSuplInit:
            return "application/vnd.omaloc-supl-init";
        case Type::Application_VndOmaScwsConfig:
            return "application/vnd.oma-scws-config";
        case Type::Application_VndOmaScwsHttpRequest:
            return "application/vnd.oma-scws-http-request";
        case Type::Application_VndOmaScwsHttpResponse:
            return "application/vnd.oma-scws-http-response";
        case Type::Application_VndOnepager: return "application/vnd.onepager";
        case Type::Application_VndOnepagertamp:
            return "application/vnd.onepagertamp";
        case Type::Application_VndOnepagertamx:
            return "application/vnd.onepagertamx";
        case Type::Application_VndOnepagertat:
            return "application/vnd.onepagertat";
        case Type::Application_VndOnepagertatp:
            return "application/vnd.onepagertatp";
        case Type::Application_VndOnepagertatx:
            return "application/vnd.onepagertatx";
        case Type::Application_VndOnvifMetadata:
            return "application/vnd.onvif.metadata";
        case Type::Application_VndOpenbloxGameBinary:
            return "application/vnd.openblox.game-binary";
        case Type::Application_VndOpenbloxGameXml:
            return "application/vnd.openblox.game+xml";
        case Type::Application_VndOpeneyeOeb:
            return "application/vnd.openeye.oeb";
        case Type::Application_VndOpenstreetmapDataXml:
            return "application/vnd.openstreetmap.data+xml";
        case Type::Application_VndOpentimestampsOts:
            return "application/vnd.opentimestamps.ots";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentCustomPropertiesXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.custom-properties+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentCustomXmlPropertiesXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.customXmlProperties+xml";
        case Type::Application_VndOpenxmlformatsOfficedocumentDrawingXml:
            return "application/vnd.openxmlformats-officedocument.drawing+xml";
        case Type::Application_VndOpenxmlformatsOfficedocumentDrawingmlChartXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.drawingml.chart+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentDrawingmlChartshapesXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.drawingml.chartshapes+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentDrawingmlDiagramColorsXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.drawingml.diagramColors+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentDrawingmlDiagramDataXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.drawingml.diagramData+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentDrawingmlDiagramLayoutXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.drawingml.diagramLayout+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentDrawingmlDiagramStyleXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.drawingml.diagramStyle+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentExtendedPropertiesXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.extended-properties+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlCommentAuthorsXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml."
                   "commentAuthors+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlCommentsXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml.comments+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlHandoutMasterXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml."
                   "handoutMaster+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlNotesMasterXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml."
                   "notesMaster+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlNotesSlideXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml."
                   "notesSlide+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlPresentation:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml."
                   "presentation";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlPresentationMainXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml."
                   "presentation.main+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlPresPropsXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml.presProps+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlSlide:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml.slide";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlSlideXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml.slide+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlSlideLayoutXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml."
                   "slideLayout+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlSlideMasterXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml."
                   "slideMaster+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlSlideshow:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml.slideshow";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlSlideshowMainXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml.slideshow."
                   "main+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlSlideUpdateInfoXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml."
                   "slideUpdateInfo+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlTableStylesXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml."
                   "tableStyles+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlTagsXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml.tags+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlTemplate:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml.template";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlTemplateMainXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml.template."
                   "main+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentPresentationmlViewPropsXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.presentationml.viewProps+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlCalcChainXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml.calcChain+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlChartsheetXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml.chartsheet+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlCommentsXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml.comments+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlConnectionsXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml."
                   "connections+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlDialogsheetXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml."
                   "dialogsheet+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlExternalLinkXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml."
                   "externalLink+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlPivotCacheDefinitionXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml."
                   "pivotCacheDefinition+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlPivotCacheRecordsXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml."
                   "pivotCacheRecords+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlPivotTableXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml.pivotTable+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlQueryTableXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml.queryTable+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlRevisionHeadersXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml."
                   "revisionHeaders+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlRevisionLogXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml."
                   "revisionLog+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlSharedStringsXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml."
                   "sharedStrings+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlSheet:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml.sheet";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlSheetMainXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml.sheet.main+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlSheetMetadataXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml."
                   "sheetMetadata+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlStylesXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml.styles+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlTableXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml.table+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlTableSingleCellsXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml."
                   "tableSingleCells+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlTemplate:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml.template";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlTemplateMainXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml.template."
                   "main+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlUserNamesXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml.userNames+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlVolatileDependenciesXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml."
                   "volatileDependencies+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlWorksheetXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.spreadsheetml.worksheet+"
                   "xml";
        case Type::Application_VndOpenxmlformatsOfficedocumentThemeXml:
            return "application/vnd.openxmlformats-officedocument.theme+xml";
        case Type::Application_VndOpenxmlformatsOfficedocumentThemeOverrideXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.themeOverride+xml";
        case Type::Application_VndOpenxmlformatsOfficedocumentVmlDrawing:
            return "application/vnd.openxmlformats-officedocument.vmlDrawing";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentWordprocessingmlCommentsXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.wordprocessingml."
                   "comments+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentWordprocessingmlDocument:
            return "application/"
                   "vnd.openxmlformats-officedocument.wordprocessingml."
                   "document";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentWordprocessingmlDocumentGlossaryXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.wordprocessingml."
                   "document.glossary+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentWordprocessingmlDocumentMainXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.wordprocessingml."
                   "document.main+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentWordprocessingmlEndnotesXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.wordprocessingml."
                   "endnotes+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentWordprocessingmlFontTableXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.wordprocessingml."
                   "fontTable+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentWordprocessingmlFooterXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.wordprocessingml.footer+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentWordprocessingmlFootnotesXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.wordprocessingml."
                   "footnotes+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentWordprocessingmlNumberingXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.wordprocessingml."
                   "numbering+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentWordprocessingmlSettingsXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.wordprocessingml."
                   "settings+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentWordprocessingmlStylesXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.wordprocessingml.styles+"
                   "xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentWordprocessingmlTemplate:
            return "application/"
                   "vnd.openxmlformats-officedocument.wordprocessingml."
                   "template";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentWordprocessingmlTemplateMainXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.wordprocessingml."
                   "template.main+xml";
        case Type::
            Application_VndOpenxmlformatsOfficedocumentWordprocessingmlWebSettingsXml:
            return "application/"
                   "vnd.openxmlformats-officedocument.wordprocessingml."
                   "webSettings+xml";
        case Type::Application_VndOpenxmlformatsPackageCorePropertiesXml:
            return "application/vnd.openxmlformats-package.core-properties+xml";
        case Type::
            Application_VndOpenxmlformatsPackageDigitalSignatureXmlsignatureXml:
            return "application/"
                   "vnd.openxmlformats-package.digital-signature-xmlsignature+"
                   "xml";
        case Type::Application_VndOpenxmlformatsPackageRelationshipsXml:
            return "application/vnd.openxmlformats-package.relationships+xml";
        case Type::Application_VndOracleResourceJson:
            return "application/vnd.oracle.resource+json";
        case Type::Application_VndOrangeIndata:
            return "application/vnd.orange.indata";
        case Type::Application_VndOsaNetdeploy:
            return "application/vnd.osa.netdeploy";
        case Type::Application_VndOsgeoMapguidePackage:
            return "application/vnd.osgeo.mapguide.package";
        case Type::Application_VndOsgiBundle:
            return "application/vnd.osgi.bundle";
        case Type::Application_VndOsgiDp: return "application/vnd.osgi.dp";
        case Type::Application_VndOsgiSubsystem:
            return "application/vnd.osgi.subsystem";
        case Type::Application_VndOtpsCtKipXml:
            return "application/vnd.otps.ct-kip+xml";
        case Type::Application_VndOxliCountgraph:
            return "application/vnd.oxli.countgraph";
        case Type::Application_VndPagerdutyJson:
            return "application/vnd.pagerduty+json";
        case Type::Application_VndPalm: return "application/vnd.palm";
        case Type::Application_VndPanoply: return "application/vnd.panoply";
        case Type::Application_VndPaosXml: return "application/vnd.paos.xml";
        case Type::Application_VndPatentdive:
            return "application/vnd.patentdive";
        case Type::Application_VndPatientecommsdoc:
            return "application/vnd.patientecommsdoc";
        case Type::Application_VndPawaafile: return "application/vnd.pawaafile";
        case Type::Application_VndPcos: return "application/vnd.pcos";
        case Type::Application_VndPgFormat: return "application/vnd.pg.format";
        case Type::Application_VndPgOsasli: return "application/vnd.pg.osasli";
        case Type::Application_VndPiaccessApplicationLicence:
            return "application/vnd.piaccess.application-licence";
        case Type::Application_VndPicsel: return "application/vnd.picsel";
        case Type::Application_VndPmiWidget:
            return "application/vnd.pmi.widget";
        case Type::Application_VndPocGroupAdvertisementXml:
            return "application/vnd.poc.group-advertisement+xml";
        case Type::Application_VndPocketlearn:
            return "application/vnd.pocketlearn";
        case Type::Application_VndPowerbuilder6:
            return "application/vnd.powerbuilder6";
        case Type::Application_VndPowerbuilder6S:
            return "application/vnd.powerbuilder6-s";
        case Type::Application_VndPowerbuilder7:
            return "application/vnd.powerbuilder7";
        case Type::Application_VndPowerbuilder75:
            return "application/vnd.powerbuilder75";
        case Type::Application_VndPowerbuilder75S:
            return "application/vnd.powerbuilder75-s";
        case Type::Application_VndPowerbuilder7S:
            return "application/vnd.powerbuilder7-s";
        case Type::Application_VndPreminet: return "application/vnd.preminet";
        case Type::Application_VndPreviewsystemsBox:
            return "application/vnd.previewsystems.box";
        case Type::Application_VndProteusMagazine:
            return "application/vnd.proteus.magazine";
        case Type::Application_VndPsfs: return "application/vnd.psfs";
        case Type::Application_VndPtMundusmundi:
            return "application/vnd.pt.mundusmundi";
        case Type::Application_VndPublishareDeltaTree:
            return "application/vnd.publishare-delta-tree";
        case Type::Application_VndPviPtid1: return "application/vnd.pvi.ptid1";
        case Type::Application_VndPwgMultiplexed:
            return "application/vnd.pwg-multiplexed";
        case Type::Application_VndPwgXhtmlPrintXml:
            return "application/vnd.pwg-xhtml-print+xml";
        case Type::Application_VndQualcommBrewAppRes:
            return "application/vnd.qualcomm.brew-app-res";
        case Type::Application_VndQuarantainenet:
            return "application/vnd.quarantainenet";
        case Type::Application_VndQuarkQuarkXPress:
            return "application/vnd.Quark.QuarkXPress";
        case Type::Application_VndQuobjectQuoxdocument:
            return "application/vnd.quobject-quoxdocument";
        case Type::Application_VndRadisysMomlXml:
            return "application/vnd.radisys.moml+xml";
        case Type::Application_VndRadisysMsmlAuditConfXml:
            return "application/vnd.radisys.msml-audit-conf+xml";
        case Type::Application_VndRadisysMsmlAuditConnXml:
            return "application/vnd.radisys.msml-audit-conn+xml";
        case Type::Application_VndRadisysMsmlAuditDialogXml:
            return "application/vnd.radisys.msml-audit-dialog+xml";
        case Type::Application_VndRadisysMsmlAuditStreamXml:
            return "application/vnd.radisys.msml-audit-stream+xml";
        case Type::Application_VndRadisysMsmlAuditXml:
            return "application/vnd.radisys.msml-audit+xml";
        case Type::Application_VndRadisysMsmlConfXml:
            return "application/vnd.radisys.msml-conf+xml";
        case Type::Application_VndRadisysMsmlDialogBaseXml:
            return "application/vnd.radisys.msml-dialog-base+xml";
        case Type::Application_VndRadisysMsmlDialogFaxDetectXml:
            return "application/vnd.radisys.msml-dialog-fax-detect+xml";
        case Type::Application_VndRadisysMsmlDialogFaxSendrecvXml:
            return "application/vnd.radisys.msml-dialog-fax-sendrecv+xml";
        case Type::Application_VndRadisysMsmlDialogGroupXml:
            return "application/vnd.radisys.msml-dialog-group+xml";
        case Type::Application_VndRadisysMsmlDialogSpeechXml:
            return "application/vnd.radisys.msml-dialog-speech+xml";
        case Type::Application_VndRadisysMsmlDialogTransformXml:
            return "application/vnd.radisys.msml-dialog-transform+xml";
        case Type::Application_VndRadisysMsmlDialogXml:
            return "application/vnd.radisys.msml-dialog+xml";
        case Type::Application_VndRadisysMsmlXml:
            return "application/vnd.radisys.msml+xml";
        case Type::Application_VndRainstorData:
            return "application/vnd.rainstor.data";
        case Type::Application_VndRapid: return "application/vnd.rapid";
        case Type::Application_VndRar: return "application/vnd.rar";
        case Type::Application_VndRealvncBed:
            return "application/vnd.realvnc.bed";
        case Type::Application_VndRecordareMusicxml:
            return "application/vnd.recordare.musicxml";
        case Type::Application_VndRecordareMusicxmlXml:
            return "application/vnd.recordare.musicxml+xml";
        case Type::Application_VndRelpipe: return "application/vnd.relpipe";
        case Type::Application_VndRenLearnRlprint:
            return "application/vnd.RenLearn.rlprint";
        case Type::Application_VndResilientLogic:
            return "application/vnd.resilient.logic";
        case Type::Application_VndRestfulJson:
            return "application/vnd.restful+json";
        case Type::Application_VndRigCryptonote:
            return "application/vnd.rig.cryptonote";
        case Type::Application_VndRoute66Link66Xml:
            return "application/vnd.route66.link66+xml";
        case Type::Application_VndRs274x: return "application/vnd.rs-274x";
        case Type::Application_VndRuckusDownload:
            return "application/vnd.ruckus.download";
        case Type::Application_VndS3sms: return "application/vnd.s3sms";
        case Type::Application_VndSailingtrackerTrack:
            return "application/vnd.sailingtracker.track";
        case Type::Application_VndSar: return "application/vnd.sar";
        case Type::Application_VndSbmCid: return "application/vnd.sbm.cid";
        case Type::Application_VndSbmMid2: return "application/vnd.sbm.mid2";
        case Type::Application_VndScribus: return "application/vnd.scribus";
        case Type::Application_VndSealed3df:
            return "application/vnd.sealed.3df";
        case Type::Application_VndSealedCsf:
            return "application/vnd.sealed.csf";
        case Type::Application_VndSealedDoc:
            return "application/vnd.sealed.doc";
        case Type::Application_VndSealedEml:
            return "application/vnd.sealed.eml";
        case Type::Application_VndSealedMht:
            return "application/vnd.sealed.mht";
        case Type::Application_VndSealedNet:
            return "application/vnd.sealed.net";
        case Type::Application_VndSealedPpt:
            return "application/vnd.sealed.ppt";
        case Type::Application_VndSealedTiff:
            return "application/vnd.sealed.tiff";
        case Type::Application_VndSealedXls:
            return "application/vnd.sealed.xls";
        case Type::Application_VndSealedmediaSoftsealHtml:
            return "application/vnd.sealedmedia.softseal.html";
        case Type::Application_VndSealedmediaSoftsealPdf:
            return "application/vnd.sealedmedia.softseal.pdf";
        case Type::Application_VndSeemail: return "application/vnd.seemail";
        case Type::Application_VndSeisJson: return "application/vnd.seis+json";
        case Type::Application_VndSema: return "application/vnd.sema";
        case Type::Application_VndSemd: return "application/vnd.semd";
        case Type::Application_VndSemf: return "application/vnd.semf";
        case Type::Application_VndShadeSaveFile:
            return "application/vnd.shade-save-file";
        case Type::Application_VndShanaInformedFormdata:
            return "application/vnd.shana.informed.formdata";
        case Type::Application_VndShanaInformedFormtemplate:
            return "application/vnd.shana.informed.formtemplate";
        case Type::Application_VndShanaInformedInterchange:
            return "application/vnd.shana.informed.interchange";
        case Type::Application_VndShanaInformedPackage:
            return "application/vnd.shana.informed.package";
        case Type::Application_VndShootproofJson:
            return "application/vnd.shootproof+json";
        case Type::Application_VndShopkickJson:
            return "application/vnd.shopkick+json";
        case Type::Application_VndShp: return "application/vnd.shp";
        case Type::Application_VndShx: return "application/vnd.shx";
        case Type::Application_VndSigrokSession:
            return "application/vnd.sigrok.session";
        case Type::Application_VndSimTechMindMapper:
            return "application/vnd.SimTech-MindMapper";
        case Type::Application_VndSirenJson:
            return "application/vnd.siren+json";
        case Type::Application_VndSmaf: return "application/vnd.smaf";
        case Type::Application_VndSmartNotebook:
            return "application/vnd.smart.notebook";
        case Type::Application_VndSmartTeacher:
            return "application/vnd.smart.teacher";
        case Type::Application_VndSmintioPortalsArchive:
            return "application/vnd.smintio.portals.archive";
        case Type::Application_VndSnesdevPageTable:
            return "application/vnd.snesdev-page-table";
        case Type::Application_VndSoftware602FillerFormXml:
            return "application/vnd.software602.filler.form+xml";
        case Type::Application_VndSoftware602FillerFormXmlZip:
            return "application/vnd.software602.filler.form-xml-zip";
        case Type::Application_VndSolentSdkmXml:
            return "application/vnd.solent.sdkm+xml";
        case Type::Application_VndSpotfireDxp:
            return "application/vnd.spotfire.dxp";
        case Type::Application_VndSpotfireSfs:
            return "application/vnd.spotfire.sfs";
        case Type::Application_VndSqlite3: return "application/vnd.sqlite3";
        case Type::Application_VndSssCod: return "application/vnd.sss-cod";
        case Type::Application_VndSssDtf: return "application/vnd.sss-dtf";
        case Type::Application_VndSssNtf: return "application/vnd.sss-ntf";
        case Type::Application_VndStepmaniaPackage:
            return "application/vnd.stepmania.package";
        case Type::Application_VndStepmaniaStepchart:
            return "application/vnd.stepmania.stepchart";
        case Type::Application_VndStreetStream:
            return "application/vnd.street-stream";
        case Type::Application_VndSunWadlXml:
            return "application/vnd.sun.wadl+xml";
        case Type::Application_VndSusCalendar:
            return "application/vnd.sus-calendar";
        case Type::Application_VndSvd: return "application/vnd.svd";
        case Type::Application_VndSwiftviewIcs:
            return "application/vnd.swiftview-ics";
        case Type::Application_VndSybylMol2:
            return "application/vnd.sybyl.mol2";
        case Type::Application_VndSycleXml: return "application/vnd.sycle+xml";
        case Type::Application_VndSyftJson: return "application/vnd.syft+json";
        case Type::Application_VndSyncmlDmNotification:
            return "application/vnd.syncml.dm.notification";
        case Type::Application_VndSyncmlDmddfXml:
            return "application/vnd.syncml.dmddf+xml";
        case Type::Application_VndSyncmlDmtndsWbxml:
            return "application/vnd.syncml.dmtnds+wbxml";
        case Type::Application_VndSyncmlDmtndsXml:
            return "application/vnd.syncml.dmtnds+xml";
        case Type::Application_VndSyncmlDmddfWbxml:
            return "application/vnd.syncml.dmddf+wbxml";
        case Type::Application_VndSyncmlDmWbxml:
            return "application/vnd.syncml.dm+wbxml";
        case Type::Application_VndSyncmlDmXml:
            return "application/vnd.syncml.dm+xml";
        case Type::Application_VndSyncmlDsNotification:
            return "application/vnd.syncml.ds.notification";
        case Type::Application_VndSyncmlXml:
            return "application/vnd.syncml+xml";
        case Type::Application_VndTableschemaJson:
            return "application/vnd.tableschema+json";
        case Type::Application_VndTaoIntentModuleArchive:
            return "application/vnd.tao.intent-module-archive";
        case Type::Application_VndTcpdumpPcap:
            return "application/vnd.tcpdump.pcap";
        case Type::Application_VndThinkCellPpttcJson:
            return "application/vnd.think-cell.ppttc+json";
        case Type::Application_VndTml: return "application/vnd.tml";
        case Type::Application_VndTmdMediaflexApiXml:
            return "application/vnd.tmd.mediaflex.api+xml";
        case Type::Application_VndTmobileLivetv:
            return "application/vnd.tmobile-livetv";
        case Type::Application_VndTriOnesource:
            return "application/vnd.tri.onesource";
        case Type::Application_VndTridTpt: return "application/vnd.trid.tpt";
        case Type::Application_VndTriscapeMxs:
            return "application/vnd.triscape.mxs";
        case Type::Application_VndTrueapp: return "application/vnd.trueapp";
        case Type::Application_VndTruedoc: return "application/vnd.truedoc";
        case Type::Application_VndUbisoftWebplayer:
            return "application/vnd.ubisoft.webplayer";
        case Type::Application_VndUfdl: return "application/vnd.ufdl";
        case Type::Application_VndUiqTheme: return "application/vnd.uiq.theme";
        case Type::Application_VndUmajin: return "application/vnd.umajin";
        case Type::Application_VndUnity: return "application/vnd.unity";
        case Type::Application_VndUomlXml: return "application/vnd.uoml+xml";
        case Type::Application_VndUplanetAlert:
            return "application/vnd.uplanet.alert";
        case Type::Application_VndUplanetAlertWbxml:
            return "application/vnd.uplanet.alert-wbxml";
        case Type::Application_VndUplanetBearerChoice:
            return "application/vnd.uplanet.bearer-choice";
        case Type::Application_VndUplanetBearerChoiceWbxml:
            return "application/vnd.uplanet.bearer-choice-wbxml";
        case Type::Application_VndUplanetCacheop:
            return "application/vnd.uplanet.cacheop";
        case Type::Application_VndUplanetCacheopWbxml:
            return "application/vnd.uplanet.cacheop-wbxml";
        case Type::Application_VndUplanetChannel:
            return "application/vnd.uplanet.channel";
        case Type::Application_VndUplanetChannelWbxml:
            return "application/vnd.uplanet.channel-wbxml";
        case Type::Application_VndUplanetList:
            return "application/vnd.uplanet.list";
        case Type::Application_VndUplanetListcmd:
            return "application/vnd.uplanet.listcmd";
        case Type::Application_VndUplanetListcmdWbxml:
            return "application/vnd.uplanet.listcmd-wbxml";
        case Type::Application_VndUplanetListWbxml:
            return "application/vnd.uplanet.list-wbxml";
        case Type::Application_VndUriMap: return "application/vnd.uri-map";
        case Type::Application_VndUplanetSignal:
            return "application/vnd.uplanet.signal";
        case Type::Application_VndValveSourceMaterial:
            return "application/vnd.valve.source.material";
        case Type::Application_VndVcx: return "application/vnd.vcx";
        case Type::Application_VndVdStudy: return "application/vnd.vd-study";
        case Type::Application_VndVectorworks:
            return "application/vnd.vectorworks";
        case Type::Application_VndVelJson: return "application/vnd.vel+json";
        case Type::Application_VndVerimatrixVcas:
            return "application/vnd.verimatrix.vcas";
        case Type::Application_VndVeritoneAionJson:
            return "application/vnd.veritone.aion+json";
        case Type::Application_VndVeryantThin:
            return "application/vnd.veryant.thin";
        case Type::Application_VndVesEncrypted:
            return "application/vnd.ves.encrypted";
        case Type::Application_VndVidsoftVidconference:
            return "application/vnd.vidsoft.vidconference";
        case Type::Application_VndVisio: return "application/vnd.visio";
        case Type::Application_VndVisionary: return "application/vnd.visionary";
        case Type::Application_VndVividenceScriptfile:
            return "application/vnd.vividence.scriptfile";
        case Type::Application_VndVsf: return "application/vnd.vsf";
        case Type::Application_VndWapSic: return "application/vnd.wap.sic";
        case Type::Application_VndWapSlc: return "application/vnd.wap.slc";
        case Type::Application_VndWapWbxml: return "application/vnd.wap.wbxml";
        case Type::Application_VndWapWmlc: return "application/vnd.wap.wmlc";
        case Type::Application_VndWapWmlscriptc:
            return "application/vnd.wap.wmlscriptc";
        case Type::Application_VndWasmflowWafl:
            return "application/vnd.wasmflow.wafl";
        case Type::Application_VndWebturbo: return "application/vnd.webturbo";
        case Type::Application_VndWfaDpp: return "application/vnd.wfa.dpp";
        case Type::Application_VndWfaP2p: return "application/vnd.wfa.p2p";
        case Type::Application_VndWfaWsc: return "application/vnd.wfa.wsc";
        case Type::Application_VndWindowsDevicepairing:
            return "application/vnd.windows.devicepairing";
        case Type::Application_VndWmc: return "application/vnd.wmc";
        case Type::Application_VndWmfBootstrap:
            return "application/vnd.wmf.bootstrap";
        case Type::Application_VndWolframMathematica:
            return "application/vnd.wolfram.mathematica";
        case Type::Application_VndWolframMathematicaPackage:
            return "application/vnd.wolfram.mathematica.package";
        case Type::Application_VndWolframPlayer:
            return "application/vnd.wolfram.player";
        case Type::Application_VndWordlift: return "application/vnd.wordlift";
        case Type::Application_VndWordperfect:
            return "application/vnd.wordperfect";
        case Type::Application_VndWqd: return "application/vnd.wqd";
        case Type::Application_VndWrqHp3000Labelled:
            return "application/vnd.wrq-hp3000-labelled";
        case Type::Application_VndWtStf: return "application/vnd.wt.stf";
        case Type::Application_VndWvCspXml: return "application/vnd.wv.csp+xml";
        case Type::Application_VndWvCspWbxml:
            return "application/vnd.wv.csp+wbxml";
        case Type::Application_VndWvSspXml: return "application/vnd.wv.ssp+xml";
        case Type::Application_VndXacmlJson:
            return "application/vnd.xacml+json";
        case Type::Application_VndXara: return "application/vnd.xara";
        case Type::Application_VndXecretsEncrypted:
            return "application/vnd.xecrets-encrypted";
        case Type::Application_VndXfdl: return "application/vnd.xfdl";
        case Type::Application_VndXfdlWebform:
            return "application/vnd.xfdl.webform";
        case Type::Application_VndXmiXml: return "application/vnd.xmi+xml";
        case Type::Application_VndXmpieCpkg:
            return "application/vnd.xmpie.cpkg";
        case Type::Application_VndXmpieDpkg:
            return "application/vnd.xmpie.dpkg";
        case Type::Application_VndXmpiePlan:
            return "application/vnd.xmpie.plan";
        case Type::Application_VndXmpiePpkg:
            return "application/vnd.xmpie.ppkg";
        case Type::Application_VndXmpieXlim:
            return "application/vnd.xmpie.xlim";
        case Type::Application_VndYamahaHvDic:
            return "application/vnd.yamaha.hv-dic";
        case Type::Application_VndYamahaHvScript:
            return "application/vnd.yamaha.hv-script";
        case Type::Application_VndYamahaHvVoice:
            return "application/vnd.yamaha.hv-voice";
        case Type::Application_VndYamahaOpenscoreformatOsfpvgXml:
            return "application/vnd.yamaha.openscoreformat.osfpvg+xml";
        case Type::Application_VndYamahaOpenscoreformat:
            return "application/vnd.yamaha.openscoreformat";
        case Type::Application_VndYamahaRemoteSetup:
            return "application/vnd.yamaha.remote-setup";
        case Type::Application_VndYamahaSmafAudio:
            return "application/vnd.yamaha.smaf-audio";
        case Type::Application_VndYamahaSmafPhrase:
            return "application/vnd.yamaha.smaf-phrase";
        case Type::Application_VndYamahaThroughNgn:
            return "application/vnd.yamaha.through-ngn";
        case Type::Application_VndYamahaTunnelUdpencap:
            return "application/vnd.yamaha.tunnel-udpencap";
        case Type::Application_VndYaoweme: return "application/vnd.yaoweme";
        case Type::Application_VndYellowriverCustomMenu:
            return "application/vnd.yellowriver-custom-menu";
        case Type::Application_VndYoutubeYt:
            return "application/vnd.youtube.yt";
        case Type::Application_VndZul: return "application/vnd.zul";
        case Type::Application_VndZzazzDeckXml:
            return "application/vnd.zzazz.deck+xml";
        case Type::Application_VoicexmlXml: return "application/voicexml+xml";
        case Type::Application_VoucherCmsJson:
            return "application/voucher-cms+json";
        case Type::Application_Vp: return "application/vp";
        case Type::Application_VqRtcpxr: return "application/vq-rtcpxr";
        case Type::Application_Wasm: return "application/wasm";
        case Type::Application_WatcherinfoXml:
            return "application/watcherinfo+xml";
        case Type::Application_WebpushOptionsJson:
            return "application/webpush-options+json";
        case Type::Application_WhoisppQuery: return "application/whoispp-query";
        case Type::Application_WhoisppResponse:
            return "application/whoispp-response";
        case Type::Application_Widget: return "application/widget";
        case Type::Application_Wita: return "application/wita";
        case Type::Application_Wordperfect51:
            return "application/wordperfect5.1";
        case Type::Application_WsdlXml: return "application/wsdl+xml";
        case Type::Application_WspolicyXml: return "application/wspolicy+xml";
        case Type::Application_XPkiMessage: return "application/x-pki-message";
        case Type::Application_XWwwFormUrlencoded:
            return "application/x-www-form-urlencoded";
        case Type::Application_XX509CaCert: return "application/x-x509-ca-cert";
        case Type::Application_XX509CaRaCert:
            return "application/x-x509-ca-ra-cert";
        case Type::Application_XX509NextCaCert:
            return "application/x-x509-next-ca-cert";
        case Type::Application_X400Bp: return "application/x400-bp";
        case Type::Application_XacmlXml: return "application/xacml+xml";
        case Type::Application_XcapAttXml: return "application/xcap-att+xml";
        case Type::Application_XcapCapsXml: return "application/xcap-caps+xml";
        case Type::Application_XcapDiffXml: return "application/xcap-diff+xml";
        case Type::Application_XcapElXml: return "application/xcap-el+xml";
        case Type::Application_XcapErrorXml:
            return "application/xcap-error+xml";
        case Type::Application_XcapNsXml: return "application/xcap-ns+xml";
        case Type::Application_XconConferenceInfoDiffXml:
            return "application/xcon-conference-info-diff+xml";
        case Type::Application_XconConferenceInfoXml:
            return "application/xcon-conference-info+xml";
        case Type::Application_XencXml: return "application/xenc+xml";
        case Type::Application_Xfdf: return "application/xfdf";
        case Type::Application_XhtmlXml: return "application/xhtml+xml";
        case Type::Application_XliffXml: return "application/xliff+xml";
        case Type::Application_Xml: return "application/xml";
        case Type::Application_XmlDtd: return "application/xml-dtd";
        case Type::Application_XmlExternalParsedEntity:
            return "application/xml-external-parsed-entity";
        case Type::Application_XmlPatchXml: return "application/xml-patch+xml";
        case Type::Application_XmppXml: return "application/xmpp+xml";
        case Type::Application_XopXml: return "application/xop+xml";
        case Type::Application_XsltXml: return "application/xslt+xml";
        case Type::Application_XvXml: return "application/xv+xml";
        case Type::Application_Yaml: return "application/yaml";
        case Type::Application_Yang: return "application/yang";
        case Type::Application_YangDataCbor:
            return "application/yang-data+cbor";
        case Type::Application_YangDataJson:
            return "application/yang-data+json";
        case Type::Application_YangDataXml: return "application/yang-data+xml";
        case Type::Application_YangPatchJson:
            return "application/yang-patch+json";
        case Type::Application_YangPatchXml:
            return "application/yang-patch+xml";
        case Type::Application_YangSidJson: return "application/yang-sid+json";
        case Type::Application_YinXml: return "application/yin+xml";
        case Type::Application_Zip: return "application/zip";
        case Type::Application_Zlib: return "application/zlib";
        case Type::Application_Zstd: return "application/zstd";
        case Type::Audio_Any: return "audio/*";
        case Type::Audio_1dInterleavedParityfec:
            return "audio/1d-interleaved-parityfec";
        case Type::Audio_32kadpcm: return "audio/32kadpcm";
        case Type::Audio_3gpp: return "audio/3gpp";
        case Type::Audio_3gpp2: return "audio/3gpp2";
        case Type::Audio_Aac: return "audio/aac";
        case Type::Audio_Ac3: return "audio/ac3";
        case Type::Audio_AMR: return "audio/AMR";
        case Type::Audio_AMRWB: return "audio/AMR-WB";
        case Type::Audio_AmrWb: return "audio/amr-wb+";
        case Type::Audio_Aptx: return "audio/aptx";
        case Type::Audio_Asc: return "audio/asc";
        case Type::Audio_ATRACADVANCEDLOSSLESS:
            return "audio/ATRAC-ADVANCED-LOSSLESS";
        case Type::Audio_ATRACX: return "audio/ATRAC-X";
        case Type::Audio_ATRAC3: return "audio/ATRAC3";
        case Type::Audio_Basic: return "audio/basic";
        case Type::Audio_BV16: return "audio/BV16";
        case Type::Audio_BV32: return "audio/BV32";
        case Type::Audio_Clearmode: return "audio/clearmode";
        case Type::Audio_CN: return "audio/CN";
        case Type::Audio_DAT12: return "audio/DAT12";
        case Type::Audio_Dls: return "audio/dls";
        case Type::Audio_DsrEs201108: return "audio/dsr-es201108";
        case Type::Audio_DsrEs202050: return "audio/dsr-es202050";
        case Type::Audio_DsrEs202211: return "audio/dsr-es202211";
        case Type::Audio_DsrEs202212: return "audio/dsr-es202212";
        case Type::Audio_DV: return "audio/DV";
        case Type::Audio_DVI4: return "audio/DVI4";
        case Type::Audio_Eac3: return "audio/eac3";
        case Type::Audio_Encaprtp: return "audio/encaprtp";
        case Type::Audio_EVRC: return "audio/EVRC";
        case Type::Audio_EVRCQCP: return "audio/EVRC-QCP";
        case Type::Audio_EVRC0: return "audio/EVRC0";
        case Type::Audio_EVRC1: return "audio/EVRC1";
        case Type::Audio_EVRCB: return "audio/EVRCB";
        case Type::Audio_EVRCB0: return "audio/EVRCB0";
        case Type::Audio_EVRCB1: return "audio/EVRCB1";
        case Type::Audio_EVRCNW: return "audio/EVRCNW";
        case Type::Audio_EVRCNW0: return "audio/EVRCNW0";
        case Type::Audio_EVRCNW1: return "audio/EVRCNW1";
        case Type::Audio_EVRCWB: return "audio/EVRCWB";
        case Type::Audio_EVRCWB0: return "audio/EVRCWB0";
        case Type::Audio_EVRCWB1: return "audio/EVRCWB1";
        case Type::Audio_EVS: return "audio/EVS";
        case Type::Audio_Example: return "audio/example";
        case Type::Audio_Flac: return "audio/flac";
        case Type::Audio_Flexfec: return "audio/flexfec";
        case Type::Audio_Fwdred: return "audio/fwdred";
        case Type::Audio_G7110: return "audio/G711-0";
        case Type::Audio_G719: return "audio/G719";
        case Type::Audio_G7221: return "audio/G7221";
        case Type::Audio_G722: return "audio/G722";
        case Type::Audio_G723: return "audio/G723";
        case Type::Audio_G72616: return "audio/G726-16";
        case Type::Audio_G72624: return "audio/G726-24";
        case Type::Audio_G72632: return "audio/G726-32";
        case Type::Audio_G72640: return "audio/G726-40";
        case Type::Audio_G728: return "audio/G728";
        case Type::Audio_G729: return "audio/G729";
        case Type::Audio_G7291: return "audio/G7291";
        case Type::Audio_G729D: return "audio/G729D";
        case Type::Audio_G729E: return "audio/G729E";
        case Type::Audio_GSM: return "audio/GSM";
        case Type::Audio_GSMEFR: return "audio/GSM-EFR";
        case Type::Audio_GSMHR08: return "audio/GSM-HR-08";
        case Type::Audio_ILBC: return "audio/iLBC";
        case Type::Audio_IpMrV25: return "audio/ip-mr_v2.5";
        case Type::Audio_L8: return "audio/L8";
        case Type::Audio_L16: return "audio/L16";
        case Type::Audio_L20: return "audio/L20";
        case Type::Audio_L24: return "audio/L24";
        case Type::Audio_LPC: return "audio/LPC";
        case Type::Audio_Matroska: return "audio/matroska";
        case Type::Audio_MELP: return "audio/MELP";
        case Type::Audio_MELP600: return "audio/MELP600";
        case Type::Audio_MELP1200: return "audio/MELP1200";
        case Type::Audio_MELP2400: return "audio/MELP2400";
        case Type::Audio_Mhas: return "audio/mhas";
        case Type::Audio_MidiClip: return "audio/midi-clip";
        case Type::Audio_MobileXmf: return "audio/mobile-xmf";
        case Type::Audio_MPA: return "audio/MPA";
        case Type::Audio_Mp4: return "audio/mp4";
        case Type::Audio_MP4ALATM: return "audio/MP4A-LATM";
        case Type::Audio_MpaRobust: return "audio/mpa-robust";
        case Type::Audio_Mpeg: return "audio/mpeg";
        case Type::Audio_Mpeg4Generic: return "audio/mpeg4-generic";
        case Type::Audio_Ogg: return "audio/ogg";
        case Type::Audio_Opus: return "audio/opus";
        case Type::Audio_Parityfec: return "audio/parityfec";
        case Type::Audio_PCMA: return "audio/PCMA";
        case Type::Audio_PCMAWB: return "audio/PCMA-WB";
        case Type::Audio_PCMU: return "audio/PCMU";
        case Type::Audio_PCMUWB: return "audio/PCMU-WB";
        case Type::Audio_PrsSid: return "audio/prs.sid";
        case Type::Audio_QCELP: return "audio/QCELP";
        case Type::Audio_Raptorfec: return "audio/raptorfec";
        case Type::Audio_RED: return "audio/RED";
        case Type::Audio_RtpEncAescm128: return "audio/rtp-enc-aescm128";
        case Type::Audio_Rtploopback: return "audio/rtploopback";
        case Type::Audio_RtpMidi: return "audio/rtp-midi";
        case Type::Audio_Rtx: return "audio/rtx";
        case Type::Audio_Scip: return "audio/scip";
        case Type::Audio_SMV: return "audio/SMV";
        case Type::Audio_SMV0: return "audio/SMV0";
        case Type::Audio_SMVQCP: return "audio/SMV-QCP";
        case Type::Audio_Sofa: return "audio/sofa";
        case Type::Audio_SpMidi: return "audio/sp-midi";
        case Type::Audio_Speex: return "audio/speex";
        case Type::Audio_T140c: return "audio/t140c";
        case Type::Audio_T38: return "audio/t38";
        case Type::Audio_TelephoneEvent: return "audio/telephone-event";
        case Type::Audio_TETRAACELP: return "audio/TETRA_ACELP";
        case Type::Audio_TETRAACELPBB: return "audio/TETRA_ACELP_BB";
        case Type::Audio_Tone: return "audio/tone";
        case Type::Audio_TSVCIS: return "audio/TSVCIS";
        case Type::Audio_UEMCLIP: return "audio/UEMCLIP";
        case Type::Audio_Ulpfec: return "audio/ulpfec";
        case Type::Audio_Usac: return "audio/usac";
        case Type::Audio_VDVI: return "audio/VDVI";
        case Type::Audio_VMRWB: return "audio/VMR-WB";
        case Type::Audio_Vnd3gppIufp: return "audio/vnd.3gpp.iufp";
        case Type::Audio_Vnd4SB: return "audio/vnd.4SB";
        case Type::Audio_VndAudiokoz: return "audio/vnd.audiokoz";
        case Type::Audio_VndCELP: return "audio/vnd.CELP";
        case Type::Audio_VndCiscoNse: return "audio/vnd.cisco.nse";
        case Type::Audio_VndCmlesRadioEvents:
            return "audio/vnd.cmles.radio-events";
        case Type::Audio_VndCnsAnp1: return "audio/vnd.cns.anp1";
        case Type::Audio_VndCnsInf1: return "audio/vnd.cns.inf1";
        case Type::Audio_VndDeceAudio: return "audio/vnd.dece.audio";
        case Type::Audio_VndDigitalWinds: return "audio/vnd.digital-winds";
        case Type::Audio_VndDlnaAdts: return "audio/vnd.dlna.adts";
        case Type::Audio_VndDolbyHeaac1: return "audio/vnd.dolby.heaac.1";
        case Type::Audio_VndDolbyHeaac2: return "audio/vnd.dolby.heaac.2";
        case Type::Audio_VndDolbyMlp: return "audio/vnd.dolby.mlp";
        case Type::Audio_VndDolbyMps: return "audio/vnd.dolby.mps";
        case Type::Audio_VndDolbyPl2: return "audio/vnd.dolby.pl2";
        case Type::Audio_VndDolbyPl2x: return "audio/vnd.dolby.pl2x";
        case Type::Audio_VndDolbyPl2z: return "audio/vnd.dolby.pl2z";
        case Type::Audio_VndDolbyPulse1: return "audio/vnd.dolby.pulse.1";
        case Type::Audio_VndDra: return "audio/vnd.dra";
        case Type::Audio_VndDts: return "audio/vnd.dts";
        case Type::Audio_VndDtsHd: return "audio/vnd.dts.hd";
        case Type::Audio_VndDtsUhd: return "audio/vnd.dts.uhd";
        case Type::Audio_VndDvbFile: return "audio/vnd.dvb.file";
        case Type::Audio_VndEveradPlj: return "audio/vnd.everad.plj";
        case Type::Audio_VndHnsAudio: return "audio/vnd.hns.audio";
        case Type::Audio_VndLucentVoice: return "audio/vnd.lucent.voice";
        case Type::Audio_VndMsPlayreadyMediaPya:
            return "audio/vnd.ms-playready.media.pya";
        case Type::Audio_VndNokiaMobileXmf: return "audio/vnd.nokia.mobile-xmf";
        case Type::Audio_VndNortelVbk: return "audio/vnd.nortel.vbk";
        case Type::Audio_VndNueraEcelp4800: return "audio/vnd.nuera.ecelp4800";
        case Type::Audio_VndNueraEcelp7470: return "audio/vnd.nuera.ecelp7470";
        case Type::Audio_VndNueraEcelp9600: return "audio/vnd.nuera.ecelp9600";
        case Type::Audio_VndOctelSbc: return "audio/vnd.octel.sbc";
        case Type::Audio_VndPresonusMultitrack:
            return "audio/vnd.presonus.multitrack";
        case Type::Audio_VndQcelp: return "audio/vnd.qcelp";
        case Type::Audio_VndRhetorex32kadpcm:
            return "audio/vnd.rhetorex.32kadpcm";
        case Type::Audio_VndRip: return "audio/vnd.rip";
        case Type::Audio_VndSealedmediaSoftsealMpeg:
            return "audio/vnd.sealedmedia.softseal.mpeg";
        case Type::Audio_VndVmxCvsd: return "audio/vnd.vmx.cvsd";
        case Type::Audio_Vorbis: return "audio/vorbis";
        case Type::Audio_VorbisConfig: return "audio/vorbis-config";
        case Type::Font_Any: return "font/*";
        case Type::Font_Collection: return "font/collection";
        case Type::Font_Otf: return "font/otf";
        case Type::Font_Sfnt: return "font/sfnt";
        case Type::Font_Ttf: return "font/ttf";
        case Type::Font_Woff: return "font/woff";
        case Type::Font_Woff2: return "font/woff2";
        case Type::Haptics_Any: return "haptics/*";
        case Type::Haptics_Ivs: return "haptics/ivs";
        case Type::Haptics_Hjif: return "haptics/hjif";
        case Type::Haptics_Hmpg: return "haptics/hmpg";
        case Type::Image_Any: return "image/*";
        case Type::Image_Aces: return "image/aces";
        case Type::Image_Apng: return "image/apng";
        case Type::Image_Avci: return "image/avci";
        case Type::Image_Avcs: return "image/avcs";
        case Type::Image_Avif: return "image/avif";
        case Type::Image_Bmp: return "image/bmp";
        case Type::Image_Cgm: return "image/cgm";
        case Type::Image_DicomRle: return "image/dicom-rle";
        case Type::Image_Dpx: return "image/dpx";
        case Type::Image_Emf: return "image/emf";
        case Type::Image_Example: return "image/example";
        case Type::Image_Fits: return "image/fits";
        case Type::Image_G3fax: return "image/g3fax";
        case Type::Image_Gif: return "image/gif";
        case Type::Image_Heic: return "image/heic";
        case Type::Image_HeicSequence: return "image/heic-sequence";
        case Type::Image_Heif: return "image/heif";
        case Type::Image_HeifSequence: return "image/heif-sequence";
        case Type::Image_Hej2k: return "image/hej2k";
        case Type::Image_Hsj2: return "image/hsj2";
        case Type::Image_Ief: return "image/ief";
        case Type::Image_J2c: return "image/j2c";
        case Type::Image_Jls: return "image/jls";
        case Type::Image_Jp2: return "image/jp2";
        case Type::Image_Jpeg: return "image/jpeg";
        case Type::Image_Jph: return "image/jph";
        case Type::Image_Jphc: return "image/jphc";
        case Type::Image_Jpm: return "image/jpm";
        case Type::Image_Jpx: return "image/jpx";
        case Type::Image_Jxl: return "image/jxl";
        case Type::Image_Jxr: return "image/jxr";
        case Type::Image_JxrA: return "image/jxrA";
        case Type::Image_JxrS: return "image/jxrS";
        case Type::Image_Jxs: return "image/jxs";
        case Type::Image_Jxsc: return "image/jxsc";
        case Type::Image_Jxsi: return "image/jxsi";
        case Type::Image_Jxss: return "image/jxss";
        case Type::Image_Ktx: return "image/ktx";
        case Type::Image_Ktx2: return "image/ktx2";
        case Type::Image_Naplps: return "image/naplps";
        case Type::Image_Png: return "image/png";
        case Type::Image_PrsBtif: return "image/prs.btif";
        case Type::Image_PrsPti: return "image/prs.pti";
        case Type::Image_PwgRaster: return "image/pwg-raster";
        case Type::Image_SvgXml: return "image/svg+xml";
        case Type::Image_T38: return "image/t38";
        case Type::Image_Tiff: return "image/tiff";
        case Type::Image_TiffFx: return "image/tiff-fx";
        case Type::Image_VndAdobePhotoshop: return "image/vnd.adobe.photoshop";
        case Type::Image_VndAirzipAcceleratorAzv:
            return "image/vnd.airzip.accelerator.azv";
        case Type::Image_VndCnsInf2: return "image/vnd.cns.inf2";
        case Type::Image_VndDeceGraphic: return "image/vnd.dece.graphic";
        case Type::Image_VndDjvu: return "image/vnd.djvu";
        case Type::Image_VndDwg: return "image/vnd.dwg";
        case Type::Image_VndDxf: return "image/vnd.dxf";
        case Type::Image_VndDvbSubtitle: return "image/vnd.dvb.subtitle";
        case Type::Image_VndFastbidsheet: return "image/vnd.fastbidsheet";
        case Type::Image_VndFpx: return "image/vnd.fpx";
        case Type::Image_VndFst: return "image/vnd.fst";
        case Type::Image_VndFujixeroxEdmicsMmr:
            return "image/vnd.fujixerox.edmics-mmr";
        case Type::Image_VndFujixeroxEdmicsRlc:
            return "image/vnd.fujixerox.edmics-rlc";
        case Type::Image_VndGlobalgraphicsPgb:
            return "image/vnd.globalgraphics.pgb";
        case Type::Image_VndMicrosoftIcon: return "image/vnd.microsoft.icon";
        case Type::Image_VndMix: return "image/vnd.mix";
        case Type::Image_VndMsModi: return "image/vnd.ms-modi";
        case Type::Image_VndMozillaApng: return "image/vnd.mozilla.apng";
        case Type::Image_VndNetFpx: return "image/vnd.net-fpx";
        case Type::Image_VndPcoB16: return "image/vnd.pco.b16";
        case Type::Image_VndRadiance: return "image/vnd.radiance";
        case Type::Image_VndSealedPng: return "image/vnd.sealed.png";
        case Type::Image_VndSealedmediaSoftsealGif:
            return "image/vnd.sealedmedia.softseal.gif";
        case Type::Image_VndSealedmediaSoftsealJpg:
            return "image/vnd.sealedmedia.softseal.jpg";
        case Type::Image_VndSvf: return "image/vnd.svf";
        case Type::Image_VndTencentTap: return "image/vnd.tencent.tap";
        case Type::Image_VndValveSourceTexture:
            return "image/vnd.valve.source.texture";
        case Type::Image_VndWapWbmp: return "image/vnd.wap.wbmp";
        case Type::Image_VndXiff: return "image/vnd.xiff";
        case Type::Image_VndZbrushPcx: return "image/vnd.zbrush.pcx";
        case Type::Image_Webp: return "image/webp";
        case Type::Image_Wmf: return "image/wmf";
        case Type::Image_XEmf: return "image/x-emf";
        case Type::Image_XWmf: return "image/x-wmf";
        case Type::Message_Any: return "message/*";
        case Type::Message_Bhttp: return "message/bhttp";
        case Type::Message_CPIM: return "message/CPIM";
        case Type::Message_DeliveryStatus: return "message/delivery-status";
        case Type::Message_DispositionNotification:
            return "message/disposition-notification";
        case Type::Message_Example: return "message/example";
        case Type::Message_ExternalBody: return "message/external-body";
        case Type::Message_FeedbackReport: return "message/feedback-report";
        case Type::Message_Global: return "message/global";
        case Type::Message_GlobalDeliveryStatus:
            return "message/global-delivery-status";
        case Type::Message_GlobalDispositionNotification:
            return "message/global-disposition-notification";
        case Type::Message_GlobalHeaders: return "message/global-headers";
        case Type::Message_Http: return "message/http";
        case Type::Message_ImdnXml: return "message/imdn+xml";
        case Type::Message_Mls: return "message/mls";
        case Type::Message_News: return "message/news";
        case Type::Message_OhttpReq: return "message/ohttp-req";
        case Type::Message_OhttpRes: return "message/ohttp-res";
        case Type::Message_Partial: return "message/partial";
        case Type::Message_Rfc822: return "message/rfc822";
        case Type::Message_SHttp: return "message/s-http";
        case Type::Message_Sip: return "message/sip";
        case Type::Message_Sipfrag: return "message/sipfrag";
        case Type::Message_TrackingStatus: return "message/tracking-status";
        case Type::Message_VndSiSimp: return "message/vnd.si.simp";
        case Type::Message_VndWfaWsc: return "message/vnd.wfa.wsc";
        case Type::Model_Any: return "model/*";
        case Type::Model_3mf: return "model/3mf";
        case Type::Model_E57: return "model/e57";
        case Type::Model_Example: return "model/example";
        case Type::Model_GltfBinary: return "model/gltf-binary";
        case Type::Model_GltfJson: return "model/gltf+json";
        case Type::Model_JT: return "model/JT";
        case Type::Model_Iges: return "model/iges";
        case Type::Model_Mesh: return "model/mesh";
        case Type::Model_Mtl: return "model/mtl";
        case Type::Model_Obj: return "model/obj";
        case Type::Model_Prc: return "model/prc";
        case Type::Model_Step: return "model/step";
        case Type::Model_StepXml: return "model/step+xml";
        case Type::Model_StepZip: return "model/step+zip";
        case Type::Model_StepXmlZip: return "model/step-xml+zip";
        case Type::Model_Stl: return "model/stl";
        case Type::Model_U3d: return "model/u3d";
        case Type::Model_VndBary: return "model/vnd.bary";
        case Type::Model_VndCld: return "model/vnd.cld";
        case Type::Model_VndColladaXml: return "model/vnd.collada+xml";
        case Type::Model_VndDwf: return "model/vnd.dwf";
        case Type::Model_VndFlatland3dml: return "model/vnd.flatland.3dml";
        case Type::Model_VndGdl: return "model/vnd.gdl";
        case Type::Model_VndGsGdl: return "model/vnd.gs-gdl";
        case Type::Model_VndGtw: return "model/vnd.gtw";
        case Type::Model_VndMomlXml: return "model/vnd.moml+xml";
        case Type::Model_VndMts: return "model/vnd.mts";
        case Type::Model_VndOpengex: return "model/vnd.opengex";
        case Type::Model_VndParasolidTransmitBinary:
            return "model/vnd.parasolid.transmit.binary";
        case Type::Model_VndParasolidTransmitText:
            return "model/vnd.parasolid.transmit.text";
        case Type::Model_VndPythaPyox: return "model/vnd.pytha.pyox";
        case Type::Model_VndRosetteAnnotatedDataModel:
            return "model/vnd.rosette.annotated-data-model";
        case Type::Model_VndSapVds: return "model/vnd.sap.vds";
        case Type::Model_VndUsda: return "model/vnd.usda";
        case Type::Model_VndUsdzZip: return "model/vnd.usdz+zip";
        case Type::Model_VndValveSourceCompiledMap:
            return "model/vnd.valve.source.compiled-map";
        case Type::Model_VndVtu: return "model/vnd.vtu";
        case Type::Model_Vrml: return "model/vrml";
        case Type::Model_X3dVrml: return "model/x3d-vrml";
        case Type::Model_X3dFastinfoset: return "model/x3d+fastinfoset";
        case Type::Model_X3dXml: return "model/x3d+xml";
        case Type::Multipart_Any: return "multipart/*";
        case Type::Multipart_Alternative: return "multipart/alternative";
        case Type::Multipart_Appledouble: return "multipart/appledouble";
        case Type::Multipart_Byteranges: return "multipart/byteranges";
        case Type::Multipart_Digest: return "multipart/digest";
        case Type::Multipart_Encrypted: return "multipart/encrypted";
        case Type::Multipart_Example: return "multipart/example";
        case Type::Multipart_FormData: return "multipart/form-data";
        case Type::Multipart_HeaderSet: return "multipart/header-set";
        case Type::Multipart_Mixed: return "multipart/mixed";
        case Type::Multipart_Multilingual: return "multipart/multilingual";
        case Type::Multipart_Parallel: return "multipart/parallel";
        case Type::Multipart_Related: return "multipart/related";
        case Type::Multipart_Report: return "multipart/report";
        case Type::Multipart_Signed: return "multipart/signed";
        case Type::Multipart_VndBintMedPlus:
            return "multipart/vnd.bint.med-plus";
        case Type::Multipart_VoiceMessage: return "multipart/voice-message";
        case Type::Multipart_XMixedReplace: return "multipart/x-mixed-replace";
        case Type::Text_Any: return "text/*";
        case Type::Text_1dInterleavedParityfec:
            return "text/1d-interleaved-parityfec";
        case Type::Text_CacheManifest: return "text/cache-manifest";
        case Type::Text_Calendar: return "text/calendar";
        case Type::Text_Cql: return "text/cql";
        case Type::Text_CqlExpression: return "text/cql-expression";
        case Type::Text_CqlIdentifier: return "text/cql-identifier";
        case Type::Text_Css: return "text/css";
        case Type::Text_Csv: return "text/csv";
        case Type::Text_CsvSchema: return "text/csv-schema";
        case Type::Text_Directory: return "text/directory";
        case Type::Text_Dns: return "text/dns";
        case Type::Text_Ecmascript: return "text/ecmascript";
        case Type::Text_Encaprtp: return "text/encaprtp";
        case Type::Text_Enriched: return "text/enriched";
        case Type::Text_Example: return "text/example";
        case Type::Text_Fhirpath: return "text/fhirpath";
        case Type::Text_Flexfec: return "text/flexfec";
        case Type::Text_Fwdred: return "text/fwdred";
        case Type::Text_Gff3: return "text/gff3";
        case Type::Text_GrammarRefList: return "text/grammar-ref-list";
        case Type::Text_Hl7v2: return "text/hl7v2";
        case Type::Text_Html: return "text/html";
        case Type::Text_Javascript: return "text/javascript";
        case Type::Text_JcrCnd: return "text/jcr-cnd";
        case Type::Text_Markdown: return "text/markdown";
        case Type::Text_Mizar: return "text/mizar";
        case Type::Text_N3: return "text/n3";
        case Type::Text_Parameters: return "text/parameters";
        case Type::Text_Parityfec: return "text/parityfec";
        case Type::Text_Plain: return "text/plain";
        case Type::Text_ProvenanceNotation: return "text/provenance-notation";
        case Type::Text_PrsFallensteinRst: return "text/prs.fallenstein.rst";
        case Type::Text_PrsLinesTag: return "text/prs.lines.tag";
        case Type::Text_PrsPropLogic: return "text/prs.prop.logic";
        case Type::Text_PrsTexi: return "text/prs.texi";
        case Type::Text_Raptorfec: return "text/raptorfec";
        case Type::Text_RED: return "text/RED";
        case Type::Text_Rfc822Headers: return "text/rfc822-headers";
        case Type::Text_Richtext: return "text/richtext";
        case Type::Text_Rtf: return "text/rtf";
        case Type::Text_RtpEncAescm128: return "text/rtp-enc-aescm128";
        case Type::Text_Rtploopback: return "text/rtploopback";
        case Type::Text_Rtx: return "text/rtx";
        case Type::Text_SGML: return "text/SGML";
        case Type::Text_Shaclc: return "text/shaclc";
        case Type::Text_Shex: return "text/shex";
        case Type::Text_Spdx: return "text/spdx";
        case Type::Text_Strings: return "text/strings";
        case Type::Text_T140: return "text/t140";
        case Type::Text_TabSeparatedValues: return "text/tab-separated-values";
        case Type::Text_Troff: return "text/troff";
        case Type::Text_Turtle: return "text/turtle";
        case Type::Text_Ulpfec: return "text/ulpfec";
        case Type::Text_UriList: return "text/uri-list";
        case Type::Text_Vcard: return "text/vcard";
        case Type::Text_VndA: return "text/vnd.a";
        case Type::Text_VndAbc: return "text/vnd.abc";
        case Type::Text_VndAsciiArt: return "text/vnd.ascii-art";
        case Type::Text_VndCurl: return "text/vnd.curl";
        case Type::Text_VndDebianCopyright: return "text/vnd.debian.copyright";
        case Type::Text_VndDMClientScript: return "text/vnd.DMClientScript";
        case Type::Text_VndDvbSubtitle: return "text/vnd.dvb.subtitle";
        case Type::Text_VndEsmertecThemeDescriptor:
            return "text/vnd.esmertec.theme-descriptor";
        case Type::Text_VndExchangeable: return "text/vnd.exchangeable";
        case Type::Text_VndFamilysearchGedcom:
            return "text/vnd.familysearch.gedcom";
        case Type::Text_VndFiclabFlt: return "text/vnd.ficlab.flt";
        case Type::Text_VndFly: return "text/vnd.fly";
        case Type::Text_VndFmiFlexstor: return "text/vnd.fmi.flexstor";
        case Type::Text_VndGml: return "text/vnd.gml";
        case Type::Text_VndGraphviz: return "text/vnd.graphviz";
        case Type::Text_VndHans: return "text/vnd.hans";
        case Type::Text_VndHgl: return "text/vnd.hgl";
        case Type::Text_VndIn3d3dml: return "text/vnd.in3d.3dml";
        case Type::Text_VndIn3dSpot: return "text/vnd.in3d.spot";
        case Type::Text_VndIPTCNewsML: return "text/vnd.IPTC.NewsML";
        case Type::Text_VndIPTCNITF: return "text/vnd.IPTC.NITF";
        case Type::Text_VndLatexZ: return "text/vnd.latex-z";
        case Type::Text_VndMotorolaReflex: return "text/vnd.motorola.reflex";
        case Type::Text_VndMsMediapackage: return "text/vnd.ms-mediapackage";
        case Type::Text_VndNet2phoneCommcenterCommand:
            return "text/vnd.net2phone.commcenter.command";
        case Type::Text_VndRadisysMsmlBasicLayout:
            return "text/vnd.radisys.msml-basic-layout";
        case Type::Text_VndSenxWarpscript: return "text/vnd.senx.warpscript";
        case Type::Text_VndSiUricatalogue: return "text/vnd.si.uricatalogue";
        case Type::Text_VndSunJ2meAppDescriptor:
            return "text/vnd.sun.j2me.app-descriptor";
        case Type::Text_VndSosi: return "text/vnd.sosi";
        case Type::Text_VndTrolltechLinguist:
            return "text/vnd.trolltech.linguist";
        case Type::Text_VndVcf: return "text/vnd.vcf";
        case Type::Text_VndWapSi: return "text/vnd.wap.si";
        case Type::Text_VndWapSl: return "text/vnd.wap.sl";
        case Type::Text_VndWapWml: return "text/vnd.wap.wml";
        case Type::Text_VndWapWmlscript: return "text/vnd.wap.wmlscript";
        case Type::Text_VndZooKcl: return "text/vnd.zoo.kcl";
        case Type::Text_Vtt: return "text/vtt";
        case Type::Text_Wgsl: return "text/wgsl";
        case Type::Text_Xml: return "text/xml";
        case Type::Text_XmlExternalParsedEntity:
            return "text/xml-external-parsed-entity";
        case Type::Video_Any: return "video/*";
        case Type::Video_1dInterleavedParityfec:
            return "video/1d-interleaved-parityfec";
        case Type::Video_3gpp: return "video/3gpp";
        case Type::Video_3gpp2: return "video/3gpp2";
        case Type::Video_3gppTt: return "video/3gpp-tt";
        case Type::Video_AV1: return "video/AV1";
        case Type::Video_BMPEG: return "video/BMPEG";
        case Type::Video_BT656: return "video/BT656";
        case Type::Video_CelB: return "video/CelB";
        case Type::Video_DV: return "video/DV";
        case Type::Video_Encaprtp: return "video/encaprtp";
        case Type::Video_Evc: return "video/evc";
        case Type::Video_Example: return "video/example";
        case Type::Video_FFV1: return "video/FFV1";
        case Type::Video_Flexfec: return "video/flexfec";
        case Type::Video_H261: return "video/H261";
        case Type::Video_H263: return "video/H263";
        case Type::Video_H2631998: return "video/H263-1998";
        case Type::Video_H2632000: return "video/H263-2000";
        case Type::Video_H264: return "video/H264";
        case Type::Video_H264RCDO: return "video/H264-RCDO";
        case Type::Video_H264SVC: return "video/H264-SVC";
        case Type::Video_H265: return "video/H265";
        case Type::Video_H266: return "video/H266";
        case Type::Video_IsoSegment: return "video/iso.segment";
        case Type::Video_JPEG: return "video/JPEG";
        case Type::Video_Jpeg2000: return "video/jpeg2000";
        case Type::Video_Jxsv: return "video/jxsv";
        case Type::Video_Matroska: return "video/matroska";
        case Type::Video_Matroska3d: return "video/matroska-3d";
        case Type::Video_Mj2: return "video/mj2";
        case Type::Video_MP1S: return "video/MP1S";
        case Type::Video_MP2P: return "video/MP2P";
        case Type::Video_MP2T: return "video/MP2T";
        case Type::Video_Mp4: return "video/mp4";
        case Type::Video_MP4VES: return "video/MP4V-ES";
        case Type::Video_MPV: return "video/MPV";
        case Type::Video_Mpeg: return "video/mpeg";
        case Type::Video_Mpeg4Generic: return "video/mpeg4-generic";
        case Type::Video_Nv: return "video/nv";
        case Type::Video_Ogg: return "video/ogg";
        case Type::Video_Parityfec: return "video/parityfec";
        case Type::Video_Pointer: return "video/pointer";
        case Type::Video_Quicktime: return "video/quicktime";
        case Type::Video_Raptorfec: return "video/raptorfec";
        case Type::Video_Raw: return "video/raw";
        case Type::Video_RtpEncAescm128: return "video/rtp-enc-aescm128";
        case Type::Video_Rtploopback: return "video/rtploopback";
        case Type::Video_Rtx: return "video/rtx";
        case Type::Video_Scip: return "video/scip";
        case Type::Video_Smpte291: return "video/smpte291";
        case Type::Video_SMPTE292M: return "video/SMPTE292M";
        case Type::Video_Ulpfec: return "video/ulpfec";
        case Type::Video_Vc1: return "video/vc1";
        case Type::Video_Vc2: return "video/vc2";
        case Type::Video_VndCCTV: return "video/vnd.CCTV";
        case Type::Video_VndDeceHd: return "video/vnd.dece.hd";
        case Type::Video_VndDeceMobile: return "video/vnd.dece.mobile";
        case Type::Video_VndDeceMp4: return "video/vnd.dece.mp4";
        case Type::Video_VndDecePd: return "video/vnd.dece.pd";
        case Type::Video_VndDeceSd: return "video/vnd.dece.sd";
        case Type::Video_VndDeceVideo: return "video/vnd.dece.video";
        case Type::Video_VndDirectvMpeg: return "video/vnd.directv.mpeg";
        case Type::Video_VndDirectvMpegTts: return "video/vnd.directv.mpeg-tts";
        case Type::Video_VndDlnaMpegTts: return "video/vnd.dlna.mpeg-tts";
        case Type::Video_VndDvbFile: return "video/vnd.dvb.file";
        case Type::Video_VndFvt: return "video/vnd.fvt";
        case Type::Video_VndHnsVideo: return "video/vnd.hns.video";
        case Type::Video_VndIptvforum1dparityfec1010:
            return "video/vnd.iptvforum.1dparityfec-1010";
        case Type::Video_VndIptvforum1dparityfec2005:
            return "video/vnd.iptvforum.1dparityfec-2005";
        case Type::Video_VndIptvforum2dparityfec1010:
            return "video/vnd.iptvforum.2dparityfec-1010";
        case Type::Video_VndIptvforum2dparityfec2005:
            return "video/vnd.iptvforum.2dparityfec-2005";
        case Type::Video_VndIptvforumTtsavc:
            return "video/vnd.iptvforum.ttsavc";
        case Type::Video_VndIptvforumTtsmpeg2:
            return "video/vnd.iptvforum.ttsmpeg2";
        case Type::Video_VndMotorolaVideo: return "video/vnd.motorola.video";
        case Type::Video_VndMotorolaVideop: return "video/vnd.motorola.videop";
        case Type::Video_VndMpegurl: return "video/vnd.mpegurl";
        case Type::Video_VndMsPlayreadyMediaPyv:
            return "video/vnd.ms-playready.media.pyv";
        case Type::Video_VndNokiaInterleavedMultimedia:
            return "video/vnd.nokia.interleaved-multimedia";
        case Type::Video_VndNokiaMp4vr: return "video/vnd.nokia.mp4vr";
        case Type::Video_VndNokiaVideovoip: return "video/vnd.nokia.videovoip";
        case Type::Video_VndObjectvideo: return "video/vnd.objectvideo";
        case Type::Video_VndRadgamettoolsBink:
            return "video/vnd.radgamettools.bink";
        case Type::Video_VndRadgamettoolsSmacker:
            return "video/vnd.radgamettools.smacker";
        case Type::Video_VndSealedMpeg1: return "video/vnd.sealed.mpeg1";
        case Type::Video_VndSealedMpeg4: return "video/vnd.sealed.mpeg4";
        case Type::Video_VndSealedSwf: return "video/vnd.sealed.swf";
        case Type::Video_VndSealedmediaSoftsealMov:
            return "video/vnd.sealedmedia.softseal.mov";
        case Type::Video_VndUvvuMp4: return "video/vnd.uvvu.mp4";
        case Type::Video_VndYoutubeYt: return "video/vnd.youtube.yt";
        case Type::Video_VndVivo: return "video/vnd.vivo";
        case Type::Video_VP8: return "video/VP8";
        case Type::Video_VP9: return "video/VP9";
    }
    return "";
}

static const std::pair<const std::string, Type> type_map_data[] = {
    {"*/*", Type::Any},
    {"application/*", Type::Application_Any},
    {"application/1d-interleaved-parityfec",
     Type::Application_1dInterleavedParityfec},
    {"application/3gpdash-qoe-report+xml",
     Type::Application_3gpdashQoeReportXml},
    {"application/3gppHal+json", Type::Application_3gppHalJson},
    {"application/3gppHalForms+json", Type::Application_3gppHalFormsJson},
    {"application/3gpp-ims+xml", Type::Application_3gppImsXml},
    {"application/A2L", Type::Application_A2L},
    {"application/ace-groupcomm+cbor", Type::Application_AceGroupcommCbor},
    {"application/ace+cbor", Type::Application_AceCbor},
    {"application/ace+json", Type::Application_AceJson},
    {"application/activemessage", Type::Application_Activemessage},
    {"application/activity+json", Type::Application_ActivityJson},
    {"application/aif+cbor", Type::Application_AifCbor},
    {"application/aif+json", Type::Application_AifJson},
    {"application/alto-cdni+json", Type::Application_AltoCdniJson},
    {"application/alto-cdnifilter+json", Type::Application_AltoCdnifilterJson},
    {"application/alto-costmap+json", Type::Application_AltoCostmapJson},
    {"application/alto-costmapfilter+json",
     Type::Application_AltoCostmapfilterJson},
    {"application/alto-directory+json", Type::Application_AltoDirectoryJson},
    {"application/alto-endpointprop+json",
     Type::Application_AltoEndpointpropJson},
    {"application/alto-endpointpropparams+json",
     Type::Application_AltoEndpointpropparamsJson},
    {"application/alto-endpointcost+json",
     Type::Application_AltoEndpointcostJson},
    {"application/alto-endpointcostparams+json",
     Type::Application_AltoEndpointcostparamsJson},
    {"application/alto-error+json", Type::Application_AltoErrorJson},
    {"application/alto-networkmapfilter+json",
     Type::Application_AltoNetworkmapfilterJson},
    {"application/alto-networkmap+json", Type::Application_AltoNetworkmapJson},
    {"application/alto-propmap+json", Type::Application_AltoPropmapJson},
    {"application/alto-propmapparams+json",
     Type::Application_AltoPropmapparamsJson},
    {"application/alto-tips+json", Type::Application_AltoTipsJson},
    {"application/alto-tipsparams+json", Type::Application_AltoTipsparamsJson},
    {"application/alto-updatestreamcontrol+json",
     Type::Application_AltoUpdatestreamcontrolJson},
    {"application/alto-updatestreamparams+json",
     Type::Application_AltoUpdatestreamparamsJson},
    {"application/AML", Type::Application_AML},
    {"application/andrew-inset", Type::Application_AndrewInset},
    {"application/applefile", Type::Application_Applefile},
    {"application/at+jwt", Type::Application_AtJwt},
    {"application/ATF", Type::Application_ATF},
    {"application/ATFX", Type::Application_ATFX},
    {"application/atom+xml", Type::Application_AtomXml},
    {"application/atomcat+xml", Type::Application_AtomcatXml},
    {"application/atomdeleted+xml", Type::Application_AtomdeletedXml},
    {"application/atomicmail", Type::Application_Atomicmail},
    {"application/atomsvc+xml", Type::Application_AtomsvcXml},
    {"application/atsc-dwd+xml", Type::Application_AtscDwdXml},
    {"application/atsc-dynamic-event-message",
     Type::Application_AtscDynamicEventMessage},
    {"application/atsc-held+xml", Type::Application_AtscHeldXml},
    {"application/atsc-rdt+json", Type::Application_AtscRdtJson},
    {"application/atsc-rsat+xml", Type::Application_AtscRsatXml},
    {"application/ATXML", Type::Application_ATXML},
    {"application/auth-policy+xml", Type::Application_AuthPolicyXml},
    {"application/automationml-aml+xml", Type::Application_AutomationmlAmlXml},
    {"application/automationml-amlx+zip",
     Type::Application_AutomationmlAmlxZip},
    {"application/bacnet-xdd+zip", Type::Application_BacnetXddZip},
    {"application/batch-SMTP", Type::Application_BatchSMTP},
    {"application/beep+xml", Type::Application_BeepXml},
    {"application/bufr", Type::Application_Bufr},
    {"application/c2pa", Type::Application_C2pa},
    {"application/calendar+json", Type::Application_CalendarJson},
    {"application/calendar+xml", Type::Application_CalendarXml},
    {"application/call-completion", Type::Application_CallCompletion},
    {"application/CALS-1840", Type::Application_CALS1840},
    {"application/captive+json", Type::Application_CaptiveJson},
    {"application/cbor", Type::Application_Cbor},
    {"application/cbor-seq", Type::Application_CborSeq},
    {"application/cccex", Type::Application_Cccex},
    {"application/ccmp+xml", Type::Application_CcmpXml},
    {"application/ccxml+xml", Type::Application_CcxmlXml},
    {"application/cda+xml", Type::Application_CdaXml},
    {"application/CDFX+XML", Type::Application_CDFXXML},
    {"application/cdmi-capability", Type::Application_CdmiCapability},
    {"application/cdmi-container", Type::Application_CdmiContainer},
    {"application/cdmi-domain", Type::Application_CdmiDomain},
    {"application/cdmi-object", Type::Application_CdmiObject},
    {"application/cdmi-queue", Type::Application_CdmiQueue},
    {"application/cdni", Type::Application_Cdni},
    {"application/CEA", Type::Application_CEA},
    {"application/cea-2018+xml", Type::Application_Cea2018Xml},
    {"application/cellml+xml", Type::Application_CellmlXml},
    {"application/cfw", Type::Application_Cfw},
    {"application/cid-edhoc+cbor-seq", Type::Application_CidEdhocCborSeq},
    {"application/city+json", Type::Application_CityJson},
    {"application/clr", Type::Application_Clr},
    {"application/clue_info+xml", Type::Application_ClueInfoXml},
    {"application/clue+xml", Type::Application_ClueXml},
    {"application/cms", Type::Application_Cms},
    {"application/cnrp+xml", Type::Application_CnrpXml},
    {"application/coap-group+json", Type::Application_CoapGroupJson},
    {"application/coap-payload", Type::Application_CoapPayload},
    {"application/commonground", Type::Application_Commonground},
    {"application/concise-problem-details+cbor",
     Type::Application_ConciseProblemDetailsCbor},
    {"application/conference-info+xml", Type::Application_ConferenceInfoXml},
    {"application/cpl+xml", Type::Application_CplXml},
    {"application/cose", Type::Application_Cose},
    {"application/cose-key", Type::Application_CoseKey},
    {"application/cose-key-set", Type::Application_CoseKeySet},
    {"application/cose-x509", Type::Application_CoseX509},
    {"application/csrattrs", Type::Application_Csrattrs},
    {"application/csta+xml", Type::Application_CstaXml},
    {"application/CSTAdata+xml", Type::Application_CSTAdataXml},
    {"application/csvm+json", Type::Application_CsvmJson},
    {"application/cwl", Type::Application_Cwl},
    {"application/cwl+json", Type::Application_CwlJson},
    {"application/cwl+yaml", Type::Application_CwlYaml},
    {"application/cwt", Type::Application_Cwt},
    {"application/cybercash", Type::Application_Cybercash},
    {"application/dash+xml", Type::Application_DashXml},
    {"application/dash-patch+xml", Type::Application_DashPatchXml},
    {"application/dashdelta", Type::Application_Dashdelta},
    {"application/davmount+xml", Type::Application_DavmountXml},
    {"application/dca-rft", Type::Application_DcaRft},
    {"application/DCD", Type::Application_DCD},
    {"application/dec-dx", Type::Application_DecDx},
    {"application/dialog-info+xml", Type::Application_DialogInfoXml},
    {"application/dicom", Type::Application_Dicom},
    {"application/dicom+json", Type::Application_DicomJson},
    {"application/dicom+xml", Type::Application_DicomXml},
    {"application/DII", Type::Application_DII},
    {"application/DIT", Type::Application_DIT},
    {"application/dns", Type::Application_Dns},
    {"application/dns+json", Type::Application_DnsJson},
    {"application/dns-message", Type::Application_DnsMessage},
    {"application/dots+cbor", Type::Application_DotsCbor},
    {"application/dpop+jwt", Type::Application_DpopJwt},
    {"application/dskpp+xml", Type::Application_DskppXml},
    {"application/dssc+der", Type::Application_DsscDer},
    {"application/dssc+xml", Type::Application_DsscXml},
    {"application/dvcs", Type::Application_Dvcs},
    {"application/ecmascript", Type::Application_Ecmascript},
    {"application/edhoc+cbor-seq", Type::Application_EdhocCborSeq},
    {"application/EDI-consent", Type::Application_EDIConsent},
    {"application/EDIFACT", Type::Application_EDIFACT},
    {"application/EDI-X12", Type::Application_EDIX12},
    {"application/efi", Type::Application_Efi},
    {"application/elm+json", Type::Application_ElmJson},
    {"application/elm+xml", Type::Application_ElmXml},
    {"application/EmergencyCallData.cap+xml",
     Type::Application_EmergencyCallDataCapXml},
    {"application/EmergencyCallData.Comment+xml",
     Type::Application_EmergencyCallDataCommentXml},
    {"application/EmergencyCallData.Control+xml",
     Type::Application_EmergencyCallDataControlXml},
    {"application/EmergencyCallData.DeviceInfo+xml",
     Type::Application_EmergencyCallDataDeviceInfoXml},
    {"application/EmergencyCallData.eCall.MSD",
     Type::Application_EmergencyCallDataECallMSD},
    {"application/EmergencyCallData.LegacyESN+json",
     Type::Application_EmergencyCallDataLegacyESNJson},
    {"application/EmergencyCallData.ProviderInfo+xml",
     Type::Application_EmergencyCallDataProviderInfoXml},
    {"application/EmergencyCallData.ServiceInfo+xml",
     Type::Application_EmergencyCallDataServiceInfoXml},
    {"application/EmergencyCallData.SubscriberInfo+xml",
     Type::Application_EmergencyCallDataSubscriberInfoXml},
    {"application/EmergencyCallData.VEDS+xml",
     Type::Application_EmergencyCallDataVEDSXml},
    {"application/emma+xml", Type::Application_EmmaXml},
    {"application/emotionml+xml", Type::Application_EmotionmlXml},
    {"application/encaprtp", Type::Application_Encaprtp},
    {"application/epp+xml", Type::Application_EppXml},
    {"application/epub+zip", Type::Application_EpubZip},
    {"application/eshop", Type::Application_Eshop},
    {"application/example", Type::Application_Example},
    {"application/exi", Type::Application_Exi},
    {"application/expect-ct-report+json", Type::Application_ExpectCtReportJson},
    {"application/express", Type::Application_Express},
    {"application/fastinfoset", Type::Application_Fastinfoset},
    {"application/fastsoap", Type::Application_Fastsoap},
    {"application/fdf", Type::Application_Fdf},
    {"application/fdt+xml", Type::Application_FdtXml},
    {"application/fhir+json", Type::Application_FhirJson},
    {"application/fhir+xml", Type::Application_FhirXml},
    {"application/fits", Type::Application_Fits},
    {"application/flexfec", Type::Application_Flexfec},
    {"application/font-sfnt", Type::Application_FontSfnt},
    {"application/font-tdpfr", Type::Application_FontTdpfr},
    {"application/font-woff", Type::Application_FontWoff},
    {"application/framework-attributes+xml",
     Type::Application_FrameworkAttributesXml},
    {"application/geo+json", Type::Application_GeoJson},
    {"application/geo+json-seq", Type::Application_GeoJsonSeq},
    {"application/geopackage+sqlite3", Type::Application_GeopackageSqlite3},
    {"application/geoxacml+json", Type::Application_GeoxacmlJson},
    {"application/geoxacml+xml", Type::Application_GeoxacmlXml},
    {"application/gltf-buffer", Type::Application_GltfBuffer},
    {"application/gml+xml", Type::Application_GmlXml},
    {"application/gnap-binding-jws", Type::Application_GnapBindingJws},
    {"application/gnap-binding-jwsd", Type::Application_GnapBindingJwsd},
    {"application/gnap-binding-rotation-jws",
     Type::Application_GnapBindingRotationJws},
    {"application/gnap-binding-rotation-jwsd",
     Type::Application_GnapBindingRotationJwsd},
    {"application/grib", Type::Application_Grib},
    {"application/gzip", Type::Application_Gzip},
    {"application/H224", Type::Application_H224},
    {"application/held+xml", Type::Application_HeldXml},
    {"application/hl7v2+xml", Type::Application_Hl7v2Xml},
    {"application/http", Type::Application_Http},
    {"application/hyperstudio", Type::Application_Hyperstudio},
    {"application/ibe-key-request+xml", Type::Application_IbeKeyRequestXml},
    {"application/ibe-pkg-reply+xml", Type::Application_IbePkgReplyXml},
    {"application/ibe-pp-data", Type::Application_IbePpData},
    {"application/iges", Type::Application_Iges},
    {"application/im-iscomposing+xml", Type::Application_ImIscomposingXml},
    {"application/index", Type::Application_Index},
    {"application/index.cmd", Type::Application_IndexCmd},
    {"application/index.obj", Type::Application_IndexObj},
    {"application/index.response", Type::Application_IndexResponse},
    {"application/index.vnd", Type::Application_IndexVnd},
    {"application/inkml+xml", Type::Application_InkmlXml},
    {"application/IOTP", Type::Application_IOTP},
    {"application/ipfix", Type::Application_Ipfix},
    {"application/ipp", Type::Application_Ipp},
    {"application/ISUP", Type::Application_ISUP},
    {"application/its+xml", Type::Application_ItsXml},
    {"application/java-archive", Type::Application_JavaArchive},
    {"application/javascript", Type::Application_Javascript},
    {"application/jf2feed+json", Type::Application_Jf2feedJson},
    {"application/jose", Type::Application_Jose},
    {"application/jose+json", Type::Application_JoseJson},
    {"application/jrd+json", Type::Application_JrdJson},
    {"application/jscalendar+json", Type::Application_JscalendarJson},
    {"application/jscontact+json", Type::Application_JscontactJson},
    {"application/json", Type::Application_Json},
    {"application/json-patch+json", Type::Application_JsonPatchJson},
    {"application/json-seq", Type::Application_JsonSeq},
    {"application/jsonpath", Type::Application_Jsonpath},
    {"application/jwk+json", Type::Application_JwkJson},
    {"application/jwk-set+json", Type::Application_JwkSetJson},
    {"application/jwt", Type::Application_Jwt},
    {"application/kpml-request+xml", Type::Application_KpmlRequestXml},
    {"application/kpml-response+xml", Type::Application_KpmlResponseXml},
    {"application/ld+json", Type::Application_LdJson},
    {"application/lgr+xml", Type::Application_LgrXml},
    {"application/link-format", Type::Application_LinkFormat},
    {"application/linkset", Type::Application_Linkset},
    {"application/linkset+json", Type::Application_LinksetJson},
    {"application/load-control+xml", Type::Application_LoadControlXml},
    {"application/logout+jwt", Type::Application_LogoutJwt},
    {"application/lost+xml", Type::Application_LostXml},
    {"application/lostsync+xml", Type::Application_LostsyncXml},
    {"application/lpf+zip", Type::Application_LpfZip},
    {"application/LXF", Type::Application_LXF},
    {"application/mac-binhex40", Type::Application_MacBinhex40},
    {"application/macwriteii", Type::Application_Macwriteii},
    {"application/mads+xml", Type::Application_MadsXml},
    {"application/manifest+json", Type::Application_ManifestJson},
    {"application/marc", Type::Application_Marc},
    {"application/marcxml+xml", Type::Application_MarcxmlXml},
    {"application/mathematica", Type::Application_Mathematica},
    {"application/mathml+xml", Type::Application_MathmlXml},
    {"application/mathml-content+xml", Type::Application_MathmlContentXml},
    {"application/mathml-presentation+xml",
     Type::Application_MathmlPresentationXml},
    {"application/mbms-associated-procedure-description+xml",
     Type::Application_MbmsAssociatedProcedureDescriptionXml},
    {"application/mbms-deregister+xml", Type::Application_MbmsDeregisterXml},
    {"application/mbms-envelope+xml", Type::Application_MbmsEnvelopeXml},
    {"application/mbms-msk-response+xml", Type::Application_MbmsMskResponseXml},
    {"application/mbms-msk+xml", Type::Application_MbmsMskXml},
    {"application/mbms-protection-description+xml",
     Type::Application_MbmsProtectionDescriptionXml},
    {"application/mbms-reception-report+xml",
     Type::Application_MbmsReceptionReportXml},
    {"application/mbms-register-response+xml",
     Type::Application_MbmsRegisterResponseXml},
    {"application/mbms-register+xml", Type::Application_MbmsRegisterXml},
    {"application/mbms-schedule+xml", Type::Application_MbmsScheduleXml},
    {"application/mbms-user-service-description+xml",
     Type::Application_MbmsUserServiceDescriptionXml},
    {"application/mbox", Type::Application_Mbox},
    {"application/media_control+xml", Type::Application_MediaControlXml},
    {"application/media-policy-dataset+xml",
     Type::Application_MediaPolicyDatasetXml},
    {"application/mediaservercontrol+xml",
     Type::Application_MediaservercontrolXml},
    {"application/merge-patch+json", Type::Application_MergePatchJson},
    {"application/metalink4+xml", Type::Application_Metalink4Xml},
    {"application/mets+xml", Type::Application_MetsXml},
    {"application/MF4", Type::Application_MF4},
    {"application/mikey", Type::Application_Mikey},
    {"application/mipc", Type::Application_Mipc},
    {"application/missing-blocks+cbor-seq",
     Type::Application_MissingBlocksCborSeq},
    {"application/mmt-aei+xml", Type::Application_MmtAeiXml},
    {"application/mmt-usd+xml", Type::Application_MmtUsdXml},
    {"application/mods+xml", Type::Application_ModsXml},
    {"application/moss-keys", Type::Application_MossKeys},
    {"application/moss-signature", Type::Application_MossSignature},
    {"application/mosskey-data", Type::Application_MosskeyData},
    {"application/mosskey-request", Type::Application_MosskeyRequest},
    {"application/mp21", Type::Application_Mp21},
    {"application/mp4", Type::Application_Mp4},
    {"application/mpeg4-generic", Type::Application_Mpeg4Generic},
    {"application/mpeg4-iod", Type::Application_Mpeg4Iod},
    {"application/mpeg4-iod-xmt", Type::Application_Mpeg4IodXmt},
    {"application/mrb-consumer+xml", Type::Application_MrbConsumerXml},
    {"application/mrb-publish+xml", Type::Application_MrbPublishXml},
    {"application/msc-ivr+xml", Type::Application_MscIvrXml},
    {"application/msc-mixer+xml", Type::Application_MscMixerXml},
    {"application/msword", Type::Application_Msword},
    {"application/mud+json", Type::Application_MudJson},
    {"application/multipart-core", Type::Application_MultipartCore},
    {"application/mxf", Type::Application_Mxf},
    {"application/n-quads", Type::Application_NQuads},
    {"application/n-triples", Type::Application_NTriples},
    {"application/nasdata", Type::Application_Nasdata},
    {"application/news-checkgroups", Type::Application_NewsCheckgroups},
    {"application/news-groupinfo", Type::Application_NewsGroupinfo},
    {"application/news-transmission", Type::Application_NewsTransmission},
    {"application/nlsml+xml", Type::Application_NlsmlXml},
    {"application/node", Type::Application_Node},
    {"application/nss", Type::Application_Nss},
    {"application/oauth-authz-req+jwt", Type::Application_OauthAuthzReqJwt},
    {"application/oblivious-dns-message",
     Type::Application_ObliviousDnsMessage},
    {"application/ocsp-request", Type::Application_OcspRequest},
    {"application/ocsp-response", Type::Application_OcspResponse},
    {"application/octet-stream", Type::Application_OctetStream},
    {"application/ODA", Type::Application_ODA},
    {"application/odm+xml", Type::Application_OdmXml},
    {"application/ODX", Type::Application_ODX},
    {"application/oebps-package+xml", Type::Application_OebpsPackageXml},
    {"application/ogg", Type::Application_Ogg},
    {"application/ohttp-keys", Type::Application_OhttpKeys},
    {"application/opc-nodeset+xml", Type::Application_OpcNodesetXml},
    {"application/oscore", Type::Application_Oscore},
    {"application/oxps", Type::Application_Oxps},
    {"application/p21", Type::Application_P21},
    {"application/p21+zip", Type::Application_P21Zip},
    {"application/p2p-overlay+xml", Type::Application_P2pOverlayXml},
    {"application/parityfec", Type::Application_Parityfec},
    {"application/passport", Type::Application_Passport},
    {"application/patch-ops-error+xml", Type::Application_PatchOpsErrorXml},
    {"application/pdf", Type::Application_Pdf},
    {"application/PDX", Type::Application_PDX},
    {"application/pem-certificate-chain",
     Type::Application_PemCertificateChain},
    {"application/pgp-encrypted", Type::Application_PgpEncrypted},
    {"application/pgp-keys", Type::Application_PgpKeys},
    {"application/pgp-signature", Type::Application_PgpSignature},
    {"application/pidf-diff+xml", Type::Application_PidfDiffXml},
    {"application/pidf+xml", Type::Application_PidfXml},
    {"application/pkcs10", Type::Application_Pkcs10},
    {"application/pkcs7-mime", Type::Application_Pkcs7Mime},
    {"application/pkcs7-signature", Type::Application_Pkcs7Signature},
    {"application/pkcs8", Type::Application_Pkcs8},
    {"application/pkcs8-encrypted", Type::Application_Pkcs8Encrypted},
    {"application/pkcs12", Type::Application_Pkcs12},
    {"application/pkix-attr-cert", Type::Application_PkixAttrCert},
    {"application/pkix-cert", Type::Application_PkixCert},
    {"application/pkix-crl", Type::Application_PkixCrl},
    {"application/pkix-pkipath", Type::Application_PkixPkipath},
    {"application/pkixcmp", Type::Application_Pkixcmp},
    {"application/pls+xml", Type::Application_PlsXml},
    {"application/poc-settings+xml", Type::Application_PocSettingsXml},
    {"application/postscript", Type::Application_Postscript},
    {"application/ppsp-tracker+json", Type::Application_PpspTrackerJson},
    {"application/private-token-issuer-directory",
     Type::Application_PrivateTokenIssuerDirectory},
    {"application/private-token-request",
     Type::Application_PrivateTokenRequest},
    {"application/private-token-response",
     Type::Application_PrivateTokenResponse},
    {"application/problem+json", Type::Application_ProblemJson},
    {"application/problem+xml", Type::Application_ProblemXml},
    {"application/provenance+xml", Type::Application_ProvenanceXml},
    {"application/prs.alvestrand.titrax-sheet",
     Type::Application_PrsAlvestrandTitraxSheet},
    {"application/prs.cww", Type::Application_PrsCww},
    {"application/prs.cyn", Type::Application_PrsCyn},
    {"application/prs.hpub+zip", Type::Application_PrsHpubZip},
    {"application/prs.implied-document+xml",
     Type::Application_PrsImpliedDocumentXml},
    {"application/prs.implied-executable",
     Type::Application_PrsImpliedExecutable},
    {"application/prs.implied-object+json",
     Type::Application_PrsImpliedObjectJson},
    {"application/prs.implied-object+json-seq",
     Type::Application_PrsImpliedObjectJsonSeq},
    {"application/prs.implied-object+yaml",
     Type::Application_PrsImpliedObjectYaml},
    {"application/prs.implied-structure",
     Type::Application_PrsImpliedStructure},
    {"application/prs.nprend", Type::Application_PrsNprend},
    {"application/prs.plucker", Type::Application_PrsPlucker},
    {"application/prs.rdf-xml-crypt", Type::Application_PrsRdfXmlCrypt},
    {"application/prs.vcfbzip2", Type::Application_PrsVcfbzip2},
    {"application/prs.xsf+xml", Type::Application_PrsXsfXml},
    {"application/pskc+xml", Type::Application_PskcXml},
    {"application/pvd+json", Type::Application_PvdJson},
    {"application/rdf+xml", Type::Application_RdfXml},
    {"application/route-apd+xml", Type::Application_RouteApdXml},
    {"application/route-s-tsid+xml", Type::Application_RouteSTsidXml},
    {"application/route-usd+xml", Type::Application_RouteUsdXml},
    {"application/QSIG", Type::Application_QSIG},
    {"application/raptorfec", Type::Application_Raptorfec},
    {"application/rdap+json", Type::Application_RdapJson},
    {"application/reginfo+xml", Type::Application_ReginfoXml},
    {"application/relax-ng-compact-syntax",
     Type::Application_RelaxNgCompactSyntax},
    {"application/remote-printing", Type::Application_RemotePrinting},
    {"application/reputon+json", Type::Application_ReputonJson},
    {"application/resource-lists-diff+xml",
     Type::Application_ResourceListsDiffXml},
    {"application/resource-lists+xml", Type::Application_ResourceListsXml},
    {"application/rfc+xml", Type::Application_RfcXml},
    {"application/riscos", Type::Application_Riscos},
    {"application/rlmi+xml", Type::Application_RlmiXml},
    {"application/rls-services+xml", Type::Application_RlsServicesXml},
    {"application/rpki-checklist", Type::Application_RpkiChecklist},
    {"application/rpki-ghostbusters", Type::Application_RpkiGhostbusters},
    {"application/rpki-manifest", Type::Application_RpkiManifest},
    {"application/rpki-publication", Type::Application_RpkiPublication},
    {"application/rpki-roa", Type::Application_RpkiRoa},
    {"application/rpki-signed-tal", Type::Application_RpkiSignedTal},
    {"application/rpki-updown", Type::Application_RpkiUpdown},
    {"application/rtf", Type::Application_Rtf},
    {"application/rtploopback", Type::Application_Rtploopback},
    {"application/rtx", Type::Application_Rtx},
    {"application/samlassertion+xml", Type::Application_SamlassertionXml},
    {"application/samlmetadata+xml", Type::Application_SamlmetadataXml},
    {"application/sarif-external-properties+json",
     Type::Application_SarifExternalPropertiesJson},
    {"application/sarif+json", Type::Application_SarifJson},
    {"application/sbe", Type::Application_Sbe},
    {"application/sbml+xml", Type::Application_SbmlXml},
    {"application/scaip+xml", Type::Application_ScaipXml},
    {"application/scim+json", Type::Application_ScimJson},
    {"application/scvp-cv-request", Type::Application_ScvpCvRequest},
    {"application/scvp-cv-response", Type::Application_ScvpCvResponse},
    {"application/scvp-vp-request", Type::Application_ScvpVpRequest},
    {"application/scvp-vp-response", Type::Application_ScvpVpResponse},
    {"application/sdp", Type::Application_Sdp},
    {"application/secevent+jwt", Type::Application_SeceventJwt},
    {"application/senml-etch+cbor", Type::Application_SenmlEtchCbor},
    {"application/senml-etch+json", Type::Application_SenmlEtchJson},
    {"application/senml-exi", Type::Application_SenmlExi},
    {"application/senml+cbor", Type::Application_SenmlCbor},
    {"application/senml+json", Type::Application_SenmlJson},
    {"application/senml+xml", Type::Application_SenmlXml},
    {"application/sensml-exi", Type::Application_SensmlExi},
    {"application/sensml+cbor", Type::Application_SensmlCbor},
    {"application/sensml+json", Type::Application_SensmlJson},
    {"application/sensml+xml", Type::Application_SensmlXml},
    {"application/sep-exi", Type::Application_SepExi},
    {"application/sep+xml", Type::Application_SepXml},
    {"application/session-info", Type::Application_SessionInfo},
    {"application/set-payment", Type::Application_SetPayment},
    {"application/set-payment-initiation",
     Type::Application_SetPaymentInitiation},
    {"application/set-registration", Type::Application_SetRegistration},
    {"application/set-registration-initiation",
     Type::Application_SetRegistrationInitiation},
    {"application/SGML", Type::Application_SGML},
    {"application/sgml-open-catalog", Type::Application_SgmlOpenCatalog},
    {"application/shf+xml", Type::Application_ShfXml},
    {"application/sieve", Type::Application_Sieve},
    {"application/simple-filter+xml", Type::Application_SimpleFilterXml},
    {"application/simple-message-summary",
     Type::Application_SimpleMessageSummary},
    {"application/simpleSymbolContainer",
     Type::Application_SimpleSymbolContainer},
    {"application/sipc", Type::Application_Sipc},
    {"application/slate", Type::Application_Slate},
    {"application/smil", Type::Application_Smil},
    {"application/smil+xml", Type::Application_SmilXml},
    {"application/smpte336m", Type::Application_Smpte336m},
    {"application/soap+fastinfoset", Type::Application_SoapFastinfoset},
    {"application/soap+xml", Type::Application_SoapXml},
    {"application/sparql-query", Type::Application_SparqlQuery},
    {"application/spdx+json", Type::Application_SpdxJson},
    {"application/sparql-results+xml", Type::Application_SparqlResultsXml},
    {"application/spirits-event+xml", Type::Application_SpiritsEventXml},
    {"application/sql", Type::Application_Sql},
    {"application/srgs", Type::Application_Srgs},
    {"application/srgs+xml", Type::Application_SrgsXml},
    {"application/sru+xml", Type::Application_SruXml},
    {"application/sslkeylogfile", Type::Application_Sslkeylogfile},
    {"application/ssml+xml", Type::Application_SsmlXml},
    {"application/ST2110-41", Type::Application_ST211041},
    {"application/stix+json", Type::Application_StixJson},
    {"application/stratum", Type::Application_Stratum},
    {"application/swid+cbor", Type::Application_SwidCbor},
    {"application/swid+xml", Type::Application_SwidXml},
    {"application/tamp-apex-update", Type::Application_TampApexUpdate},
    {"application/tamp-apex-update-confirm",
     Type::Application_TampApexUpdateConfirm},
    {"application/tamp-community-update",
     Type::Application_TampCommunityUpdate},
    {"application/tamp-community-update-confirm",
     Type::Application_TampCommunityUpdateConfirm},
    {"application/tamp-error", Type::Application_TampError},
    {"application/tamp-sequence-adjust", Type::Application_TampSequenceAdjust},
    {"application/tamp-sequence-adjust-confirm",
     Type::Application_TampSequenceAdjustConfirm},
    {"application/tamp-status-query", Type::Application_TampStatusQuery},
    {"application/tamp-status-response", Type::Application_TampStatusResponse},
    {"application/tamp-update", Type::Application_TampUpdate},
    {"application/tamp-update-confirm", Type::Application_TampUpdateConfirm},
    {"application/taxii+json", Type::Application_TaxiiJson},
    {"application/td+json", Type::Application_TdJson},
    {"application/tei+xml", Type::Application_TeiXml},
    {"application/TETRA_ISI", Type::Application_TETRAISI},
    {"application/thraud+xml", Type::Application_ThraudXml},
    {"application/timestamp-query", Type::Application_TimestampQuery},
    {"application/timestamp-reply", Type::Application_TimestampReply},
    {"application/timestamped-data", Type::Application_TimestampedData},
    {"application/tlsrpt+gzip", Type::Application_TlsrptGzip},
    {"application/tlsrpt+json", Type::Application_TlsrptJson},
    {"application/tm+json", Type::Application_TmJson},
    {"application/tnauthlist", Type::Application_Tnauthlist},
    {"application/token-introspection+jwt",
     Type::Application_TokenIntrospectionJwt},
    {"application/trickle-ice-sdpfrag", Type::Application_TrickleIceSdpfrag},
    {"application/trig", Type::Application_Trig},
    {"application/ttml+xml", Type::Application_TtmlXml},
    {"application/tve-trigger", Type::Application_TveTrigger},
    {"application/tzif", Type::Application_Tzif},
    {"application/tzif-leap", Type::Application_TzifLeap},
    {"application/ulpfec", Type::Application_Ulpfec},
    {"application/urc-grpsheet+xml", Type::Application_UrcGrpsheetXml},
    {"application/urc-ressheet+xml", Type::Application_UrcRessheetXml},
    {"application/urc-targetdesc+xml", Type::Application_UrcTargetdescXml},
    {"application/urc-uisocketdesc+xml", Type::Application_UrcUisocketdescXml},
    {"application/vc", Type::Application_Vc},
    {"application/vcard+json", Type::Application_VcardJson},
    {"application/vcard+xml", Type::Application_VcardXml},
    {"application/vemmi", Type::Application_Vemmi},
    {"application/vnd.1000minds.decision-model+xml",
     Type::Application_Vnd1000mindsDecisionModelXml},
    {"application/vnd.1ob", Type::Application_Vnd1ob},
    {"application/vnd.3gpp.5gnas", Type::Application_Vnd3gpp5gnas},
    {"application/vnd.3gpp.5gsa2x", Type::Application_Vnd3gpp5gsa2x},
    {"application/vnd.3gpp.5gsa2x-local-service-information",
     Type::Application_Vnd3gpp5gsa2xLocalServiceInformation},
    {"application/vnd.3gpp.access-transfer-events+xml",
     Type::Application_Vnd3gppAccessTransferEventsXml},
    {"application/vnd.3gpp.bsf+xml", Type::Application_Vnd3gppBsfXml},
    {"application/vnd.3gpp.crs+xml", Type::Application_Vnd3gppCrsXml},
    {"application/vnd.3gpp.current-location-discovery+xml",
     Type::Application_Vnd3gppCurrentLocationDiscoveryXml},
    {"application/vnd.3gpp.GMOP+xml", Type::Application_Vnd3gppGMOPXml},
    {"application/vnd.3gpp.gtpc", Type::Application_Vnd3gppGtpc},
    {"application/vnd.3gpp.interworking-data",
     Type::Application_Vnd3gppInterworkingData},
    {"application/vnd.3gpp.lpp", Type::Application_Vnd3gppLpp},
    {"application/vnd.3gpp.mc-signalling-ear",
     Type::Application_Vnd3gppMcSignallingEar},
    {"application/vnd.3gpp.mcdata-affiliation-command+xml",
     Type::Application_Vnd3gppMcdataAffiliationCommandXml},
    {"application/vnd.3gpp.mcdata-info+xml",
     Type::Application_Vnd3gppMcdataInfoXml},
    {"application/vnd.3gpp.mcdata-msgstore-ctrl-request+xml",
     Type::Application_Vnd3gppMcdataMsgstoreCtrlRequestXml},
    {"application/vnd.3gpp.mcdata-payload",
     Type::Application_Vnd3gppMcdataPayload},
    {"application/vnd.3gpp.mcdata-regroup+xml",
     Type::Application_Vnd3gppMcdataRegroupXml},
    {"application/vnd.3gpp.mcdata-service-config+xml",
     Type::Application_Vnd3gppMcdataServiceConfigXml},
    {"application/vnd.3gpp.mcdata-signalling",
     Type::Application_Vnd3gppMcdataSignalling},
    {"application/vnd.3gpp.mcdata-ue-config+xml",
     Type::Application_Vnd3gppMcdataUeConfigXml},
    {"application/vnd.3gpp.mcdata-user-profile+xml",
     Type::Application_Vnd3gppMcdataUserProfileXml},
    {"application/vnd.3gpp.mcptt-affiliation-command+xml",
     Type::Application_Vnd3gppMcpttAffiliationCommandXml},
    {"application/vnd.3gpp.mcptt-floor-request+xml",
     Type::Application_Vnd3gppMcpttFloorRequestXml},
    {"application/vnd.3gpp.mcptt-info+xml",
     Type::Application_Vnd3gppMcpttInfoXml},
    {"application/vnd.3gpp.mcptt-location-info+xml",
     Type::Application_Vnd3gppMcpttLocationInfoXml},
    {"application/vnd.3gpp.mcptt-mbms-usage-info+xml",
     Type::Application_Vnd3gppMcpttMbmsUsageInfoXml},
    {"application/vnd.3gpp.mcptt-regroup+xml",
     Type::Application_Vnd3gppMcpttRegroupXml},
    {"application/vnd.3gpp.mcptt-service-config+xml",
     Type::Application_Vnd3gppMcpttServiceConfigXml},
    {"application/vnd.3gpp.mcptt-signed+xml",
     Type::Application_Vnd3gppMcpttSignedXml},
    {"application/vnd.3gpp.mcptt-ue-config+xml",
     Type::Application_Vnd3gppMcpttUeConfigXml},
    {"application/vnd.3gpp.mcptt-ue-init-config+xml",
     Type::Application_Vnd3gppMcpttUeInitConfigXml},
    {"application/vnd.3gpp.mcptt-user-profile+xml",
     Type::Application_Vnd3gppMcpttUserProfileXml},
    {"application/vnd.3gpp.mcvideo-affiliation-command+xml",
     Type::Application_Vnd3gppMcvideoAffiliationCommandXml},
    {"application/vnd.3gpp.mcvideo-affiliation-info+xml",
     Type::Application_Vnd3gppMcvideoAffiliationInfoXml},
    {"application/vnd.3gpp.mcvideo-info+xml",
     Type::Application_Vnd3gppMcvideoInfoXml},
    {"application/vnd.3gpp.mcvideo-location-info+xml",
     Type::Application_Vnd3gppMcvideoLocationInfoXml},
    {"application/vnd.3gpp.mcvideo-mbms-usage-info+xml",
     Type::Application_Vnd3gppMcvideoMbmsUsageInfoXml},
    {"application/vnd.3gpp.mcvideo-regroup+xml",
     Type::Application_Vnd3gppMcvideoRegroupXml},
    {"application/vnd.3gpp.mcvideo-service-config+xml",
     Type::Application_Vnd3gppMcvideoServiceConfigXml},
    {"application/vnd.3gpp.mcvideo-transmission-request+xml",
     Type::Application_Vnd3gppMcvideoTransmissionRequestXml},
    {"application/vnd.3gpp.mcvideo-ue-config+xml",
     Type::Application_Vnd3gppMcvideoUeConfigXml},
    {"application/vnd.3gpp.mcvideo-user-profile+xml",
     Type::Application_Vnd3gppMcvideoUserProfileXml},
    {"application/vnd.3gpp.mid-call+xml", Type::Application_Vnd3gppMidCallXml},
    {"application/vnd.3gpp.ngap", Type::Application_Vnd3gppNgap},
    {"application/vnd.3gpp.pfcp", Type::Application_Vnd3gppPfcp},
    {"application/vnd.3gpp.pic-bw-large", Type::Application_Vnd3gppPicBwLarge},
    {"application/vnd.3gpp.pic-bw-small", Type::Application_Vnd3gppPicBwSmall},
    {"application/vnd.3gpp.pic-bw-var", Type::Application_Vnd3gppPicBwVar},
    {"application/vnd.3gpp.pinapp-info+xml",
     Type::Application_Vnd3gppPinappInfoXml},
    {"application/vnd.3gpp-prose-pc3a+xml",
     Type::Application_Vnd3gppProsePc3aXml},
    {"application/vnd.3gpp-prose-pc3ach+xml",
     Type::Application_Vnd3gppProsePc3achXml},
    {"application/vnd.3gpp-prose-pc3ch+xml",
     Type::Application_Vnd3gppProsePc3chXml},
    {"application/vnd.3gpp-prose-pc8+xml",
     Type::Application_Vnd3gppProsePc8Xml},
    {"application/vnd.3gpp-prose+xml", Type::Application_Vnd3gppProseXml},
    {"application/vnd.3gpp.s1ap", Type::Application_Vnd3gppS1ap},
    {"application/vnd.3gpp.seal-group-doc+xml",
     Type::Application_Vnd3gppSealGroupDocXml},
    {"application/vnd.3gpp.seal-info+xml",
     Type::Application_Vnd3gppSealInfoXml},
    {"application/vnd.3gpp.seal-location-info+xml",
     Type::Application_Vnd3gppSealLocationInfoXml},
    {"application/vnd.3gpp.seal-mbms-usage-info+xml",
     Type::Application_Vnd3gppSealMbmsUsageInfoXml},
    {"application/vnd.3gpp.seal-network-QoS-management-info+xml",
     Type::Application_Vnd3gppSealNetworkQoSManagementInfoXml},
    {"application/vnd.3gpp.seal-ue-config-info+xml",
     Type::Application_Vnd3gppSealUeConfigInfoXml},
    {"application/vnd.3gpp.seal-unicast-info+xml",
     Type::Application_Vnd3gppSealUnicastInfoXml},
    {"application/vnd.3gpp.seal-user-profile-info+xml",
     Type::Application_Vnd3gppSealUserProfileInfoXml},
    {"application/vnd.3gpp.sms", Type::Application_Vnd3gppSms},
    {"application/vnd.3gpp.sms+xml", Type::Application_Vnd3gppSmsXml},
    {"application/vnd.3gpp.srvcc-ext+xml",
     Type::Application_Vnd3gppSrvccExtXml},
    {"application/vnd.3gpp.SRVCC-info+xml",
     Type::Application_Vnd3gppSRVCCInfoXml},
    {"application/vnd.3gpp.state-and-event-info+xml",
     Type::Application_Vnd3gppStateAndEventInfoXml},
    {"application/vnd.3gpp.ussd+xml", Type::Application_Vnd3gppUssdXml},
    {"application/vnd.3gpp.vae-info+xml", Type::Application_Vnd3gppVaeInfoXml},
    {"application/vnd.3gpp-v2x-local-service-information",
     Type::Application_Vnd3gppV2xLocalServiceInformation},
    {"application/vnd.3gpp2.bcmcsinfo+xml",
     Type::Application_Vnd3gpp2BcmcsinfoXml},
    {"application/vnd.3gpp2.sms", Type::Application_Vnd3gpp2Sms},
    {"application/vnd.3gpp2.tcap", Type::Application_Vnd3gpp2Tcap},
    {"application/vnd.3gpp.v2x", Type::Application_Vnd3gppV2x},
    {"application/vnd.3lightssoftware.imagescal",
     Type::Application_Vnd3lightssoftwareImagescal},
    {"application/vnd.3M.Post-it-Notes", Type::Application_Vnd3MPostItNotes},
    {"application/vnd.accpac.simply.aso", Type::Application_VndAccpacSimplyAso},
    {"application/vnd.accpac.simply.imp", Type::Application_VndAccpacSimplyImp},
    {"application/vnd.acm.addressxfer+json",
     Type::Application_VndAcmAddressxferJson},
    {"application/vnd.acm.chatbot+json", Type::Application_VndAcmChatbotJson},
    {"application/vnd.acucobol", Type::Application_VndAcucobol},
    {"application/vnd.acucorp", Type::Application_VndAcucorp},
    {"application/vnd.adobe.flash.movie", Type::Application_VndAdobeFlashMovie},
    {"application/vnd.adobe.formscentral.fcdt",
     Type::Application_VndAdobeFormscentralFcdt},
    {"application/vnd.adobe.fxp", Type::Application_VndAdobeFxp},
    {"application/vnd.adobe.partial-upload",
     Type::Application_VndAdobePartialUpload},
    {"application/vnd.adobe.xdp+xml", Type::Application_VndAdobeXdpXml},
    {"application/vnd.aether.imp", Type::Application_VndAetherImp},
    {"application/vnd.afpc.afplinedata", Type::Application_VndAfpcAfplinedata},
    {"application/vnd.afpc.afplinedata-pagedef",
     Type::Application_VndAfpcAfplinedataPagedef},
    {"application/vnd.afpc.cmoca-cmresource",
     Type::Application_VndAfpcCmocaCmresource},
    {"application/vnd.afpc.foca-charset", Type::Application_VndAfpcFocaCharset},
    {"application/vnd.afpc.foca-codedfont",
     Type::Application_VndAfpcFocaCodedfont},
    {"application/vnd.afpc.foca-codepage",
     Type::Application_VndAfpcFocaCodepage},
    {"application/vnd.afpc.modca", Type::Application_VndAfpcModca},
    {"application/vnd.afpc.modca-cmtable",
     Type::Application_VndAfpcModcaCmtable},
    {"application/vnd.afpc.modca-formdef",
     Type::Application_VndAfpcModcaFormdef},
    {"application/vnd.afpc.modca-mediummap",
     Type::Application_VndAfpcModcaMediummap},
    {"application/vnd.afpc.modca-objectcontainer",
     Type::Application_VndAfpcModcaObjectcontainer},
    {"application/vnd.afpc.modca-overlay",
     Type::Application_VndAfpcModcaOverlay},
    {"application/vnd.afpc.modca-pagesegment",
     Type::Application_VndAfpcModcaPagesegment},
    {"application/vnd.age", Type::Application_VndAge},
    {"application/vnd.ah-barcode", Type::Application_VndAhBarcode},
    {"application/vnd.ahead.space", Type::Application_VndAheadSpace},
    {"application/vnd.airzip.filesecure.azf",
     Type::Application_VndAirzipFilesecureAzf},
    {"application/vnd.airzip.filesecure.azs",
     Type::Application_VndAirzipFilesecureAzs},
    {"application/vnd.amadeus+json", Type::Application_VndAmadeusJson},
    {"application/vnd.amazon.mobi8-ebook",
     Type::Application_VndAmazonMobi8Ebook},
    {"application/vnd.americandynamics.acc",
     Type::Application_VndAmericandynamicsAcc},
    {"application/vnd.amiga.ami", Type::Application_VndAmigaAmi},
    {"application/vnd.amundsen.maze+xml", Type::Application_VndAmundsenMazeXml},
    {"application/vnd.android.ota", Type::Application_VndAndroidOta},
    {"application/vnd.anki", Type::Application_VndAnki},
    {"application/vnd.anser-web-certificate-issue-initiation",
     Type::Application_VndAnserWebCertificateIssueInitiation},
    {"application/vnd.antix.game-component",
     Type::Application_VndAntixGameComponent},
    {"application/vnd.apache.arrow.file", Type::Application_VndApacheArrowFile},
    {"application/vnd.apache.arrow.stream",
     Type::Application_VndApacheArrowStream},
    {"application/vnd.apache.parquet", Type::Application_VndApacheParquet},
    {"application/vnd.apache.thrift.binary",
     Type::Application_VndApacheThriftBinary},
    {"application/vnd.apache.thrift.compact",
     Type::Application_VndApacheThriftCompact},
    {"application/vnd.apache.thrift.json",
     Type::Application_VndApacheThriftJson},
    {"application/vnd.apexlang", Type::Application_VndApexlang},
    {"application/vnd.api+json", Type::Application_VndApiJson},
    {"application/vnd.aplextor.warrp+json",
     Type::Application_VndAplextorWarrpJson},
    {"application/vnd.apothekende.reservation+json",
     Type::Application_VndApothekendeReservationJson},
    {"application/vnd.apple.installer+xml",
     Type::Application_VndAppleInstallerXml},
    {"application/vnd.apple.keynote", Type::Application_VndAppleKeynote},
    {"application/vnd.apple.mpegurl", Type::Application_VndAppleMpegurl},
    {"application/vnd.apple.numbers", Type::Application_VndAppleNumbers},
    {"application/vnd.apple.pages", Type::Application_VndApplePages},
    {"application/vnd.arastra.swi", Type::Application_VndArastraSwi},
    {"application/vnd.aristanetworks.swi",
     Type::Application_VndAristanetworksSwi},
    {"application/vnd.artisan+json", Type::Application_VndArtisanJson},
    {"application/vnd.artsquare", Type::Application_VndArtsquare},
    {"application/vnd.astraea-software.iota",
     Type::Application_VndAstraeaSoftwareIota},
    {"application/vnd.audiograph", Type::Application_VndAudiograph},
    {"application/vnd.autopackage", Type::Application_VndAutopackage},
    {"application/vnd.avalon+json", Type::Application_VndAvalonJson},
    {"application/vnd.avistar+xml", Type::Application_VndAvistarXml},
    {"application/vnd.balsamiq.bmml+xml", Type::Application_VndBalsamiqBmmlXml},
    {"application/vnd.banana-accounting",
     Type::Application_VndBananaAccounting},
    {"application/vnd.bbf.usp.error", Type::Application_VndBbfUspError},
    {"application/vnd.bbf.usp.msg", Type::Application_VndBbfUspMsg},
    {"application/vnd.bbf.usp.msg+json", Type::Application_VndBbfUspMsgJson},
    {"application/vnd.balsamiq.bmpr", Type::Application_VndBalsamiqBmpr},
    {"application/vnd.bekitzur-stech+json",
     Type::Application_VndBekitzurStechJson},
    {"application/vnd.belightsoft.lhzd+zip",
     Type::Application_VndBelightsoftLhzdZip},
    {"application/vnd.belightsoft.lhzl+zip",
     Type::Application_VndBelightsoftLhzlZip},
    {"application/vnd.bint.med-content", Type::Application_VndBintMedContent},
    {"application/vnd.biopax.rdf+xml", Type::Application_VndBiopaxRdfXml},
    {"application/vnd.blink-idb-value-wrapper",
     Type::Application_VndBlinkIdbValueWrapper},
    {"application/vnd.blueice.multipass",
     Type::Application_VndBlueiceMultipass},
    {"application/vnd.bluetooth.ep.oob", Type::Application_VndBluetoothEpOob},
    {"application/vnd.bluetooth.le.oob", Type::Application_VndBluetoothLeOob},
    {"application/vnd.bmi", Type::Application_VndBmi},
    {"application/vnd.bpf", Type::Application_VndBpf},
    {"application/vnd.bpf3", Type::Application_VndBpf3},
    {"application/vnd.businessobjects", Type::Application_VndBusinessobjects},
    {"application/vnd.byu.uapi+json", Type::Application_VndByuUapiJson},
    {"application/vnd.bzip3", Type::Application_VndBzip3},
    {"application/vnd.c3voc.schedule+xml",
     Type::Application_VndC3vocScheduleXml},
    {"application/vnd.cab-jscript", Type::Application_VndCabJscript},
    {"application/vnd.canon-cpdl", Type::Application_VndCanonCpdl},
    {"application/vnd.canon-lips", Type::Application_VndCanonLips},
    {"application/vnd.capasystems-pg+json",
     Type::Application_VndCapasystemsPgJson},
    {"application/vnd.cendio.thinlinc.clientconf",
     Type::Application_VndCendioThinlincClientconf},
    {"application/vnd.century-systems.tcp_stream",
     Type::Application_VndCenturySystemsTcpStream},
    {"application/vnd.chemdraw+xml", Type::Application_VndChemdrawXml},
    {"application/vnd.chess-pgn", Type::Application_VndChessPgn},
    {"application/vnd.chipnuts.karaoke-mmd",
     Type::Application_VndChipnutsKaraokeMmd},
    {"application/vnd.ciedi", Type::Application_VndCiedi},
    {"application/vnd.cinderella", Type::Application_VndCinderella},
    {"application/vnd.cirpack.isdn-ext", Type::Application_VndCirpackIsdnExt},
    {"application/vnd.citationstyles.style+xml",
     Type::Application_VndCitationstylesStyleXml},
    {"application/vnd.claymore", Type::Application_VndClaymore},
    {"application/vnd.cloanto.rp9", Type::Application_VndCloantoRp9},
    {"application/vnd.clonk.c4group", Type::Application_VndClonkC4group},
    {"application/vnd.cluetrust.cartomobile-config",
     Type::Application_VndCluetrustCartomobileConfig},
    {"application/vnd.cluetrust.cartomobile-config-pkg",
     Type::Application_VndCluetrustCartomobileConfigPkg},
    {"application/vnd.cncf.helm.chart.content.v1.tar+gzip",
     Type::Application_VndCncfHelmChartContentV1TarGzip},
    {"application/vnd.cncf.helm.chart.provenance.v1.prov",
     Type::Application_VndCncfHelmChartProvenanceV1Prov},
    {"application/vnd.cncf.helm.config.v1+json",
     Type::Application_VndCncfHelmConfigV1Json},
    {"application/vnd.coffeescript", Type::Application_VndCoffeescript},
    {"application/vnd.collabio.xodocuments.document",
     Type::Application_VndCollabioXodocumentsDocument},
    {"application/vnd.collabio.xodocuments.document-template",
     Type::Application_VndCollabioXodocumentsDocumentTemplate},
    {"application/vnd.collabio.xodocuments.presentation",
     Type::Application_VndCollabioXodocumentsPresentation},
    {"application/vnd.collabio.xodocuments.presentation-template",
     Type::Application_VndCollabioXodocumentsPresentationTemplate},
    {"application/vnd.collabio.xodocuments.spreadsheet",
     Type::Application_VndCollabioXodocumentsSpreadsheet},
    {"application/vnd.collabio.xodocuments.spreadsheet-template",
     Type::Application_VndCollabioXodocumentsSpreadsheetTemplate},
    {"application/vnd.collection.doc+json",
     Type::Application_VndCollectionDocJson},
    {"application/vnd.collection+json", Type::Application_VndCollectionJson},
    {"application/vnd.collection.next+json",
     Type::Application_VndCollectionNextJson},
    {"application/vnd.comicbook-rar", Type::Application_VndComicbookRar},
    {"application/vnd.comicbook+zip", Type::Application_VndComicbookZip},
    {"application/vnd.commerce-battelle",
     Type::Application_VndCommerceBattelle},
    {"application/vnd.commonspace", Type::Application_VndCommonspace},
    {"application/vnd.coreos.ignition+json",
     Type::Application_VndCoreosIgnitionJson},
    {"application/vnd.cosmocaller", Type::Application_VndCosmocaller},
    {"application/vnd.contact.cmsg", Type::Application_VndContactCmsg},
    {"application/vnd.crick.clicker", Type::Application_VndCrickClicker},
    {"application/vnd.crick.clicker.keyboard",
     Type::Application_VndCrickClickerKeyboard},
    {"application/vnd.crick.clicker.palette",
     Type::Application_VndCrickClickerPalette},
    {"application/vnd.crick.clicker.template",
     Type::Application_VndCrickClickerTemplate},
    {"application/vnd.crick.clicker.wordbank",
     Type::Application_VndCrickClickerWordbank},
    {"application/vnd.criticaltools.wbs+xml",
     Type::Application_VndCriticaltoolsWbsXml},
    {"application/vnd.cryptii.pipe+json", Type::Application_VndCryptiiPipeJson},
    {"application/vnd.crypto-shade-file", Type::Application_VndCryptoShadeFile},
    {"application/vnd.cryptomator.encrypted",
     Type::Application_VndCryptomatorEncrypted},
    {"application/vnd.cryptomator.vault",
     Type::Application_VndCryptomatorVault},
    {"application/vnd.ctc-posml", Type::Application_VndCtcPosml},
    {"application/vnd.ctct.ws+xml", Type::Application_VndCtctWsXml},
    {"application/vnd.cups-pdf", Type::Application_VndCupsPdf},
    {"application/vnd.cups-postscript", Type::Application_VndCupsPostscript},
    {"application/vnd.cups-ppd", Type::Application_VndCupsPpd},
    {"application/vnd.cups-raster", Type::Application_VndCupsRaster},
    {"application/vnd.cups-raw", Type::Application_VndCupsRaw},
    {"application/vnd.curl", Type::Application_VndCurl},
    {"application/vnd.cyan.dean.root+xml",
     Type::Application_VndCyanDeanRootXml},
    {"application/vnd.cybank", Type::Application_VndCybank},
    {"application/vnd.cyclonedx+json", Type::Application_VndCyclonedxJson},
    {"application/vnd.cyclonedx+xml", Type::Application_VndCyclonedxXml},
    {"application/vnd.d2l.coursepackage1p0+zip",
     Type::Application_VndD2lCoursepackage1p0Zip},
    {"application/vnd.d3m-dataset", Type::Application_VndD3mDataset},
    {"application/vnd.d3m-problem", Type::Application_VndD3mProblem},
    {"application/vnd.dart", Type::Application_VndDart},
    {"application/vnd.data-vision.rdz", Type::Application_VndDataVisionRdz},
    {"application/vnd.datalog", Type::Application_VndDatalog},
    {"application/vnd.datapackage+json", Type::Application_VndDatapackageJson},
    {"application/vnd.dataresource+json",
     Type::Application_VndDataresourceJson},
    {"application/vnd.dbf", Type::Application_VndDbf},
    {"application/vnd.debian.binary-package",
     Type::Application_VndDebianBinaryPackage},
    {"application/vnd.dece.data", Type::Application_VndDeceData},
    {"application/vnd.dece.ttml+xml", Type::Application_VndDeceTtmlXml},
    {"application/vnd.dece.unspecified", Type::Application_VndDeceUnspecified},
    {"application/vnd.dece.zip", Type::Application_VndDeceZip},
    {"application/vnd.denovo.fcselayout-link",
     Type::Application_VndDenovoFcselayoutLink},
    {"application/vnd.desmume.movie", Type::Application_VndDesmumeMovie},
    {"application/vnd.dir-bi.plate-dl-nosuffix",
     Type::Application_VndDirBiPlateDlNosuffix},
    {"application/vnd.dm.delegation+xml", Type::Application_VndDmDelegationXml},
    {"application/vnd.dna", Type::Application_VndDna},
    {"application/vnd.document+json", Type::Application_VndDocumentJson},
    {"application/vnd.dolby.mobile.1", Type::Application_VndDolbyMobile1},
    {"application/vnd.dolby.mobile.2", Type::Application_VndDolbyMobile2},
    {"application/vnd.doremir.scorecloud-binary-document",
     Type::Application_VndDoremirScorecloudBinaryDocument},
    {"application/vnd.dpgraph", Type::Application_VndDpgraph},
    {"application/vnd.dreamfactory", Type::Application_VndDreamfactory},
    {"application/vnd.drive+json", Type::Application_VndDriveJson},
    {"application/vnd.dtg.local", Type::Application_VndDtgLocal},
    {"application/vnd.dtg.local.flash", Type::Application_VndDtgLocalFlash},
    {"application/vnd.dtg.local.html", Type::Application_VndDtgLocalHtml},
    {"application/vnd.dvb.ait", Type::Application_VndDvbAit},
    {"application/vnd.dvb.dvbisl+xml", Type::Application_VndDvbDvbislXml},
    {"application/vnd.dvb.dvbj", Type::Application_VndDvbDvbj},
    {"application/vnd.dvb.esgcontainer", Type::Application_VndDvbEsgcontainer},
    {"application/vnd.dvb.ipdcdftnotifaccess",
     Type::Application_VndDvbIpdcdftnotifaccess},
    {"application/vnd.dvb.ipdcesgaccess",
     Type::Application_VndDvbIpdcesgaccess},
    {"application/vnd.dvb.ipdcesgaccess2",
     Type::Application_VndDvbIpdcesgaccess2},
    {"application/vnd.dvb.ipdcesgpdd", Type::Application_VndDvbIpdcesgpdd},
    {"application/vnd.dvb.ipdcroaming", Type::Application_VndDvbIpdcroaming},
    {"application/vnd.dvb.iptv.alfec-base",
     Type::Application_VndDvbIptvAlfecBase},
    {"application/vnd.dvb.iptv.alfec-enhancement",
     Type::Application_VndDvbIptvAlfecEnhancement},
    {"application/vnd.dvb.notif-aggregate-root+xml",
     Type::Application_VndDvbNotifAggregateRootXml},
    {"application/vnd.dvb.notif-container+xml",
     Type::Application_VndDvbNotifContainerXml},
    {"application/vnd.dvb.notif-generic+xml",
     Type::Application_VndDvbNotifGenericXml},
    {"application/vnd.dvb.notif-ia-msglist+xml",
     Type::Application_VndDvbNotifIaMsglistXml},
    {"application/vnd.dvb.notif-ia-registration-request+xml",
     Type::Application_VndDvbNotifIaRegistrationRequestXml},
    {"application/vnd.dvb.notif-ia-registration-response+xml",
     Type::Application_VndDvbNotifIaRegistrationResponseXml},
    {"application/vnd.dvb.notif-init+xml",
     Type::Application_VndDvbNotifInitXml},
    {"application/vnd.dvb.pfr", Type::Application_VndDvbPfr},
    {"application/vnd.dvb.service", Type::Application_VndDvbService},
    {"application/vnd.dxr", Type::Application_VndDxr},
    {"application/vnd.dynageo", Type::Application_VndDynageo},
    {"application/vnd.dzr", Type::Application_VndDzr},
    {"application/vnd.easykaraoke.cdgdownload",
     Type::Application_VndEasykaraokeCdgdownload},
    {"application/vnd.ecip.rlp", Type::Application_VndEcipRlp},
    {"application/vnd.ecdis-update", Type::Application_VndEcdisUpdate},
    {"application/vnd.eclipse.ditto+json",
     Type::Application_VndEclipseDittoJson},
    {"application/vnd.ecowin.chart", Type::Application_VndEcowinChart},
    {"application/vnd.ecowin.filerequest",
     Type::Application_VndEcowinFilerequest},
    {"application/vnd.ecowin.fileupdate",
     Type::Application_VndEcowinFileupdate},
    {"application/vnd.ecowin.series", Type::Application_VndEcowinSeries},
    {"application/vnd.ecowin.seriesrequest",
     Type::Application_VndEcowinSeriesrequest},
    {"application/vnd.ecowin.seriesupdate",
     Type::Application_VndEcowinSeriesupdate},
    {"application/vnd.efi.img", Type::Application_VndEfiImg},
    {"application/vnd.efi.iso", Type::Application_VndEfiIso},
    {"application/vnd.eln+zip", Type::Application_VndElnZip},
    {"application/vnd.emclient.accessrequest+xml",
     Type::Application_VndEmclientAccessrequestXml},
    {"application/vnd.enliven", Type::Application_VndEnliven},
    {"application/vnd.enphase.envoy", Type::Application_VndEnphaseEnvoy},
    {"application/vnd.eprints.data+xml", Type::Application_VndEprintsDataXml},
    {"application/vnd.epson.esf", Type::Application_VndEpsonEsf},
    {"application/vnd.epson.msf", Type::Application_VndEpsonMsf},
    {"application/vnd.epson.quickanime", Type::Application_VndEpsonQuickanime},
    {"application/vnd.epson.salt", Type::Application_VndEpsonSalt},
    {"application/vnd.epson.ssf", Type::Application_VndEpsonSsf},
    {"application/vnd.ericsson.quickcall",
     Type::Application_VndEricssonQuickcall},
    {"application/vnd.erofs", Type::Application_VndErofs},
    {"application/vnd.espass-espass+zip", Type::Application_VndEspassEspassZip},
    {"application/vnd.eszigno3+xml", Type::Application_VndEszigno3Xml},
    {"application/vnd.etsi.aoc+xml", Type::Application_VndEtsiAocXml},
    {"application/vnd.etsi.asic-s+zip", Type::Application_VndEtsiAsicSZip},
    {"application/vnd.etsi.asic-e+zip", Type::Application_VndEtsiAsicEZip},
    {"application/vnd.etsi.cug+xml", Type::Application_VndEtsiCugXml},
    {"application/vnd.etsi.iptvcommand+xml",
     Type::Application_VndEtsiIptvcommandXml},
    {"application/vnd.etsi.iptvdiscovery+xml",
     Type::Application_VndEtsiIptvdiscoveryXml},
    {"application/vnd.etsi.iptvprofile+xml",
     Type::Application_VndEtsiIptvprofileXml},
    {"application/vnd.etsi.iptvsad-bc+xml",
     Type::Application_VndEtsiIptvsadBcXml},
    {"application/vnd.etsi.iptvsad-cod+xml",
     Type::Application_VndEtsiIptvsadCodXml},
    {"application/vnd.etsi.iptvsad-npvr+xml",
     Type::Application_VndEtsiIptvsadNpvrXml},
    {"application/vnd.etsi.iptvservice+xml",
     Type::Application_VndEtsiIptvserviceXml},
    {"application/vnd.etsi.iptvsync+xml", Type::Application_VndEtsiIptvsyncXml},
    {"application/vnd.etsi.iptvueprofile+xml",
     Type::Application_VndEtsiIptvueprofileXml},
    {"application/vnd.etsi.mcid+xml", Type::Application_VndEtsiMcidXml},
    {"application/vnd.etsi.mheg5", Type::Application_VndEtsiMheg5},
    {"application/vnd.etsi.overload-control-policy-dataset+xml",
     Type::Application_VndEtsiOverloadControlPolicyDatasetXml},
    {"application/vnd.etsi.pstn+xml", Type::Application_VndEtsiPstnXml},
    {"application/vnd.etsi.sci+xml", Type::Application_VndEtsiSciXml},
    {"application/vnd.etsi.simservs+xml", Type::Application_VndEtsiSimservsXml},
    {"application/vnd.etsi.timestamp-token",
     Type::Application_VndEtsiTimestampToken},
    {"application/vnd.etsi.tsl+xml", Type::Application_VndEtsiTslXml},
    {"application/vnd.etsi.tsl.der", Type::Application_VndEtsiTslDer},
    {"application/vnd.eu.kasparian.car+json",
     Type::Application_VndEuKasparianCarJson},
    {"application/vnd.eudora.data", Type::Application_VndEudoraData},
    {"application/vnd.evolv.ecig.profile",
     Type::Application_VndEvolvEcigProfile},
    {"application/vnd.evolv.ecig.settings",
     Type::Application_VndEvolvEcigSettings},
    {"application/vnd.evolv.ecig.theme", Type::Application_VndEvolvEcigTheme},
    {"application/vnd.exstream-empower+zip",
     Type::Application_VndExstreamEmpowerZip},
    {"application/vnd.exstream-package", Type::Application_VndExstreamPackage},
    {"application/vnd.ezpix-album", Type::Application_VndEzpixAlbum},
    {"application/vnd.ezpix-package", Type::Application_VndEzpixPackage},
    {"application/vnd.f-secure.mobile", Type::Application_VndFSecureMobile},
    {"application/vnd.fastcopy-disk-image",
     Type::Application_VndFastcopyDiskImage},
    {"application/vnd.familysearch.gedcom+zip",
     Type::Application_VndFamilysearchGedcomZip},
    {"application/vnd.fdsn.mseed", Type::Application_VndFdsnMseed},
    {"application/vnd.fdsn.seed", Type::Application_VndFdsnSeed},
    {"application/vnd.ffsns", Type::Application_VndFfsns},
    {"application/vnd.ficlab.flb+zip", Type::Application_VndFiclabFlbZip},
    {"application/vnd.filmit.zfc", Type::Application_VndFilmitZfc},
    {"application/vnd.fints", Type::Application_VndFints},
    {"application/vnd.firemonkeys.cloudcell",
     Type::Application_VndFiremonkeysCloudcell},
    {"application/vnd.FloGraphIt", Type::Application_VndFloGraphIt},
    {"application/vnd.fluxtime.clip", Type::Application_VndFluxtimeClip},
    {"application/vnd.font-fontforge-sfd",
     Type::Application_VndFontFontforgeSfd},
    {"application/vnd.framemaker", Type::Application_VndFramemaker},
    {"application/vnd.freelog.comic", Type::Application_VndFreelogComic},
    {"application/vnd.frogans.fnc", Type::Application_VndFrogansFnc},
    {"application/vnd.frogans.ltf", Type::Application_VndFrogansLtf},
    {"application/vnd.fsc.weblaunch", Type::Application_VndFscWeblaunch},
    {"application/vnd.fujifilm.fb.docuworks",
     Type::Application_VndFujifilmFbDocuworks},
    {"application/vnd.fujifilm.fb.docuworks.binder",
     Type::Application_VndFujifilmFbDocuworksBinder},
    {"application/vnd.fujifilm.fb.docuworks.container",
     Type::Application_VndFujifilmFbDocuworksContainer},
    {"application/vnd.fujifilm.fb.jfi+xml",
     Type::Application_VndFujifilmFbJfiXml},
    {"application/vnd.fujitsu.oasys", Type::Application_VndFujitsuOasys},
    {"application/vnd.fujitsu.oasys2", Type::Application_VndFujitsuOasys2},
    {"application/vnd.fujitsu.oasys3", Type::Application_VndFujitsuOasys3},
    {"application/vnd.fujitsu.oasysgp", Type::Application_VndFujitsuOasysgp},
    {"application/vnd.fujitsu.oasysprs", Type::Application_VndFujitsuOasysprs},
    {"application/vnd.fujixerox.ART4", Type::Application_VndFujixeroxART4},
    {"application/vnd.fujixerox.ART-EX", Type::Application_VndFujixeroxARTEX},
    {"application/vnd.fujixerox.ddd", Type::Application_VndFujixeroxDdd},
    {"application/vnd.fujixerox.docuworks",
     Type::Application_VndFujixeroxDocuworks},
    {"application/vnd.fujixerox.docuworks.binder",
     Type::Application_VndFujixeroxDocuworksBinder},
    {"application/vnd.fujixerox.docuworks.container",
     Type::Application_VndFujixeroxDocuworksContainer},
    {"application/vnd.fujixerox.HBPL", Type::Application_VndFujixeroxHBPL},
    {"application/vnd.fut-misnet", Type::Application_VndFutMisnet},
    {"application/vnd.futoin+cbor", Type::Application_VndFutoinCbor},
    {"application/vnd.futoin+json", Type::Application_VndFutoinJson},
    {"application/vnd.fuzzysheet", Type::Application_VndFuzzysheet},
    {"application/vnd.ga4gh.passport+jwt",
     Type::Application_VndGa4ghPassportJwt},
    {"application/vnd.genomatix.tuxedo", Type::Application_VndGenomatixTuxedo},
    {"application/vnd.genozip", Type::Application_VndGenozip},
    {"application/vnd.gentics.grd+json", Type::Application_VndGenticsGrdJson},
    {"application/vnd.gentoo.catmetadata+xml",
     Type::Application_VndGentooCatmetadataXml},
    {"application/vnd.gentoo.ebuild", Type::Application_VndGentooEbuild},
    {"application/vnd.gentoo.eclass", Type::Application_VndGentooEclass},
    {"application/vnd.gentoo.gpkg", Type::Application_VndGentooGpkg},
    {"application/vnd.gentoo.manifest", Type::Application_VndGentooManifest},
    {"application/vnd.gentoo.xpak", Type::Application_VndGentooXpak},
    {"application/vnd.gentoo.pkgmetadata+xml",
     Type::Application_VndGentooPkgmetadataXml},
    {"application/vnd.geo+json", Type::Application_VndGeoJson},
    {"application/vnd.geocube+xml", Type::Application_VndGeocubeXml},
    {"application/vnd.geogebra.file", Type::Application_VndGeogebraFile},
    {"application/vnd.geogebra.slides", Type::Application_VndGeogebraSlides},
    {"application/vnd.geogebra.tool", Type::Application_VndGeogebraTool},
    {"application/vnd.geometry-explorer",
     Type::Application_VndGeometryExplorer},
    {"application/vnd.geonext", Type::Application_VndGeonext},
    {"application/vnd.geoplan", Type::Application_VndGeoplan},
    {"application/vnd.geospace", Type::Application_VndGeospace},
    {"application/vnd.gerber", Type::Application_VndGerber},
    {"application/vnd.globalplatform.card-content-mgt",
     Type::Application_VndGlobalplatformCardContentMgt},
    {"application/vnd.globalplatform.card-content-mgt-response",
     Type::Application_VndGlobalplatformCardContentMgtResponse},
    {"application/vnd.gmx", Type::Application_VndGmx},
    {"application/vnd.gnu.taler.exchange+json",
     Type::Application_VndGnuTalerExchangeJson},
    {"application/vnd.gnu.taler.merchant+json",
     Type::Application_VndGnuTalerMerchantJson},
    {"application/vnd.google-earth.kml+xml",
     Type::Application_VndGoogleEarthKmlXml},
    {"application/vnd.google-earth.kmz", Type::Application_VndGoogleEarthKmz},
    {"application/vnd.gov.sk.e-form+xml", Type::Application_VndGovSkEFormXml},
    {"application/vnd.gov.sk.e-form+zip", Type::Application_VndGovSkEFormZip},
    {"application/vnd.gov.sk.xmldatacontainer+xml",
     Type::Application_VndGovSkXmldatacontainerXml},
    {"application/vnd.gpxsee.map+xml", Type::Application_VndGpxseeMapXml},
    {"application/vnd.grafeq", Type::Application_VndGrafeq},
    {"application/vnd.gridmp", Type::Application_VndGridmp},
    {"application/vnd.groove-account", Type::Application_VndGrooveAccount},
    {"application/vnd.groove-help", Type::Application_VndGrooveHelp},
    {"application/vnd.groove-identity-message",
     Type::Application_VndGrooveIdentityMessage},
    {"application/vnd.groove-injector", Type::Application_VndGrooveInjector},
    {"application/vnd.groove-tool-message",
     Type::Application_VndGrooveToolMessage},
    {"application/vnd.groove-tool-template",
     Type::Application_VndGrooveToolTemplate},
    {"application/vnd.groove-vcard", Type::Application_VndGrooveVcard},
    {"application/vnd.hal+json", Type::Application_VndHalJson},
    {"application/vnd.hal+xml", Type::Application_VndHalXml},
    {"application/vnd.HandHeld-Entertainment+xml",
     Type::Application_VndHandHeldEntertainmentXml},
    {"application/vnd.hbci", Type::Application_VndHbci},
    {"application/vnd.hc+json", Type::Application_VndHcJson},
    {"application/vnd.hcl-bireports", Type::Application_VndHclBireports},
    {"application/vnd.hdt", Type::Application_VndHdt},
    {"application/vnd.heroku+json", Type::Application_VndHerokuJson},
    {"application/vnd.hhe.lesson-player", Type::Application_VndHheLessonPlayer},
    {"application/vnd.hp-HPGL", Type::Application_VndHpHPGL},
    {"application/vnd.hp-hpid", Type::Application_VndHpHpid},
    {"application/vnd.hp-hps", Type::Application_VndHpHps},
    {"application/vnd.hp-jlyt", Type::Application_VndHpJlyt},
    {"application/vnd.hp-PCL", Type::Application_VndHpPCL},
    {"application/vnd.hp-PCLXL", Type::Application_VndHpPCLXL},
    {"application/vnd.hsl", Type::Application_VndHsl},
    {"application/vnd.httphone", Type::Application_VndHttphone},
    {"application/vnd.hydrostatix.sof-data",
     Type::Application_VndHydrostatixSofData},
    {"application/vnd.hyper-item+json", Type::Application_VndHyperItemJson},
    {"application/vnd.hyper+json", Type::Application_VndHyperJson},
    {"application/vnd.hyperdrive+json", Type::Application_VndHyperdriveJson},
    {"application/vnd.hzn-3d-crossword", Type::Application_VndHzn3dCrossword},
    {"application/vnd.ibm.afplinedata", Type::Application_VndIbmAfplinedata},
    {"application/vnd.ibm.electronic-media",
     Type::Application_VndIbmElectronicMedia},
    {"application/vnd.ibm.MiniPay", Type::Application_VndIbmMiniPay},
    {"application/vnd.ibm.modcap", Type::Application_VndIbmModcap},
    {"application/vnd.ibm.rights-management",
     Type::Application_VndIbmRightsManagement},
    {"application/vnd.ibm.secure-container",
     Type::Application_VndIbmSecureContainer},
    {"application/vnd.iccprofile", Type::Application_VndIccprofile},
    {"application/vnd.ieee.1905", Type::Application_VndIeee1905},
    {"application/vnd.igloader", Type::Application_VndIgloader},
    {"application/vnd.imagemeter.folder+zip",
     Type::Application_VndImagemeterFolderZip},
    {"application/vnd.imagemeter.image+zip",
     Type::Application_VndImagemeterImageZip},
    {"application/vnd.immervision-ivp", Type::Application_VndImmervisionIvp},
    {"application/vnd.immervision-ivu", Type::Application_VndImmervisionIvu},
    {"application/vnd.ims.imsccv1p1", Type::Application_VndImsImsccv1p1},
    {"application/vnd.ims.imsccv1p2", Type::Application_VndImsImsccv1p2},
    {"application/vnd.ims.imsccv1p3", Type::Application_VndImsImsccv1p3},
    {"application/vnd.ims.lis.v2.result+json",
     Type::Application_VndImsLisV2ResultJson},
    {"application/vnd.ims.lti.v2.toolconsumerprofile+json",
     Type::Application_VndImsLtiV2ToolconsumerprofileJson},
    {"application/vnd.ims.lti.v2.toolproxy.id+json",
     Type::Application_VndImsLtiV2ToolproxyIdJson},
    {"application/vnd.ims.lti.v2.toolproxy+json",
     Type::Application_VndImsLtiV2ToolproxyJson},
    {"application/vnd.ims.lti.v2.toolsettings+json",
     Type::Application_VndImsLtiV2ToolsettingsJson},
    {"application/vnd.ims.lti.v2.toolsettings.simple+json",
     Type::Application_VndImsLtiV2ToolsettingsSimpleJson},
    {"application/vnd.informedcontrol.rms+xml",
     Type::Application_VndInformedcontrolRmsXml},
    {"application/vnd.infotech.project", Type::Application_VndInfotechProject},
    {"application/vnd.infotech.project+xml",
     Type::Application_VndInfotechProjectXml},
    {"application/vnd.informix-visionary",
     Type::Application_VndInformixVisionary},
    {"application/vnd.innopath.wamp.notification",
     Type::Application_VndInnopathWampNotification},
    {"application/vnd.insors.igm", Type::Application_VndInsorsIgm},
    {"application/vnd.intercon.formnet", Type::Application_VndInterconFormnet},
    {"application/vnd.intergeo", Type::Application_VndIntergeo},
    {"application/vnd.intertrust.digibox",
     Type::Application_VndIntertrustDigibox},
    {"application/vnd.intertrust.nncp", Type::Application_VndIntertrustNncp},
    {"application/vnd.intu.qbo", Type::Application_VndIntuQbo},
    {"application/vnd.intu.qfx", Type::Application_VndIntuQfx},
    {"application/vnd.ipfs.ipns-record", Type::Application_VndIpfsIpnsRecord},
    {"application/vnd.ipld.car", Type::Application_VndIpldCar},
    {"application/vnd.ipld.dag-cbor", Type::Application_VndIpldDagCbor},
    {"application/vnd.ipld.dag-json", Type::Application_VndIpldDagJson},
    {"application/vnd.ipld.raw", Type::Application_VndIpldRaw},
    {"application/vnd.iptc.g2.catalogitem+xml",
     Type::Application_VndIptcG2CatalogitemXml},
    {"application/vnd.iptc.g2.conceptitem+xml",
     Type::Application_VndIptcG2ConceptitemXml},
    {"application/vnd.iptc.g2.knowledgeitem+xml",
     Type::Application_VndIptcG2KnowledgeitemXml},
    {"application/vnd.iptc.g2.newsitem+xml",
     Type::Application_VndIptcG2NewsitemXml},
    {"application/vnd.iptc.g2.newsmessage+xml",
     Type::Application_VndIptcG2NewsmessageXml},
    {"application/vnd.iptc.g2.packageitem+xml",
     Type::Application_VndIptcG2PackageitemXml},
    {"application/vnd.iptc.g2.planningitem+xml",
     Type::Application_VndIptcG2PlanningitemXml},
    {"application/vnd.ipunplugged.rcprofile",
     Type::Application_VndIpunpluggedRcprofile},
    {"application/vnd.irepository.package+xml",
     Type::Application_VndIrepositoryPackageXml},
    {"application/vnd.is-xpr", Type::Application_VndIsXpr},
    {"application/vnd.isac.fcs", Type::Application_VndIsacFcs},
    {"application/vnd.jam", Type::Application_VndJam},
    {"application/vnd.iso11783-10+zip", Type::Application_VndIso1178310Zip},
    {"application/vnd.japannet-directory-service",
     Type::Application_VndJapannetDirectoryService},
    {"application/vnd.japannet-jpnstore-wakeup",
     Type::Application_VndJapannetJpnstoreWakeup},
    {"application/vnd.japannet-payment-wakeup",
     Type::Application_VndJapannetPaymentWakeup},
    {"application/vnd.japannet-registration",
     Type::Application_VndJapannetRegistration},
    {"application/vnd.japannet-registration-wakeup",
     Type::Application_VndJapannetRegistrationWakeup},
    {"application/vnd.japannet-setstore-wakeup",
     Type::Application_VndJapannetSetstoreWakeup},
    {"application/vnd.japannet-verification",
     Type::Application_VndJapannetVerification},
    {"application/vnd.japannet-verification-wakeup",
     Type::Application_VndJapannetVerificationWakeup},
    {"application/vnd.jcp.javame.midlet-rms",
     Type::Application_VndJcpJavameMidletRms},
    {"application/vnd.jisp", Type::Application_VndJisp},
    {"application/vnd.joost.joda-archive",
     Type::Application_VndJoostJodaArchive},
    {"application/vnd.jsk.isdn-ngn", Type::Application_VndJskIsdnNgn},
    {"application/vnd.kahootz", Type::Application_VndKahootz},
    {"application/vnd.kde.karbon", Type::Application_VndKdeKarbon},
    {"application/vnd.kde.kchart", Type::Application_VndKdeKchart},
    {"application/vnd.kde.kformula", Type::Application_VndKdeKformula},
    {"application/vnd.kde.kivio", Type::Application_VndKdeKivio},
    {"application/vnd.kde.kontour", Type::Application_VndKdeKontour},
    {"application/vnd.kde.kpresenter", Type::Application_VndKdeKpresenter},
    {"application/vnd.kde.kspread", Type::Application_VndKdeKspread},
    {"application/vnd.kde.kword", Type::Application_VndKdeKword},
    {"application/vnd.kenameaapp", Type::Application_VndKenameaapp},
    {"application/vnd.kidspiration", Type::Application_VndKidspiration},
    {"application/vnd.Kinar", Type::Application_VndKinar},
    {"application/vnd.koan", Type::Application_VndKoan},
    {"application/vnd.kodak-descriptor", Type::Application_VndKodakDescriptor},
    {"application/vnd.las", Type::Application_VndLas},
    {"application/vnd.las.las+json", Type::Application_VndLasLasJson},
    {"application/vnd.las.las+xml", Type::Application_VndLasLasXml},
    {"application/vnd.laszip", Type::Application_VndLaszip},
    {"application/vnd.ldev.productlicensing",
     Type::Application_VndLdevProductlicensing},
    {"application/vnd.leap+json", Type::Application_VndLeapJson},
    {"application/vnd.liberty-request+xml",
     Type::Application_VndLibertyRequestXml},
    {"application/vnd.llamagraphics.life-balance.desktop",
     Type::Application_VndLlamagraphicsLifeBalanceDesktop},
    {"application/vnd.llamagraphics.life-balance.exchange+xml",
     Type::Application_VndLlamagraphicsLifeBalanceExchangeXml},
    {"application/vnd.logipipe.circuit+zip",
     Type::Application_VndLogipipeCircuitZip},
    {"application/vnd.loom", Type::Application_VndLoom},
    {"application/vnd.lotus-1-2-3", Type::Application_VndLotus123},
    {"application/vnd.lotus-approach", Type::Application_VndLotusApproach},
    {"application/vnd.lotus-freelance", Type::Application_VndLotusFreelance},
    {"application/vnd.lotus-notes", Type::Application_VndLotusNotes},
    {"application/vnd.lotus-organizer", Type::Application_VndLotusOrganizer},
    {"application/vnd.lotus-screencam", Type::Application_VndLotusScreencam},
    {"application/vnd.lotus-wordpro", Type::Application_VndLotusWordpro},
    {"application/vnd.macports.portpkg", Type::Application_VndMacportsPortpkg},
    {"application/vnd.mapbox-vector-tile",
     Type::Application_VndMapboxVectorTile},
    {"application/vnd.marlin.drm.actiontoken+xml",
     Type::Application_VndMarlinDrmActiontokenXml},
    {"application/vnd.marlin.drm.conftoken+xml",
     Type::Application_VndMarlinDrmConftokenXml},
    {"application/vnd.marlin.drm.license+xml",
     Type::Application_VndMarlinDrmLicenseXml},
    {"application/vnd.marlin.drm.mdcf", Type::Application_VndMarlinDrmMdcf},
    {"application/vnd.mason+json", Type::Application_VndMasonJson},
    {"application/vnd.maxar.archive.3tz+zip",
     Type::Application_VndMaxarArchive3tzZip},
    {"application/vnd.maxmind.maxmind-db",
     Type::Application_VndMaxmindMaxmindDb},
    {"application/vnd.mcd", Type::Application_VndMcd},
    {"application/vnd.mdl", Type::Application_VndMdl},
    {"application/vnd.mdl-mbsdf", Type::Application_VndMdlMbsdf},
    {"application/vnd.medcalcdata", Type::Application_VndMedcalcdata},
    {"application/vnd.mediastation.cdkey",
     Type::Application_VndMediastationCdkey},
    {"application/vnd.medicalholodeck.recordxr",
     Type::Application_VndMedicalholodeckRecordxr},
    {"application/vnd.meridian-slingshot",
     Type::Application_VndMeridianSlingshot},
    {"application/vnd.mermaid", Type::Application_VndMermaid},
    {"application/vnd.MFER", Type::Application_VndMFER},
    {"application/vnd.mfmp", Type::Application_VndMfmp},
    {"application/vnd.micro+json", Type::Application_VndMicroJson},
    {"application/vnd.micrografx.flo", Type::Application_VndMicrografxFlo},
    {"application/vnd.micrografx.igx", Type::Application_VndMicrografxIgx},
    {"application/vnd.microsoft.portable-executable",
     Type::Application_VndMicrosoftPortableExecutable},
    {"application/vnd.microsoft.windows.thumbnail-cache",
     Type::Application_VndMicrosoftWindowsThumbnailCache},
    {"application/vnd.miele+json", Type::Application_VndMieleJson},
    {"application/vnd.mif", Type::Application_VndMif},
    {"application/vnd.minisoft-hp3000-save",
     Type::Application_VndMinisoftHp3000Save},
    {"application/vnd.mitsubishi.misty-guard.trustweb",
     Type::Application_VndMitsubishiMistyGuardTrustweb},
    {"application/vnd.Mobius.DAF", Type::Application_VndMobiusDAF},
    {"application/vnd.Mobius.DIS", Type::Application_VndMobiusDIS},
    {"application/vnd.Mobius.MBK", Type::Application_VndMobiusMBK},
    {"application/vnd.Mobius.MQY", Type::Application_VndMobiusMQY},
    {"application/vnd.Mobius.MSL", Type::Application_VndMobiusMSL},
    {"application/vnd.Mobius.PLC", Type::Application_VndMobiusPLC},
    {"application/vnd.Mobius.TXF", Type::Application_VndMobiusTXF},
    {"application/vnd.modl", Type::Application_VndModl},
    {"application/vnd.mophun.application",
     Type::Application_VndMophunApplication},
    {"application/vnd.mophun.certificate",
     Type::Application_VndMophunCertificate},
    {"application/vnd.motorola.flexsuite",
     Type::Application_VndMotorolaFlexsuite},
    {"application/vnd.motorola.flexsuite.adsi",
     Type::Application_VndMotorolaFlexsuiteAdsi},
    {"application/vnd.motorola.flexsuite.fis",
     Type::Application_VndMotorolaFlexsuiteFis},
    {"application/vnd.motorola.flexsuite.gotap",
     Type::Application_VndMotorolaFlexsuiteGotap},
    {"application/vnd.motorola.flexsuite.kmr",
     Type::Application_VndMotorolaFlexsuiteKmr},
    {"application/vnd.motorola.flexsuite.ttc",
     Type::Application_VndMotorolaFlexsuiteTtc},
    {"application/vnd.motorola.flexsuite.wem",
     Type::Application_VndMotorolaFlexsuiteWem},
    {"application/vnd.motorola.iprm", Type::Application_VndMotorolaIprm},
    {"application/vnd.mozilla.xul+xml", Type::Application_VndMozillaXulXml},
    {"application/vnd.ms-artgalry", Type::Application_VndMsArtgalry},
    {"application/vnd.ms-asf", Type::Application_VndMsAsf},
    {"application/vnd.ms-cab-compressed", Type::Application_VndMsCabCompressed},
    {"application/vnd.ms-3mfdocument", Type::Application_VndMs3mfdocument},
    {"application/vnd.ms-excel", Type::Application_VndMsExcel},
    {"application/vnd.ms-excel.addin.macroEnabled.12",
     Type::Application_VndMsExcelAddinMacroEnabled12},
    {"application/vnd.ms-excel.sheet.binary.macroEnabled.12",
     Type::Application_VndMsExcelSheetBinaryMacroEnabled12},
    {"application/vnd.ms-excel.sheet.macroEnabled.12",
     Type::Application_VndMsExcelSheetMacroEnabled12},
    {"application/vnd.ms-excel.template.macroEnabled.12",
     Type::Application_VndMsExcelTemplateMacroEnabled12},
    {"application/vnd.ms-fontobject", Type::Application_VndMsFontobject},
    {"application/vnd.ms-htmlhelp", Type::Application_VndMsHtmlhelp},
    {"application/vnd.ms-ims", Type::Application_VndMsIms},
    {"application/vnd.ms-lrm", Type::Application_VndMsLrm},
    {"application/vnd.ms-office.activeX+xml",
     Type::Application_VndMsOfficeActiveXXml},
    {"application/vnd.ms-officetheme", Type::Application_VndMsOfficetheme},
    {"application/vnd.ms-playready.initiator+xml",
     Type::Application_VndMsPlayreadyInitiatorXml},
    {"application/vnd.ms-powerpoint", Type::Application_VndMsPowerpoint},
    {"application/vnd.ms-powerpoint.addin.macroEnabled.12",
     Type::Application_VndMsPowerpointAddinMacroEnabled12},
    {"application/vnd.ms-powerpoint.presentation.macroEnabled.12",
     Type::Application_VndMsPowerpointPresentationMacroEnabled12},
    {"application/vnd.ms-powerpoint.slide.macroEnabled.12",
     Type::Application_VndMsPowerpointSlideMacroEnabled12},
    {"application/vnd.ms-powerpoint.slideshow.macroEnabled.12",
     Type::Application_VndMsPowerpointSlideshowMacroEnabled12},
    {"application/vnd.ms-powerpoint.template.macroEnabled.12",
     Type::Application_VndMsPowerpointTemplateMacroEnabled12},
    {"application/vnd.ms-PrintDeviceCapabilities+xml",
     Type::Application_VndMsPrintDeviceCapabilitiesXml},
    {"application/vnd.ms-PrintSchemaTicket+xml",
     Type::Application_VndMsPrintSchemaTicketXml},
    {"application/vnd.ms-project", Type::Application_VndMsProject},
    {"application/vnd.ms-tnef", Type::Application_VndMsTnef},
    {"application/vnd.ms-windows.devicepairing",
     Type::Application_VndMsWindowsDevicepairing},
    {"application/vnd.ms-windows.nwprinting.oob",
     Type::Application_VndMsWindowsNwprintingOob},
    {"application/vnd.ms-windows.printerpairing",
     Type::Application_VndMsWindowsPrinterpairing},
    {"application/vnd.ms-windows.wsd.oob",
     Type::Application_VndMsWindowsWsdOob},
    {"application/vnd.ms-wmdrm.lic-chlg-req",
     Type::Application_VndMsWmdrmLicChlgReq},
    {"application/vnd.ms-wmdrm.lic-resp", Type::Application_VndMsWmdrmLicResp},
    {"application/vnd.ms-wmdrm.meter-chlg-req",
     Type::Application_VndMsWmdrmMeterChlgReq},
    {"application/vnd.ms-wmdrm.meter-resp",
     Type::Application_VndMsWmdrmMeterResp},
    {"application/vnd.ms-word.document.macroEnabled.12",
     Type::Application_VndMsWordDocumentMacroEnabled12},
    {"application/vnd.ms-word.template.macroEnabled.12",
     Type::Application_VndMsWordTemplateMacroEnabled12},
    {"application/vnd.ms-works", Type::Application_VndMsWorks},
    {"application/vnd.ms-wpl", Type::Application_VndMsWpl},
    {"application/vnd.ms-xpsdocument", Type::Application_VndMsXpsdocument},
    {"application/vnd.msa-disk-image", Type::Application_VndMsaDiskImage},
    {"application/vnd.mseq", Type::Application_VndMseq},
    {"application/vnd.msgpack", Type::Application_VndMsgpack},
    {"application/vnd.msign", Type::Application_VndMsign},
    {"application/vnd.multiad.creator", Type::Application_VndMultiadCreator},
    {"application/vnd.multiad.creator.cif",
     Type::Application_VndMultiadCreatorCif},
    {"application/vnd.musician", Type::Application_VndMusician},
    {"application/vnd.music-niff", Type::Application_VndMusicNiff},
    {"application/vnd.muvee.style", Type::Application_VndMuveeStyle},
    {"application/vnd.mynfc", Type::Application_VndMynfc},
    {"application/vnd.nacamar.ybrid+json",
     Type::Application_VndNacamarYbridJson},
    {"application/vnd.nato.bindingdataobject+cbor",
     Type::Application_VndNatoBindingdataobjectCbor},
    {"application/vnd.nato.bindingdataobject+json",
     Type::Application_VndNatoBindingdataobjectJson},
    {"application/vnd.nato.bindingdataobject+xml",
     Type::Application_VndNatoBindingdataobjectXml},
    {"application/vnd.nato.openxmlformats-package.iepd+zip",
     Type::Application_VndNatoOpenxmlformatsPackageIepdZip},
    {"application/vnd.ncd.control", Type::Application_VndNcdControl},
    {"application/vnd.ncd.reference", Type::Application_VndNcdReference},
    {"application/vnd.nearst.inv+json", Type::Application_VndNearstInvJson},
    {"application/vnd.nebumind.line", Type::Application_VndNebumindLine},
    {"application/vnd.nervana", Type::Application_VndNervana},
    {"application/vnd.netfpx", Type::Application_VndNetfpx},
    {"application/vnd.neurolanguage.nlu",
     Type::Application_VndNeurolanguageNlu},
    {"application/vnd.nimn", Type::Application_VndNimn},
    {"application/vnd.nintendo.snes.rom", Type::Application_VndNintendoSnesRom},
    {"application/vnd.nintendo.nitro.rom",
     Type::Application_VndNintendoNitroRom},
    {"application/vnd.nitf", Type::Application_VndNitf},
    {"application/vnd.noblenet-directory",
     Type::Application_VndNoblenetDirectory},
    {"application/vnd.noblenet-sealer", Type::Application_VndNoblenetSealer},
    {"application/vnd.noblenet-web", Type::Application_VndNoblenetWeb},
    {"application/vnd.nokia.catalogs", Type::Application_VndNokiaCatalogs},
    {"application/vnd.nokia.conml+wbxml", Type::Application_VndNokiaConmlWbxml},
    {"application/vnd.nokia.conml+xml", Type::Application_VndNokiaConmlXml},
    {"application/vnd.nokia.iptv.config+xml",
     Type::Application_VndNokiaIptvConfigXml},
    {"application/vnd.nokia.iSDS-radio-presets",
     Type::Application_VndNokiaISDSRadioPresets},
    {"application/vnd.nokia.landmark+wbxml",
     Type::Application_VndNokiaLandmarkWbxml},
    {"application/vnd.nokia.landmark+xml",
     Type::Application_VndNokiaLandmarkXml},
    {"application/vnd.nokia.landmarkcollection+xml",
     Type::Application_VndNokiaLandmarkcollectionXml},
    {"application/vnd.nokia.ncd", Type::Application_VndNokiaNcd},
    {"application/vnd.nokia.n-gage.ac+xml",
     Type::Application_VndNokiaNGageAcXml},
    {"application/vnd.nokia.n-gage.data", Type::Application_VndNokiaNGageData},
    {"application/vnd.nokia.n-gage.symbian.install",
     Type::Application_VndNokiaNGageSymbianInstall},
    {"application/vnd.nokia.pcd+wbxml", Type::Application_VndNokiaPcdWbxml},
    {"application/vnd.nokia.pcd+xml", Type::Application_VndNokiaPcdXml},
    {"application/vnd.nokia.radio-preset",
     Type::Application_VndNokiaRadioPreset},
    {"application/vnd.nokia.radio-presets",
     Type::Application_VndNokiaRadioPresets},
    {"application/vnd.novadigm.EDM", Type::Application_VndNovadigmEDM},
    {"application/vnd.novadigm.EDX", Type::Application_VndNovadigmEDX},
    {"application/vnd.novadigm.EXT", Type::Application_VndNovadigmEXT},
    {"application/vnd.ntt-local.content-share",
     Type::Application_VndNttLocalContentShare},
    {"application/vnd.ntt-local.file-transfer",
     Type::Application_VndNttLocalFileTransfer},
    {"application/vnd.ntt-local.ogw_remote-access",
     Type::Application_VndNttLocalOgwRemoteAccess},
    {"application/vnd.ntt-local.sip-ta_remote",
     Type::Application_VndNttLocalSipTaRemote},
    {"application/vnd.ntt-local.sip-ta_tcp_stream",
     Type::Application_VndNttLocalSipTaTcpStream},
    {"application/vnd.oai.workflows", Type::Application_VndOaiWorkflows},
    {"application/vnd.oai.workflows+json",
     Type::Application_VndOaiWorkflowsJson},
    {"application/vnd.oai.workflows+yaml",
     Type::Application_VndOaiWorkflowsYaml},
    {"application/vnd.oasis.opendocument.base",
     Type::Application_VndOasisOpendocumentBase},
    {"application/vnd.oasis.opendocument.chart",
     Type::Application_VndOasisOpendocumentChart},
    {"application/vnd.oasis.opendocument.chart-template",
     Type::Application_VndOasisOpendocumentChartTemplate},
    {"application/vnd.oasis.opendocument.database",
     Type::Application_VndOasisOpendocumentDatabase},
    {"application/vnd.oasis.opendocument.formula",
     Type::Application_VndOasisOpendocumentFormula},
    {"application/vnd.oasis.opendocument.formula-template",
     Type::Application_VndOasisOpendocumentFormulaTemplate},
    {"application/vnd.oasis.opendocument.graphics",
     Type::Application_VndOasisOpendocumentGraphics},
    {"application/vnd.oasis.opendocument.graphics-template",
     Type::Application_VndOasisOpendocumentGraphicsTemplate},
    {"application/vnd.oasis.opendocument.image",
     Type::Application_VndOasisOpendocumentImage},
    {"application/vnd.oasis.opendocument.image-template",
     Type::Application_VndOasisOpendocumentImageTemplate},
    {"application/vnd.oasis.opendocument.presentation",
     Type::Application_VndOasisOpendocumentPresentation},
    {"application/vnd.oasis.opendocument.presentation-template",
     Type::Application_VndOasisOpendocumentPresentationTemplate},
    {"application/vnd.oasis.opendocument.spreadsheet",
     Type::Application_VndOasisOpendocumentSpreadsheet},
    {"application/vnd.oasis.opendocument.spreadsheet-template",
     Type::Application_VndOasisOpendocumentSpreadsheetTemplate},
    {"application/vnd.oasis.opendocument.text",
     Type::Application_VndOasisOpendocumentText},
    {"application/vnd.oasis.opendocument.text-master",
     Type::Application_VndOasisOpendocumentTextMaster},
    {"application/vnd.oasis.opendocument.text-master-template",
     Type::Application_VndOasisOpendocumentTextMasterTemplate},
    {"application/vnd.oasis.opendocument.text-template",
     Type::Application_VndOasisOpendocumentTextTemplate},
    {"application/vnd.oasis.opendocument.text-web",
     Type::Application_VndOasisOpendocumentTextWeb},
    {"application/vnd.obn", Type::Application_VndObn},
    {"application/vnd.ocf+cbor", Type::Application_VndOcfCbor},
    {"application/vnd.oci.image.manifest.v1+json",
     Type::Application_VndOciImageManifestV1Json},
    {"application/vnd.oftn.l10n+json", Type::Application_VndOftnL10nJson},
    {"application/vnd.oipf.contentaccessdownload+xml",
     Type::Application_VndOipfContentaccessdownloadXml},
    {"application/vnd.oipf.contentaccessstreaming+xml",
     Type::Application_VndOipfContentaccessstreamingXml},
    {"application/vnd.oipf.cspg-hexbinary",
     Type::Application_VndOipfCspgHexbinary},
    {"application/vnd.oipf.dae.svg+xml", Type::Application_VndOipfDaeSvgXml},
    {"application/vnd.oipf.dae.xhtml+xml",
     Type::Application_VndOipfDaeXhtmlXml},
    {"application/vnd.oipf.mippvcontrolmessage+xml",
     Type::Application_VndOipfMippvcontrolmessageXml},
    {"application/vnd.oipf.pae.gem", Type::Application_VndOipfPaeGem},
    {"application/vnd.oipf.spdiscovery+xml",
     Type::Application_VndOipfSpdiscoveryXml},
    {"application/vnd.oipf.spdlist+xml", Type::Application_VndOipfSpdlistXml},
    {"application/vnd.oipf.ueprofile+xml",
     Type::Application_VndOipfUeprofileXml},
    {"application/vnd.oipf.userprofile+xml",
     Type::Application_VndOipfUserprofileXml},
    {"application/vnd.olpc-sugar", Type::Application_VndOlpcSugar},
    {"application/vnd.oma.bcast.associated-procedure-parameter+xml",
     Type::Application_VndOmaBcastAssociatedProcedureParameterXml},
    {"application/vnd.oma.bcast.drm-trigger+xml",
     Type::Application_VndOmaBcastDrmTriggerXml},
    {"application/vnd.oma.bcast.imd+xml", Type::Application_VndOmaBcastImdXml},
    {"application/vnd.oma.bcast.ltkm", Type::Application_VndOmaBcastLtkm},
    {"application/vnd.oma.bcast.notification+xml",
     Type::Application_VndOmaBcastNotificationXml},
    {"application/vnd.oma.bcast.provisioningtrigger",
     Type::Application_VndOmaBcastProvisioningtrigger},
    {"application/vnd.oma.bcast.sgboot", Type::Application_VndOmaBcastSgboot},
    {"application/vnd.oma.bcast.sgdd+xml",
     Type::Application_VndOmaBcastSgddXml},
    {"application/vnd.oma.bcast.sgdu", Type::Application_VndOmaBcastSgdu},
    {"application/vnd.oma.bcast.simple-symbol-container",
     Type::Application_VndOmaBcastSimpleSymbolContainer},
    {"application/vnd.oma.bcast.smartcard-trigger+xml",
     Type::Application_VndOmaBcastSmartcardTriggerXml},
    {"application/vnd.oma.bcast.sprov+xml",
     Type::Application_VndOmaBcastSprovXml},
    {"application/vnd.oma.bcast.stkm", Type::Application_VndOmaBcastStkm},
    {"application/vnd.oma.cab-address-book+xml",
     Type::Application_VndOmaCabAddressBookXml},
    {"application/vnd.oma.cab-feature-handler+xml",
     Type::Application_VndOmaCabFeatureHandlerXml},
    {"application/vnd.oma.cab-pcc+xml", Type::Application_VndOmaCabPccXml},
    {"application/vnd.oma.cab-subs-invite+xml",
     Type::Application_VndOmaCabSubsInviteXml},
    {"application/vnd.oma.cab-user-prefs+xml",
     Type::Application_VndOmaCabUserPrefsXml},
    {"application/vnd.oma.dcd", Type::Application_VndOmaDcd},
    {"application/vnd.oma.dcdc", Type::Application_VndOmaDcdc},
    {"application/vnd.oma.dd2+xml", Type::Application_VndOmaDd2Xml},
    {"application/vnd.oma.drm.risd+xml", Type::Application_VndOmaDrmRisdXml},
    {"application/vnd.oma.group-usage-list+xml",
     Type::Application_VndOmaGroupUsageListXml},
    {"application/vnd.oma.lwm2m+cbor", Type::Application_VndOmaLwm2mCbor},
    {"application/vnd.oma.lwm2m+json", Type::Application_VndOmaLwm2mJson},
    {"application/vnd.oma.lwm2m+tlv", Type::Application_VndOmaLwm2mTlv},
    {"application/vnd.oma.pal+xml", Type::Application_VndOmaPalXml},
    {"application/vnd.oma.poc.detailed-progress-report+xml",
     Type::Application_VndOmaPocDetailedProgressReportXml},
    {"application/vnd.oma.poc.final-report+xml",
     Type::Application_VndOmaPocFinalReportXml},
    {"application/vnd.oma.poc.groups+xml",
     Type::Application_VndOmaPocGroupsXml},
    {"application/vnd.oma.poc.invocation-descriptor+xml",
     Type::Application_VndOmaPocInvocationDescriptorXml},
    {"application/vnd.oma.poc.optimized-progress-report+xml",
     Type::Application_VndOmaPocOptimizedProgressReportXml},
    {"application/vnd.oma.push", Type::Application_VndOmaPush},
    {"application/vnd.oma.scidm.messages+xml",
     Type::Application_VndOmaScidmMessagesXml},
    {"application/vnd.oma.xcap-directory+xml",
     Type::Application_VndOmaXcapDirectoryXml},
    {"application/vnd.omads-email+xml", Type::Application_VndOmadsEmailXml},
    {"application/vnd.omads-file+xml", Type::Application_VndOmadsFileXml},
    {"application/vnd.omads-folder+xml", Type::Application_VndOmadsFolderXml},
    {"application/vnd.omaloc-supl-init", Type::Application_VndOmalocSuplInit},
    {"application/vnd.oma-scws-config", Type::Application_VndOmaScwsConfig},
    {"application/vnd.oma-scws-http-request",
     Type::Application_VndOmaScwsHttpRequest},
    {"application/vnd.oma-scws-http-response",
     Type::Application_VndOmaScwsHttpResponse},
    {"application/vnd.onepager", Type::Application_VndOnepager},
    {"application/vnd.onepagertamp", Type::Application_VndOnepagertamp},
    {"application/vnd.onepagertamx", Type::Application_VndOnepagertamx},
    {"application/vnd.onepagertat", Type::Application_VndOnepagertat},
    {"application/vnd.onepagertatp", Type::Application_VndOnepagertatp},
    {"application/vnd.onepagertatx", Type::Application_VndOnepagertatx},
    {"application/vnd.onvif.metadata", Type::Application_VndOnvifMetadata},
    {"application/vnd.openblox.game-binary",
     Type::Application_VndOpenbloxGameBinary},
    {"application/vnd.openblox.game+xml", Type::Application_VndOpenbloxGameXml},
    {"application/vnd.openeye.oeb", Type::Application_VndOpeneyeOeb},
    {"application/vnd.openstreetmap.data+xml",
     Type::Application_VndOpenstreetmapDataXml},
    {"application/vnd.opentimestamps.ots",
     Type::Application_VndOpentimestampsOts},
    {"application/vnd.openxmlformats-officedocument.custom-properties+xml",
     Type::Application_VndOpenxmlformatsOfficedocumentCustomPropertiesXml},
    {"application/"
     "vnd.openxmlformats-officedocument.customXmlProperties+xml",
     Type::Application_VndOpenxmlformatsOfficedocumentCustomXmlPropertiesXml},
    {"application/vnd.openxmlformats-officedocument.drawing+xml",
     Type::Application_VndOpenxmlformatsOfficedocumentDrawingXml},
    {"application/vnd.openxmlformats-officedocument.drawingml.chart+xml",
     Type::Application_VndOpenxmlformatsOfficedocumentDrawingmlChartXml},
    {"application/"
     "vnd.openxmlformats-officedocument.drawingml.chartshapes+xml",
     Type::Application_VndOpenxmlformatsOfficedocumentDrawingmlChartshapesXml},
    {"application/"
     "vnd.openxmlformats-officedocument.drawingml.diagramColors+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentDrawingmlDiagramColorsXml},
    {"application/"
     "vnd.openxmlformats-officedocument.drawingml.diagramData+xml",
     Type::Application_VndOpenxmlformatsOfficedocumentDrawingmlDiagramDataXml},
    {"application/"
     "vnd.openxmlformats-officedocument.drawingml.diagramLayout+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentDrawingmlDiagramLayoutXml},
    {"application/"
     "vnd.openxmlformats-officedocument.drawingml.diagramStyle+xml",
     Type::Application_VndOpenxmlformatsOfficedocumentDrawingmlDiagramStyleXml},
    {"application/"
     "vnd.openxmlformats-officedocument.extended-properties+xml",
     Type::Application_VndOpenxmlformatsOfficedocumentExtendedPropertiesXml},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.commentAuthors+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentPresentationmlCommentAuthorsXml},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.comments+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentPresentationmlCommentsXml},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.handoutMaster+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentPresentationmlHandoutMasterXml},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.notesMaster+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentPresentationmlNotesMasterXml},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.notesSlide+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentPresentationmlNotesSlideXml},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.presentation",
     Type::
         Application_VndOpenxmlformatsOfficedocumentPresentationmlPresentation},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.presentation.main+"
     "xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentPresentationmlPresentationMainXml},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.presProps+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentPresentationmlPresPropsXml},
    {"application/vnd.openxmlformats-officedocument.presentationml.slide",
     Type::Application_VndOpenxmlformatsOfficedocumentPresentationmlSlide},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.slide+xml",
     Type::Application_VndOpenxmlformatsOfficedocumentPresentationmlSlideXml},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.slideLayout+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentPresentationmlSlideLayoutXml},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.slideMaster+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentPresentationmlSlideMasterXml},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.slideshow",
     Type::Application_VndOpenxmlformatsOfficedocumentPresentationmlSlideshow},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.slideshow.main+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentPresentationmlSlideshowMainXml},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.slideUpdateInfo+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentPresentationmlSlideUpdateInfoXml},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.tableStyles+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentPresentationmlTableStylesXml},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.tags+xml",
     Type::Application_VndOpenxmlformatsOfficedocumentPresentationmlTagsXml},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.template",
     Type::Application_VndOpenxmlformatsOfficedocumentPresentationmlTemplate},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.template.main+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentPresentationmlTemplateMainXml},
    {"application/"
     "vnd.openxmlformats-officedocument.presentationml.viewProps+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentPresentationmlViewPropsXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.calcChain+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlCalcChainXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.chartsheet+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlChartsheetXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.comments+xml",
     Type::Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlCommentsXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.connections+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlConnectionsXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.dialogsheet+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlDialogsheetXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.externalLink+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlExternalLinkXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.pivotCacheDefinition+"
     "xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlPivotCacheDefinitionXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.pivotCacheRecords+"
     "xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlPivotCacheRecordsXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.pivotTable+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlPivotTableXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.queryTable+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlQueryTableXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.revisionHeaders+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlRevisionHeadersXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.revisionLog+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlRevisionLogXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.sharedStrings+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlSharedStringsXml},
    {"application/vnd.openxmlformats-officedocument.spreadsheetml.sheet",
     Type::Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlSheet},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.sheet.main+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlSheetMainXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.sheetMetadata+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlSheetMetadataXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.styles+xml",
     Type::Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlStylesXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.table+xml",
     Type::Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlTableXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.tableSingleCells+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlTableSingleCellsXml},
    {"application/vnd.openxmlformats-officedocument.spreadsheetml.template",
     Type::Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlTemplate},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.template.main+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlTemplateMainXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.userNames+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlUserNamesXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.volatileDependencies+"
     "xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlVolatileDependenciesXml},
    {"application/"
     "vnd.openxmlformats-officedocument.spreadsheetml.worksheet+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentSpreadsheetmlWorksheetXml},
    {"application/vnd.openxmlformats-officedocument.theme+xml",
     Type::Application_VndOpenxmlformatsOfficedocumentThemeXml},
    {"application/vnd.openxmlformats-officedocument.themeOverride+xml",
     Type::Application_VndOpenxmlformatsOfficedocumentThemeOverrideXml},
    {"application/vnd.openxmlformats-officedocument.vmlDrawing",
     Type::Application_VndOpenxmlformatsOfficedocumentVmlDrawing},
    {"application/"
     "vnd.openxmlformats-officedocument.wordprocessingml.comments+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentWordprocessingmlCommentsXml},
    {"application/"
     "vnd.openxmlformats-officedocument.wordprocessingml.document",
     Type::Application_VndOpenxmlformatsOfficedocumentWordprocessingmlDocument},
    {"application/"
     "vnd.openxmlformats-officedocument.wordprocessingml.document.glossary+"
     "xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentWordprocessingmlDocumentGlossaryXml},
    {"application/"
     "vnd.openxmlformats-officedocument.wordprocessingml.document.main+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentWordprocessingmlDocumentMainXml},
    {"application/"
     "vnd.openxmlformats-officedocument.wordprocessingml.endnotes+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentWordprocessingmlEndnotesXml},
    {"application/"
     "vnd.openxmlformats-officedocument.wordprocessingml.fontTable+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentWordprocessingmlFontTableXml},
    {"application/"
     "vnd.openxmlformats-officedocument.wordprocessingml.footer+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentWordprocessingmlFooterXml},
    {"application/"
     "vnd.openxmlformats-officedocument.wordprocessingml.footnotes+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentWordprocessingmlFootnotesXml},
    {"application/"
     "vnd.openxmlformats-officedocument.wordprocessingml.numbering+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentWordprocessingmlNumberingXml},
    {"application/"
     "vnd.openxmlformats-officedocument.wordprocessingml.settings+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentWordprocessingmlSettingsXml},
    {"application/"
     "vnd.openxmlformats-officedocument.wordprocessingml.styles+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentWordprocessingmlStylesXml},
    {"application/"
     "vnd.openxmlformats-officedocument.wordprocessingml.template",
     Type::Application_VndOpenxmlformatsOfficedocumentWordprocessingmlTemplate},
    {"application/"
     "vnd.openxmlformats-officedocument.wordprocessingml.template.main+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentWordprocessingmlTemplateMainXml},
    {"application/"
     "vnd.openxmlformats-officedocument.wordprocessingml.webSettings+xml",
     Type::
         Application_VndOpenxmlformatsOfficedocumentWordprocessingmlWebSettingsXml},
    {"application/vnd.openxmlformats-package.core-properties+xml",
     Type::Application_VndOpenxmlformatsPackageCorePropertiesXml},
    {"application/"
     "vnd.openxmlformats-package.digital-signature-xmlsignature+xml",
     Type::Application_VndOpenxmlformatsPackageDigitalSignatureXmlsignatureXml},
    {"application/vnd.openxmlformats-package.relationships+xml",
     Type::Application_VndOpenxmlformatsPackageRelationshipsXml},
    {"application/vnd.oracle.resource+json",
     Type::Application_VndOracleResourceJson},
    {"application/vnd.orange.indata", Type::Application_VndOrangeIndata},
    {"application/vnd.osa.netdeploy", Type::Application_VndOsaNetdeploy},
    {"application/vnd.osgeo.mapguide.package",
     Type::Application_VndOsgeoMapguidePackage},
    {"application/vnd.osgi.bundle", Type::Application_VndOsgiBundle},
    {"application/vnd.osgi.dp", Type::Application_VndOsgiDp},
    {"application/vnd.osgi.subsystem", Type::Application_VndOsgiSubsystem},
    {"application/vnd.otps.ct-kip+xml", Type::Application_VndOtpsCtKipXml},
    {"application/vnd.oxli.countgraph", Type::Application_VndOxliCountgraph},
    {"application/vnd.pagerduty+json", Type::Application_VndPagerdutyJson},
    {"application/vnd.palm", Type::Application_VndPalm},
    {"application/vnd.panoply", Type::Application_VndPanoply},
    {"application/vnd.paos.xml", Type::Application_VndPaosXml},
    {"application/vnd.patentdive", Type::Application_VndPatentdive},
    {"application/vnd.patientecommsdoc", Type::Application_VndPatientecommsdoc},
    {"application/vnd.pawaafile", Type::Application_VndPawaafile},
    {"application/vnd.pcos", Type::Application_VndPcos},
    {"application/vnd.pg.format", Type::Application_VndPgFormat},
    {"application/vnd.pg.osasli", Type::Application_VndPgOsasli},
    {"application/vnd.piaccess.application-licence",
     Type::Application_VndPiaccessApplicationLicence},
    {"application/vnd.picsel", Type::Application_VndPicsel},
    {"application/vnd.pmi.widget", Type::Application_VndPmiWidget},
    {"application/vnd.poc.group-advertisement+xml",
     Type::Application_VndPocGroupAdvertisementXml},
    {"application/vnd.pocketlearn", Type::Application_VndPocketlearn},
    {"application/vnd.powerbuilder6", Type::Application_VndPowerbuilder6},
    {"application/vnd.powerbuilder6-s", Type::Application_VndPowerbuilder6S},
    {"application/vnd.powerbuilder7", Type::Application_VndPowerbuilder7},
    {"application/vnd.powerbuilder75", Type::Application_VndPowerbuilder75},
    {"application/vnd.powerbuilder75-s", Type::Application_VndPowerbuilder75S},
    {"application/vnd.powerbuilder7-s", Type::Application_VndPowerbuilder7S},
    {"application/vnd.preminet", Type::Application_VndPreminet},
    {"application/vnd.previewsystems.box",
     Type::Application_VndPreviewsystemsBox},
    {"application/vnd.proteus.magazine", Type::Application_VndProteusMagazine},
    {"application/vnd.psfs", Type::Application_VndPsfs},
    {"application/vnd.pt.mundusmundi", Type::Application_VndPtMundusmundi},
    {"application/vnd.publishare-delta-tree",
     Type::Application_VndPublishareDeltaTree},
    {"application/vnd.pvi.ptid1", Type::Application_VndPviPtid1},
    {"application/vnd.pwg-multiplexed", Type::Application_VndPwgMultiplexed},
    {"application/vnd.pwg-xhtml-print+xml",
     Type::Application_VndPwgXhtmlPrintXml},
    {"application/vnd.qualcomm.brew-app-res",
     Type::Application_VndQualcommBrewAppRes},
    {"application/vnd.quarantainenet", Type::Application_VndQuarantainenet},
    {"application/vnd.Quark.QuarkXPress",
     Type::Application_VndQuarkQuarkXPress},
    {"application/vnd.quobject-quoxdocument",
     Type::Application_VndQuobjectQuoxdocument},
    {"application/vnd.radisys.moml+xml", Type::Application_VndRadisysMomlXml},
    {"application/vnd.radisys.msml-audit-conf+xml",
     Type::Application_VndRadisysMsmlAuditConfXml},
    {"application/vnd.radisys.msml-audit-conn+xml",
     Type::Application_VndRadisysMsmlAuditConnXml},
    {"application/vnd.radisys.msml-audit-dialog+xml",
     Type::Application_VndRadisysMsmlAuditDialogXml},
    {"application/vnd.radisys.msml-audit-stream+xml",
     Type::Application_VndRadisysMsmlAuditStreamXml},
    {"application/vnd.radisys.msml-audit+xml",
     Type::Application_VndRadisysMsmlAuditXml},
    {"application/vnd.radisys.msml-conf+xml",
     Type::Application_VndRadisysMsmlConfXml},
    {"application/vnd.radisys.msml-dialog-base+xml",
     Type::Application_VndRadisysMsmlDialogBaseXml},
    {"application/vnd.radisys.msml-dialog-fax-detect+xml",
     Type::Application_VndRadisysMsmlDialogFaxDetectXml},
    {"application/vnd.radisys.msml-dialog-fax-sendrecv+xml",
     Type::Application_VndRadisysMsmlDialogFaxSendrecvXml},
    {"application/vnd.radisys.msml-dialog-group+xml",
     Type::Application_VndRadisysMsmlDialogGroupXml},
    {"application/vnd.radisys.msml-dialog-speech+xml",
     Type::Application_VndRadisysMsmlDialogSpeechXml},
    {"application/vnd.radisys.msml-dialog-transform+xml",
     Type::Application_VndRadisysMsmlDialogTransformXml},
    {"application/vnd.radisys.msml-dialog+xml",
     Type::Application_VndRadisysMsmlDialogXml},
    {"application/vnd.radisys.msml+xml", Type::Application_VndRadisysMsmlXml},
    {"application/vnd.rainstor.data", Type::Application_VndRainstorData},
    {"application/vnd.rapid", Type::Application_VndRapid},
    {"application/vnd.rar", Type::Application_VndRar},
    {"application/vnd.realvnc.bed", Type::Application_VndRealvncBed},
    {"application/vnd.recordare.musicxml",
     Type::Application_VndRecordareMusicxml},
    {"application/vnd.recordare.musicxml+xml",
     Type::Application_VndRecordareMusicxmlXml},
    {"application/vnd.relpipe", Type::Application_VndRelpipe},
    {"application/vnd.RenLearn.rlprint", Type::Application_VndRenLearnRlprint},
    {"application/vnd.resilient.logic", Type::Application_VndResilientLogic},
    {"application/vnd.restful+json", Type::Application_VndRestfulJson},
    {"application/vnd.rig.cryptonote", Type::Application_VndRigCryptonote},
    {"application/vnd.route66.link66+xml",
     Type::Application_VndRoute66Link66Xml},
    {"application/vnd.rs-274x", Type::Application_VndRs274x},
    {"application/vnd.ruckus.download", Type::Application_VndRuckusDownload},
    {"application/vnd.s3sms", Type::Application_VndS3sms},
    {"application/vnd.sailingtracker.track",
     Type::Application_VndSailingtrackerTrack},
    {"application/vnd.sar", Type::Application_VndSar},
    {"application/vnd.sbm.cid", Type::Application_VndSbmCid},
    {"application/vnd.sbm.mid2", Type::Application_VndSbmMid2},
    {"application/vnd.scribus", Type::Application_VndScribus},
    {"application/vnd.sealed.3df", Type::Application_VndSealed3df},
    {"application/vnd.sealed.csf", Type::Application_VndSealedCsf},
    {"application/vnd.sealed.doc", Type::Application_VndSealedDoc},
    {"application/vnd.sealed.eml", Type::Application_VndSealedEml},
    {"application/vnd.sealed.mht", Type::Application_VndSealedMht},
    {"application/vnd.sealed.net", Type::Application_VndSealedNet},
    {"application/vnd.sealed.ppt", Type::Application_VndSealedPpt},
    {"application/vnd.sealed.tiff", Type::Application_VndSealedTiff},
    {"application/vnd.sealed.xls", Type::Application_VndSealedXls},
    {"application/vnd.sealedmedia.softseal.html",
     Type::Application_VndSealedmediaSoftsealHtml},
    {"application/vnd.sealedmedia.softseal.pdf",
     Type::Application_VndSealedmediaSoftsealPdf},
    {"application/vnd.seemail", Type::Application_VndSeemail},
    {"application/vnd.seis+json", Type::Application_VndSeisJson},
    {"application/vnd.sema", Type::Application_VndSema},
    {"application/vnd.semd", Type::Application_VndSemd},
    {"application/vnd.semf", Type::Application_VndSemf},
    {"application/vnd.shade-save-file", Type::Application_VndShadeSaveFile},
    {"application/vnd.shana.informed.formdata",
     Type::Application_VndShanaInformedFormdata},
    {"application/vnd.shana.informed.formtemplate",
     Type::Application_VndShanaInformedFormtemplate},
    {"application/vnd.shana.informed.interchange",
     Type::Application_VndShanaInformedInterchange},
    {"application/vnd.shana.informed.package",
     Type::Application_VndShanaInformedPackage},
    {"application/vnd.shootproof+json", Type::Application_VndShootproofJson},
    {"application/vnd.shopkick+json", Type::Application_VndShopkickJson},
    {"application/vnd.shp", Type::Application_VndShp},
    {"application/vnd.shx", Type::Application_VndShx},
    {"application/vnd.sigrok.session", Type::Application_VndSigrokSession},
    {"application/vnd.SimTech-MindMapper",
     Type::Application_VndSimTechMindMapper},
    {"application/vnd.siren+json", Type::Application_VndSirenJson},
    {"application/vnd.smaf", Type::Application_VndSmaf},
    {"application/vnd.smart.notebook", Type::Application_VndSmartNotebook},
    {"application/vnd.smart.teacher", Type::Application_VndSmartTeacher},
    {"application/vnd.smintio.portals.archive",
     Type::Application_VndSmintioPortalsArchive},
    {"application/vnd.snesdev-page-table",
     Type::Application_VndSnesdevPageTable},
    {"application/vnd.software602.filler.form+xml",
     Type::Application_VndSoftware602FillerFormXml},
    {"application/vnd.software602.filler.form-xml-zip",
     Type::Application_VndSoftware602FillerFormXmlZip},
    {"application/vnd.solent.sdkm+xml", Type::Application_VndSolentSdkmXml},
    {"application/vnd.spotfire.dxp", Type::Application_VndSpotfireDxp},
    {"application/vnd.spotfire.sfs", Type::Application_VndSpotfireSfs},
    {"application/vnd.sqlite3", Type::Application_VndSqlite3},
    {"application/vnd.sss-cod", Type::Application_VndSssCod},
    {"application/vnd.sss-dtf", Type::Application_VndSssDtf},
    {"application/vnd.sss-ntf", Type::Application_VndSssNtf},
    {"application/vnd.stepmania.package",
     Type::Application_VndStepmaniaPackage},
    {"application/vnd.stepmania.stepchart",
     Type::Application_VndStepmaniaStepchart},
    {"application/vnd.street-stream", Type::Application_VndStreetStream},
    {"application/vnd.sun.wadl+xml", Type::Application_VndSunWadlXml},
    {"application/vnd.sus-calendar", Type::Application_VndSusCalendar},
    {"application/vnd.svd", Type::Application_VndSvd},
    {"application/vnd.swiftview-ics", Type::Application_VndSwiftviewIcs},
    {"application/vnd.sybyl.mol2", Type::Application_VndSybylMol2},
    {"application/vnd.sycle+xml", Type::Application_VndSycleXml},
    {"application/vnd.syft+json", Type::Application_VndSyftJson},
    {"application/vnd.syncml.dm.notification",
     Type::Application_VndSyncmlDmNotification},
    {"application/vnd.syncml.dmddf+xml", Type::Application_VndSyncmlDmddfXml},
    {"application/vnd.syncml.dmtnds+wbxml",
     Type::Application_VndSyncmlDmtndsWbxml},
    {"application/vnd.syncml.dmtnds+xml", Type::Application_VndSyncmlDmtndsXml},
    {"application/vnd.syncml.dmddf+wbxml",
     Type::Application_VndSyncmlDmddfWbxml},
    {"application/vnd.syncml.dm+wbxml", Type::Application_VndSyncmlDmWbxml},
    {"application/vnd.syncml.dm+xml", Type::Application_VndSyncmlDmXml},
    {"application/vnd.syncml.ds.notification",
     Type::Application_VndSyncmlDsNotification},
    {"application/vnd.syncml+xml", Type::Application_VndSyncmlXml},
    {"application/vnd.tableschema+json", Type::Application_VndTableschemaJson},
    {"application/vnd.tao.intent-module-archive",
     Type::Application_VndTaoIntentModuleArchive},
    {"application/vnd.tcpdump.pcap", Type::Application_VndTcpdumpPcap},
    {"application/vnd.think-cell.ppttc+json",
     Type::Application_VndThinkCellPpttcJson},
    {"application/vnd.tml", Type::Application_VndTml},
    {"application/vnd.tmd.mediaflex.api+xml",
     Type::Application_VndTmdMediaflexApiXml},
    {"application/vnd.tmobile-livetv", Type::Application_VndTmobileLivetv},
    {"application/vnd.tri.onesource", Type::Application_VndTriOnesource},
    {"application/vnd.trid.tpt", Type::Application_VndTridTpt},
    {"application/vnd.triscape.mxs", Type::Application_VndTriscapeMxs},
    {"application/vnd.trueapp", Type::Application_VndTrueapp},
    {"application/vnd.truedoc", Type::Application_VndTruedoc},
    {"application/vnd.ubisoft.webplayer",
     Type::Application_VndUbisoftWebplayer},
    {"application/vnd.ufdl", Type::Application_VndUfdl},
    {"application/vnd.uiq.theme", Type::Application_VndUiqTheme},
    {"application/vnd.umajin", Type::Application_VndUmajin},
    {"application/vnd.unity", Type::Application_VndUnity},
    {"application/vnd.uoml+xml", Type::Application_VndUomlXml},
    {"application/vnd.uplanet.alert", Type::Application_VndUplanetAlert},
    {"application/vnd.uplanet.alert-wbxml",
     Type::Application_VndUplanetAlertWbxml},
    {"application/vnd.uplanet.bearer-choice",
     Type::Application_VndUplanetBearerChoice},
    {"application/vnd.uplanet.bearer-choice-wbxml",
     Type::Application_VndUplanetBearerChoiceWbxml},
    {"application/vnd.uplanet.cacheop", Type::Application_VndUplanetCacheop},
    {"application/vnd.uplanet.cacheop-wbxml",
     Type::Application_VndUplanetCacheopWbxml},
    {"application/vnd.uplanet.channel", Type::Application_VndUplanetChannel},
    {"application/vnd.uplanet.channel-wbxml",
     Type::Application_VndUplanetChannelWbxml},
    {"application/vnd.uplanet.list", Type::Application_VndUplanetList},
    {"application/vnd.uplanet.listcmd", Type::Application_VndUplanetListcmd},
    {"application/vnd.uplanet.listcmd-wbxml",
     Type::Application_VndUplanetListcmdWbxml},
    {"application/vnd.uplanet.list-wbxml",
     Type::Application_VndUplanetListWbxml},
    {"application/vnd.uri-map", Type::Application_VndUriMap},
    {"application/vnd.uplanet.signal", Type::Application_VndUplanetSignal},
    {"application/vnd.valve.source.material",
     Type::Application_VndValveSourceMaterial},
    {"application/vnd.vcx", Type::Application_VndVcx},
    {"application/vnd.vd-study", Type::Application_VndVdStudy},
    {"application/vnd.vectorworks", Type::Application_VndVectorworks},
    {"application/vnd.vel+json", Type::Application_VndVelJson},
    {"application/vnd.verimatrix.vcas", Type::Application_VndVerimatrixVcas},
    {"application/vnd.veritone.aion+json",
     Type::Application_VndVeritoneAionJson},
    {"application/vnd.veryant.thin", Type::Application_VndVeryantThin},
    {"application/vnd.ves.encrypted", Type::Application_VndVesEncrypted},
    {"application/vnd.vidsoft.vidconference",
     Type::Application_VndVidsoftVidconference},
    {"application/vnd.visio", Type::Application_VndVisio},
    {"application/vnd.visionary", Type::Application_VndVisionary},
    {"application/vnd.vividence.scriptfile",
     Type::Application_VndVividenceScriptfile},
    {"application/vnd.vsf", Type::Application_VndVsf},
    {"application/vnd.wap.sic", Type::Application_VndWapSic},
    {"application/vnd.wap.slc", Type::Application_VndWapSlc},
    {"application/vnd.wap.wbxml", Type::Application_VndWapWbxml},
    {"application/vnd.wap.wmlc", Type::Application_VndWapWmlc},
    {"application/vnd.wap.wmlscriptc", Type::Application_VndWapWmlscriptc},
    {"application/vnd.wasmflow.wafl", Type::Application_VndWasmflowWafl},
    {"application/vnd.webturbo", Type::Application_VndWebturbo},
    {"application/vnd.wfa.dpp", Type::Application_VndWfaDpp},
    {"application/vnd.wfa.p2p", Type::Application_VndWfaP2p},
    {"application/vnd.wfa.wsc", Type::Application_VndWfaWsc},
    {"application/vnd.windows.devicepairing",
     Type::Application_VndWindowsDevicepairing},
    {"application/vnd.wmc", Type::Application_VndWmc},
    {"application/vnd.wmf.bootstrap", Type::Application_VndWmfBootstrap},
    {"application/vnd.wolfram.mathematica",
     Type::Application_VndWolframMathematica},
    {"application/vnd.wolfram.mathematica.package",
     Type::Application_VndWolframMathematicaPackage},
    {"application/vnd.wolfram.player", Type::Application_VndWolframPlayer},
    {"application/vnd.wordlift", Type::Application_VndWordlift},
    {"application/vnd.wordperfect", Type::Application_VndWordperfect},
    {"application/vnd.wqd", Type::Application_VndWqd},
    {"application/vnd.wrq-hp3000-labelled",
     Type::Application_VndWrqHp3000Labelled},
    {"application/vnd.wt.stf", Type::Application_VndWtStf},
    {"application/vnd.wv.csp+xml", Type::Application_VndWvCspXml},
    {"application/vnd.wv.csp+wbxml", Type::Application_VndWvCspWbxml},
    {"application/vnd.wv.ssp+xml", Type::Application_VndWvSspXml},
    {"application/vnd.xacml+json", Type::Application_VndXacmlJson},
    {"application/vnd.xara", Type::Application_VndXara},
    {"application/vnd.xecrets-encrypted",
     Type::Application_VndXecretsEncrypted},
    {"application/vnd.xfdl", Type::Application_VndXfdl},
    {"application/vnd.xfdl.webform", Type::Application_VndXfdlWebform},
    {"application/vnd.xmi+xml", Type::Application_VndXmiXml},
    {"application/vnd.xmpie.cpkg", Type::Application_VndXmpieCpkg},
    {"application/vnd.xmpie.dpkg", Type::Application_VndXmpieDpkg},
    {"application/vnd.xmpie.plan", Type::Application_VndXmpiePlan},
    {"application/vnd.xmpie.ppkg", Type::Application_VndXmpiePpkg},
    {"application/vnd.xmpie.xlim", Type::Application_VndXmpieXlim},
    {"application/vnd.yamaha.hv-dic", Type::Application_VndYamahaHvDic},
    {"application/vnd.yamaha.hv-script", Type::Application_VndYamahaHvScript},
    {"application/vnd.yamaha.hv-voice", Type::Application_VndYamahaHvVoice},
    {"application/vnd.yamaha.openscoreformat.osfpvg+xml",
     Type::Application_VndYamahaOpenscoreformatOsfpvgXml},
    {"application/vnd.yamaha.openscoreformat",
     Type::Application_VndYamahaOpenscoreformat},
    {"application/vnd.yamaha.remote-setup",
     Type::Application_VndYamahaRemoteSetup},
    {"application/vnd.yamaha.smaf-audio", Type::Application_VndYamahaSmafAudio},
    {"application/vnd.yamaha.smaf-phrase",
     Type::Application_VndYamahaSmafPhrase},
    {"application/vnd.yamaha.through-ngn",
     Type::Application_VndYamahaThroughNgn},
    {"application/vnd.yamaha.tunnel-udpencap",
     Type::Application_VndYamahaTunnelUdpencap},
    {"application/vnd.yaoweme", Type::Application_VndYaoweme},
    {"application/vnd.yellowriver-custom-menu",
     Type::Application_VndYellowriverCustomMenu},
    {"application/vnd.youtube.yt", Type::Application_VndYoutubeYt},
    {"application/vnd.zul", Type::Application_VndZul},
    {"application/vnd.zzazz.deck+xml", Type::Application_VndZzazzDeckXml},
    {"application/voicexml+xml", Type::Application_VoicexmlXml},
    {"application/voucher-cms+json", Type::Application_VoucherCmsJson},
    {"application/vp", Type::Application_Vp},
    {"application/vq-rtcpxr", Type::Application_VqRtcpxr},
    {"application/wasm", Type::Application_Wasm},
    {"application/watcherinfo+xml", Type::Application_WatcherinfoXml},
    {"application/webpush-options+json", Type::Application_WebpushOptionsJson},
    {"application/whoispp-query", Type::Application_WhoisppQuery},
    {"application/whoispp-response", Type::Application_WhoisppResponse},
    {"application/widget", Type::Application_Widget},
    {"application/wita", Type::Application_Wita},
    {"application/wordperfect5.1", Type::Application_Wordperfect51},
    {"application/wsdl+xml", Type::Application_WsdlXml},
    {"application/wspolicy+xml", Type::Application_WspolicyXml},
    {"application/x-pki-message", Type::Application_XPkiMessage},
    {"application/x-www-form-urlencoded", Type::Application_XWwwFormUrlencoded},
    {"application/x-x509-ca-cert", Type::Application_XX509CaCert},
    {"application/x-x509-ca-ra-cert", Type::Application_XX509CaRaCert},
    {"application/x-x509-next-ca-cert", Type::Application_XX509NextCaCert},
    {"application/x400-bp", Type::Application_X400Bp},
    {"application/xacml+xml", Type::Application_XacmlXml},
    {"application/xcap-att+xml", Type::Application_XcapAttXml},
    {"application/xcap-caps+xml", Type::Application_XcapCapsXml},
    {"application/xcap-diff+xml", Type::Application_XcapDiffXml},
    {"application/xcap-el+xml", Type::Application_XcapElXml},
    {"application/xcap-error+xml", Type::Application_XcapErrorXml},
    {"application/xcap-ns+xml", Type::Application_XcapNsXml},
    {"application/xcon-conference-info-diff+xml",
     Type::Application_XconConferenceInfoDiffXml},
    {"application/xcon-conference-info+xml",
     Type::Application_XconConferenceInfoXml},
    {"application/xenc+xml", Type::Application_XencXml},
    {"application/xfdf", Type::Application_Xfdf},
    {"application/xhtml+xml", Type::Application_XhtmlXml},
    {"application/xliff+xml", Type::Application_XliffXml},
    {"application/xml", Type::Application_Xml},
    {"application/xml-dtd", Type::Application_XmlDtd},
    {"application/xml-external-parsed-entity",
     Type::Application_XmlExternalParsedEntity},
    {"application/xml-patch+xml", Type::Application_XmlPatchXml},
    {"application/xmpp+xml", Type::Application_XmppXml},
    {"application/xop+xml", Type::Application_XopXml},
    {"application/xslt+xml", Type::Application_XsltXml},
    {"application/xv+xml", Type::Application_XvXml},
    {"application/yaml", Type::Application_Yaml},
    {"application/yang", Type::Application_Yang},
    {"application/yang-data+cbor", Type::Application_YangDataCbor},
    {"application/yang-data+json", Type::Application_YangDataJson},
    {"application/yang-data+xml", Type::Application_YangDataXml},
    {"application/yang-patch+json", Type::Application_YangPatchJson},
    {"application/yang-patch+xml", Type::Application_YangPatchXml},
    {"application/yang-sid+json", Type::Application_YangSidJson},
    {"application/yin+xml", Type::Application_YinXml},
    {"application/zip", Type::Application_Zip},
    {"application/zlib", Type::Application_Zlib},
    {"application/zstd", Type::Application_Zstd},
    {"audio/*", Type::Audio_Any},
    {"audio/1d-interleaved-parityfec", Type::Audio_1dInterleavedParityfec},
    {"audio/32kadpcm", Type::Audio_32kadpcm},
    {"audio/3gpp", Type::Audio_3gpp},
    {"audio/3gpp2", Type::Audio_3gpp2},
    {"audio/aac", Type::Audio_Aac},
    {"audio/ac3", Type::Audio_Ac3},
    {"audio/AMR", Type::Audio_AMR},
    {"audio/AMR-WB", Type::Audio_AMRWB},
    {"audio/amr-wb+", Type::Audio_AmrWb},
    {"audio/aptx", Type::Audio_Aptx},
    {"audio/asc", Type::Audio_Asc},
    {"audio/ATRAC-ADVANCED-LOSSLESS", Type::Audio_ATRACADVANCEDLOSSLESS},
    {"audio/ATRAC-X", Type::Audio_ATRACX},
    {"audio/ATRAC3", Type::Audio_ATRAC3},
    {"audio/basic", Type::Audio_Basic},
    {"audio/BV16", Type::Audio_BV16},
    {"audio/BV32", Type::Audio_BV32},
    {"audio/clearmode", Type::Audio_Clearmode},
    {"audio/CN", Type::Audio_CN},
    {"audio/DAT12", Type::Audio_DAT12},
    {"audio/dls", Type::Audio_Dls},
    {"audio/dsr-es201108", Type::Audio_DsrEs201108},
    {"audio/dsr-es202050", Type::Audio_DsrEs202050},
    {"audio/dsr-es202211", Type::Audio_DsrEs202211},
    {"audio/dsr-es202212", Type::Audio_DsrEs202212},
    {"audio/DV", Type::Audio_DV},
    {"audio/DVI4", Type::Audio_DVI4},
    {"audio/eac3", Type::Audio_Eac3},
    {"audio/encaprtp", Type::Audio_Encaprtp},
    {"audio/EVRC", Type::Audio_EVRC},
    {"audio/EVRC-QCP", Type::Audio_EVRCQCP},
    {"audio/EVRC0", Type::Audio_EVRC0},
    {"audio/EVRC1", Type::Audio_EVRC1},
    {"audio/EVRCB", Type::Audio_EVRCB},
    {"audio/EVRCB0", Type::Audio_EVRCB0},
    {"audio/EVRCB1", Type::Audio_EVRCB1},
    {"audio/EVRCNW", Type::Audio_EVRCNW},
    {"audio/EVRCNW0", Type::Audio_EVRCNW0},
    {"audio/EVRCNW1", Type::Audio_EVRCNW1},
    {"audio/EVRCWB", Type::Audio_EVRCWB},
    {"audio/EVRCWB0", Type::Audio_EVRCWB0},
    {"audio/EVRCWB1", Type::Audio_EVRCWB1},
    {"audio/EVS", Type::Audio_EVS},
    {"audio/example", Type::Audio_Example},
    {"audio/flac", Type::Audio_Flac},
    {"audio/flexfec", Type::Audio_Flexfec},
    {"audio/fwdred", Type::Audio_Fwdred},
    {"audio/G711-0", Type::Audio_G7110},
    {"audio/G719", Type::Audio_G719},
    {"audio/G7221", Type::Audio_G7221},
    {"audio/G722", Type::Audio_G722},
    {"audio/G723", Type::Audio_G723},
    {"audio/G726-16", Type::Audio_G72616},
    {"audio/G726-24", Type::Audio_G72624},
    {"audio/G726-32", Type::Audio_G72632},
    {"audio/G726-40", Type::Audio_G72640},
    {"audio/G728", Type::Audio_G728},
    {"audio/G729", Type::Audio_G729},
    {"audio/G7291", Type::Audio_G7291},
    {"audio/G729D", Type::Audio_G729D},
    {"audio/G729E", Type::Audio_G729E},
    {"audio/GSM", Type::Audio_GSM},
    {"audio/GSM-EFR", Type::Audio_GSMEFR},
    {"audio/GSM-HR-08", Type::Audio_GSMHR08},
    {"audio/iLBC", Type::Audio_ILBC},
    {"audio/ip-mr_v2.5", Type::Audio_IpMrV25},
    {"audio/L8", Type::Audio_L8},
    {"audio/L16", Type::Audio_L16},
    {"audio/L20", Type::Audio_L20},
    {"audio/L24", Type::Audio_L24},
    {"audio/LPC", Type::Audio_LPC},
    {"audio/matroska", Type::Audio_Matroska},
    {"audio/MELP", Type::Audio_MELP},
    {"audio/MELP600", Type::Audio_MELP600},
    {"audio/MELP1200", Type::Audio_MELP1200},
    {"audio/MELP2400", Type::Audio_MELP2400},
    {"audio/mhas", Type::Audio_Mhas},
    {"audio/midi-clip", Type::Audio_MidiClip},
    {"audio/mobile-xmf", Type::Audio_MobileXmf},
    {"audio/MPA", Type::Audio_MPA},
    {"audio/mp4", Type::Audio_Mp4},
    {"audio/MP4A-LATM", Type::Audio_MP4ALATM},
    {"audio/mpa-robust", Type::Audio_MpaRobust},
    {"audio/mpeg", Type::Audio_Mpeg},
    {"audio/mpeg4-generic", Type::Audio_Mpeg4Generic},
    {"audio/ogg", Type::Audio_Ogg},
    {"audio/opus", Type::Audio_Opus},
    {"audio/parityfec", Type::Audio_Parityfec},
    {"audio/PCMA", Type::Audio_PCMA},
    {"audio/PCMA-WB", Type::Audio_PCMAWB},
    {"audio/PCMU", Type::Audio_PCMU},
    {"audio/PCMU-WB", Type::Audio_PCMUWB},
    {"audio/prs.sid", Type::Audio_PrsSid},
    {"audio/QCELP", Type::Audio_QCELP},
    {"audio/raptorfec", Type::Audio_Raptorfec},
    {"audio/RED", Type::Audio_RED},
    {"audio/rtp-enc-aescm128", Type::Audio_RtpEncAescm128},
    {"audio/rtploopback", Type::Audio_Rtploopback},
    {"audio/rtp-midi", Type::Audio_RtpMidi},
    {"audio/rtx", Type::Audio_Rtx},
    {"audio/scip", Type::Audio_Scip},
    {"audio/SMV", Type::Audio_SMV},
    {"audio/SMV0", Type::Audio_SMV0},
    {"audio/SMV-QCP", Type::Audio_SMVQCP},
    {"audio/sofa", Type::Audio_Sofa},
    {"audio/sp-midi", Type::Audio_SpMidi},
    {"audio/speex", Type::Audio_Speex},
    {"audio/t140c", Type::Audio_T140c},
    {"audio/t38", Type::Audio_T38},
    {"audio/telephone-event", Type::Audio_TelephoneEvent},
    {"audio/TETRA_ACELP", Type::Audio_TETRAACELP},
    {"audio/TETRA_ACELP_BB", Type::Audio_TETRAACELPBB},
    {"audio/tone", Type::Audio_Tone},
    {"audio/TSVCIS", Type::Audio_TSVCIS},
    {"audio/UEMCLIP", Type::Audio_UEMCLIP},
    {"audio/ulpfec", Type::Audio_Ulpfec},
    {"audio/usac", Type::Audio_Usac},
    {"audio/VDVI", Type::Audio_VDVI},
    {"audio/VMR-WB", Type::Audio_VMRWB},
    {"audio/vnd.3gpp.iufp", Type::Audio_Vnd3gppIufp},
    {"audio/vnd.4SB", Type::Audio_Vnd4SB},
    {"audio/vnd.audiokoz", Type::Audio_VndAudiokoz},
    {"audio/vnd.CELP", Type::Audio_VndCELP},
    {"audio/vnd.cisco.nse", Type::Audio_VndCiscoNse},
    {"audio/vnd.cmles.radio-events", Type::Audio_VndCmlesRadioEvents},
    {"audio/vnd.cns.anp1", Type::Audio_VndCnsAnp1},
    {"audio/vnd.cns.inf1", Type::Audio_VndCnsInf1},
    {"audio/vnd.dece.audio", Type::Audio_VndDeceAudio},
    {"audio/vnd.digital-winds", Type::Audio_VndDigitalWinds},
    {"audio/vnd.dlna.adts", Type::Audio_VndDlnaAdts},
    {"audio/vnd.dolby.heaac.1", Type::Audio_VndDolbyHeaac1},
    {"audio/vnd.dolby.heaac.2", Type::Audio_VndDolbyHeaac2},
    {"audio/vnd.dolby.mlp", Type::Audio_VndDolbyMlp},
    {"audio/vnd.dolby.mps", Type::Audio_VndDolbyMps},
    {"audio/vnd.dolby.pl2", Type::Audio_VndDolbyPl2},
    {"audio/vnd.dolby.pl2x", Type::Audio_VndDolbyPl2x},
    {"audio/vnd.dolby.pl2z", Type::Audio_VndDolbyPl2z},
    {"audio/vnd.dolby.pulse.1", Type::Audio_VndDolbyPulse1},
    {"audio/vnd.dra", Type::Audio_VndDra},
    {"audio/vnd.dts", Type::Audio_VndDts},
    {"audio/vnd.dts.hd", Type::Audio_VndDtsHd},
    {"audio/vnd.dts.uhd", Type::Audio_VndDtsUhd},
    {"audio/vnd.dvb.file", Type::Audio_VndDvbFile},
    {"audio/vnd.everad.plj", Type::Audio_VndEveradPlj},
    {"audio/vnd.hns.audio", Type::Audio_VndHnsAudio},
    {"audio/vnd.lucent.voice", Type::Audio_VndLucentVoice},
    {"audio/vnd.ms-playready.media.pya", Type::Audio_VndMsPlayreadyMediaPya},
    {"audio/vnd.nokia.mobile-xmf", Type::Audio_VndNokiaMobileXmf},
    {"audio/vnd.nortel.vbk", Type::Audio_VndNortelVbk},
    {"audio/vnd.nuera.ecelp4800", Type::Audio_VndNueraEcelp4800},
    {"audio/vnd.nuera.ecelp7470", Type::Audio_VndNueraEcelp7470},
    {"audio/vnd.nuera.ecelp9600", Type::Audio_VndNueraEcelp9600},
    {"audio/vnd.octel.sbc", Type::Audio_VndOctelSbc},
    {"audio/vnd.presonus.multitrack", Type::Audio_VndPresonusMultitrack},
    {"audio/vnd.qcelp", Type::Audio_VndQcelp},
    {"audio/vnd.rhetorex.32kadpcm", Type::Audio_VndRhetorex32kadpcm},
    {"audio/vnd.rip", Type::Audio_VndRip},
    {"audio/vnd.sealedmedia.softseal.mpeg",
     Type::Audio_VndSealedmediaSoftsealMpeg},
    {"audio/vnd.vmx.cvsd", Type::Audio_VndVmxCvsd},
    {"audio/vorbis", Type::Audio_Vorbis},
    {"audio/vorbis-config", Type::Audio_VorbisConfig},
    {"font/*", Type::Font_Any},
    {"font/collection", Type::Font_Collection},
    {"font/otf", Type::Font_Otf},
    {"font/sfnt", Type::Font_Sfnt},
    {"font/ttf", Type::Font_Ttf},
    {"font/woff", Type::Font_Woff},
    {"font/woff2", Type::Font_Woff2},
    {"haptics/*", Type::Haptics_Any},
    {"haptics/ivs", Type::Haptics_Ivs},
    {"haptics/hjif", Type::Haptics_Hjif},
    {"haptics/hmpg", Type::Haptics_Hmpg},
    {"image/*", Type::Image_Any},
    {"image/aces", Type::Image_Aces},
    {"image/apng", Type::Image_Apng},
    {"image/avci", Type::Image_Avci},
    {"image/avcs", Type::Image_Avcs},
    {"image/avif", Type::Image_Avif},
    {"image/bmp", Type::Image_Bmp},
    {"image/cgm", Type::Image_Cgm},
    {"image/dicom-rle", Type::Image_DicomRle},
    {"image/dpx", Type::Image_Dpx},
    {"image/emf", Type::Image_Emf},
    {"image/example", Type::Image_Example},
    {"image/fits", Type::Image_Fits},
    {"image/g3fax", Type::Image_G3fax},
    {"image/gif", Type::Image_Gif},
    {"image/heic", Type::Image_Heic},
    {"image/heic-sequence", Type::Image_HeicSequence},
    {"image/heif", Type::Image_Heif},
    {"image/heif-sequence", Type::Image_HeifSequence},
    {"image/hej2k", Type::Image_Hej2k},
    {"image/hsj2", Type::Image_Hsj2},
    {"image/ief", Type::Image_Ief},
    {"image/j2c", Type::Image_J2c},
    {"image/jls", Type::Image_Jls},
    {"image/jp2", Type::Image_Jp2},
    {"image/jpeg", Type::Image_Jpeg},
    {"image/jph", Type::Image_Jph},
    {"image/jphc", Type::Image_Jphc},
    {"image/jpm", Type::Image_Jpm},
    {"image/jpx", Type::Image_Jpx},
    {"image/jxl", Type::Image_Jxl},
    {"image/jxr", Type::Image_Jxr},
    {"image/jxrA", Type::Image_JxrA},
    {"image/jxrS", Type::Image_JxrS},
    {"image/jxs", Type::Image_Jxs},
    {"image/jxsc", Type::Image_Jxsc},
    {"image/jxsi", Type::Image_Jxsi},
    {"image/jxss", Type::Image_Jxss},
    {"image/ktx", Type::Image_Ktx},
    {"image/ktx2", Type::Image_Ktx2},
    {"image/naplps", Type::Image_Naplps},
    {"image/png", Type::Image_Png},
    {"image/prs.btif", Type::Image_PrsBtif},
    {"image/prs.pti", Type::Image_PrsPti},
    {"image/pwg-raster", Type::Image_PwgRaster},
    {"image/svg+xml", Type::Image_SvgXml},
    {"image/t38", Type::Image_T38},
    {"image/tiff", Type::Image_Tiff},
    {"image/tiff-fx", Type::Image_TiffFx},
    {"image/vnd.adobe.photoshop", Type::Image_VndAdobePhotoshop},
    {"image/vnd.airzip.accelerator.azv", Type::Image_VndAirzipAcceleratorAzv},
    {"image/vnd.cns.inf2", Type::Image_VndCnsInf2},
    {"image/vnd.dece.graphic", Type::Image_VndDeceGraphic},
    {"image/vnd.djvu", Type::Image_VndDjvu},
    {"image/vnd.dwg", Type::Image_VndDwg},
    {"image/vnd.dxf", Type::Image_VndDxf},
    {"image/vnd.dvb.subtitle", Type::Image_VndDvbSubtitle},
    {"image/vnd.fastbidsheet", Type::Image_VndFastbidsheet},
    {"image/vnd.fpx", Type::Image_VndFpx},
    {"image/vnd.fst", Type::Image_VndFst},
    {"image/vnd.fujixerox.edmics-mmr", Type::Image_VndFujixeroxEdmicsMmr},
    {"image/vnd.fujixerox.edmics-rlc", Type::Image_VndFujixeroxEdmicsRlc},
    {"image/vnd.globalgraphics.pgb", Type::Image_VndGlobalgraphicsPgb},
    {"image/vnd.microsoft.icon", Type::Image_VndMicrosoftIcon},
    {"image/vnd.mix", Type::Image_VndMix},
    {"image/vnd.ms-modi", Type::Image_VndMsModi},
    {"image/vnd.mozilla.apng", Type::Image_VndMozillaApng},
    {"image/vnd.net-fpx", Type::Image_VndNetFpx},
    {"image/vnd.pco.b16", Type::Image_VndPcoB16},
    {"image/vnd.radiance", Type::Image_VndRadiance},
    {"image/vnd.sealed.png", Type::Image_VndSealedPng},
    {"image/vnd.sealedmedia.softseal.gif",
     Type::Image_VndSealedmediaSoftsealGif},
    {"image/vnd.sealedmedia.softseal.jpg",
     Type::Image_VndSealedmediaSoftsealJpg},
    {"image/vnd.svf", Type::Image_VndSvf},
    {"image/vnd.tencent.tap", Type::Image_VndTencentTap},
    {"image/vnd.valve.source.texture", Type::Image_VndValveSourceTexture},
    {"image/vnd.wap.wbmp", Type::Image_VndWapWbmp},
    {"image/vnd.xiff", Type::Image_VndXiff},
    {"image/vnd.zbrush.pcx", Type::Image_VndZbrushPcx},
    {"image/webp", Type::Image_Webp},
    {"image/wmf", Type::Image_Wmf},
    {"image/x-emf", Type::Image_XEmf},
    {"image/x-wmf", Type::Image_XWmf},
    {"message/*", Type::Message_Any},
    {"message/bhttp", Type::Message_Bhttp},
    {"message/CPIM", Type::Message_CPIM},
    {"message/delivery-status", Type::Message_DeliveryStatus},
    {"message/disposition-notification", Type::Message_DispositionNotification},
    {"message/example", Type::Message_Example},
    {"message/external-body", Type::Message_ExternalBody},
    {"message/feedback-report", Type::Message_FeedbackReport},
    {"message/global", Type::Message_Global},
    {"message/global-delivery-status", Type::Message_GlobalDeliveryStatus},
    {"message/global-disposition-notification",
     Type::Message_GlobalDispositionNotification},
    {"message/global-headers", Type::Message_GlobalHeaders},
    {"message/http", Type::Message_Http},
    {"message/imdn+xml", Type::Message_ImdnXml},
    {"message/mls", Type::Message_Mls},
    {"message/news", Type::Message_News},
    {"message/ohttp-req", Type::Message_OhttpReq},
    {"message/ohttp-res", Type::Message_OhttpRes},
    {"message/partial", Type::Message_Partial},
    {"message/rfc822", Type::Message_Rfc822},
    {"message/s-http", Type::Message_SHttp},
    {"message/sip", Type::Message_Sip},
    {"message/sipfrag", Type::Message_Sipfrag},
    {"message/tracking-status", Type::Message_TrackingStatus},
    {"message/vnd.si.simp", Type::Message_VndSiSimp},
    {"message/vnd.wfa.wsc", Type::Message_VndWfaWsc},
    {"model/*", Type::Model_Any},
    {"model/3mf", Type::Model_3mf},
    {"model/e57", Type::Model_E57},
    {"model/example", Type::Model_Example},
    {"model/gltf-binary", Type::Model_GltfBinary},
    {"model/gltf+json", Type::Model_GltfJson},
    {"model/JT", Type::Model_JT},
    {"model/iges", Type::Model_Iges},
    {"model/mesh", Type::Model_Mesh},
    {"model/mtl", Type::Model_Mtl},
    {"model/obj", Type::Model_Obj},
    {"model/prc", Type::Model_Prc},
    {"model/step", Type::Model_Step},
    {"model/step+xml", Type::Model_StepXml},
    {"model/step+zip", Type::Model_StepZip},
    {"model/step-xml+zip", Type::Model_StepXmlZip},
    {"model/stl", Type::Model_Stl},
    {"model/u3d", Type::Model_U3d},
    {"model/vnd.bary", Type::Model_VndBary},
    {"model/vnd.cld", Type::Model_VndCld},
    {"model/vnd.collada+xml", Type::Model_VndColladaXml},
    {"model/vnd.dwf", Type::Model_VndDwf},
    {"model/vnd.flatland.3dml", Type::Model_VndFlatland3dml},
    {"model/vnd.gdl", Type::Model_VndGdl},
    {"model/vnd.gs-gdl", Type::Model_VndGsGdl},
    {"model/vnd.gtw", Type::Model_VndGtw},
    {"model/vnd.moml+xml", Type::Model_VndMomlXml},
    {"model/vnd.mts", Type::Model_VndMts},
    {"model/vnd.opengex", Type::Model_VndOpengex},
    {"model/vnd.parasolid.transmit.binary",
     Type::Model_VndParasolidTransmitBinary},
    {"model/vnd.parasolid.transmit.text", Type::Model_VndParasolidTransmitText},
    {"model/vnd.pytha.pyox", Type::Model_VndPythaPyox},
    {"model/vnd.rosette.annotated-data-model",
     Type::Model_VndRosetteAnnotatedDataModel},
    {"model/vnd.sap.vds", Type::Model_VndSapVds},
    {"model/vnd.usda", Type::Model_VndUsda},
    {"model/vnd.usdz+zip", Type::Model_VndUsdzZip},
    {"model/vnd.valve.source.compiled-map",
     Type::Model_VndValveSourceCompiledMap},
    {"model/vnd.vtu", Type::Model_VndVtu},
    {"model/vrml", Type::Model_Vrml},
    {"model/x3d-vrml", Type::Model_X3dVrml},
    {"model/x3d+fastinfoset", Type::Model_X3dFastinfoset},
    {"model/x3d+xml", Type::Model_X3dXml},
    {"multipart/*", Type::Multipart_Any},
    {"multipart/alternative", Type::Multipart_Alternative},
    {"multipart/appledouble", Type::Multipart_Appledouble},
    {"multipart/byteranges", Type::Multipart_Byteranges},
    {"multipart/digest", Type::Multipart_Digest},
    {"multipart/encrypted", Type::Multipart_Encrypted},
    {"multipart/example", Type::Multipart_Example},
    {"multipart/form-data", Type::Multipart_FormData},
    {"multipart/header-set", Type::Multipart_HeaderSet},
    {"multipart/mixed", Type::Multipart_Mixed},
    {"multipart/multilingual", Type::Multipart_Multilingual},
    {"multipart/parallel", Type::Multipart_Parallel},
    {"multipart/related", Type::Multipart_Related},
    {"multipart/report", Type::Multipart_Report},
    {"multipart/signed", Type::Multipart_Signed},
    {"multipart/vnd.bint.med-plus", Type::Multipart_VndBintMedPlus},
    {"multipart/voice-message", Type::Multipart_VoiceMessage},
    {"multipart/x-mixed-replace", Type::Multipart_XMixedReplace},
    {"text/*", Type::Text_Any},
    {"text/1d-interleaved-parityfec", Type::Text_1dInterleavedParityfec},
    {"text/cache-manifest", Type::Text_CacheManifest},
    {"text/calendar", Type::Text_Calendar},
    {"text/cql", Type::Text_Cql},
    {"text/cql-expression", Type::Text_CqlExpression},
    {"text/cql-identifier", Type::Text_CqlIdentifier},
    {"text/css", Type::Text_Css},
    {"text/csv", Type::Text_Csv},
    {"text/csv-schema", Type::Text_CsvSchema},
    {"text/directory", Type::Text_Directory},
    {"text/dns", Type::Text_Dns},
    {"text/ecmascript", Type::Text_Ecmascript},
    {"text/encaprtp", Type::Text_Encaprtp},
    {"text/enriched", Type::Text_Enriched},
    {"text/example", Type::Text_Example},
    {"text/fhirpath", Type::Text_Fhirpath},
    {"text/flexfec", Type::Text_Flexfec},
    {"text/fwdred", Type::Text_Fwdred},
    {"text/gff3", Type::Text_Gff3},
    {"text/grammar-ref-list", Type::Text_GrammarRefList},
    {"text/hl7v2", Type::Text_Hl7v2},
    {"text/html", Type::Text_Html},
    {"text/javascript", Type::Text_Javascript},
    {"text/jcr-cnd", Type::Text_JcrCnd},
    {"text/markdown", Type::Text_Markdown},
    {"text/mizar", Type::Text_Mizar},
    {"text/n3", Type::Text_N3},
    {"text/parameters", Type::Text_Parameters},
    {"text/parityfec", Type::Text_Parityfec},
    {"text/plain", Type::Text_Plain},
    {"text/provenance-notation", Type::Text_ProvenanceNotation},
    {"text/prs.fallenstein.rst", Type::Text_PrsFallensteinRst},
    {"text/prs.lines.tag", Type::Text_PrsLinesTag},
    {"text/prs.prop.logic", Type::Text_PrsPropLogic},
    {"text/prs.texi", Type::Text_PrsTexi},
    {"text/raptorfec", Type::Text_Raptorfec},
    {"text/RED", Type::Text_RED},
    {"text/rfc822-headers", Type::Text_Rfc822Headers},
    {"text/richtext", Type::Text_Richtext},
    {"text/rtf", Type::Text_Rtf},
    {"text/rtp-enc-aescm128", Type::Text_RtpEncAescm128},
    {"text/rtploopback", Type::Text_Rtploopback},
    {"text/rtx", Type::Text_Rtx},
    {"text/SGML", Type::Text_SGML},
    {"text/shaclc", Type::Text_Shaclc},
    {"text/shex", Type::Text_Shex},
    {"text/spdx", Type::Text_Spdx},
    {"text/strings", Type::Text_Strings},
    {"text/t140", Type::Text_T140},
    {"text/tab-separated-values", Type::Text_TabSeparatedValues},
    {"text/troff", Type::Text_Troff},
    {"text/turtle", Type::Text_Turtle},
    {"text/ulpfec", Type::Text_Ulpfec},
    {"text/uri-list", Type::Text_UriList},
    {"text/vcard", Type::Text_Vcard},
    {"text/vnd.a", Type::Text_VndA},
    {"text/vnd.abc", Type::Text_VndAbc},
    {"text/vnd.ascii-art", Type::Text_VndAsciiArt},
    {"text/vnd.curl", Type::Text_VndCurl},
    {"text/vnd.debian.copyright", Type::Text_VndDebianCopyright},
    {"text/vnd.DMClientScript", Type::Text_VndDMClientScript},
    {"text/vnd.dvb.subtitle", Type::Text_VndDvbSubtitle},
    {"text/vnd.esmertec.theme-descriptor",
     Type::Text_VndEsmertecThemeDescriptor},
    {"text/vnd.exchangeable", Type::Text_VndExchangeable},
    {"text/vnd.familysearch.gedcom", Type::Text_VndFamilysearchGedcom},
    {"text/vnd.ficlab.flt", Type::Text_VndFiclabFlt},
    {"text/vnd.fly", Type::Text_VndFly},
    {"text/vnd.fmi.flexstor", Type::Text_VndFmiFlexstor},
    {"text/vnd.gml", Type::Text_VndGml},
    {"text/vnd.graphviz", Type::Text_VndGraphviz},
    {"text/vnd.hans", Type::Text_VndHans},
    {"text/vnd.hgl", Type::Text_VndHgl},
    {"text/vnd.in3d.3dml", Type::Text_VndIn3d3dml},
    {"text/vnd.in3d.spot", Type::Text_VndIn3dSpot},
    {"text/vnd.IPTC.NewsML", Type::Text_VndIPTCNewsML},
    {"text/vnd.IPTC.NITF", Type::Text_VndIPTCNITF},
    {"text/vnd.latex-z", Type::Text_VndLatexZ},
    {"text/vnd.motorola.reflex", Type::Text_VndMotorolaReflex},
    {"text/vnd.ms-mediapackage", Type::Text_VndMsMediapackage},
    {"text/vnd.net2phone.commcenter.command",
     Type::Text_VndNet2phoneCommcenterCommand},
    {"text/vnd.radisys.msml-basic-layout",
     Type::Text_VndRadisysMsmlBasicLayout},
    {"text/vnd.senx.warpscript", Type::Text_VndSenxWarpscript},
    {"text/vnd.si.uricatalogue", Type::Text_VndSiUricatalogue},
    {"text/vnd.sun.j2me.app-descriptor", Type::Text_VndSunJ2meAppDescriptor},
    {"text/vnd.sosi", Type::Text_VndSosi},
    {"text/vnd.trolltech.linguist", Type::Text_VndTrolltechLinguist},
    {"text/vnd.vcf", Type::Text_VndVcf},
    {"text/vnd.wap.si", Type::Text_VndWapSi},
    {"text/vnd.wap.sl", Type::Text_VndWapSl},
    {"text/vnd.wap.wml", Type::Text_VndWapWml},
    {"text/vnd.wap.wmlscript", Type::Text_VndWapWmlscript},
    {"text/vnd.zoo.kcl", Type::Text_VndZooKcl},
    {"text/vtt", Type::Text_Vtt},
    {"text/wgsl", Type::Text_Wgsl},
    {"text/xml", Type::Text_Xml},
    {"text/xml-external-parsed-entity", Type::Text_XmlExternalParsedEntity},
    {"video/*", Type::Video_Any},
    {"video/1d-interleaved-parityfec", Type::Video_1dInterleavedParityfec},
    {"video/3gpp", Type::Video_3gpp},
    {"video/3gpp2", Type::Video_3gpp2},
    {"video/3gpp-tt", Type::Video_3gppTt},
    {"video/AV1", Type::Video_AV1},
    {"video/BMPEG", Type::Video_BMPEG},
    {"video/BT656", Type::Video_BT656},
    {"video/CelB", Type::Video_CelB},
    {"video/DV", Type::Video_DV},
    {"video/encaprtp", Type::Video_Encaprtp},
    {"video/evc", Type::Video_Evc},
    {"video/example", Type::Video_Example},
    {"video/FFV1", Type::Video_FFV1},
    {"video/flexfec", Type::Video_Flexfec},
    {"video/H261", Type::Video_H261},
    {"video/H263", Type::Video_H263},
    {"video/H263-1998", Type::Video_H2631998},
    {"video/H263-2000", Type::Video_H2632000},
    {"video/H264", Type::Video_H264},
    {"video/H264-RCDO", Type::Video_H264RCDO},
    {"video/H264-SVC", Type::Video_H264SVC},
    {"video/H265", Type::Video_H265},
    {"video/H266", Type::Video_H266},
    {"video/iso.segment", Type::Video_IsoSegment},
    {"video/JPEG", Type::Video_JPEG},
    {"video/jpeg2000", Type::Video_Jpeg2000},
    {"video/jxsv", Type::Video_Jxsv},
    {"video/matroska", Type::Video_Matroska},
    {"video/matroska-3d", Type::Video_Matroska3d},
    {"video/mj2", Type::Video_Mj2},
    {"video/MP1S", Type::Video_MP1S},
    {"video/MP2P", Type::Video_MP2P},
    {"video/MP2T", Type::Video_MP2T},
    {"video/mp4", Type::Video_Mp4},
    {"video/MP4V-ES", Type::Video_MP4VES},
    {"video/MPV", Type::Video_MPV},
    {"video/mpeg", Type::Video_Mpeg},
    {"video/mpeg4-generic", Type::Video_Mpeg4Generic},
    {"video/nv", Type::Video_Nv},
    {"video/ogg", Type::Video_Ogg},
    {"video/parityfec", Type::Video_Parityfec},
    {"video/pointer", Type::Video_Pointer},
    {"video/quicktime", Type::Video_Quicktime},
    {"video/raptorfec", Type::Video_Raptorfec},
    {"video/raw", Type::Video_Raw},
    {"video/rtp-enc-aescm128", Type::Video_RtpEncAescm128},
    {"video/rtploopback", Type::Video_Rtploopback},
    {"video/rtx", Type::Video_Rtx},
    {"video/scip", Type::Video_Scip},
    {"video/smpte291", Type::Video_Smpte291},
    {"video/SMPTE292M", Type::Video_SMPTE292M},
    {"video/ulpfec", Type::Video_Ulpfec},
    {"video/vc1", Type::Video_Vc1},
    {"video/vc2", Type::Video_Vc2},
    {"video/vnd.CCTV", Type::Video_VndCCTV},
    {"video/vnd.dece.hd", Type::Video_VndDeceHd},
    {"video/vnd.dece.mobile", Type::Video_VndDeceMobile},
    {"video/vnd.dece.mp4", Type::Video_VndDeceMp4},
    {"video/vnd.dece.pd", Type::Video_VndDecePd},
    {"video/vnd.dece.sd", Type::Video_VndDeceSd},
    {"video/vnd.dece.video", Type::Video_VndDeceVideo},
    {"video/vnd.directv.mpeg", Type::Video_VndDirectvMpeg},
    {"video/vnd.directv.mpeg-tts", Type::Video_VndDirectvMpegTts},
    {"video/vnd.dlna.mpeg-tts", Type::Video_VndDlnaMpegTts},
    {"video/vnd.dvb.file", Type::Video_VndDvbFile},
    {"video/vnd.fvt", Type::Video_VndFvt},
    {"video/vnd.hns.video", Type::Video_VndHnsVideo},
    {"video/vnd.iptvforum.1dparityfec-1010",
     Type::Video_VndIptvforum1dparityfec1010},
    {"video/vnd.iptvforum.1dparityfec-2005",
     Type::Video_VndIptvforum1dparityfec2005},
    {"video/vnd.iptvforum.2dparityfec-1010",
     Type::Video_VndIptvforum2dparityfec1010},
    {"video/vnd.iptvforum.2dparityfec-2005",
     Type::Video_VndIptvforum2dparityfec2005},
    {"video/vnd.iptvforum.ttsavc", Type::Video_VndIptvforumTtsavc},
    {"video/vnd.iptvforum.ttsmpeg2", Type::Video_VndIptvforumTtsmpeg2},
    {"video/vnd.motorola.video", Type::Video_VndMotorolaVideo},
    {"video/vnd.motorola.videop", Type::Video_VndMotorolaVideop},
    {"video/vnd.mpegurl", Type::Video_VndMpegurl},
    {"video/vnd.ms-playready.media.pyv", Type::Video_VndMsPlayreadyMediaPyv},
    {"video/vnd.nokia.interleaved-multimedia",
     Type::Video_VndNokiaInterleavedMultimedia},
    {"video/vnd.nokia.mp4vr", Type::Video_VndNokiaMp4vr},
    {"video/vnd.nokia.videovoip", Type::Video_VndNokiaVideovoip},
    {"video/vnd.objectvideo", Type::Video_VndObjectvideo},
    {"video/vnd.radgamettools.bink", Type::Video_VndRadgamettoolsBink},
    {"video/vnd.radgamettools.smacker", Type::Video_VndRadgamettoolsSmacker},
    {"video/vnd.sealed.mpeg1", Type::Video_VndSealedMpeg1},
    {"video/vnd.sealed.mpeg4", Type::Video_VndSealedMpeg4},
    {"video/vnd.sealed.swf", Type::Video_VndSealedSwf},
    {"video/vnd.sealedmedia.softseal.mov",
     Type::Video_VndSealedmediaSoftsealMov},
    {"video/vnd.uvvu.mp4", Type::Video_VndUvvuMp4},
    {"video/vnd.youtube.yt", Type::Video_VndYoutubeYt},
    {"video/vnd.vivo", Type::Video_VndVivo},
    {"video/VP8", Type::Video_VP8},
    {"video/VP9", Type::Video_VP9},

};

std::optional<Type> to_type(std::string_view str)
{
    static const std::map<std::string, Type, std::less<>> type_map(
        std::begin(type_map_data), std::end(type_map_data));

    if (auto it = type_map.find(str); it != type_map.end()) {
        return it->second;
    }
    return std::nullopt;
}
}  // namespace Web::Media