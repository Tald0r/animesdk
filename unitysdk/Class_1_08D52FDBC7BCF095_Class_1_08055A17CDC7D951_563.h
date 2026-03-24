#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_08D52FDBC7BCF095;
namespace System { class Action; }

#define CLASS_1_08D52FDBC7BCF095_CLASS_1_08055A17CDC7D951_563_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x170DC640)
#define CLASS_1_08D52FDBC7BCF095_CLASS_1_08055A17CDC7D951_563__CTOR_OFFSET UNITYSDK_OFFSET(0x170DC630)

inline static constexpr unsigned int Class_1_08D52FDBC7BCF095_Class_1_08055A17CDC7D951_563_TypeDefinitionIndex = 15413;

class Class_1_08D52FDBC7BCF095_Class_1_08055A17CDC7D951_563 : public ::System::Object
{
public:
	::Class_1_08D52FDBC7BCF095* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08D52FDBC7BCF095_CLASS_1_08055A17CDC7D951_563__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_08D52FDBC7BCF095_CLASS_1_08055A17CDC7D951_563_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
