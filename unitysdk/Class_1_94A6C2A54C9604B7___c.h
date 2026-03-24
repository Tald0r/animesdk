#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Material; }

#define CLASS_1_94A6C2A54C9604B7___C_METHOD_1_92FD47EFD5290723_OFFSET UNITYSDK_OFFSET(0xE11A490)
#define CLASS_1_94A6C2A54C9604B7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE11A440)
#define CLASS_1_94A6C2A54C9604B7___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE11A480)

inline static constexpr unsigned int Class_1_94A6C2A54C9604B7___c_TypeDefinitionIndex = 48090;

class Class_1_94A6C2A54C9604B7___c : public ::System::Object
{
public:
	static ::System::Func_2<::UnityEngine::Material*, ::System::Boolean>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::UnityEngine::Material*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94A6C2A54C9604B7___c_TypeDefinitionIndex)->GetStaticField(0x330E0);
	}
	static ::Class_1_94A6C2A54C9604B7___c** StaticGet___9()
	{
		return (::Class_1_94A6C2A54C9604B7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94A6C2A54C9604B7___c_TypeDefinitionIndex)->GetStaticField(0x330E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94A6C2A54C9604B7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94A6C2A54C9604B7___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_92FD47EFD5290723(::UnityEngine::Material* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_94A6C2A54C9604B7___C_METHOD_1_92FD47EFD5290723_OFFSET))(this, a1);
	}
};
