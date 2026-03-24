#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_32D1D38F96135A1F;
namespace System { class Action; }

#define CLASS_1_32D1D38F96135A1F_CLASS_1_08055A17CDC7D951_12_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x19A5FD50)
#define CLASS_1_32D1D38F96135A1F_CLASS_1_08055A17CDC7D951_12__CTOR_OFFSET UNITYSDK_OFFSET(0x19A5FD40)

inline static constexpr unsigned int Class_1_32D1D38F96135A1F_Class_1_08055A17CDC7D951_12_TypeDefinitionIndex = 9825;

class Class_1_32D1D38F96135A1F_Class_1_08055A17CDC7D951_12 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_1_32D1D38F96135A1F* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32D1D38F96135A1F_CLASS_1_08055A17CDC7D951_12__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_32D1D38F96135A1F_CLASS_1_08055A17CDC7D951_12_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
