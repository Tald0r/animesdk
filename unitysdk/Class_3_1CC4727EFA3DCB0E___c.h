#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_CB5FEA0F6B413476;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_1CC4727EFA3DCB0E___C_METHOD_1_3DC64182395C2CA3_OFFSET UNITYSDK_OFFSET(0xAECF970)
#define CLASS_3_1CC4727EFA3DCB0E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAECF920)
#define CLASS_3_1CC4727EFA3DCB0E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAECF960)

inline static constexpr unsigned int Class_3_1CC4727EFA3DCB0E___c_TypeDefinitionIndex = 55896;

class Class_3_1CC4727EFA3DCB0E___c : public ::System::Object
{
public:
	static ::Class_3_1CC4727EFA3DCB0E___c** StaticGet___9()
	{
		return (::Class_3_1CC4727EFA3DCB0E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1CC4727EFA3DCB0E___c_TypeDefinitionIndex)->GetStaticField(0x38980);
	}
	static ::System::Action_1<::Class_3_CB5FEA0F6B413476*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_3_CB5FEA0F6B413476*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1CC4727EFA3DCB0E___c_TypeDefinitionIndex)->GetStaticField(0x38988);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3DC64182395C2CA3(::Class_3_CB5FEA0F6B413476* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_CB5FEA0F6B413476*))((::PBYTE)hIl2Cpp + CLASS_3_1CC4727EFA3DCB0E___C_METHOD_1_3DC64182395C2CA3_OFFSET))(this, a1);
	}
};
