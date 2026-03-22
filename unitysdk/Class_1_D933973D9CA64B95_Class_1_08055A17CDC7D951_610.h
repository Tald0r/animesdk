#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D933973D9CA64B95;
namespace System { class Action; }

#define CLASS_1_D933973D9CA64B95_CLASS_1_08055A17CDC7D951_610_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x16A60D70)
#define CLASS_1_D933973D9CA64B95_CLASS_1_08055A17CDC7D951_610__CTOR_OFFSET UNITYSDK_OFFSET(0x16A60D60)

inline static constexpr unsigned int Class_1_D933973D9CA64B95_Class_1_08055A17CDC7D951_610_TypeDefinitionIndex = 16010;

class Class_1_D933973D9CA64B95_Class_1_08055A17CDC7D951_610 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_1_D933973D9CA64B95* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D933973D9CA64B95_CLASS_1_08055A17CDC7D951_610__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_D933973D9CA64B95_CLASS_1_08055A17CDC7D951_610_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
