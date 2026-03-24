#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x191DA900)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_MATCHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x191DA920)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x191DA8F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x191DA8E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x191DA8C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_PATTERN_OFFSET UNITYSDK_OFFSET(0x191DA8B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_INITMATCHTIMEOUTDEFAULTFOROLDVERSIONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x191DA4C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x191DA910)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_MATCHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x191DA870)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x191DA800)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x191DA710)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x191DA8D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_PATTERN_OFFSET UNITYSDK_OFFSET(0x191DA6A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x191DA570)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x191DA4F0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexCompilationInfo_TypeDefinitionIndex = 2732;

	class RegexCompilationInfo : public ::System::Object
	{
	public:
		::System::String* nspace; // 0x10
		::System::String* pattern; // 0x18
		::System::String* name; // 0x20
		::System::Text::RegularExpressions::RegexOptions options; // 0x28
		::System::Boolean isPublic; // 0x2C
		::System::TimeSpan matchTimeout; // 0x30

		::System::Void _ctor(::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::String* name, ::System::String* fullnamespace, ::System::Boolean ispublic)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO__CTOR_OFFSET))(this, pattern, options, name, fullnamespace, ispublic);
		}

		::System::Void _ctor_1(::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::String* name, ::System::String* fullnamespace, ::System::Boolean ispublic, ::System::TimeSpan matchTimeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::String*, ::System::String*, ::System::Boolean, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO__CTOR_1_OFFSET))(this, pattern, options, name, fullnamespace, ispublic, matchTimeout);
		}

		::System::Void InitMatchTimeoutDefaultForOldVersionDeserialization(::System::Runtime::Serialization::StreamingContext unusedContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_INITMATCHTIMEOUTDEFAULTFOROLDVERSIONDESERIALIZATION_OFFSET))(this, unusedContext);
		}

		::System::String* get_Pattern()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_PATTERN_OFFSET))(this);
		}

		::System::Void set_Pattern(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_PATTERN_OFFSET))(this, value);
		}

		::System::Text::RegularExpressions::RegexOptions get_Options()
		{
			return ((::System::Text::RegularExpressions::RegexOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::System::Text::RegularExpressions::RegexOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Void set_Namespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_NAMESPACE_OFFSET))(this, value);
		}

		::System::Boolean get_IsPublic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_ISPUBLIC_OFFSET))(this);
		}

		::System::Void set_IsPublic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_ISPUBLIC_OFFSET))(this, value);
		}

		::System::TimeSpan get_MatchTimeout()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_GET_MATCHTIMEOUT_OFFSET))(this);
		}

		::System::Void set_MatchTimeout(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCOMPILATIONINFO_SET_MATCHTIMEOUT_OFFSET))(this, value);
		}
	};
}
