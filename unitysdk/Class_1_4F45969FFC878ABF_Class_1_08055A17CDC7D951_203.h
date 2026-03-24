#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4F45969FFC878ABF;
namespace System { class Action; }

#define CLASS_1_4F45969FFC878ABF_CLASS_1_08055A17CDC7D951_203_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x1382B7F0)
#define CLASS_1_4F45969FFC878ABF_CLASS_1_08055A17CDC7D951_203__CTOR_OFFSET UNITYSDK_OFFSET(0x1382B7E0)

inline static constexpr unsigned int Class_1_4F45969FFC878ABF_Class_1_08055A17CDC7D951_203_TypeDefinitionIndex = 11707;

class Class_1_4F45969FFC878ABF_Class_1_08055A17CDC7D951_203 : public ::System::Object
{
public:
	::Class_1_4F45969FFC878ABF* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F45969FFC878ABF_CLASS_1_08055A17CDC7D951_203__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_4F45969FFC878ABF_CLASS_1_08055A17CDC7D951_203_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
