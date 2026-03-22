#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ParsingError.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/StringComparison.h"
#include "unitysdk/System/UriComponents.h"
#include "unitysdk/System/UriFormat.h"
#include "unitysdk/System/UriHostNameType.h"
#include "unitysdk/System/UriIdnScope.h"
#include "unitysdk/System/UriKind.h"
#include "unitysdk/System/UriPartial.h"
#include "unitysdk/System/Uri_Check.h"
#include "unitysdk/System/Uri_Flags.h"

namespace System { class String; }
namespace System { class UriFormatException; }
namespace System { class UriParser; }
namespace System { class Uri_UriInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_URI_ALLOWIDNSTATIC_OFFSET UNITYSDK_OFFSET(0x18251A40)
#define SYSTEM_URI_CALCULATECASEINSENSITIVEHASHCODE_OFFSET UNITYSDK_OFFSET(0x182596D0)
#define SYSTEM_URI_CANONICALIZE_OFFSET UNITYSDK_OFFSET(0x182615E0)
#define SYSTEM_URI_CHECKAUTHORITYHELPERHANDLEANYHOSTIRI_OFFSET UNITYSDK_OFFSET(0x18260900)
#define SYSTEM_URI_CHECKAUTHORITYHELPERHANDLEDNSIRI_OFFSET UNITYSDK_OFFSET(0x182603F0)
#define SYSTEM_URI_CHECKAUTHORITYHELPER_OFFSET UNITYSDK_OFFSET(0x1825B8A0)
#define SYSTEM_URI_CHECKCANONICAL_OFFSET UNITYSDK_OFFSET(0x1825D2C0)
#define SYSTEM_URI_CHECKFORCOLONINFIRSTPATHSEGMENT_OFFSET UNITYSDK_OFFSET(0x1825A9E0)
#define SYSTEM_URI_CHECKFORCONFIGLOAD_OFFSET UNITYSDK_OFFSET(0x18262280)
#define SYSTEM_URI_CHECKFORESCAPEDUNRESERVED_OFFSET UNITYSDK_OFFSET(0x18262460)
#define SYSTEM_URI_CHECKFORUNICODE_OFFSET UNITYSDK_OFFSET(0x18262340)
#define SYSTEM_URI_CHECKHOSTNAME_OFFSET UNITYSDK_OFFSET(0x18258820)
#define SYSTEM_URI_CHECKKNOWNSCHEMES_OFFSET UNITYSDK_OFFSET(0x18260080)
#define SYSTEM_URI_CHECKSCHEMENAME_OFFSET UNITYSDK_OFFSET(0x182591C0)
#define SYSTEM_URI_CHECKSCHEMESYNTAX_OFFSET UNITYSDK_OFFSET(0x18254D90)
#define SYSTEM_URI_CHECKSECURITY_OFFSET UNITYSDK_OFFSET(0x18261770)
#define SYSTEM_URI_COMBINEURI_OFFSET UNITYSDK_OFFSET(0x18254F30)
#define SYSTEM_URI_COMPARE_OFFSET UNITYSDK_OFFSET(0x18262E10)
#define SYSTEM_URI_COMPRESS_OFFSET UNITYSDK_OFFSET(0x18257950)
#define SYSTEM_URI_CREATEHELPER_OFFSET UNITYSDK_OFFSET(0x182626B0)
#define SYSTEM_URI_CREATEHOSTSTRINGHELPER_OFFSET UNITYSDK_OFFSET(0x1825D160)
#define SYSTEM_URI_CREATEHOSTSTRING_OFFSET UNITYSDK_OFFSET(0x18253400)
#define SYSTEM_URI_CREATETHISFROMURI_OFFSET UNITYSDK_OFFSET(0x18254610)
#define SYSTEM_URI_CREATETHIS_OFFSET UNITYSDK_OFFSET(0x18253900)
#define SYSTEM_URI_CREATEURIINFO_OFFSET UNITYSDK_OFFSET(0x18251C00)
#define SYSTEM_URI_CREATEURI_OFFSET UNITYSDK_OFFSET(0x18253C10)
#define SYSTEM_URI_ENSUREHOSTSTRING_OFFSET UNITYSDK_OFFSET(0x182533A0)
#define SYSTEM_URI_ENSUREPARSEREMAINING_OFFSET UNITYSDK_OFFSET(0x182522E0)
#define SYSTEM_URI_ENSUREURIINFO_OFFSET UNITYSDK_OFFSET(0x18251BD0)
#define SYSTEM_URI_EQUALS_OFFSET UNITYSDK_OFFSET(0x18259A10)
#define SYSTEM_URI_ESCAPEDATASTRING_OFFSET UNITYSDK_OFFSET(0x18263870)
#define SYSTEM_URI_ESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x182616D0)
#define SYSTEM_URI_ESCAPEUNESCAPEIRI_OFFSET UNITYSDK_OFFSET(0x18260060)
#define SYSTEM_URI_ESCAPEURISTRING_OFFSET UNITYSDK_OFFSET(0x182637A0)
#define SYSTEM_URI_ESCAPE_OFFSET UNITYSDK_OFFSET(0x182615F0)
#define SYSTEM_URI_FINDENDOFCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x18260F50)
#define SYSTEM_URI_FINDENDOFCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1825FFD0)
#define SYSTEM_URI_FROMHEX_OFFSET UNITYSDK_OFFSET(0x182593F0)
#define SYSTEM_URI_GETCANONICALPATH_OFFSET UNITYSDK_OFFSET(0x1825F650)
#define SYSTEM_URI_GETCOMBINEDSTRING_OFFSET UNITYSDK_OFFSET(0x18254AC0)
#define SYSTEM_URI_GETCOMPONENTSHELPER_OFFSET UNITYSDK_OFFSET(0x18259800)
#define SYSTEM_URI_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1825D800)
#define SYSTEM_URI_GETESCAPEDPARTS_OFFSET UNITYSDK_OFFSET(0x1825D940)
#define SYSTEM_URI_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18255D00)
#define SYSTEM_URI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18259490)
#define SYSTEM_URI_GETHOSTVIACUSTOMSYNTAX_OFFSET UNITYSDK_OFFSET(0x1825CCB0)
#define SYSTEM_URI_GETLEFTPART_OFFSET UNITYSDK_OFFSET(0x182589E0)
#define SYSTEM_URI_GETLOCALPATH_OFFSET UNITYSDK_OFFSET(0x18256480)
#define SYSTEM_URI_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x18255F30)
#define SYSTEM_URI_GETPARTS_OFFSET UNITYSDK_OFFSET(0x18256110)
#define SYSTEM_URI_GETRELATIVESERIALIZATIONSTRING_OFFSET UNITYSDK_OFFSET(0x18262BE0)
#define SYSTEM_URI_GETUNESCAPEDPARTS_OFFSET UNITYSDK_OFFSET(0x18257E40)
#define SYSTEM_URI_GETURIPARTSFROMUSERSTRING_OFFSET UNITYSDK_OFFSET(0x1825DA70)
#define SYSTEM_URI_GET_ABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x18256120)
#define SYSTEM_URI_GET_ABSOLUTEURI_OFFSET UNITYSDK_OFFSET(0x182562E0)
#define SYSTEM_URI_GET_ALLOWIDN_OFFSET UNITYSDK_OFFSET(0x182519A0)
#define SYSTEM_URI_GET_AUTHORITY_OFFSET UNITYSDK_OFFSET(0x18256F40)
#define SYSTEM_URI_GET_DNSSAFEHOST_OFFSET UNITYSDK_OFFSET(0x182583D0)
#define SYSTEM_URI_GET_FRAGMENT_OFFSET UNITYSDK_OFFSET(0x18258150)
#define SYSTEM_URI_GET_HASAUTHORITY_OFFSET UNITYSDK_OFFSET(0x18261300)
#define SYSTEM_URI_GET_HOSTNAMETYPE_OFFSET UNITYSDK_OFFSET(0x18256FD0)
#define SYSTEM_URI_GET_HOSTTYPE_OFFSET UNITYSDK_OFFSET(0x18251910)
#define SYSTEM_URI_GET_HOST_OFFSET UNITYSDK_OFFSET(0x182575E0)
#define SYSTEM_URI_GET_IDNHOST_OFFSET UNITYSDK_OFFSET(0x18258700)
#define SYSTEM_URI_GET_INITIALIZELOCK_OFFSET UNITYSDK_OFFSET(0x18257690)
#define SYSTEM_URI_GET_ISABSOLUTEURI_OFFSET UNITYSDK_OFFSET(0x18253C00)
#define SYSTEM_URI_GET_ISDEFAULTPORT_OFFSET UNITYSDK_OFFSET(0x182570D0)
#define SYSTEM_URI_GET_ISDOSPATH_OFFSET UNITYSDK_OFFSET(0x182518F0)
#define SYSTEM_URI_GET_ISFILE_OFFSET UNITYSDK_OFFSET(0x18257190)
#define SYSTEM_URI_GET_ISIMPLICITFILE_OFFSET UNITYSDK_OFFSET(0x182518D0)
#define SYSTEM_URI_GET_ISLOOPBACK_OFFSET UNITYSDK_OFFSET(0x18257210)
#define SYSTEM_URI_GET_ISNOTABSOLUTEURI_OFFSET UNITYSDK_OFFSET(0x18251930)
#define SYSTEM_URI_GET_ISUNCORDOSPATH_OFFSET UNITYSDK_OFFSET(0x182518E0)
#define SYSTEM_URI_GET_ISUNCPATH_OFFSET UNITYSDK_OFFSET(0x18251900)
#define SYSTEM_URI_GET_ISUNC_OFFSET UNITYSDK_OFFSET(0x18257560)
#define SYSTEM_URI_GET_LOCALPATH_OFFSET UNITYSDK_OFFSET(0x18256410)
#define SYSTEM_URI_GET_ORIGINALSTRINGSWITCHED_OFFSET UNITYSDK_OFFSET(0x18258300)
#define SYSTEM_URI_GET_ORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x18254E60)
#define SYSTEM_URI_GET_PATHANDQUERY_OFFSET UNITYSDK_OFFSET(0x182572A0)
#define SYSTEM_URI_GET_PORT_OFFSET UNITYSDK_OFFSET(0x18257F60)
#define SYSTEM_URI_GET_PRIVATEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x182561F0)
#define SYSTEM_URI_GET_QUERY_OFFSET UNITYSDK_OFFSET(0x18258020)
#define SYSTEM_URI_GET_SCHEME_OFFSET UNITYSDK_OFFSET(0x182582B0)
#define SYSTEM_URI_GET_SECUREDPATHINDEX_OFFSET UNITYSDK_OFFSET(0x18251B30)
#define SYSTEM_URI_GET_SEGMENTS_OFFSET UNITYSDK_OFFSET(0x18257390)
#define SYSTEM_URI_GET_SYNTAX_OFFSET UNITYSDK_OFFSET(0x18251920)
#define SYSTEM_URI_GET_USERDRIVENPARSING_OFFSET UNITYSDK_OFFSET(0x18251B00)
#define SYSTEM_URI_GET_USERESCAPED_OFFSET UNITYSDK_OFFSET(0x18258760)
#define SYSTEM_URI_GET_USERINFO_OFFSET UNITYSDK_OFFSET(0x18258770)
#define SYSTEM_URI_HEXESCAPE_OFFSET UNITYSDK_OFFSET(0x18258CA0)
#define SYSTEM_URI_HEXUNESCAPE_OFFSET UNITYSDK_OFFSET(0x18258E00)
#define SYSTEM_URI_INFACT_OFFSET UNITYSDK_OFFSET(0x18251BB0)
#define SYSTEM_URI_INITIALIZEURICONFIG_OFFSET UNITYSDK_OFFSET(0x18257740)
#define SYSTEM_URI_INITIALIZEURI_OFFSET UNITYSDK_OFFSET(0x18261A10)
#define SYSTEM_URI_INTERNALESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x1825AAC0)
#define SYSTEM_URI_INTERNALISWELLFORMEDORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x18262F30)
#define SYSTEM_URI_IRIPARSINGSTATIC_OFFSET UNITYSDK_OFFSET(0x18251940)
#define SYSTEM_URI_ISASCIILETTERORDIGIT_OFFSET UNITYSDK_OFFSET(0x18259390)
#define SYSTEM_URI_ISASCIILETTER_OFFSET UNITYSDK_OFFSET(0x18259380)
#define SYSTEM_URI_ISBADFILESYSTEMCHARACTER_OFFSET UNITYSDK_OFFSET(0x18261870)
#define SYSTEM_URI_ISBASEOFHELPER_OFFSET UNITYSDK_OFFSET(0x18263A30)
#define SYSTEM_URI_ISBASEOF_OFFSET UNITYSDK_OFFSET(0x18263980)
#define SYSTEM_URI_ISBIDICONTROLCHARACTER_OFFSET UNITYSDK_OFFSET(0x18261310)
#define SYSTEM_URI_ISEXCLUDEDCHARACTER_OFFSET UNITYSDK_OFFSET(0x18261810)
#define SYSTEM_URI_ISGENDELIM_OFFSET UNITYSDK_OFFSET(0x182591A0)
#define SYSTEM_URI_ISHEXDIGIT_OFFSET UNITYSDK_OFFSET(0x182593D0)
#define SYSTEM_URI_ISHEXENCODING_OFFSET UNITYSDK_OFFSET(0x18259010)
#define SYSTEM_URI_ISINTRANET_OFFSET UNITYSDK_OFFSET(0x18251AF0)
#define SYSTEM_URI_ISLWS_OFFSET UNITYSDK_OFFSET(0x1825B880)
#define SYSTEM_URI_ISRESERVEDCHARACTER_OFFSET UNITYSDK_OFFSET(0x182617F0)
#define SYSTEM_URI_ISWELLFORMEDORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x18262F00)
#define SYSTEM_URI_ISWELLFORMEDURISTRING_OFFSET UNITYSDK_OFFSET(0x18263560)
#define SYSTEM_URI_MAKERELATIVEURI_OFFSET UNITYSDK_OFFSET(0x1825A0D0)
#define SYSTEM_URI_MAKERELATIVE_OFFSET UNITYSDK_OFFSET(0x18261340)
#define SYSTEM_URI_NOTANY_OFFSET UNITYSDK_OFFSET(0x18251A30)
#define SYSTEM_URI_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18247A00)
#define SYSTEM_URI_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x182545D0)
#define SYSTEM_URI_PARSEMINIMAL_OFFSET UNITYSDK_OFFSET(0x1825B110)
#define SYSTEM_URI_PARSEREMAINING_OFFSET UNITYSDK_OFFSET(0x182522F0)
#define SYSTEM_URI_PARSESCHEMECHECKIMPLICITFILE_OFFSET UNITYSDK_OFFSET(0x1825ABF0)
#define SYSTEM_URI_PARSESCHEME_OFFSET UNITYSDK_OFFSET(0x1825AB60)
#define SYSTEM_URI_PARSE_OFFSET UNITYSDK_OFFSET(0x182615D0)
#define SYSTEM_URI_PATHDIFFERENCE_OFFSET UNITYSDK_OFFSET(0x1825A590)
#define SYSTEM_URI_PRIVATEPARSEMINIMALIRI_OFFSET UNITYSDK_OFFSET(0x1825CAB0)
#define SYSTEM_URI_PRIVATEPARSEMINIMAL_OFFSET UNITYSDK_OFFSET(0x1825B160)
#define SYSTEM_URI_RECREATEPARTS_OFFSET UNITYSDK_OFFSET(0x1825E3D0)
#define SYSTEM_URI_RESOLVEHELPER_OFFSET UNITYSDK_OFFSET(0x18253EE0)
#define SYSTEM_URI_SETUSERDRIVENPARSING_OFFSET UNITYSDK_OFFSET(0x18251B10)
#define SYSTEM_URI_STATICINFACT_OFFSET UNITYSDK_OFFSET(0x18251BC0)
#define SYSTEM_URI_STATICISFILE_OFFSET UNITYSDK_OFFSET(0x18257670)
#define SYSTEM_URI_STATICNOTANY_OFFSET UNITYSDK_OFFSET(0x18251AE0)
#define SYSTEM_URI_STRIPBIDICONTROLCHARACTER_OFFSET UNITYSDK_OFFSET(0x18260DF0)
#define SYSTEM_URI_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x18255F20)
#define SYSTEM_URI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18259740)
#define SYSTEM_URI_TRYCREATE_1_OFFSET UNITYSDK_OFFSET(0x18262970)
#define SYSTEM_URI_TRYCREATE_2_OFFSET UNITYSDK_OFFSET(0x18262A60)
#define SYSTEM_URI_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x1825A040)
#define SYSTEM_URI_UNESCAPEDATASTRING_OFFSET UNITYSDK_OFFSET(0x18263630)
#define SYSTEM_URI_UNESCAPEONLY_OFFSET UNITYSDK_OFFSET(0x18260FE0)
#define SYSTEM_URI_UNESCAPE_OFFSET UNITYSDK_OFFSET(0x18261600)
#define SYSTEM_URI__CCTOR_OFFSET UNITYSDK_OFFSET(0x18263D20)
#define SYSTEM_URI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18253AC0)
#define SYSTEM_URI__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18253B40)
#define SYSTEM_URI__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18253DB0)
#define SYSTEM_URI__CTOR_4_OFFSET UNITYSDK_OFFSET(0x18253E30)
#define SYSTEM_URI__CTOR_5_OFFSET UNITYSDK_OFFSET(0x182548A0)
#define SYSTEM_URI__CTOR_6_OFFSET UNITYSDK_OFFSET(0x18255E50)
#define SYSTEM_URI__CTOR_7_OFFSET UNITYSDK_OFFSET(0x18263970)
#define SYSTEM_URI__CTOR_OFFSET UNITYSDK_OFFSET(0x182538B0)

namespace System
{
	inline static constexpr unsigned int Uri_TypeDefinitionIndex = 2664;

