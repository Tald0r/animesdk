#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_05BCD83DF320C82D;
namespace System { class Action; }

#define CLASS_1_05BCD83DF320C82D_CLASS_1_08055A17CDC7D951_164_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x138682B0)
#define CLASS_1_05BCD83DF320C82D_CLASS_1_08055A17CDC7D951_164__CTOR_OFFSET UNITYSDK_OFFSET(0x13867FC0)

inline static constexpr unsigned int Class_1_05BCD83DF320C82D_Class_1_08055A17CDC7D951_164_TypeDefinitionIndex = 11380;

class Class_1_05BCD83DF320C82D_Class_1_08055A17CDC7D951_164 : public ::System::Object
{
public:
	::Class_1_05BCD83DF320C82D* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05BCD83DF320C82D_CLASS_1_08055A17CDC7D951_164__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_05BCD83DF320C82D_CLASS_1_08055A17CDC7D951_164_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
