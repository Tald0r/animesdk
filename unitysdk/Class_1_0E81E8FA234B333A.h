#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxVector.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_11ED91AA14CD390E;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0E81E8FA234B333A_METHOD_1_03D8C15957ED99E9_OFFSET UNITYSDK_OFFSET(0x1448E0E0)
#define CLASS_1_0E81E8FA234B333A_METHOD_1_A8D19485AA054B2A_OFFSET UNITYSDK_OFFSET(0x1448DE10)
#define CLASS_1_0E81E8FA234B333A_METHOD_1_F6AE0708897DC682_OFFSET UNITYSDK_OFFSET(0x1448E660)
#define CLASS_1_0E81E8FA234B333A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1448DD70)
#define CLASS_1_0E81E8FA234B333A__CTOR_OFFSET UNITYSDK_OFFSET(0x1448DD60)

inline static constexpr unsigned int Class_1_0E81E8FA234B333A_TypeDefinitionIndex = 11876;

class Class_1_0E81E8FA234B333A : public ::System::Object
{
public:
	static ::Foundation::AssetPath* StaticGet_Field_1_0()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0E81E8FA234B333A_TypeDefinitionIndex)->GetStaticField(0x8BF0);
	}
	static ::Foundation::AssetPath* StaticGet_Field_1_2()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0E81E8FA234B333A_TypeDefinitionIndex)->GetStaticField(0x8C00);
	}
	static ::Foundation::AssetPath* StaticGet_Field_1_1()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0E81E8FA234B333A_TypeDefinitionIndex)->GetStaticField(0x8C10);
	}
	::Foundation::AssetRequestHandle Field_1_3; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E81E8FA234B333A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0E81E8FA234B333A__CCTOR_OFFSET))();
	}

	::Class_1_11ED91AA14CD390E* Method_1_A8D19485AA054B2A()
	{
		return ((::Class_1_11ED91AA14CD390E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E81E8FA234B333A_METHOD_1_A8D19485AA054B2A_OFFSET))(this);
	}

	::System::Void Method_1_F6AE0708897DC682(::System::Action_1<::Class_1_11ED91AA14CD390E*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_11ED91AA14CD390E*>*))((::PBYTE)hIl2Cpp + CLASS_1_0E81E8FA234B333A_METHOD_1_F6AE0708897DC682_OFFSET))(this, a1);
	}

	::System::Void Method_1_03D8C15957ED99E9(::System::Boolean a1, ::FlexBuffers::FlxVector a2, ::Class_1_11ED91AA14CD390E* a3, ::Class_1_11ED91AA14CD390E* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::FlexBuffers::FlxVector, ::Class_1_11ED91AA14CD390E*, ::Class_1_11ED91AA14CD390E*))((::PBYTE)hIl2Cpp + CLASS_1_0E81E8FA234B333A_METHOD_1_03D8C15957ED99E9_OFFSET))(this, a1, a2, a3, a4);
	}
};
