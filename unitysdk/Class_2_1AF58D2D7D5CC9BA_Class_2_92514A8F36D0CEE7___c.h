#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_1AF58D2D7D5CC9BA_CLASS_2_92514A8F36D0CEE7___C_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x86D6640)
#define CLASS_2_1AF58D2D7D5CC9BA_CLASS_2_92514A8F36D0CEE7___C_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x86D6650)
#define CLASS_2_1AF58D2D7D5CC9BA_CLASS_2_92514A8F36D0CEE7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x86D65F0)
#define CLASS_2_1AF58D2D7D5CC9BA_CLASS_2_92514A8F36D0CEE7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x86D6630)

inline static constexpr unsigned int Class_2_1AF58D2D7D5CC9BA_Class_2_92514A8F36D0CEE7___c_TypeDefinitionIndex = 57385;

class Class_2_1AF58D2D7D5CC9BA_Class_2_92514A8F36D0CEE7___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__41_10()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1AF58D2D7D5CC9BA_Class_2_92514A8F36D0CEE7___c_TypeDefinitionIndex)->GetStaticField(0x46FA0);
	}
	static ::Class_2_1AF58D2D7D5CC9BA_Class_2_92514A8F36D0CEE7___c** StaticGet___9()
	{
		return (::Class_2_1AF58D2D7D5CC9BA_Class_2_92514A8F36D0CEE7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1AF58D2D7D5CC9BA_Class_2_92514A8F36D0CEE7___c_TypeDefinitionIndex)->GetStaticField(0x46FA8);
	}
	static ::System::Func_1<::UnityEngine::Vector3>** StaticGet___9__41_9()
	{
		return (::System::Func_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1AF58D2D7D5CC9BA_Class_2_92514A8F36D0CEE7___c_TypeDefinitionIndex)->GetStaticField(0x46FB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1AF58D2D7D5CC9BA_CLASS_2_92514A8F36D0CEE7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AF58D2D7D5CC9BA_CLASS_2_92514A8F36D0CEE7___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AF58D2D7D5CC9BA_CLASS_2_92514A8F36D0CEE7___C_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AF58D2D7D5CC9BA_CLASS_2_92514A8F36D0CEE7___C_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}
};
