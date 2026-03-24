#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_222AFD56C06A15C1_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE984480)
#define CLASS_1_222AFD56C06A15C1_1_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0xE984600)
#define CLASS_1_222AFD56C06A15C1_1_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xE984690)
#define CLASS_1_222AFD56C06A15C1_1_ONCREATE_OFFSET UNITYSDK_OFFSET(0xE984580)
#define CLASS_1_222AFD56C06A15C1_1_UPDATE_OFFSET UNITYSDK_OFFSET(0xE984510)
#define CLASS_1_222AFD56C06A15C1_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xE9845F0)
#define CLASS_1_222AFD56C06A15C1_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE9845E0)

inline static constexpr unsigned int Class_1_222AFD56C06A15C1_1_TypeDefinitionIndex = 71367;

class Class_1_222AFD56C06A15C1_1 : public ::System::Object
{
public:
	static ::Class_1_222AFD56C06A15C1_1** StaticGet_Field_1_1()
	{
		return (::Class_1_222AFD56C06A15C1_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_222AFD56C06A15C1_1_TypeDefinitionIndex)->GetStaticField(0x38200);
	}
	static ::Class_1_222AFD56C06A15C1_1** StaticGet_Field_1_0()
	{
		return (::Class_1_222AFD56C06A15C1_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_222AFD56C06A15C1_1_TypeDefinitionIndex)->GetStaticField(0x38208);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_222AFD56C06A15C1_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_222AFD56C06A15C1_1__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_222AFD56C06A15C1_1_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_222AFD56C06A15C1_1_UPDATE_OFFSET))(this, a1);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_222AFD56C06A15C1_1_ONCREATE_OFFSET))(this);
	}

	static ::Class_1_222AFD56C06A15C1_1* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_222AFD56C06A15C1_1*(*)())((::PBYTE)hIl2Cpp + CLASS_1_222AFD56C06A15C1_1_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_222AFD56C06A15C1_1_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}
};
