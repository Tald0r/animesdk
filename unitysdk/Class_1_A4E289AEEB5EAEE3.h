#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1480BFA419A4783B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_5_0B648F1F8F6AC84A;

#define CLASS_1_A4E289AEEB5EAEE3_METHOD_1_50728125711E6890_OFFSET UNITYSDK_OFFSET(0xE82BD70)
#define CLASS_1_A4E289AEEB5EAEE3_METHOD_1_E5450F0F4A0D17BE_OFFSET UNITYSDK_OFFSET(0xE82B830)
#define CLASS_1_A4E289AEEB5EAEE3_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xE82BBE0)
#define CLASS_1_A4E289AEEB5EAEE3__CTOR_OFFSET UNITYSDK_OFFSET(0xE82B7E0)

inline static constexpr unsigned int Class_1_A4E289AEEB5EAEE3_TypeDefinitionIndex = 74089;

class Class_1_A4E289AEEB5EAEE3 : public ::System::Object
{
public:
	::Class_5_0B648F1F8F6AC84A* Field_1_1; // 0x10
	::Il2CppArray<::Struct_2_1480BFA419A4783B>* Field_1_0; // 0x18

	::System::Void _ctor(::Class_5_0B648F1F8F6AC84A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*))((::PBYTE)hIl2Cpp + CLASS_1_A4E289AEEB5EAEE3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E5450F0F4A0D17BE(::System::Int32 a1, ::UnityEngine::Vector4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_A4E289AEEB5EAEE3_METHOD_1_E5450F0F4A0D17BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4E289AEEB5EAEE3_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_1_50728125711E6890(::System::Int32 a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_A4E289AEEB5EAEE3_METHOD_1_50728125711E6890_OFFSET))(this, a1, a2);
	}
};
