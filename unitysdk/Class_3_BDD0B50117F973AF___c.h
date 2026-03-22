#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_3_BDD0B50117F973AF___C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xB01EE00)
#define CLASS_3_BDD0B50117F973AF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB01EDB0)
#define CLASS_3_BDD0B50117F973AF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB01EDF0)

inline static constexpr unsigned int Class_3_BDD0B50117F973AF___c_TypeDefinitionIndex = 66087;

class Class_3_BDD0B50117F973AF___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_BDD0B50117F973AF___c_TypeDefinitionIndex)->GetStaticField(0x3CA20);
	}
	static ::Class_3_BDD0B50117F973AF___c** StaticGet___9()
	{
		return (::Class_3_BDD0B50117F973AF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_BDD0B50117F973AF___c_TypeDefinitionIndex)->GetStaticField(0x3CA28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_BDD0B50117F973AF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BDD0B50117F973AF___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BDD0B50117F973AF___C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
