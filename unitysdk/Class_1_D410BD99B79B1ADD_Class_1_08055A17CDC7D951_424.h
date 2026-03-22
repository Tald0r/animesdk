#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D410BD99B79B1ADD;
namespace System { class Action; }

#define CLASS_1_D410BD99B79B1ADD_CLASS_1_08055A17CDC7D951_424_METHOD_1_D47D6035609419C9_OFFSET UNITYSDK_OFFSET(0x168A9C00)
#define CLASS_1_D410BD99B79B1ADD_CLASS_1_08055A17CDC7D951_424__CTOR_OFFSET UNITYSDK_OFFSET(0x168A9BF0)

inline static constexpr unsigned int Class_1_D410BD99B79B1ADD_Class_1_08055A17CDC7D951_424_TypeDefinitionIndex = 14006;

class Class_1_D410BD99B79B1ADD_Class_1_08055A17CDC7D951_424 : public ::System::Object
{
public:
	::Class_1_D410BD99B79B1ADD* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D410BD99B79B1ADD_CLASS_1_08055A17CDC7D951_424__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D47D6035609419C9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_D410BD99B79B1ADD_CLASS_1_08055A17CDC7D951_424_METHOD_1_D47D6035609419C9_OFFSET))(this, a1);
	}
};
