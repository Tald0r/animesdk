#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DA3A109C3E0BFF6B.h"
#include "unitysdk/System/Object.h"

class Class_1_CB6F7929649C57A5;
namespace System { class Action; }

#define CLASS_1_85C74ADC9DDB9EDF_METHOD_1_4B5B0B4E28D31F7A_OFFSET UNITYSDK_OFFSET(0x7983AD0)
#define CLASS_1_85C74ADC9DDB9EDF_METHOD_1_B2C3C6DB5457B4DB_OFFSET UNITYSDK_OFFSET(0x7983AC0)
#define CLASS_1_85C74ADC9DDB9EDF_SYSTEM_ICOMPARABLE_MOLEMOLE_BATTLE_OPENCAMERASHOTBANNERREQUEST__COMPARETO_OFFSET UNITYSDK_OFFSET(0x7983A40)
#define CLASS_1_85C74ADC9DDB9EDF__CCTOR_OFFSET UNITYSDK_OFFSET(0x7983AB0)
#define CLASS_1_85C74ADC9DDB9EDF__CTOR_OFFSET UNITYSDK_OFFSET(0x7983A70)

inline static constexpr unsigned int Class_1_85C74ADC9DDB9EDF_TypeDefinitionIndex = 65968;

class Class_1_85C74ADC9DDB9EDF : public ::System::Object
{
public:
	static ::System::Int64* StaticGet_Field_1_3()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_85C74ADC9DDB9EDF_TypeDefinitionIndex)->GetStaticField(0x10380);
	}
	::Struct_2_DA3A109C3E0BFF6B Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x28
	::System::Int64 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85C74ADC9DDB9EDF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_85C74ADC9DDB9EDF__CCTOR_OFFSET))();
	}

	::System::Int32 System_IComparable_MoleMole_Battle_OpenCameraShotBannerRequest__CompareTo(::Class_1_85C74ADC9DDB9EDF* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_85C74ADC9DDB9EDF*))((::PBYTE)hIl2Cpp + CLASS_1_85C74ADC9DDB9EDF_SYSTEM_ICOMPARABLE_MOLEMOLE_BATTLE_OPENCAMERASHOTBANNERREQUEST__COMPARETO_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B2C3C6DB5457B4DB(::Class_1_CB6F7929649C57A5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CB6F7929649C57A5*))((::PBYTE)hIl2Cpp + CLASS_1_85C74ADC9DDB9EDF_METHOD_1_B2C3C6DB5457B4DB_OFFSET))(this, a1);
	}

	::Class_1_CB6F7929649C57A5* Method_1_4B5B0B4E28D31F7A()
	{
		return ((::Class_1_CB6F7929649C57A5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85C74ADC9DDB9EDF_METHOD_1_4B5B0B4E28D31F7A_OFFSET))(this);
	}
};
