#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8017170A54BCD05B;
namespace System { class Action; }

#define CLASS_1_8017170A54BCD05B_CLASS_1_08055A17CDC7D951_645_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x137FEE10)
#define CLASS_1_8017170A54BCD05B_CLASS_1_08055A17CDC7D951_645__CTOR_OFFSET UNITYSDK_OFFSET(0x137FEE00)

inline static constexpr unsigned int Class_1_8017170A54BCD05B_Class_1_08055A17CDC7D951_645_TypeDefinitionIndex = 16161;

class Class_1_8017170A54BCD05B_Class_1_08055A17CDC7D951_645 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_1_8017170A54BCD05B* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8017170A54BCD05B_CLASS_1_08055A17CDC7D951_645__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_8017170A54BCD05B_CLASS_1_08055A17CDC7D951_645_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
