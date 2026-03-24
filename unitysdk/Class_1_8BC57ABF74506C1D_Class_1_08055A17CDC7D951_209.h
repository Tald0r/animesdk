#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8BC57ABF74506C1D;
namespace System { class Action; }

#define CLASS_1_8BC57ABF74506C1D_CLASS_1_08055A17CDC7D951_209_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x1259ABE0)
#define CLASS_1_8BC57ABF74506C1D_CLASS_1_08055A17CDC7D951_209__CTOR_OFFSET UNITYSDK_OFFSET(0x1259ABD0)

inline static constexpr unsigned int Class_1_8BC57ABF74506C1D_Class_1_08055A17CDC7D951_209_TypeDefinitionIndex = 11760;

class Class_1_8BC57ABF74506C1D_Class_1_08055A17CDC7D951_209 : public ::System::Object
{
public:
	::Class_1_8BC57ABF74506C1D* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BC57ABF74506C1D_CLASS_1_08055A17CDC7D951_209__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_8BC57ABF74506C1D_CLASS_1_08055A17CDC7D951_209_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
