#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIMainCitySidebarItemContext; }
namespace MoleMole { class UIMainCitySidebarItemGatherContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_176E5E1390CC2238;

#define CLASS_2_E7AAB39A5FB9E8F9_METHOD_2_66441DC76A9FE6ED_OFFSET UNITYSDK_OFFSET(0xB8B0110)
#define CLASS_2_E7AAB39A5FB9E8F9_METHOD_2_7EFCC8EA89AFC421_OFFSET UNITYSDK_OFFSET(0xB8B00C0)
#define CLASS_2_E7AAB39A5FB9E8F9_METHOD_2_AA7571C7C37690D1_OFFSET UNITYSDK_OFFSET(0xB8B0270)
#define CLASS_2_E7AAB39A5FB9E8F9_METHOD_2_C0D8EA2F07A1FBF9_OFFSET UNITYSDK_OFFSET(0xB8B0350)
#define CLASS_2_E7AAB39A5FB9E8F9_METHOD_2_C1BC8397B9F46052_OFFSET UNITYSDK_OFFSET(0xB8B0610)
#define CLASS_2_E7AAB39A5FB9E8F9_METHOD_2_EC2C063C6543EA62_OFFSET UNITYSDK_OFFSET(0xB8AF5C0)
#define CLASS_2_E7AAB39A5FB9E8F9_ONSELECT_OFFSET UNITYSDK_OFFSET(0xB8AFB10)
#define CLASS_2_E7AAB39A5FB9E8F9__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B0020)

inline static constexpr unsigned int Class_2_E7AAB39A5FB9E8F9_TypeDefinitionIndex = 65467;

class Class_2_E7AAB39A5FB9E8F9 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIMainCitySidebarItemContext*>* Field_2_2; // 0x50
	::Class_2_000597E145D7A42A<::MoleMole::UIMainCitySidebarItemGatherContext*>* Field_2_0; // 0x58
	::Class_2_176E5E1390CC2238<::MoleMole::UIMainCitySidebarItemContext*>* Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7AAB39A5FB9E8F9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EC2C063C6543EA62(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_E7AAB39A5FB9E8F9_METHOD_2_EC2C063C6543EA62_OFFSET))(this, a1, a2);
	}

	::System::Void OnSelect(::MoleMole::UIMainCitySidebarItemContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCitySidebarItemContext*))((::PBYTE)hIl2Cpp + CLASS_2_E7AAB39A5FB9E8F9_ONSELECT_OFFSET))(this, a1);
	}

	::MoleMole::UIMainCitySidebarItemGatherContext* Method_2_7EFCC8EA89AFC421()
	{
		return ((::MoleMole::UIMainCitySidebarItemGatherContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7AAB39A5FB9E8F9_METHOD_2_7EFCC8EA89AFC421_OFFSET))(this);
	}

	::System::Void Method_2_66441DC76A9FE6ED(::MoleMole::MonoGamepadModule* a1, ::System::Int32 a2, ::UnityEngine::Transform* a3, ::Enum_3_03024D6472FC8F3A a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + CLASS_2_E7AAB39A5FB9E8F9_METHOD_2_66441DC76A9FE6ED_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_AA7571C7C37690D1(::MoleMole::MonoGamepadModule* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_E7AAB39A5FB9E8F9_METHOD_2_AA7571C7C37690D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C1BC8397B9F46052(::MoleMole::UIMainCitySidebarItemGatherContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCitySidebarItemGatherContext*))((::PBYTE)hIl2Cpp + CLASS_2_E7AAB39A5FB9E8F9_METHOD_2_C1BC8397B9F46052_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C0D8EA2F07A1FBF9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7AAB39A5FB9E8F9_METHOD_2_C0D8EA2F07A1FBF9_OFFSET))(this);
	}
};
