#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1480BFA419A4783B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_5_2169ABC757988FED;

#define CLASS_1_3EDDC2D8D1854DED_METHOD_1_50728125711E6890_OFFSET UNITYSDK_OFFSET(0xBA9D730)
#define CLASS_1_3EDDC2D8D1854DED_METHOD_1_E5450F0F4A0D17BE_OFFSET UNITYSDK_OFFSET(0xBA9DAE0)
#define CLASS_1_3EDDC2D8D1854DED_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xBA9D5A0)
#define CLASS_1_3EDDC2D8D1854DED__CTOR_OFFSET UNITYSDK_OFFSET(0xBA9D550)

inline static constexpr unsigned int Class_1_3EDDC2D8D1854DED_TypeDefinitionIndex = 46125;

class Class_1_3EDDC2D8D1854DED : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_1480BFA419A4783B>* Field_1_0; // 0x10
	::Class_5_2169ABC757988FED* Field_1_1; // 0x18

	::System::Void _ctor(::Class_5_2169ABC757988FED* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_2169ABC757988FED*))((::PBYTE)hIl2Cpp + CLASS_1_3EDDC2D8D1854DED__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EDDC2D8D1854DED_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_1_50728125711E6890(::System::Int32 a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_3EDDC2D8D1854DED_METHOD_1_50728125711E6890_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E5450F0F4A0D17BE(::System::Int32 a1, ::UnityEngine::Vector4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_3EDDC2D8D1854DED_METHOD_1_E5450F0F4A0D17BE_OFFSET))(this, a1, a2);
	}
};
