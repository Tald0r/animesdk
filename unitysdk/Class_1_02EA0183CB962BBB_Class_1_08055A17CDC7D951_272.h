#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02EA0183CB962BBB;
namespace System { class Action; }

#define CLASS_1_02EA0183CB962BBB_CLASS_1_08055A17CDC7D951_272_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x16DEC790)
#define CLASS_1_02EA0183CB962BBB_CLASS_1_08055A17CDC7D951_272__CTOR_OFFSET UNITYSDK_OFFSET(0x16DEC780)

inline static constexpr unsigned int Class_1_02EA0183CB962BBB_Class_1_08055A17CDC7D951_272_TypeDefinitionIndex = 12500;

class Class_1_02EA0183CB962BBB_Class_1_08055A17CDC7D951_272 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_1_02EA0183CB962BBB* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02EA0183CB962BBB_CLASS_1_08055A17CDC7D951_272__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_02EA0183CB962BBB_CLASS_1_08055A17CDC7D951_272_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
