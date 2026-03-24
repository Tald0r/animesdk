#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4E2CD085467F20E4;
namespace System { class Action; }

#define CLASS_1_4E2CD085467F20E4_CLASS_1_08055A17CDC7D951_255_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x170A0010)
#define CLASS_1_4E2CD085467F20E4_CLASS_1_08055A17CDC7D951_255__CTOR_OFFSET UNITYSDK_OFFSET(0x1709F9E0)

inline static constexpr unsigned int Class_1_4E2CD085467F20E4_Class_1_08055A17CDC7D951_255_TypeDefinitionIndex = 12170;

class Class_1_4E2CD085467F20E4_Class_1_08055A17CDC7D951_255 : public ::System::Object
{
public:
	::Class_1_4E2CD085467F20E4* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E2CD085467F20E4_CLASS_1_08055A17CDC7D951_255__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_4E2CD085467F20E4_CLASS_1_08055A17CDC7D951_255_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
