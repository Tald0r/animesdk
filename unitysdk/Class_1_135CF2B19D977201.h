#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_339;
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define CLASS_1_135CF2B19D977201_METHOD_1_83CBD469E7FA0A2C_OFFSET UNITYSDK_OFFSET(0xC4EA490)
#define CLASS_1_135CF2B19D977201_METHOD_1_8CC614046BCAC100_OFFSET UNITYSDK_OFFSET(0xC4E9920)
#define CLASS_1_135CF2B19D977201__CTOR_OFFSET UNITYSDK_OFFSET(0xC4E9910)

inline static constexpr unsigned int Class_1_135CF2B19D977201_TypeDefinitionIndex = 45447;

class Class_1_135CF2B19D977201 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_135CF2B19D977201__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_8CC614046BCAC100(::MiHoYo::SDK::JSONObject*& a1, ::Class_2_208CC9941471731A_339* a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::MiHoYo::SDK::JSONObject*&, ::Class_2_208CC9941471731A_339*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_135CF2B19D977201_METHOD_1_8CC614046BCAC100_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_83CBD469E7FA0A2C(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_135CF2B19D977201_METHOD_1_83CBD469E7FA0A2C_OFFSET))(a1, a2, a3);
	}
};
