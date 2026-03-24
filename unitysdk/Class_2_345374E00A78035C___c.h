#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_345374E00A78035C___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAAAA910)
#define CLASS_2_345374E00A78035C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAAAA8C0)
#define CLASS_2_345374E00A78035C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAAAA900)

inline static constexpr unsigned int Class_2_345374E00A78035C___c_TypeDefinitionIndex = 38549;

class Class_2_345374E00A78035C___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__30_14()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_345374E00A78035C___c_TypeDefinitionIndex)->GetStaticField(0x2EC70);
	}
	static ::Class_2_345374E00A78035C___c** StaticGet___9()
	{
		return (::Class_2_345374E00A78035C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_345374E00A78035C___c_TypeDefinitionIndex)->GetStaticField(0x2EC78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_345374E00A78035C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_345374E00A78035C___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_345374E00A78035C___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
