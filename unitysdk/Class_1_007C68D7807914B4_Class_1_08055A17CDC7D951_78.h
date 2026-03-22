#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_007C68D7807914B4;
namespace System { class Action; }

#define CLASS_1_007C68D7807914B4_CLASS_1_08055A17CDC7D951_78_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x1226E9A0)
#define CLASS_1_007C68D7807914B4_CLASS_1_08055A17CDC7D951_78__CTOR_OFFSET UNITYSDK_OFFSET(0x1226E990)

inline static constexpr unsigned int Class_1_007C68D7807914B4_Class_1_08055A17CDC7D951_78_TypeDefinitionIndex = 10556;

class Class_1_007C68D7807914B4_Class_1_08055A17CDC7D951_78 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_1_007C68D7807914B4* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_007C68D7807914B4_CLASS_1_08055A17CDC7D951_78__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_007C68D7807914B4_CLASS_1_08055A17CDC7D951_78_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