	class Uri : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_UriSchemeNntp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2C90);
		}
		static ::System::String** StaticGet_UriSchemeFile()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2C98);
		}
		static ::System::String** StaticGet_UriSchemeGopher()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2CA0);
		}
		static ::System::String** StaticGet_UriSchemeWs()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2CA8);
		}
		static ::System::String** StaticGet_UriSchemeFtp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2CB0);
		}
		static ::System::String** StaticGet_UriSchemeNetTcp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2CB8);
		}
		static ::System::String** StaticGet_SchemeDelimiter()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2CC0);
		}
		static ::System::String** StaticGet_UriSchemeNetPipe()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2CC8);
		}
		static ::System::String** StaticGet_UriSchemeHttps()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2CD0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_HexLowerChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2CD8);
		}
		static ::System::String** StaticGet_UriSchemeMailto()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2CE0);
		}
		static ::System::String** StaticGet_UriSchemeWss()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2CE8);
		}
		static ::System::Object** StaticGet_s_initLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2CF0);
		}
		static ::System::String** StaticGet_UriSchemeNews()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2CF8);
		}
		static ::System::String** StaticGet_UriSchemeHttp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2D00);
		}
		static ::Il2CppArray<::System::Char>** StaticGet__WSchars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x2D08);
		}
		static ::System::Boolean* StaticGet_s_IriParsing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x1160);
		}
		static ::System::Boolean* StaticGet_s_ConfigInitializing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x1161);
		}
		static ::System::UriIdnScope* StaticGet_s_IdnScope()
		{
			return (::System::UriIdnScope*)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x1164);
		}
		static ::System::Boolean* StaticGet_useDotNetRelativeOrAbsolute()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x1168);
		}
		static ::System::Boolean* StaticGet_IsWindowsFileSystem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x1169);
		}
		static ::System::Boolean* StaticGet_s_ConfigInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x116A);
		}
		// static const ::System::Int32 c_Max16BitUtf8SequenceLength = 0xC; // 0x0
		// static const ::System::Int32 c_MaxUriBufferSize = 0xFFF0; // 0x0
		// static const ::System::Int32 c_MaxUriSchemeName = 0x400; // 0x0
		// static const ::System::UriKind DotNetRelativeOrAbsolute; // 0x0
		// static const ::System::UriFormat V1ToStringUnescape; // 0x0
		// static const ::System::Char c_DummyChar; // 0x0
		// static const ::System::Char c_EOL; // 0x0
		::System::Uri_UriInfo* m_Info; // 0x10
		::System::String* m_originalUnicodeString; // 0x18
		::System::String* m_DnsSafeHost; // 0x20
		::System::UriParser* m_Syntax; // 0x28
		::System::String* m_String; // 0x30
		::System::Boolean m_iriParsing; // 0x38
		::System::Uri_Flags m_Flags; // 0x40

		::System::Void _ctor(::System::String* uriString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI__CTOR_OFFSET))(this, uriString);
		}

		::System::Void _ctor_1(::System::String* uriString, ::System::Boolean dontEscape)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URI__CTOR_1_OFFSET))(this, uriString, dontEscape);
		}

		::System::Void _ctor_2(::System::Uri* baseUri, ::System::String* relativeUri, ::System::Boolean dontEscape)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URI__CTOR_2_OFFSET))(this, baseUri, relativeUri, dontEscape);
		}

		::System::Void _ctor_3(::System::String* uriString, ::System::UriKind uriKind)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UriKind))((::PBYTE)hIl2Cpp + SYSTEM_URI__CTOR_3_OFFSET))(this, uriString, uriKind);
		}

		::System::Void _ctor_4(::System::Uri* baseUri, ::System::String* relativeUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI__CTOR_4_OFFSET))(this, baseUri, relativeUri);
		}

		::System::Void _ctor_5(::System::Uri* baseUri, ::System::Uri* relativeUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI__CTOR_5_OFFSET))(this, baseUri, relativeUri);
		}

		::System::Void _ctor_6(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_URI__CTOR_6_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void _ctor_7(::System::Uri_Flags flags, ::System::UriParser* uriParser, ::System::String* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri_Flags, ::System::UriParser*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI__CTOR_7_OFFSET))(this, flags, uriParser, uri);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_URI__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsImplicitFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISIMPLICITFILE_OFFSET))(this);
		}

		::System::Boolean get_IsUncOrDosPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISUNCORDOSPATH_OFFSET))(this);
		}

		::System::Boolean get_IsDosPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISDOSPATH_OFFSET))(this);
		}

		::System::Boolean get_IsUncPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISUNCPATH_OFFSET))(this);
		}

		::System::Uri_Flags get_HostType()
		{
			return ((::System::Uri_Flags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_HOSTTYPE_OFFSET))(this);
		}

		::System::UriParser* get_Syntax()
		{
			return ((::System::UriParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_SYNTAX_OFFSET))(this);
		}

		::System::Boolean get_IsNotAbsoluteUri()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISNOTABSOLUTEURI_OFFSET))(this);
		}

		static ::System::Boolean IriParsingStatic(::System::UriParser* syntax)
		{
			return ((::System::Boolean(*)(::System::UriParser*))((::PBYTE)hIl2Cpp + SYSTEM_URI_IRIPARSINGSTATIC_OFFSET))(syntax);
		}

		::System::Boolean get_AllowIdn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ALLOWIDN_OFFSET))(this);
		}

		::System::Boolean AllowIdnStatic(::System::UriParser* syntax, ::System::Uri_Flags flags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UriParser*, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_ALLOWIDNSTATIC_OFFSET))(this, syntax, flags);
		}

		::System::Boolean IsIntranet(::System::String* schemeHost)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISINTRANET_OFFSET))(this, schemeHost);
		}

		::System::Boolean get_UserDrivenParsing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_USERDRIVENPARSING_OFFSET))(this);
		}

		::System::Void SetUserDrivenParsing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_SETUSERDRIVENPARSING_OFFSET))(this);
		}

		::System::UInt16 get_SecuredPathIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_SECUREDPATHINDEX_OFFSET))(this);
		}

		::System::Boolean NotAny(::System::Uri_Flags flags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_NOTANY_OFFSET))(this, flags);
		}

		::System::Boolean InFact(::System::Uri_Flags flags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_INFACT_OFFSET))(this, flags);
		}

		static ::System::Boolean StaticNotAny(::System::Uri_Flags allFlags, ::System::Uri_Flags checkFlags)
		{
			return ((::System::Boolean(*)(::System::Uri_Flags, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_STATICNOTANY_OFFSET))(allFlags, checkFlags);
		}

		static ::System::Boolean StaticInFact(::System::Uri_Flags allFlags, ::System::Uri_Flags checkFlags)
		{
			return ((::System::Boolean(*)(::System::Uri_Flags, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_STATICINFACT_OFFSET))(allFlags, checkFlags);
		}

		::System::Uri_UriInfo* EnsureUriInfo()
		{
			return ((::System::Uri_UriInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_ENSUREURIINFO_OFFSET))(this);
		}

		::System::Void EnsureParseRemaining()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_ENSUREPARSEREMAINING_OFFSET))(this);
		}

		::System::Void EnsureHostString(::System::Boolean allowDnsOptimization)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URI_ENSUREHOSTSTRING_OFFSET))(this, allowDnsOptimization);
		}

		::System::Void CreateUri(::System::Uri* baseUri, ::System::String* relativeUri, ::System::Boolean dontEscape)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATEURI_OFFSET))(this, baseUri, relativeUri, dontEscape);
		}

		static ::System::ParsingError GetCombinedString(::System::Uri* baseUri, ::System::String* relativeStr, ::System::Boolean dontEscape, ::System::String*& result)
		{
			return ((::System::ParsingError(*)(::System::Uri*, ::System::String*, ::System::Boolean, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETCOMBINEDSTRING_OFFSET))(baseUri, relativeStr, dontEscape, result);
		}

		static ::System::UriFormatException* GetException(::System::ParsingError err)
		{
			return ((::System::UriFormatException*(*)(::System::ParsingError))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETEXCEPTION_OFFSET))(err);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_URI_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::String* get_AbsolutePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ABSOLUTEPATH_OFFSET))(this);
		}

		::System::String* get_PrivateAbsolutePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_PRIVATEABSOLUTEPATH_OFFSET))(this);
		}

		::System::String* get_AbsoluteUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ABSOLUTEURI_OFFSET))(this);
		}

		::System::String* get_LocalPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_LOCALPATH_OFFSET))(this);
		}

		::System::String* get_Authority()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_AUTHORITY_OFFSET))(this);
		}

		::System::UriHostNameType get_HostNameType()
		{
			return ((::System::UriHostNameType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_HOSTNAMETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsDefaultPort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISDEFAULTPORT_OFFSET))(this);
		}

		::System::Boolean get_IsFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISFILE_OFFSET))(this);
		}

		::System::Boolean get_IsLoopback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISLOOPBACK_OFFSET))(this);
		}

		::System::String* get_PathAndQuery()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_PATHANDQUERY_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_Segments()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_SEGMENTS_OFFSET))(this);
		}

		::System::Boolean get_IsUnc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISUNC_OFFSET))(this);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_HOST_OFFSET))(this);
		}

		static ::System::Boolean StaticIsFile(::System::UriParser* syntax)
		{
			return ((::System::Boolean(*)(::System::UriParser*))((::PBYTE)hIl2Cpp + SYSTEM_URI_STATICISFILE_OFFSET))(syntax);
		}

		static ::System::Object* get_InitializeLock()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_INITIALIZELOCK_OFFSET))();
		}

		static ::System::Void InitializeUriConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_URI_INITIALIZEURICONFIG_OFFSET))();
		}

		::System::String* GetLocalPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETLOCALPATH_OFFSET))(this);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_PORT_OFFSET))(this);
		}

		::System::String* get_Query()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_QUERY_OFFSET))(this);
		}

		::System::String* get_Fragment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_FRAGMENT_OFFSET))(this);
		}

		::System::String* get_Scheme()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_SCHEME_OFFSET))(this);
		}

		::System::Boolean get_OriginalStringSwitched()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ORIGINALSTRINGSWITCHED_OFFSET))(this);
		}

		::System::String* get_OriginalString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ORIGINALSTRING_OFFSET))(this);
		}

		::System::String* get_DnsSafeHost()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_DNSSAFEHOST_OFFSET))(this);
		}

		::System::String* get_IdnHost()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_IDNHOST_OFFSET))(this);
		}

		::System::Boolean get_IsAbsoluteUri()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISABSOLUTEURI_OFFSET))(this);
		}

		::System::Boolean get_UserEscaped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_USERESCAPED_OFFSET))(this);
		}

		::System::String* get_UserInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_USERINFO_OFFSET))(this);
		}

		static ::System::UriHostNameType CheckHostName(::System::String* name)
		{
			return ((::System::UriHostNameType(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKHOSTNAME_OFFSET))(name);
		}

		::System::String* GetLeftPart(::System::UriPartial part)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriPartial))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETLEFTPART_OFFSET))(this, part);
		}

		static ::System::String* HexEscape(::System::Char character)
		{
			return ((::System::String*(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_HEXESCAPE_OFFSET))(character);
		}

		static ::System::Char HexUnescape(::System::String* pattern, ::System::Int32& index)
		{
			return ((::System::Char(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_URI_HEXUNESCAPE_OFFSET))(pattern, index);
		}

		static ::System::Boolean IsHexEncoding(::System::String* pattern, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISHEXENCODING_OFFSET))(pattern, index);
		}

		static ::System::Boolean IsGenDelim(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISGENDELIM_OFFSET))(ch);
		}

		static ::System::Boolean CheckSchemeName(::System::String* schemeName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKSCHEMENAME_OFFSET))(schemeName);
		}

		static ::System::Boolean IsHexDigit(::System::Char character)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISHEXDIGIT_OFFSET))(character);
		}

		static ::System::Int32 FromHex(::System::Char digit)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_FROMHEX_OFFSET))(digit);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Uri* uri1, ::System::Uri* uri2)
		{
			return ((::System::Boolean(*)(::System::Uri*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_OP_EQUALITY_OFFSET))(uri1, uri2);
		}

		static ::System::Boolean op_Inequality(::System::Uri* uri1, ::System::Uri* uri2)
		{
			return ((::System::Boolean(*)(::System::Uri*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_OP_INEQUALITY_OFFSET))(uri1, uri2);
		}

		::System::Boolean Equals(::System::Object* comparand)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_URI_EQUALS_OFFSET))(this, comparand);
		}

		::System::Uri* MakeRelativeUri(::System::Uri* uri)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_MAKERELATIVEURI_OFFSET))(this, uri);
		}

		static ::System::Boolean CheckForColonInFirstPathSegment(::System::String* uriString)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKFORCOLONINFIRSTPATHSEGMENT_OFFSET))(uriString);
		}

		static ::System::String* InternalEscapeString(::System::String* rawString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_INTERNALESCAPESTRING_OFFSET))(rawString);
		}

		static ::System::ParsingError ParseScheme(::System::String* uriString, ::System::Uri_Flags& flags, ::System::UriParser*& syntax)
		{
			return ((::System::ParsingError(*)(::System::String*, ::System::Uri_Flags&, ::System::UriParser*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_PARSESCHEME_OFFSET))(uriString, flags, syntax);
		}

		::System::UriFormatException* ParseMinimal()
		{
			return ((::System::UriFormatException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_PARSEMINIMAL_OFFSET))(this);
		}

		::System::ParsingError PrivateParseMinimal()
		{
			return ((::System::ParsingError(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_PRIVATEPARSEMINIMAL_OFFSET))(this);
		}

		::System::Void PrivateParseMinimalIri(::System::String* newHost, ::System::UInt16 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_URI_PRIVATEPARSEMINIMALIRI_OFFSET))(this, newHost, idx);
		}

		::System::Void CreateUriInfo(::System::Uri_Flags cF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATEURIINFO_OFFSET))(this, cF);
		}

		::System::Void CreateHostString()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATEHOSTSTRING_OFFSET))(this);
		}

		static ::System::String* CreateHostStringHelper(::System::String* str, ::System::UInt16 idx, ::System::UInt16 end, ::System::Uri_Flags& flags, ::System::String*& scopeId)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt16, ::System::UInt16, ::System::Uri_Flags&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATEHOSTSTRINGHELPER_OFFSET))(str, idx, end, flags, scopeId);
		}

		::System::Void GetHostViaCustomSyntax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETHOSTVIACUSTOMSYNTAX_OFFSET))(this);
		}

		::System::String* GetParts(::System::UriComponents uriParts, ::System::UriFormat formatAs)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETPARTS_OFFSET))(this, uriParts, formatAs);
		}

		::System::String* GetEscapedParts(::System::UriComponents uriParts)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETESCAPEDPARTS_OFFSET))(this, uriParts);
		}

		::System::String* GetUnescapedParts(::System::UriComponents uriParts, ::System::UriFormat formatAs)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETUNESCAPEDPARTS_OFFSET))(this, uriParts, formatAs);
		}

		::System::String* ReCreateParts(::System::UriComponents parts, ::System::UInt16 nonCanonical, ::System::UriFormat formatAs)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents, ::System::UInt16, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_RECREATEPARTS_OFFSET))(this, parts, nonCanonical, formatAs);
		}

		::System::String* GetUriPartsFromUserString(::System::UriComponents uriParts)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETURIPARTSFROMUSERSTRING_OFFSET))(this, uriParts);
		}

		::System::Void ParseRemaining()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_PARSEREMAINING_OFFSET))(this);
		}

		static ::System::UInt16 ParseSchemeCheckImplicitFile(::System::Char* uriString, ::System::UInt16 length, ::System::ParsingError& err, ::System::Uri_Flags& flags, ::System::UriParser*& syntax)
		{
			return ((::System::UInt16(*)(::System::Char*, ::System::UInt16, ::System::ParsingError&, ::System::Uri_Flags&, ::System::UriParser*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_PARSESCHEMECHECKIMPLICITFILE_OFFSET))(uriString, length, err, flags, syntax);
		}

		static ::System::Boolean CheckKnownSchemes(::System::Int64* lptr, ::System::UInt16 nChars, ::System::UriParser*& syntax)
		{
			return ((::System::Boolean(*)(::System::Int64*, ::System::UInt16, ::System::UriParser*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKKNOWNSCHEMES_OFFSET))(lptr, nChars, syntax);
		}

		static ::System::ParsingError CheckSchemeSyntax(::System::Char* ptr, ::System::UInt16 length, ::System::UriParser*& syntax)
		{
			return ((::System::ParsingError(*)(::System::Char*, ::System::UInt16, ::System::UriParser*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKSCHEMESYNTAX_OFFSET))(ptr, length, syntax);
		}

		::System::UInt16 CheckAuthorityHelper(::System::Char* pString, ::System::UInt16 idx, ::System::UInt16 length, ::System::ParsingError& err, ::System::Uri_Flags& flags, ::System::UriParser* syntax, ::System::String*& newHost)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::Char*, ::System::UInt16, ::System::UInt16, ::System::ParsingError&, ::System::Uri_Flags&, ::System::UriParser*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKAUTHORITYHELPER_OFFSET))(this, pString, idx, length, err, flags, syntax, newHost);
		}

		::System::Void CheckAuthorityHelperHandleDnsIri(::System::Char* pString, ::System::UInt16 start, ::System::Int32 end, ::System::Int32 startInput, ::System::Boolean iriParsing, ::System::Boolean hasUnicode, ::System::UriParser* syntax, ::System::String* userInfoString, ::System::Uri_Flags& flags, ::System::Boolean& justNormalized, ::System::String*& newHost, ::System::ParsingError& err)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::UInt16, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::UriParser*, ::System::String*, ::System::Uri_Flags&, ::System::Boolean&, ::System::String*&, ::System::ParsingError&))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKAUTHORITYHELPERHANDLEDNSIRI_OFFSET))(this, pString, start, end, startInput, iriParsing, hasUnicode, syntax, userInfoString, flags, justNormalized, newHost, err);
		}

		::System::Void CheckAuthorityHelperHandleAnyHostIri(::System::Char* pString, ::System::Int32 startInput, ::System::Int32 end, ::System::Boolean iriParsing, ::System::Boolean hasUnicode, ::System::UriParser* syntax, ::System::Uri_Flags& flags, ::System::String*& newHost, ::System::ParsingError& err)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::UriParser*, ::System::Uri_Flags&, ::System::String*&, ::System::ParsingError&))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKAUTHORITYHELPERHANDLEANYHOSTIRI_OFFSET))(this, pString, startInput, end, iriParsing, hasUnicode, syntax, flags, newHost, err);
		}

		::System::Void FindEndOfComponent(::System::String* input, ::System::UInt16& idx, ::System::UInt16 end, ::System::Char delim)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16&, ::System::UInt16, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_FINDENDOFCOMPONENT_OFFSET))(this, input, idx, end, delim);
		}

		::System::Void FindEndOfComponent_1(::System::Char* str, ::System::UInt16& idx, ::System::UInt16 end, ::System::Char delim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::UInt16&, ::System::UInt16, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_FINDENDOFCOMPONENT_1_OFFSET))(this, str, idx, end, delim);
		}

		::System::Uri_Check CheckCanonical(::System::Char* str, ::System::UInt16& idx, ::System::UInt16 end, ::System::Char delim)
		{
			return ((::System::Uri_Check(*)(::PVOID, ::System::Char*, ::System::UInt16&, ::System::UInt16, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKCANONICAL_OFFSET))(this, str, idx, end, delim);
		}

		::Il2CppArray<::System::Char>* GetCanonicalPath(::Il2CppArray<::System::Char>* dest, ::System::Int32& pos, ::System::UriFormat formatAs)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETCANONICALPATH_OFFSET))(this, dest, pos, formatAs);
		}

		static ::System::Void UnescapeOnly(::System::Char* pch, ::System::Int32 start, ::System::Int32& end, ::System::Char ch1, ::System::Char ch2, ::System::Char ch3)
		{
			return ((::System::Void(*)(::System::Char*, ::System::Int32, ::System::Int32&, ::System::Char, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_UNESCAPEONLY_OFFSET))(pch, start, end, ch1, ch2, ch3);
		}

		static ::Il2CppArray<::System::Char>* Compress(::Il2CppArray<::System::Char>* dest, ::System::UInt16 start, ::System::Int32& destLength, ::System::UriParser* syntax)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::Il2CppArray<::System::Char>*, ::System::UInt16, ::System::Int32&, ::System::UriParser*))((::PBYTE)hIl2Cpp + SYSTEM_URI_COMPRESS_OFFSET))(dest, start, destLength, syntax);
		}

		static ::System::Int32 CalculateCaseInsensitiveHashCode(::System::String* text)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CALCULATECASEINSENSITIVEHASHCODE_OFFSET))(text);
		}

		static ::System::String* CombineUri(::System::Uri* basePart, ::System::String* relativePart, ::System::UriFormat uriFormat)
		{
			return ((::System::String*(*)(::System::Uri*, ::System::String*, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_COMBINEURI_OFFSET))(basePart, relativePart, uriFormat);
		}

		static ::System::String* PathDifference(::System::String* path1, ::System::String* path2, ::System::Boolean compareCase)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URI_PATHDIFFERENCE_OFFSET))(path1, path2, compareCase);
		}

		::System::Boolean get_HasAuthority()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_HASAUTHORITY_OFFSET))(this);
		}

		static ::System::Boolean IsLWS(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISLWS_OFFSET))(ch);
		}

		static ::System::Boolean IsAsciiLetter(::System::Char character)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISASCIILETTER_OFFSET))(character);
		}

		static ::System::Boolean IsAsciiLetterOrDigit(::System::Char character)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISASCIILETTERORDIGIT_OFFSET))(character);
		}

		static ::System::Boolean IsBidiControlCharacter(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISBIDICONTROLCHARACTER_OFFSET))(ch);
		}

		static ::System::String* StripBidiControlCharacter(::System::Char* strToClean, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::String*(*)(::System::Char*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_URI_STRIPBIDICONTROLCHARACTER_OFFSET))(strToClean, start, length);
		}

		::System::String* MakeRelative(::System::Uri* toUri)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_MAKERELATIVE_OFFSET))(this, toUri);
		}

		::System::Void Parse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_PARSE_OFFSET))(this);
		}

		::System::Void Canonicalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_CANONICALIZE_OFFSET))(this);
		}

		::System::Void Escape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_ESCAPE_OFFSET))(this);
		}

		::System::String* Unescape(::System::String* path)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_UNESCAPE_OFFSET))(this, path);
		}

		static ::System::String* EscapeString(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_ESCAPESTRING_OFFSET))(str);
		}

		::System::Void CheckSecurity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKSECURITY_OFFSET))(this);
		}

		::System::Boolean IsReservedCharacter(::System::Char character)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISRESERVEDCHARACTER_OFFSET))(this, character);
		}

		static ::System::Boolean IsExcludedCharacter(::System::Char character)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISEXCLUDEDCHARACTER_OFFSET))(character);
		}

		::System::Boolean IsBadFileSystemCharacter(::System::Char character)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISBADFILESYSTEMCHARACTER_OFFSET))(this, character);
		}

		::System::Void CreateThis(::System::String* uri, ::System::Boolean dontEscape, ::System::UriKind uriKind)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::UriKind))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATETHIS_OFFSET))(this, uri, dontEscape, uriKind);
		}

		::System::Void InitializeUri(::System::ParsingError err, ::System::UriKind uriKind, ::System::UriFormatException*& e)
		{
			return ((::System::Void(*)(::PVOID, ::System::ParsingError, ::System::UriKind, ::System::UriFormatException*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_INITIALIZEURI_OFFSET))(this, err, uriKind, e);
		}

		::System::Boolean CheckForConfigLoad(::System::String* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKFORCONFIGLOAD_OFFSET))(this, data);
		}

		::System::Boolean CheckForUnicode(::System::String* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKFORUNICODE_OFFSET))(this, data);
		}

		::System::Boolean CheckForEscapedUnreserved(::System::String* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKFORESCAPEDUNRESERVED_OFFSET))(this, data);
		}

		static ::System::Boolean TryCreate(::System::String* uriString, ::System::UriKind uriKind, ::System::Uri*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UriKind, ::System::Uri*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_TRYCREATE_OFFSET))(uriString, uriKind, result);
		}

		static ::System::Boolean TryCreate_1(::System::Uri* baseUri, ::System::String* relativeUri, ::System::Uri*& result)
		{
			return ((::System::Boolean(*)(::System::Uri*, ::System::String*, ::System::Uri*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_TRYCREATE_1_OFFSET))(baseUri, relativeUri, result);
		}

		static ::System::Boolean TryCreate_2(::System::Uri* baseUri, ::System::Uri* relativeUri, ::System::Uri*& result)
		{
			return ((::System::Boolean(*)(::System::Uri*, ::System::Uri*, ::System::Uri*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_TRYCREATE_2_OFFSET))(baseUri, relativeUri, result);
		}

		::System::String* GetComponents(::System::UriComponents components, ::System::UriFormat format)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETCOMPONENTS_OFFSET))(this, components, format);
		}

		static ::System::Int32 Compare(::System::Uri* uri1, ::System::Uri* uri2, ::System::UriComponents partsToCompare, ::System::UriFormat compareFormat, ::System::StringComparison comparisonType)
		{
			return ((::System::Int32(*)(::System::Uri*, ::System::Uri*, ::System::UriComponents, ::System::UriFormat, ::System::StringComparison))((::PBYTE)hIl2Cpp + SYSTEM_URI_COMPARE_OFFSET))(uri1, uri2, partsToCompare, compareFormat, comparisonType);
		}

		::System::Boolean IsWellFormedOriginalString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISWELLFORMEDORIGINALSTRING_OFFSET))(this);
		}

		static ::System::Boolean IsWellFormedUriString(::System::String* uriString, ::System::UriKind uriKind)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UriKind))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISWELLFORMEDURISTRING_OFFSET))(uriString, uriKind);
		}

		::System::Boolean InternalIsWellFormedOriginalString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_INTERNALISWELLFORMEDORIGINALSTRING_OFFSET))(this);
		}

		static ::System::String* UnescapeDataString(::System::String* stringToUnescape)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_UNESCAPEDATASTRING_OFFSET))(stringToUnescape);
		}

		static ::System::String* EscapeUriString(::System::String* stringToEscape)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_ESCAPEURISTRING_OFFSET))(stringToEscape);
		}

		static ::System::String* EscapeDataString(::System::String* stringToEscape)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_ESCAPEDATASTRING_OFFSET))(stringToEscape);
		}

		::System::String* EscapeUnescapeIri(::System::String* input, ::System::Int32 start, ::System::Int32 end, ::System::UriComponents component)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::UriComponents))((::PBYTE)hIl2Cpp + SYSTEM_URI_ESCAPEUNESCAPEIRI_OFFSET))(this, input, start, end, component);
		}

		static ::System::Uri* CreateHelper(::System::String* uriString, ::System::Boolean dontEscape, ::System::UriKind uriKind, ::System::UriFormatException*& e)
		{
			return ((::System::Uri*(*)(::System::String*, ::System::Boolean, ::System::UriKind, ::System::UriFormatException*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATEHELPER_OFFSET))(uriString, dontEscape, uriKind, e);
		}

		static ::System::Uri* ResolveHelper(::System::Uri* baseUri, ::System::Uri* relativeUri, ::System::String*& newUriString, ::System::Boolean& userEscaped, ::System::UriFormatException*& e)
		{
			return ((::System::Uri*(*)(::System::Uri*, ::System::Uri*, ::System::String*&, ::System::Boolean&, ::System::UriFormatException*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_RESOLVEHELPER_OFFSET))(baseUri, relativeUri, newUriString, userEscaped, e);
		}

		::System::String* GetRelativeSerializationString(::System::UriFormat format)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETRELATIVESERIALIZATIONSTRING_OFFSET))(this, format);
		}

		::System::String* GetComponentsHelper(::System::UriComponents uriComponents, ::System::UriFormat uriFormat)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETCOMPONENTSHELPER_OFFSET))(this, uriComponents, uriFormat);
		}

		::System::Boolean IsBaseOf(::System::Uri* uri)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISBASEOF_OFFSET))(this, uri);
		}

		::System::Boolean IsBaseOfHelper(::System::Uri* uriLink)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISBASEOFHELPER_OFFSET))(this, uriLink);
		}

		::System::Void CreateThisFromUri(::System::Uri* otherUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATETHISFROMURI_OFFSET))(this, otherUri);
		}
	};
}
