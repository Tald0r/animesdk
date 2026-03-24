#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3D563DE4CD4EF3B8_METHOD_1_2943CB55423DBA35_OFFSET UNITYSDK_OFFSET(0x15661600)
#define CLASS_1_3D563DE4CD4EF3B8_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x15661530)
#define CLASS_1_3D563DE4CD4EF3B8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15661500)
#define CLASS_1_3D563DE4CD4EF3B8__CTOR_OFFSET UNITYSDK_OFFSET(0x156614F0)

inline static constexpr unsigned int Class_1_3D563DE4CD4EF3B8_TypeDefinitionIndex = 79403;

class Class_1_3D563DE4CD4EF3B8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_3D563DE4CD4EF3B8*>* Field_1_2; // 0x10
	::Class_1_3D563DE4CD4EF3B8* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3D563DE4CD4EF3B8__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_3D563DE4CD4EF3B8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3D563DE4CD4EF3B8*))((::PBYTE)hIl2Cpp + CLASS_1_3D563DE4CD4EF3B8__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_3D563DE4CD4EF3B8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3D563DE4CD4EF3B8*))((::PBYTE)hIl2Cpp + CLASS_1_3D563DE4CD4EF3B8_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_2943CB55423DBA35(::Class_1_3D563DE4CD4EF3B8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3D563DE4CD4EF3B8*))((::PBYTE)hIl2Cpp + CLASS_1_3D563DE4CD4EF3B8_METHOD_1_2943CB55423DBA35_OFFSET))(this, a1);
	}
};
