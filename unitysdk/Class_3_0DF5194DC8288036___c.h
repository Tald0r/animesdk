#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_47D738013B6C30D5;
class Class_3_F35B080B137ECC46;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_0DF5194DC8288036___C_METHOD_1_55984B0C99853F2E_OFFSET UNITYSDK_OFFSET(0xD3EA360)
#define CLASS_3_0DF5194DC8288036___C_METHOD_1_C8B3288068AFE2A4_OFFSET UNITYSDK_OFFSET(0xD3EA370)
#define CLASS_3_0DF5194DC8288036___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3EA310)
#define CLASS_3_0DF5194DC8288036___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3EA350)

inline static constexpr unsigned int Class_3_0DF5194DC8288036___c_TypeDefinitionIndex = 66465;

class Class_3_0DF5194DC8288036___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_47D738013B6C30D5*, ::Class_3_F35B080B137ECC46*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_3_47D738013B6C30D5*, ::Class_3_F35B080B137ECC46*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0DF5194DC8288036___c_TypeDefinitionIndex)->GetStaticField(0x38CA0);
	}
	static ::Class_3_0DF5194DC8288036___c** StaticGet___9()
	{
		return (::Class_3_0DF5194DC8288036___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0DF5194DC8288036___c_TypeDefinitionIndex)->GetStaticField(0x38CA8);
	}
	static ::System::Action_1<::Class_3_47D738013B6C30D5*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_3_47D738013B6C30D5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0DF5194DC8288036___c_TypeDefinitionIndex)->GetStaticField(0x38CB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0DF5194DC8288036___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DF5194DC8288036___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_55984B0C99853F2E(::Class_3_47D738013B6C30D5* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_47D738013B6C30D5*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_0DF5194DC8288036___C_METHOD_1_55984B0C99853F2E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C8B3288068AFE2A4(::Class_3_47D738013B6C30D5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_47D738013B6C30D5*))((::PBYTE)hIl2Cpp + CLASS_3_0DF5194DC8288036___C_METHOD_1_C8B3288068AFE2A4_OFFSET))(this, a1);
	}
};
