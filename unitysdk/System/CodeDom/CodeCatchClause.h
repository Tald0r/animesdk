#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::CodeDom { class CodeStatement; }
namespace System::CodeDom { class CodeStatementCollection; }
namespace System::CodeDom { class CodeTypeReference; }

#define SYSTEM_CODEDOM_CODECATCHCLAUSE_GET_CATCHEXCEPTIONTYPE_OFFSET UNITYSDK_OFFSET(0x188D48A0)
#define SYSTEM_CODEDOM_CODECATCHCLAUSE_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x188D4920)
#define SYSTEM_CODEDOM_CODECATCHCLAUSE_GET_STATEMENTS_OFFSET UNITYSDK_OFFSET(0x188D49A0)
#define SYSTEM_CODEDOM_CODECATCHCLAUSE_SET_CATCHEXCEPTIONTYPE_OFFSET UNITYSDK_OFFSET(0x188D48E0)
#define SYSTEM_CODEDOM_CODECATCHCLAUSE_SET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x188D4960)
#define SYSTEM_CODEDOM_CODECATCHCLAUSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x188D47E0)
#define SYSTEM_CODEDOM_CODECATCHCLAUSE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x188D4820)
#define SYSTEM_CODEDOM_CODECATCHCLAUSE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x188D4860)
#define SYSTEM_CODEDOM_CODECATCHCLAUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x188D47A0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeCatchClause_TypeDefinitionIndex = 4247;

	class CodeCatchClause : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* localName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSE__CTOR_1_OFFSET))(this, localName);
		}

		::System::Void _ctor_2(::System::String* localName, ::System::CodeDom::CodeTypeReference* catchExceptionType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSE__CTOR_2_OFFSET))(this, localName, catchExceptionType);
		}

		::System::Void _ctor_3(::System::String* localName, ::System::CodeDom::CodeTypeReference* catchExceptionType, ::Il2CppArray<::System::CodeDom::CodeStatement*>* statements)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::CodeDom::CodeTypeReference*, ::Il2CppArray<::System::CodeDom::CodeStatement*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSE__CTOR_3_OFFSET))(this, localName, catchExceptionType, statements);
		}

		::System::CodeDom::CodeTypeReference* get_CatchExceptionType()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSE_GET_CATCHEXCEPTIONTYPE_OFFSET))(this);
		}

		::System::Void set_CatchExceptionType(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSE_SET_CATCHEXCEPTIONTYPE_OFFSET))(this, value);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSE_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Void set_LocalName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSE_SET_LOCALNAME_OFFSET))(this, value);
		}

		::System::CodeDom::CodeStatementCollection* get_Statements()
		{
			return ((::System::CodeDom::CodeStatementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSE_GET_STATEMENTS_OFFSET))(this);
		}
	};
}
