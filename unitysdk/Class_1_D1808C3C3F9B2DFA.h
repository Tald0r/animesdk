#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define CLASS_1_D1808C3C3F9B2DFA_METHOD_1_294F2AD64512EEF4_OFFSET UNITYSDK_OFFSET(0xA591310)
#define CLASS_1_D1808C3C3F9B2DFA__CTOR_OFFSET UNITYSDK_OFFSET(0xA591300)

inline static constexpr unsigned int Class_1_D1808C3C3F9B2DFA_TypeDefinitionIndex = 73796;

class Class_1_D1808C3C3F9B2DFA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1808C3C3F9B2DFA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_294F2AD64512EEF4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_D1808C3C3F9B2DFA_METHOD_1_294F2AD64512EEF4_OFFSET))(this, a1);
	}
};
