#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_30.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_94;

#define CLASS_1_2C9152A6F6B210ED_METHOD_1_1B5DC4A248A4FA9D_OFFSET UNITYSDK_OFFSET(0x19B09100)
#define CLASS_1_2C9152A6F6B210ED_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x19B08EF0)
#define CLASS_1_2C9152A6F6B210ED__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B08EA0)
#define CLASS_1_2C9152A6F6B210ED__CTOR_OFFSET UNITYSDK_OFFSET(0x19B090F0)

inline static constexpr unsigned int Class_1_2C9152A6F6B210ED_TypeDefinitionIndex = 30899;

class Class_1_2C9152A6F6B210ED : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_94*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_94*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C9152A6F6B210ED_TypeDefinitionIndex)->GetStaticField(0x23740);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C9152A6F6B210ED__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C9152A6F6B210ED__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_94* Method_1_1B5DC4A248A4FA9D(::Enum_3_4608E37A1B3D374A_30 a1)
	{
		return ((::Class_0_16E4307DCC419505_94*(*)(::Enum_3_4608E37A1B3D374A_30))((::PBYTE)hIl2Cpp + CLASS_1_2C9152A6F6B210ED_METHOD_1_1B5DC4A248A4FA9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C9152A6F6B210ED_METHOD_1_F978A1D172468895_OFFSET))();
	}
};
