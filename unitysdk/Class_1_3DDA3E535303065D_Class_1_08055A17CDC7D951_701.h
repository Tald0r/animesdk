#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3DDA3E535303065D;
namespace System { class Action; }

#define CLASS_1_3DDA3E535303065D_CLASS_1_08055A17CDC7D951_701_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x1383A7F0)
#define CLASS_1_3DDA3E535303065D_CLASS_1_08055A17CDC7D951_701__CTOR_OFFSET UNITYSDK_OFFSET(0x1383A7E0)

inline static constexpr unsigned int Class_1_3DDA3E535303065D_Class_1_08055A17CDC7D951_701_TypeDefinitionIndex = 16610;

class Class_1_3DDA3E535303065D_Class_1_08055A17CDC7D951_701 : public ::System::Object
{
public:
	::Class_1_3DDA3E535303065D* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DDA3E535303065D_CLASS_1_08055A17CDC7D951_701__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_3DDA3E535303065D_CLASS_1_08055A17CDC7D951_701_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
