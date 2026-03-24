#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Variable_1.h"

namespace System { class Object; }
namespace System { class String; }

#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE_GET_MISSINGTYPE_OFFSET UNITYSDK_OFFSET(0x1A3F7840)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE_GET_RECOVERYSTATE_OFFSET UNITYSDK_OFFSET(0x1A3F7860)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE_SET_MISSINGTYPE_OFFSET UNITYSDK_OFFSET(0x1A3F7850)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE_SET_RECOVERYSTATE_OFFSET UNITYSDK_OFFSET(0x1A3F7870)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F7880)

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int MissingVariableType_TypeDefinitionIndex = 27676;

	class MissingVariableType : public ::NodeCanvas::Framework::Variable_1<::System::Object*>
	{
	public:
		::System::String* _recoveryState; // 0x60
		::System::String* _missingType; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE__CTOR_OFFSET))(this);
		}

		::System::String* get_missingType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE_GET_MISSINGTYPE_OFFSET))(this);
		}

		::System::Void set_missingType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE_SET_MISSINGTYPE_OFFSET))(this, value);
		}

		::System::String* get_recoveryState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE_GET_RECOVERYSTATE_OFFSET))(this);
		}

		::System::Void set_recoveryState(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGVARIABLETYPE_SET_RECOVERYSTATE_OFFSET))(this, value);
		}
	};
}
