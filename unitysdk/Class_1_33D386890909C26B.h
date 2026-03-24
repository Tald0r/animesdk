#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_30.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_92;

#define CLASS_1_33D386890909C26B_METHOD_1_1B5DC4A248A4FA9D_OFFSET UNITYSDK_OFFSET(0x1A0D7750)
#define CLASS_1_33D386890909C26B_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x1A0D7540)
#define CLASS_1_33D386890909C26B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0D74F0)
#define CLASS_1_33D386890909C26B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D7740)

inline static constexpr unsigned int Class_1_33D386890909C26B_TypeDefinitionIndex = 31811;

class Class_1_33D386890909C26B : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_92*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_92*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_33D386890909C26B_TypeDefinitionIndex)->GetStaticField(0x24FF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33D386890909C26B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33D386890909C26B__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_92* Method_1_1B5DC4A248A4FA9D(::Enum_3_4608E37A1B3D374A_30 a1)
	{
		return ((::Class_0_16E4307DCC419505_92*(*)(::Enum_3_4608E37A1B3D374A_30))((::PBYTE)hIl2Cpp + CLASS_1_33D386890909C26B_METHOD_1_1B5DC4A248A4FA9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_33D386890909C26B_METHOD_1_F978A1D172468895_OFFSET))();
	}
};
