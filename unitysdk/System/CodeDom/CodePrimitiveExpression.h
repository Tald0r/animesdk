#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System { class Object; }

#define SYSTEM_CODEDOM_CODEPRIMITIVEEXPRESSION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x193175F0)
#define SYSTEM_CODEDOM_CODEPRIMITIVEEXPRESSION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x19317630)
#define SYSTEM_CODEDOM_CODEPRIMITIVEEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193175B0)
#define SYSTEM_CODEDOM_CODEPRIMITIVEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19317570)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodePrimitiveExpression_TypeDefinitionIndex = 4270;

	class CodePrimitiveExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPRIMITIVEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPRIMITIVEEXPRESSION__CTOR_1_OFFSET))(this, value);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPRIMITIVEEXPRESSION_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPRIMITIVEEXPRESSION_SET_VALUE_OFFSET))(this, value);
		}
	};
}
