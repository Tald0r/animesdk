#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CF474E1214A8195A;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_CF474E1214A8195A_CLASS_1_7B2D215D3F66FCBA_METHOD_1_E2AB539F25FE7797_OFFSET UNITYSDK_OFFSET(0x9232F40)
#define CLASS_1_CF474E1214A8195A_CLASS_1_7B2D215D3F66FCBA__CTOR_OFFSET UNITYSDK_OFFSET(0x9232F30)

inline static constexpr unsigned int Class_1_CF474E1214A8195A_Class_1_7B2D215D3F66FCBA_TypeDefinitionIndex = 54248;

class Class_1_CF474E1214A8195A_Class_1_7B2D215D3F66FCBA : public ::System::Object
{
public:
	::System::Action_1<::System::EventArgs*>* Field_1_1; // 0x10
	::Class_1_CF474E1214A8195A* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF474E1214A8195A_CLASS_1_7B2D215D3F66FCBA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E2AB539F25FE7797(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_CF474E1214A8195A_CLASS_1_7B2D215D3F66FCBA_METHOD_1_E2AB539F25FE7797_OFFSET))(this, a1);
	}
};
